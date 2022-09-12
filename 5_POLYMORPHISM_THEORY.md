# POLYMORPHISM - Theory

## 1. Polymorphism - Đa hình

### 1.1. Định nghĩa

Từ **đa hình** có nghĩa là **có nhiều dạng**. Nói một cách đơn giản, chúng ta có thể định nghĩa đa hình là khả năng của một thông điệp được hiển thị dưới nhiều dạng.

Mình lấy một ví dụ thực thế nhé:
Một người cùng một lúc có thể có đặc điểm khác nhau. Giống như một người đàn ông đồng thời là một người cha, một người chồng, một nhân viên. Vì vậy, cùng một người sở hữu những hành vi khác nhau trong các tình huống khác nhau. Điều này được gọi là đa hình.

### 1.2. Phân loại

Trong ngôn ngữ C ++, tính đa hình chủ yếu được chia thành hai loại:

- Compile time Polymorphism.
- Runtime Polymorphism.

![](https://blog.luyencode.net/wp-content/uploads/2020/02/Polymorphism-1-802x420.jpg)

Thứ nhất, đối với **Compile time Polymorphism**, tính đa hình này được sử dụng bằng cách nạp chồng hàm hoặc nạp chồng toán tử. Chúng ta sẽ không đề cập tới nữa vì đã tìm hiểu ở bài trước.

Vậy còn lại, **Runtime Polymorphism** là gì?

Đây là tính đa hình được thể hiện ở cách nạp chồng toán tử trong ***kế thừa***. Để hiểu rõ hơn, chúng ta cùng nhìn vào ví dụ sau:

```cpp
class base {
public:
    virtual void print() {
        cout << "print base class" << endl;
    }
    void show() {
        cout << "show base class" << endl;
    }
};
 
class derived : public base {
public:
    void print() {
        cout << "print derived class" << endl;
    }
 
    void show() {
        cout << "show derived class" << endl;
    }
};

int main() {
    base *bptr;
    derived d;
    bptr = &d;
 
    bptr->print();
    bptr->show();
}
```

Sau khi biên dịch và chạy thì ta có Ouput như sau:

```
print derived class
show base class
```

Tại sao lại có sự khác biệt ấy? Tại sao cùng là nạp chồng toán tử trong lớp kế thừa nhưng kết quả lại khác nhau?

Trong ví dụ trên mình đã thêm từ khóa `virtual` vào hàm `print()` trong lớp cơ sở **base**.
Từ khóa `virtual` này dùng để khai báo một hàm là **hàm ảo**.

## 2. Hàm ảo, lớp ảo

### 2.1. Từ khóa virtual

#### 2.1.1. Hàm ảo - Virtual Function

Một số tài liệu có viết công dụng của Virtual Function như sau:

>"Virtual Function là để khai báo một function ở class cha (base class) mà sau đó các class kế thừa (derived class) có thể override function đó"

Các hàm ảo sẽ cho phép chúng ta tạo một danh sách các con trỏ lớp cơ sở và các phương thức của bất kỳ lớp dẫn xuất nào mà không cần biết loại đối tượng của lớp dẫn xuất.

Khi khai báo hàm ảo với từ khóa `virtual` nghĩa là hàm này sẽ được gọi theo **loại đối tượng được trỏ** (hoặc tham chiếu), chứ không phải theo **loại của con trỏ** (hoặc tham chiếu). Và điều này dẫn đến kết quả khác nhau:

- Nếu không khai báo hàm ảo `virtual` trình biên dịch sẽ gọi hàm tại **lớp cở sở base**
- Nếu dùng hàm ảo `virtual` trình biên dịch sẽ gọi hàm tại **lớp dẫn xuất derived**

#### 2.1.2. Virtual Destructor

**Virtual destructor** cũng giống như các hàm `virtual` bình thường và được khai báo bằng cách thêm từ khoá virtual đằng trước hàm destructor. Vậy tại sao phải sử dụng **virtual destructor**?

Chúng ta cùng xem qua ví dụ sau:
```cpp
class Animal {
public:
    ~Animal() {
        cout << "This is Animal's destructor" << endl;
    }
}; 

class Cat: public Animal {
public:
    ~Cat() {
        cout << "This is Cat's destructor" << endl;
    }
};


int main() {
    Animal* tom = new Cat();
    delete tom;
}
```
Output:
```
This is Animal's destructor
```
Chúng ta có thể thấy ngay là destructor của class `Cat` đã không được gọi, mặc dù `tom` được khởi tạo bằng **constructor** của class `Cat`. Điều này thật sự rất nguy hiểm, vì destructor của class `Cat` **không được gọi** nên các đối tượng riêng của lớp đó cũng **không được giải phóng** và vì thế object `tom` chỉ được giải phóng 1 phần tài nguyên, điều này gây ra rò rỉ bộ nhớ (hiện tượng bộ nhớ đã được cấp phát không thu hồi lại được). Để khắc phục chúng ta thêm từ khoá `virtual` vào trước destructor của **base class**.

```cpp
class Animal {
public:
    virtual ~Animal() {
        cout << "This is Animal's destructor" << endl;
    }
}; 

class Cat: public Animal {
public:
    ~Cat() {
        cout << "This is Cat's destructor" << endl;
    }
};


int main() {
    Animal* tom = new Cat();
    delete tom;
}
```
Output:
```
This is Cat's destructor
This is Animal's destructor
```

### 2.2. Lớp ảo

Có một vấn đề khi một lớp cơ sở được kế thừa bởi nhiều lớp dẫn xuất. Ví dụ, xét tình huống các lớp kế thừa theo sơ đồ như sau:

![](https://gochocit.com/wp-content/uploads/2021/11/so-do-ke-thua-virtual-base-class-oop.png)

Hai lớp B và C kế thừa từ lớp A. Lớp D kế thừa từ cả hai lớp B và C. Như vậy, lớp A được kế thừa hai lần bởi lớp D. Lần thứ nhất được kế thừa thông qua lớp B, lần thứ hai được kế thừa thông qua lớp C.

Lúc này, nếu đối tượng của lớp D gọi đến một hàm được kế thừa từ lớp A thì sẽ gây ra một **sự mơ hồ**. Không biết hàm đó được kế thừa gián tiếp từ lớp B hay lớp C.

Để giải quyết tính không rõ ràng này, C++ có một cơ chế mà nhờ đó chỉ có *một bản sao* của lớp A ở trong lớp D. Đó là sử dụng **lớp cơ sở ảo (virtual base class)**.

```cpp
class A{
public:
    void show() {
        cout << "Hello from A";
    }
};
  
class B : virtual public A {
};
  
class C : virtual public A {
};
  
class D : public B, public C{
};

int main(){
	D object;
    object.show(); //output: Hello from A
}
```

### 2.3. Phương thức thuần ảo

**Hàm thuần ảo (pure virtual function)** được sử dụng khi:

- Không cần sử dụng hàm này trong lớp cơ sở, chỉ phục vụ cho lớp dẫn xuất
- Lớp dẫn xuất bắt buộc phải định nghĩa lại hàm thuần ảo

**Ví dụ:** Chúng ta có một lớp cơ sở là `Shape`. Các lớp dẫn xuất của lớp `Shape` là `Triangle`, `Square` và `Circle`. Chúng ta muốn tính *diện tích* của các hình này.

Chúng ta có thể tạo ra một hàm thuần ảo có tên là `calculateArea()` trong lớp `Shape`. Các lớp `Triangle`, `Square` và `Circle` phải **định nghĩa lại** hàm `calculateArea()` với công thức tính diện tích khác nhau cho mỗi hình.

**Cách khai bảo hàm thuần ảo:** Hàm thuần ảo *không có thân hàm* và bắt buộc phải kết thúc với “**= 0**”.
```cpp
class Shape{
public:
	virtual void calculateArea() = 0;
};
```