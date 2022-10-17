# SFML & GAME THEORY

## 1. Game 2D là gì?

Game 2D là game không thể xoay góc quay và không có ấn tượng ba chiều rõ rệt. Game này cuộn bản đồ theo hai chiều là ngang và thẳng. Bên cạnh đó, từ nhân vật, tiền cảnh, hậu cảnh,… của game 2D giống phim hoạt hình cắt giấy (mọi thứ đều từ hình vẽ trên giấy).

Như ví dụ dưới đây là Stardew Valley (1 tựa game 2D nổi tiếng)

![](https://arena.fpt.edu.vn/wp-content/uploads/2020/05/khai-quat-ve-thiet-ke-do-hoa-game-2d-768x432.jpg)

## 2. Các định nghĩa trong phát triển game

### 2.1. Gameloop

Gameloop là quá trình điều khiển tổng thể cho trò chơi. Nó là một vòng lặp *(loop)* vì trò chơi sẽ liên tục thực hiện một loạt hành động lặp đi lặp lại cho đến khi người chơi thoát khỏi chương trình.

Mỗi lần lặp sẽ là một lần cập nhật các đối tượng trong trò chơi, được gọi là khung hình *(frame)*

Số khung hình trên giây sẽ là **fps** (frame per second)

### 2.2. Delta time

**Delta time** là thời gian cần để hiển thị khung hình.
Ví dụ: với tốc độ khung hình là *60 fps* thì delta time sẽ là *1/60 giây*

Vậy tại sao phải sử dụng **delta time**?

Giả dụ, ta có 1 hàm `Update()` sẽ cho đối tượng oto di chuyển với vận tốc không đổi *10px/giây*

```cpp
void Update() {
    car.move(10, 0);
}
```
Với đoạn code trên, thực chất vận tốc của oto không phải là `10px/giây` mà là `10px/khung hình`. Chính vì thế, trong thực tế, fps luôn không ổn định, điều đó sẽ gây ra 1 vấn đề: Nếu xuất hiện hiện tượng ***drop fps***, trò chơi sẽ dừng lại 1 lúc và oto cũng vậy, nhưng khi fps quay trở lại ổn định thì oto sẽ tiếp tục di chuyển từ vị trí trước đó với đúng vận tốc mà ta đã gán cho.

Nếu chơi 1 mình thì việc đó sẽ không ảnh hưởng, nhưng nếu đó là 1 game đua xe, với nhiều người cùng chơi thì sẽ rất mất công bằng khi chơi.

Vậy để oto di chuyển đúng với vận tốc `10px/giây` thì ta cần sửa lại như sau:

```cpp
void Update(float deltatime) {
    car.move(10*deltatime, 0);
}
```
### 2.3. Sprite

**Sprite** là một đối tượng liên quan đến hình ảnh trong Game. Tập hợp nhiều Sprite chung trong một tấm ảnh được gọi là **Sprite Sheet**.

![](https://resources.stdio.vn/content/article/5efc46f82428af7c45726099/resources/res-1593745031-1593745031660.png)

Sprite Animation là việc thể hiện hoạt họa, hành động, trạng thái của một đối tượng dựa trên Sprite Sheet của đối tượng đó hoặc chứa đối tượng đó. Để làm được điều này, ta vẽ lần lượt hình ảnh của đối tượng có trong Sprite Sheet theo thời gian lên các Frame, hình ảnh sau thay thế hình ảnh trước đó.

### 2.4. Texture

**Texture** trong game là một tấm ảnh hai chiều, chứa thông tin màu sắc chi tiết cho một đối tượng Sprite. Có thể hiểu là Texture được ánh xạ lên bề mặt của Sprite.

![](https://www.sfml-dev.org/tutorials/2.5/images/graphics-sprites-definition.png)

### 2.5. Animation

**Animation** trong game 2D là việc vẽ lần lượt các ảnh trong 1 chuỗi ảnh của một hoặc nhiều đối tượng theo một đơn vị thời gian. Mỗi Animation hoặc nhiều Animation có thể đại diện cho một hành động, ứng xử cụ thể của nhân vật.

![](https://resources.stdio.vn/content/article/5efc46f82428af7c45726099/resources/res-1593616904-1593616904291.gif)
