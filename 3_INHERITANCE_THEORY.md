# INHERITANCE - Theory

## 1. Kế thừa - Inheritance

### 1.1. Định nghĩa

**Kế thừa (inheritance)** là một tính chất đặc trưng của lập trình hướng đối tượng. Nó có nghĩa là một class thừa hưởng lại tất cả các thuộc tính, phương thức của class mà nó kế thừa.

Class kế thừa từ một class khác gọi là ***lớp con (child class hay subclass)*** hay ***lớp dẫn xuất (derived class)***. Class được lớp khác kế thừa được gọi là ***lớp cha (parent class hay superclass)*** hay ***lớp cơ sở (base class)***.

Ví dụ: có một class con người, có các thuộc tính cơ bản như họ tên, ngày sinh, quê quán. Mình khai báo thêm một class sinh viên kế thừa từ class con người. Vậy, class sinh viên sẽ có các thuộc tính họ tên, ngày sinh, quê quán từ class con người mà không cần phải khai báo. Class con người sẽ là lớp cha và class sinh viên là lớp con.

### 1.2. Đơn kế thừa

#### 1.2.1. Định nghĩa

**Kế thừa đơn (single inheritance)** là một class con kế thừa duy nhất từ một class cha. Ví dụ như class sinh viên chỉ kế thừa duy nhất từ class con người, đó là một kế thừa đơn.

#### 1.2.2. Khai báo kế thừa

Cú pháp khai báo một lớp kế thừa từ một lớp khác như sau: 
```cpp
class <Tên lớp dẫn xuất>: <Từ khóa dẫn xuất> <Tên lớp cơ sở> { 
    // Khai báo các thành phần lớp 
}; 
```
Trong đó: 

- **Tên lớp dẫn xuất**: là tên lớp được cho kế thừa từ lớp khác. Tên lớp này tuân thủ theo quy tắc đặt tên biến trong C++. 
- **Tên lớp cở sở**: là tên lớp đã được định nghĩa trước đó để cho lớp khác kế thừa. Tên lớp này cũng tuân thủ theo quy tắc đặt tên biến của C++. 
- **Từ khóa dẫn xuất**: là từ khóa quy định tính chất của sự kế thừa. Có ba từ khóa dẫn xuất là `private`, `protected` và `public`.

#### 1.2.3. Tính chất dẫn xuất

| | Lớp dẫn xuất | Lớp dẫn xuất | Lớp dẫn xuất |
| ---- | ---- | ---- | ---- |
| **Lớp cơ sở** | **Public Mode** | **Private Mode** | **Protected Mode** |
| Private | Không kế thừa | Không kế thừa | Không kế thừa |
| Protected | Protected | Private | Protected |
| Public | Public | Private | Protected |

- `public`: Nếu kế thừa ở dạng này, sau khi kế thừa, tất cả các thành viên dạng `public` lớp cha sẽ `public` ở lớp con, dạng `protected` ở lớp cha vẫn sẽ là `protected` ở lớp con.
- `protected`: Nếu dùng `protected` thì sau khi kế thừa, tất cả các thành viên dạng `public` lớp cha sẽ trở thành `protected` tại lớp con.
- `private`: Trường hợp ta sử dụng `private`, thì sau khi kế thừa, tất cả các thành viên dạng `public` và `protected` ở lớp cha sẽ thành `private` tại lớp con.

#### 1.2.4. Constructor và Destructor trong kế thừa

Thứ tự được gọi sẽ bắt đầu từ hàm khởi tạo tương ứng của lớp cơ sở, sau đó đến hàm khởi tạo của lớp dẫn xuất. Do đó, thông thường, trong hàm khởi tạo của lớp dẫn xuất phải có hàm khởi tạo của lớp cơ sở.

Cú pháp khai báo hàm khởi tạo như sau:
```cpp
<Tên lớp dẫn xuất>([<Các tham số>]): <Tên lớp cơ sở>([<Các đối số>]) { 
    // Khởi tạo các thuộc tính mới bổ sung của lớp dẫn xuất 
};
```

Thứ tự gọi các hàm hủy bỏ ngược với thứ tự gọi hàm thiết lập: gọi hàm hủy bỏ của lớp dẫn xuất trước khi gọi hàm hủy bỏ của lớp cơ sở.

Vì mỗi lớp chỉ có nhiều nhất là một hàm hủy bỏ, nên ta không cần phải chỉ ra hàm hủy bỏ nào của lớp cơ sở sẽ được gọi sau khi hủy bỏ lớp dẫn xuất. Do vậy, hàm hủy bỏ trong lớp dẫn xuất được khai báo và định nghĩa hoàn toàn giống với các lớp thông thường: 

