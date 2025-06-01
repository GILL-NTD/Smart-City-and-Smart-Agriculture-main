<h2 align="center">
    <a href="https://dainam.edu.vn/vi/khoa-cong-nghe-thong-tin">
    🎓 Faculty of Information Technology (DaiNam University)
    </a>
</h2>
<br>
<h2 align="center">
   SMART CITY, SMART AGRICULTURE
</h2>
<br>
<br>
<div align="center">
    <p align="center">
        <img src="aiotlab_logo.png" alt="AIoTLab Logo" width="170"/>
        <img src="fitdnu_logo.png" alt="AIoTLab Logo" width="180"/>
        <img src="dnu_logo.png" alt="DaiNam University Logo" width="200"/>
    </p>

</div>

---

## 🚀 Hướng dẫn cài đặt và chạy module **SMART AGRICULTURE (Arduino)**

### 1. Giới thiệu

Module **SMART AGRICULTURE** là phần code Arduino dùng cho các cảm biến và thiết bị trong dự án Smart City và Smart Agriculture.

### 2. Yêu cầu phần cứng

- Arduino UNO, Mega hoặc board tương thích
- Các cảm biến, relay, module theo sơ đồ phần cứng
- Cáp USB kết nối Arduino với máy tính

### 3. Chuẩn bị phần mềm

- [Arduino IDE](https://www.arduino.cc/en/software) bản mới nhất
- Driver USB cho board Arduino (nếu chưa có)
- Thư viện Arduino cần thiết (cài qua Library Manager trong IDE)

### 4. Các bước cài đặt và chạy

### 1. Tải code và mở project

```bash
git clone https://github.com/GILL-NTD/Smart-City-and-Smart-Agriculture-main.git
cd Smart-City-and-Smart-Agriculture-main/Smart-Agriculture
Mở file Arduino .ino chính trong thư mục Smart-Agriculture bằng Arduino IDE.

2. Cài đặt thư viện
Mở Arduino IDE → Vào menu Sketch → Chọn Include Library → Chọn Manage Libraries...

Tìm kiếm và cài đặt các thư viện được sử dụng trong code, ví dụ:

WiFi

Các thư viện cảm biến (sensor libs)

Các thư viện hỗ trợ khác

3. Cấu hình code
Mở code Arduino và chỉnh sửa các tham số sau nếu cần thiết:

SSID và mật khẩu WiFi

Các chân GPIO kết nối với cảm biến, relay,...

Địa chỉ server hoặc API nếu có

4. Kết nối phần cứng
Kết nối board Arduino với máy tính qua cáp USB.

5. Chọn board và cổng COM
Trong Arduino IDE, vào Tools → chọn đúng:

Board (ví dụ: Arduino UNO, Mega, ESP32, ...)

Port (cổng COM đang kết nối với Arduino)

6. Biên dịch và nạp chương trình
Nhấn nút Verify để biên dịch kiểm tra lỗi.

Nhấn nút Upload để nạp chương trình vào board Arduino.

7. Kiểm tra hoạt động
Mở Serial Monitor trong Arduino IDE (Tools → Serial Monitor).

Quan sát các thông tin log, dữ liệu cảm biến hoặc trạng thái thiết bị để đảm bảo chương trình hoạt động đúng.
