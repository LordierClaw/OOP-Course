# UML Diagrams

## 1. Giới thiệu
Ngôn ngữ mô hình hóa thống nhất (tiếng Anh: **Unified Modeling Language**, viết tắt thành **UML**) là một ngôn ngữ mô hình gồm các ký hiệu đồ họa mà các phương pháp hướng đối tượng sử dụng để thiết kế các hệ thống thông tin một cách nhanh chóng.

Cách xây dựng các mô hình trong UML phù hợp mô tả các hệ thống thông tin cả về cấu trúc cũng như hoạt động. Cách tiếp cận theo mô hình của UML giúp ích rất nhiều cho những người thiết kế và thực hiện hệ thống thông tin cũng như những người sử dụng nó; tạo nên một cái nhìn bao quát và đầy đủ về hệ thống thông tin dự định xây dựng.

## 2. Class Diagram

## 2.1. Định nghĩa

Một biểu đồ lớp chỉ ra cấu trúc tĩnh của các lớp trong hệ thống. Các lớp là đại diện cho các “đối tượng” được xử lý trong hệ thống. Các lớp có thể quan hệ với nhau trong nhiều dạng thức:

- **liên kết** (associated - được nối kết với nhau)
- **phụ thuộc** (dependent - một lớp này phụ thuộc vào lớp khác)
- **chuyên biệt hóa** (specialized - một lớp này là một kết quả chuyên biệt hóa của lớp khác)
- **đóng gói** ( packaged - hợp với nhau thành một đơn vị)

Tất cả các mối quan hệ đó đều được thể hiện trong biểu đồ lớp, đi kèm với cấu trúc bên trong của các lớp theo khái niệm **thuộc tính (attribute)** và **thủ tục (operation)**.

## 2.2. Các tính chất cơ bản

Một lớp sẽ có 3 thành phần sau:
- Tên lớp
- Các thuộc tính
- Các phương thức

![](https://images.viblo.asia/5b3dc477-b7f4-4dfe-b02c-8055b1489d90.PNG)

## 2.3. Access Modifier trong Class Diagram

Được sử dụng để đặc tả phạm vi truy cập cho các Attribute và Operation của 1 class (Cấp quyền cho các class khác sử dụng Attribute và Operation của class này).

Có 3 lựa chọn truy cập:
- **Private ( - )**: Chỉnh mình các đối tượng được tạo từ class này có thể sử dụng.
- **Public ( + )**: Mọi đối tượng đều có thể sử dụng.
- **Protected ( # )**: Chỉ các đối tượng được tạo từ class này và class kế thừa từ class này có thể sử dụng.

![](https://images.viblo.asia/94064e86-7fcf-4ead-b647-3d3e1e5fd068.PNG)

## 2.4. Relationship trong Class Diagram

Được sử dụng để thể hiện *mối quan hệ* giữa đối tượng được tạo từ 1 class với các đối tượng được tạo từ class khác trong class diagram.

Có 4 loại relationship:

![](https://images.viblo.asia/c869cd68-1172-4a51-8257-81c732537bae.PNG)

- **Inheritance**: 1 class kế thừa từ 1 class khác.
- **Association**: 2 class có liên hệ với nhau nhưng không chỉ rõ mối liên hệ.
- **Composition**: Đối tượng tạo từ class A mất thì đối tượng tạo từ class B sẽ mất.
- **Agreegation**: Đối tượng tạo từ class A mất thì đối tượng tạo từ class B vẫn tồn tại độc lập.

## 2.5. Multiplicity trong Class Diagram

Được sử dụng để thể hiện quan hệ về số lượng giữa các đối tượng được tạo từ các class trong class diagram

- **0...1**: 0 hoặc 1
- **n** : Bắt buộc có n
- **0...***: 0 hoặc nhiều
- **1...*** : 1 hoặc nhiều
- **m...n**: có tối thiểu là m và tối đa là n

![](https://images.viblo.asia/91cafd9c-0266-4817-90f8-428fed42a708.PNG)