```cpp
<Tên lớp>::~<Tên lớp>([<Các tham số>]){ 
    // giải phóng phần bộ nhớ cấp phát cho các thuộc tính bổ sung 
}
```

### 1.3. Đa kế thừa

#### 1.3.1. Định nghĩa

**Đa kế thừa (multiple inheritance)** là một lớp có thể được dẫn xuất từ nhiều lớp cơ sở khác nhau, với những kiểu dẫn xuất khác nhau.

#### 1.3.2. Khai báo kế thừa

Đa kế thừa được khai báo theo cú pháp:

```cpp
class <Tên lớp dẫn xuất>: <Từ khoá dẫn xuất> <Tên lớp cơ sở 1>, 
                   <Từ khoá dẫn xuất> <Tên lớp cơ sở 2>, 
                   … 
                   <Từ khoá dẫn xuất> <Tên lớp cơ sở n> { 
        // Khai báo thêm các thành phần lớp dẫn xuất 
};
```

#### 1.3.3. Constructor và Destructor trong đa kế thừa

Hàm khởi tạo trong đa kế thừa được khai báo tương tự như trong đơn kế thừa, ngoại trừ việc phải sắp xếp thứ tự gọi tới hàm khởi tạo của các lớp cơ sở: thông thường, thứ tự gọi đến hàm khởi tạo của các lớp cơ sở nên tuân theo thứ tự dẫn xuất từ các lớp cơ sở trong đa kế thừa.

```cpp
class Car {
private:
	int  speed;
	string  mark;
	float price;     
public:
	Car();
	Car(int speed, string mark, float price);
};

Car::Car() {
	this->speed = 0;
	this->mark = "";
	this->price = 0;
}

Car::Car(int speed, string mark, float price) {
	this->speed = speed;
	this->mark = mark;
	this->price = price;
}

class PublicTransport {
	float ticket;
public: 
	PublicTransport();
	PublicTransport(float);
};

PublicTransport::PublicTransport() {	
	this->ticket = 0; 
}

PublicTransport::PublicTransport(float ticket) {
	this->ticket = ticket;
}

/* Định nghĩa lớp Bus kế thừa từ lớp Car và PublicTransport */
class Bus: public Car, public PublicTransport {  // Thứ tự khai báo  	 
	int label; 	
public: 
	Bus();
	Bus(int, string, float, float, int);
};

Bus::Bus(): Car(), PublicTransport() { 	// Theo thứ tự dẫn xuất
	label = 0; 
}

Bus::Bus(int speed, string mark, float price, float ticket, int label): Car(speed, mark, price), PublicTransport(ticket) { // Theo thứ tự dẫn xuất 
	this->label = label;
}
```

Vì hàm huỷ bỏ là duy nhất của mỗi lớp, hơn nữa hàm huỷ bỏ của lớp cơ sở sẽ được tự động gọi đến khi giải phóng đối tượng của lớp dẫn xuất. Cho nên hàm huỷ bỏ trong đa kế thừa hoàn toàn tương tự hàm huỷ bỏ trong đơn kế thừa.


## 2. Hàm Friend

### 2.1. Định nghĩa

Nếu một hàm được định nghĩa là một **hàm friend** trong C ++ thì dữ liệu là `protected` và `private` của một lớp có thể được truy cập bằng hàm này.

### 2.2. Hàm tự do bạn của một lớp 
Một hàm bạn của một lớp được khai báo bằng từ khóa friend khi khai báo khuôn mẫu hàm trong lớp tương ứng. 

```cpp
class <Tên lớp>{ 
    // Khai báo các thành phần lớp như thông thường 
    // Khai báo hàm bạn 
    friend <Kiểu trả về> <Tên hàm bạn>([<Các tham số>]);
};
``` 

Khi đó, định nghĩa chi tiết hàm bạn được thực hiện như định nghĩa một hàm tự do thông thường:

```cpp
<Kiểu trả về> <Tên hàm bạn>([<Các tham số>]) { 
    // Có thể truy nhập trực tiếp các thành phần private  
    // của lớp đã khai báo 
}
```

**Lưu ý:**

