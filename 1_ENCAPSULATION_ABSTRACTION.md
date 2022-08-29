# ENCAPSULATION & ABSTRACTION - Theory

## 1. Object Oriented Programming – OOP

### 1.1. Giới thiệu

**Lập trình hướng đối tượng** hay còn gọi là **OOP (Object-Oriented Programming)**, là một phương pháp lập trình bằng cách đóng gói dữ liệu vào trong đối tượng và dùng chính đối tượng đó để thao tác dữ liệu.

Nói một cách đơn giản thì dữ liệu trong chương trình không đơn giản chỉ được coi là dữ liệu, mà chúng sẽ được *mô hình hóa* thành các ***đối tượng***, có những thuộc tính riêng biệt, cũng như là các phương thức riêng để xử lý chúng.

### 1.2. Class trong C++

**Lớp (Class)** có thể coi là bản thiết kế của các **đối tượng (Object)**. Nó là một kiểu dữ liệu do người dùng định nghĩa, chứa các thành viên dữ liệu và các hàm thành viên của riêng nó.

Vì một lớp là một kiểu dữ liệu do người dùng định nghĩa do đó nó sẽ gồm các thành viên dữ liệu và các hàm thành viên.
Các thành viên dữ liệu là các biến dữ liệu và các hàm thành viên là các hàm được sử dụng để thao tác các biến này và các thành viên dữ liệu này và các hàm thành viên xác định các **thuộc tính (Attribute)** và **hành vi (Method)** của các đối tượng trong lớp.

Ta cùng xét một ví dụ:

Hãy cùng xem xét các sinh viên. Mỗi **sinh viên** đều có thuộc tính chung là: mã sinh viên, mã sinh viên, tên, tuổi, quê quán, điểm toán, điểm lý, điểm hoá, đi, đứng, ngồi, học tập, …
Do đó ở đây ta sẽ coi sinh viên là một lớp (Class).

Lớp `sinhvien` sẽ có:

- Thuộc tính (Attribute): mã sinh viên, tên, tuổi, quê quán, điểm toán, điểm lý, điểm hoá,…
- Hành vi (Method): đi, đứng, ngồi, học tập,…

Trong C++, để định nghĩa một lớp ta bắt đầu bằng từ khóa `class`, tiếp theo đó là tên của lớp và phần thân lớp được bao bởi cặp dấu `{}`. Kết thúc lớp bằng dấu `;`