- Mặc dù hàm bạn được khai báo *khuôn mẫu hàm* trong phạm vi lớp, nhưng hàm bạn tự do lại **không phải** là một phương thức của lớp. Nó là **hàm tự do**, việc định nghĩa và sử dụng hàm này hoàn toàn tương tự như các hàm tự do khác. 
- Việc khai báo *khuôn mẫu hàm* bạn trong phạm vi lớp ở vị trí nào cũng được: hàm bạn không bị ảnh hưởng bởi các từ khóa `private`, `protected` hay `public` trong lớp. 
- Trong hàm bạn, có thể truy nhập trực tiếp đến các thành phần `private` và `protected` của đối tượng có kiểu lớp mà nó làm bạn (truy nhập thông qua đối tượng cụ thể).

### 2.3. Phương thức lớp là bạn của một lớp khác 
Trong C++, một phương thức của lớp này cũng có thể làm bạn của một lớp kia. Để khai báo một phương thức `f()` của lớp B là bạn của lớp A và `f()` nhận một tham số có kiểu lớp A, ta phải khai báo tuần tự như sau:

1. Khai báo khuôn mẫu lớp A, để làm tham số cho hàm f của lớp B: 
```cpp
class A; 
```

2. Khai báo lớp B với hàm f như khai báo các lớp thông thường:
```cpp
class B { 
    // Khai báo các thành phần khác của lớp B 
    void f(A); 
};
```
3. Khai báo chi tiết lớp A với hàm f của lớp B là bạn
```cpp
class A{ 
    // Khai báo các thành phần khác của lớp A     
    friend void B::f(A); 
};
```
4. Định nghĩa chi tiết hàm f của lớp B:
```cpp
void B::f(A) { 
    // Định nghĩa chi tiết hàm f 
}
```

**Lưu ý:**

- Trong trường hợp này, **hàm f** chỉ được định nghĩa chi tiết một khi lớp A đã được định nghĩa chi tiết. Do vậy, chỉ có thể định nghĩa chi tiết **hàm f** ngay trong lớp A *(ở bước 3)* hoặc sau khi định nghĩa lớp A *(ở bước 4)*, mà không thể định nghĩa chi tiết **hàm f** ngay trong lớp B *(ở bước 2)*. 
- **Hàm f** có thể truy nhập đến các thành phần `private` và `protected` của cả hai lớp A và B. Tuy nhiên, muốn **f** truy nhập đến các thành phần của lớp A thì phải thông qua một đối tượng cụ thể có kiểu lớp A. 

## 3. Nạp chồng - Overloading

Trong một lớp, ta có thể tạo ra nhiều hàm với cùng một tên gọi nhưng khác nhau các dữ liệu đầu vào hoặc tham số, đó gọi là **nạp chồng**.

### 3.1. Nạp chồng phương thức

Trong một lớp, ta có thể tạo ra nhiều hàm với **cùng một tên gọi** nhưng khác nhau **các dữ liệu đầu vào hoặc tham số**, đó gọi là **nạp chồng phương thức**.

Lới ích của việc nạp chồng phương thức là chúng ta có thể khai báo cùng một tên phương thức trong cùng chương trình, không cần phải khai báo tên khác cho cùng một hành đông.

**Ví dụ:**

```cpp
#include <iostream>  
using namespace std;

class Cal {
public:
	static int add(int a, int b) {
		return a + b;
	}
	static int add(int a, int b, int c) {
		return a + b + c;
	}
};

int main(void) {
	Cal C;
	cout << C.add(10, 20) << endl;
	cout << C.add(12, 20, 23) << endl;
}
```
**Kết quả**
```
30
55
```

### 3.2. Nạp chồng toán tử

#### 3.2.1. Định nghĩa

**Nạp chồng toán tử (overload operator)** là bạn định nghĩa lại toán tử đã có trên kiểu dữ liệu người dùng tự định nghĩa để dể dàng thể hiện các câu lệnh trong chương trình.

Ví dụ như bạn định nghĩa phép cộng cho kiểu dữ liệu phân số thì sẽ thực hiện cộng hai phân số rồi trả về một phân số mới. So với việc thực hiện gọi hàm, việc overload toán tử sẽ làm cho câu lệnh ngắn gọn, dễ hiểu hơn.

```cpp
PhanSo ps1(1, 2);
PhanSo ps2(2, 3);
PhanSo ketQua;
// Dùng hàm
ketQua = ps1.cong(ps2);
// Dùng Overload operator
ketQua = ps1 + ps2;  // 7/6
```

#### 3.2.2. Cú pháp overload

Như đã giới thiệu, bản chất việc dùng toán tử là lời gọi hàm, do đó chúng ta overload toán tử cũng giống overload hàm, vậy chúng ta sẽ overload hàm nào? Chúng ta sẽ overload hàm có tên là `operator @`, với `@` là toán tử cần overload (+, -, *, /…), kiểu trả về của hàm chính là lớp đó.

Có hai loại là **hàm cục bộ (dùng phương thức của lớp)** và **hàm toàn cục (dùng hàm bạn)**.

Dưới đây là 1 ví dụ với cách sử dụng hàm cục bộ:

```cpp
class PhanSo{
    int tu;
    int mau;
public:
    PhanSo(): tu(0), mau(1) {}
    PhanSo(int tu, int mau): tu(tu), mau(mau) {}

    PhanSo operator + (PhanSo ps) {
        PhanSo kq;
        kq.tu = this->tu * ps.mau + ps.tu * this->mau;
        kq.mau = this->mau * ps.mau;
        return kq;
    }
};
```

#### 3.2.3. Chuyển kiểu

Nếu không tìm thấy phiên bản nạp chồng toán tử nào phù hợp với kiểu dữ liệu của toán hạng, trình biên dịch sẽ chuyển đối toán hạng **sang kiểu dữ liệu cơ bản** để tính toán. Vậy chúng ta sẽ cần overload toán tử chuyển kiểu để trình biên dịch có thể chuyển kiểu dữ liệu ta định nghĩa sang kiểu dữ liệu cơ bản.

Ví dụ như mình muốn chuyển phân số về số thực, mình sẽ overload toán tử chuyển kiểu float:

```cpp
// Ví dụ overload toán tử chuyển kiểu float
class PhanSo {
    operator float();
}

PhanSo::operator float() {
    return (float)this->tu / this->mau;
}
```

Để hạn chế việc phải overload toán tử với các toán hạng có kiểu dữ liệu khác nhau, ta sử dụng **chuyển kiểu bằng constructor**. Ví dụ:
```cpp
// constructor
PhanSo(int tu) : tu(tu), mau(1) {}
```
Với constructor được khai báo như trên, khi ta thực hiện cộng một số nguyên với một kiểu phân số, số nguyên sẽ được trình biên dịch chuyển thành kiểu phân số thông qua việc gọi constructor bên trên, với mẫu số là 1 và tử chính là toán hạng ta đang cộng.

**Lưu ý về Sự nhập nhằng**: Sự nhập nhằng xảy ra khi bạn thực hiện chuyển kiểu bằng constructor và chuyển kiểu bằng toán tử chuyển kiểu. Sự nhập nhằng khiến cho trình biên dịch không xác định được nên chuyển kiểu bằng toán tử chuyển kiểu hay constructor, dẫn đến việc mất đi cơ chế chuyển kiểu tự động

#### 3.2.4. Overload toán tử nhập, xuất

**Toán tử nhập**

Mình sẽ thực hiện overload toán tử nhập cho lớp phân số của mình như sau:
```cpp
class PhanSo {
    friend istream &operator >> (istream &in, PhanSo &ps);
}

istream &operator >> (istream &in, PhanSo &ps) {
    cout << "Tu: ";
    in >> ps.tu;
    cout << "Mau: ";
    in >> ps.mau;
    return in;
}
```

**Toán tử xuất**

Đối với toán tử xuất cũng tương tự, chúng ta cũng thực hiện tương tự như sau:
```cpp
class PhanSo {
    friend ostream &operator << (ostream &out, PhanSo ps);
}

ostream &operator << (ostream &out, PhanSo ps) {
    if (ps.tu == 0) out << 0;
    else if (ps.mau == 1) out << ps.tu;
    else out << ps.tu << '/' << ps.mau;
    return out;
}
```

## 4. Ghi đè - Overriding

Nếu lớp dẫn xuất định nghĩa cùng một phương thức đã được định nghĩa trong lớp cơ sở của nó, được gọi là p**hương thức ghi đè** trong C++. Phương thức ghi đè cho phép bạn cung cấp việc thực hiện cụ thể chức năng đã được lớp cơ sở của nó cung cấp.

Overriding thường được sử dụng trong method ở *lớp con*.

Ví dụ sau chúng ta ghi đè phương thức `eat()`:

```cpp
#include <iostream>  
using namespace std;

class Animal {
public:
	void eat() {
		cout << "Eating...";
	}
};

class Dog : public Animal {
public:
	void eat()
	{
		cout << "Eating bread...";
	}
};

int main() {
	Dog d = Dog();
	d.eat(); // output: Eating bread...
}
```