![](https://blog.luyencode.net/wp-content/uploads/2020/01/Classes-and-Objects-in-C.png)

### 1.3. Object

**Đối tượng** hay còn gọi là **Object**, là các thực thể trừu tượng được tạo ra trong chương trình có tác dụng đóng gói và thao tác dữ liệu.

Một đối tượng sẽ gồm 2 thông tin là **thuộc tính (Attribute)** của nó và **phương thức (Method)** để xử lý nó.

Khi một lớp (Class) được định nghĩa, chỉ có đặc tả cho đối tượng được xác định. Do đó các đối tượng sẽ không được khởi tạo, nghĩa là không có bộ nhớ hoặc lưu trữ được phân bổ cho các đối tượng thuộc lớp đó. Để sử dụng dữ liệu và các hàm truy cập được xác định trong lớp, bạn cần khai báo các đối tượng.

### 1.4. Con trỏ this

Con trỏ `this` trong class c++ là một **con trỏ đặc biệt** ẩn dấu bên trong hàm thành viên của class, có tác dụng trỏ đến đối tượng đã gọi đến hàm thành viên đó.

Điều đó có nghĩa, khi một đối tượng gọi tới một hàm thành viên nào đó trong class thì con trỏ `this` sẽ trỏ đến vị trí của đối tượng đó để xác định đối tượng đang trong phiên làm việc, qua đó nó có thể giúp đối tượng đó có thể tiếp tục truy cập và xử lý các biến thành viên có trong class.

![](https://laptrinhcanban.com/cpp/lap-trinh-cpp-co-ban/huong-doi-tuong-trong-cpp/this-trong-class-cpp/so-sanh-this-trong-cpp.png)

Qua ví dụ ở trên, chúng ta có thể hiểu this đơn giản là một con trỏ giúp xác định đối tượng nào đang gọi hàm thành viên trong class, và chúng ta có thể lược bỏ việc viết nó trong chương trình.

Nhưng chúng ta nên sử dụng `this` trong các trường hợp chúng ta muốn phân biệt rõ giữa các **biến toàn cục (glocal)** và các **biến thành viên** chỉ sử dụng bên trong class.

## 2. Tính chất của OOP

### 2.1. Encapsulation (Tính đóng gói)

**Encapsulation (Tính đóng gói)** có ý nghĩa không cho phép người sử dụng các đối tượng thay đổi trạng thái nội tại của một đối tượng, mà chỉ có phương thức nội tại của đối tượng có thể thay đổi chính nó.

Điều đó có nghĩa, dữ liệu và thông tin sẽ được *đóng gói* lại, giúp các tác động bên ngoài một đối tượng *không thể làm thay đổi* đối tượng đó, nên sẽ đảm bảo **tính toàn vẹn** của đối tượng, cũng như giúp giấu đi các dữ liệu thông tin cần được che giấu.

**Ví dụ:** khi bạn dùng một cái iphone, bạn không thể thay đổi các cấu trúc bên trong của hệ điều hành iOS, mà chỉ có Apple mới có thể làm được điều này thôi.

### 2.2. Abstraction (Tính trừu tượng)

**Abstraction (Tính trừu tượng)** là một khả năng mà chương trình có thể bỏ qua sự phức tạp bằng cách tập trung vào cốt lõi của thông tin cần xử lý.

Điều đó có nghĩa, bạn có thể xử lý một đối tượng bằng cách gọi tên một phương thức và thu về kết quả xử lý, mà không cần biết làm cách nào đối tượng đó được các thao tác trong class.

**Ví dụ:** bạn có thể nấu cơm bằng nồi cơm điện bằng cách rất đơn giản là ấn công tắc nấu, mà không cần biết là bên trong cái nồi cơm điện đó đã làm thế nào mà gạo có thể nấu thành cơm.

### 2.3. Inheritance (Tính kế thừa)

**Inheritance (Tính kế thừa)** có ý nghĩa: một class có thể kế thừa các thuộc tính của một class khác đã tồn tại trước đó.

Khi một class con được tạo ra bởi việc kế thừa thuộc tính của class cha thì chúng ta sẽ gọi class con đó là **subclass** trong C++, và class cha chính là **superclass** trong C++.

### 2.4. Polymorphism (Tính đa hình)

**Polymorphism (Tính đa hình)** trong lập trình hướng đối tượng là một khả năng mà một phương thức trong class có thể đưa ra các kết quả hoàn toàn khác nhau, tùy thuộc vào dữ liệu được xử lý.

**Ví dụ:** cùng là một class quản lý dữ liệu là các con vật, thì hành động sủa hay kêu của chúng được định nghĩa trong class sẽ cho ra kết quả khác nhau, ví dụ nếu là con mèo thì kêu meo meo, còn con chó thì sủa gâu gâu

## 3. Access Modifier cho Class trong C++

**Access Modifier** hay **Access Specifier** trong một lớp được sử dụng để đặt khả năng truy cập của các thành viên lớp. Đó là, nó đặt ra một số hạn chế đối với các thành viên lớp không được truy cập trực tiếp bởi các hàm bên ngoài.

Trong C++ có hổ trợ 3 loại access modifier đó là:

- Private
- Public
- Protected

> **Lưu ý**: Nếu chúng ta không chỉ rõ bất kỳ access modifier cho thành viên của lớp, thì mặc định nó là **Private**.

| Phạm vi truy cập | Ý nghĩa |
| ---- | ---- |
| public | Không hạn chế. Thành phần có thuộc tính này có thể được truy cập ở bất kì vị trí nào. |
| private | Thành phần có thuộc tính này sẽ chỉ được truy cập từ bên trong lớp. Bên ngoài lớp hay trong lớp dẫn xuất sẽ không thể truy cập được.|
| protected | Mở rộng hơn private một chút. Thành phần có thuộc tính này sẽ có thể truy cập ở trong nội bộ lớp và trong lớp dẫn xuất |

## 4. Constructor và Destructor trong C++

### 4.1. Constructor

Một class contructor là một hàm thành viên đặc biệt của một lớp mà được thực thi bất cứ khi nào chúng ta tạo các đối tượng mới của lớp đó.

Một constructor sẽ có tên giống như lớp và nó không có bất kỳ kiểu trả về, kể cả kiểu void. Constructor có thể rất hữu ích để thiết lập các giá trị khởi tạo cho các biến thành viên cụ thể.

Một constructor mặc định trong C++ không có bất kỳ tham số nào, nhưng nếu bạn cần, một constructor có thể có các tham số.

```cpp
class Line {
    public: 
        double len;
        // constructor
        Line(double args): len(args);
};

int main() {
    Line a(3.2);
    std::cout << a.len << endl; // output: 3.2
}
```
Trong trường hợp constructor được tham số hóa, bạn có thể sử dụng cú pháp sau để khởi tạo các trường.

```cpp
Line(double args): len(args) {}
```

### 4.2. Destructor

Một **destructor** là một hàm thành viên đặc biệt của một lớp mà được thực thi bất cứ khi nào một đối tượng của lớp đó ra khỏi phạm vi hoặc bất cứ khi nào biểu thức **delete** được áp dụng tới một con trỏ tới đối tượng của lớp đó.

Một destructor sẽ có cùng tên với lớp và được đặt trước bỏi ký hiệu `~` và nó có thể: không trả về một giá trị và không nhận bất kỳ tham số nào.

```cpp
Line();   // constructor 
~Line();  // destructor
```

## 5. Getter & Setter

**Setter** và **Getter** là 2 phương thức sử dụng để cập nhật hoặc lấy ra giá trị thuộc tính, đặc biệt dành cho các thuộc tính ở phạm vi `private`.

Việc sử dụng Setter và Getter cần thiết trong việc kiểm soát những thuộc tính quan trọng mà ta thường được sử dụng và yêu cầu giá trị chính xác.

Ví dụ thuộc tính **age** lưu tuổi con người, thực tế thì phạm vi tuổi là từ 0 đến 100, thì ta không thể cho chương trình lưu giá trị age âm hoặc quá 100 được.

```cpp
class Employee {
    private:
        int salary; // Private attribute
    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};
```

## 6. Static trong class C++

**Static** trong C++ là một toán tử có tác dụng chỉ định một biến hoặc hàm thành viên trong class tồn tại ở ***dạng tĩnh***.

Dạng tĩnh ở đây có ý nghĩa, vùng bộ nhớ dùng để lưu trữ các dữ liệu này sẽ là bất biến, không thay đổi.

Bằng việc sử dụng static trong class C++, chúng ta sẽ có được *biến static* và *hàm static*, là các thành viên được lưu tại các vùng bộ nhớ bất biến. Vì ở dạng tĩnh nên chúng sẽ **tồn tại duy nhất** trong class, và do đó chúng có thể được ***sử dụng chung*** cho tất cả các đối tượng được tạo ra từ class.

### 6.1. Biến static

Để tạo biến static trong class C++, chúng ta thêm toán tử `static` vào đằng trước tên biến khi khai báo biến trong class như sau. Lưu ý là access modifier của biến static phải ở dạng `public` để cho phép truy cập nó từ ngoài phạm vi class.

Ưu điểm lớn nhất của biến static đó chính là chúng ta có thể **sử dụng trực tiếp** nó mà không cần phải tạo ra đối tượng (instance) từ class. Tuy nhiên do không tạo ra instance dẫn đến việc giá trị ban đầu của biến static cũng không được khởi tạo, nên khi dùng biến static mà không tạo ra đối tượng, chúng ta cần phải khởi tạo giá trị cho nó ở *bên ngoài* phạm vi class.

Ví dụ:

```cpp
class TestClass {
public:    
    int num;          // non-static variable
    static int sNum;  // static variable
public:
    TestClass() {
        num = 10;
    } 
};

int TestClass::sNum = 100;

int main() {   
    std::cout << TestClass::sNum; // 100
    std::cout << TestClass::num;  // error: invalid use of non-static data member
}
```

Giống như ví dụ trên, do **sNum** là biến static nên chúng ta có thể trực tiếp sử dụng giá trị của nó mà không cần phải tạo ra đối tượng từ class. Tuy nhiên biến **num** thì chỉ là biến thành viên bình thường nên chúng ta không thể sử dụng trực tiếp nó vì lỗi sẽ xảy ra.

### 6.2. Hàm static

Để tạo hàm static trong class C++, chúng ta thêm toán tử `static` vào đằng trước tên hàm khi khai báo hàm trong class như sau. Lưu ý là access modifier của hàm static phải ở dạng `public` để cho phép truy cập nó từ ngoài phạm vi class.

**Lưu ý:** đối với các hàm static có xử lý các *biến thành viên*, do chúng ta không tạo ra instance dẫn đến giá trị của các biến thành viên này sẽ không được khởi tạo, nên khi sử dụng chúng, bắt buộc phải có bước khởi tạo giá trị cho các biến thành viên. Và đương nhiên để làm được điều đó, các biến thành viên này cũng phải là **biến static**.

Ví dụ:

```cpp
class TestClass {
public: 
    static int sNum;  // static variable
public:  
    // static member function 
    static void func1() {
        std::cout << sNum;
    } 
}; 

int TestClass::sNum = 100;

int main() 
{
    TestClass::func1(); //100
}

```

## 7. Kỹ thuật chia tách file trong C++

### 7.1. Headers file

Khi các chương trình phát triển ngày càng lớn (và sử dụng nhiều file hơn), Việc khai báo các hàm bạn muốn sử dụng được định nghĩa trong cùng một file sẽ trở nên ngày càng tẻ nhạt và làm cho file đó trở lên nhiều dòng code, khó kiểm soát. Sẽ tốt hơn nếu bạn có thể đặt tất cả các khai báo của mình ở một nơi và sau đó định nghĩa chúng khi bạn cần nó.

### 7.2. Viết một file header

#### 7.2.1. Mở đầu
Ví dụ chúng ta có hai tệp, **add.cpp** và **main.cpp**, trông giống như thế này:

**add.cpp**
```cpp
int add(int x, int y) {
    return x + y;
}
```

**main.cpp**
```cpp
#include <iostream>

int add(int x, int y); // forward declaration using function prototype

int main() {
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
```

Trong ví dụ này, chúng ta đã sử dụng một khai báo để trình biên dịch sẽ biết định danh add là gì khi biên dịch main.cpp. Chúng ta có thể thấy việc thêm thủ công cho mọi hàm bạn muốn sử dụng trong một file khác khá nhiều và phức tạp.

Hãy viết một file header để giảm bớt gánh nặng này. Viết một file header rất dễ dàng, vì các file header chỉ bao gồm hai phần:
- Các tiền chỉ thị trong file header.
- Nội dung thực tế của file header, phải là khai báo cho tất cả các định danh mà chúng ta muốn các file khác có thể nhìn thấy.

### 7.2.2. Sử dụng hậu tố .h khi đặt tên file header

Các file header thường được ghép nối với các file code, với file header cung cấp các khai báo cho file code tương ứng. Vì file header của chúng ta sẽ chứa một khai báo cho các hàm được định nghĩa trong **add.cpp**, nên chúng ta sẽ gọi file header mới là **add.h**.

Nếu một file header được ghép nối với một file code (ví dụ: **add.h** với **add.cpp**), cả hai sẽ có cùng tên (**add**).

**add.h**

```cpp
#ifndef ADD_H_
#define ADD_H_

int add(int x, int y);

#endif
```

Để sử dụng file header này trong **main.cpp**, chúng ta phải `#include` nó (sử dụng dấu ngoặc kép, không phải dấu ngoặc nhọn).

**main.cpp**

```cpp
#include <iostream>
#include "add.h"

int main() {
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
```

## 8. Quy tắc đặt tên biến trong OOP C++

### 8.1. Dùng tiếng Anh

Luôn sử dụng tiếng Anh để đặt tên hàm và biến.

Ví dụ:

```cpp
/* Bad */
const hoTen = "Trạng Tí"
const banBe = ["Sửu Ẹo", "Dần Béo", "Cả Mẹo"]

/* Good */
const fullName = "Trạng Tí"
const friends = ["Sửu Ẹo", "Dần Béo", "Cả Mẹo"]
```

### 8.2. Quy ước đặt tên

Nếu team của bạn chọn quy ước đặt tên là `camelCase`, hãy sử dụng `camelCase` cho toàn bộ dự án, nếu bạn qua một team khác chuộng `snake_case` hơn, hãy tuân thủ nghiêm ngặt. Cho dù là quy ước nào thì điều quan trọng nhất chính là **tính nhất quán**.

```cpp
/* Bad */
const page_count = 5
const isUser = true

/* Good */
const pageCount = 5
const isUser = true

/* Good as well */
const page_count = 5
const is_user = true
```

### 8.3. Nguyên tắc S-I-D

- **Short (ngắn gọn)**: tên không được dài, không phải mất thời gian để gõ và nhớ.
- **Intuitive (tự nhiên)**: tên khi đọc lên phải cho cảm giác xuôi tai, gần gũi với văn nói.
- **Descriptive (súc tích)**: tên phải mô tả được ý nghĩa, tác dụng của nó, bằng cách hiệu quả nhất.

```cpp
/* Bad */
const totalNumberOfPublishedArticles = 10 // tên quá dài
const a = 5 // "a" không mô tả được số 5 để làm gì
const isDisplayable = a > 5 // "isDisplayable" nghe không tự nhiên lắm

/* Good */
const totalArticles = 10
const postCount = 5
const shouldDisplay = postCount > 5
```