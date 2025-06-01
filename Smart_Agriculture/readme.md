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

#### 4.1 Tải code và mở project

```bash
git clone https://github.com/GILL-NTD/Smart-City-and-Smart-Agriculture-main.git
cd Smart-City-and-Smart-Agriculture-main/Smart-Agriculture
Mở file Arduino .ino chính trong thư mục Smart-Agriculture bằng Arduino IDE.

4.2 Cài đặt thư viện
Mở Arduino IDE → Vào menu Sketch → Chọn Include Library → Chọn Manage Libraries...

Tìm và cài đặt các thư viện được sử dụng trong code, ví dụ:

WiFi

Các thư viện cảm biến (sensor libs)

Các thư viện hỗ trợ khác

4.3 Cấu hình code
Mở code Arduino và chỉnh sửa các tham số sau nếu cần:

SSID và mật khẩu WiFi

Các chân GPIO kết nối cảm biến, relay,...

Địa chỉ server hoặc API (nếu có)

4.4 Kết nối phần cứng
Kết nối board Arduino với máy tính qua cáp USB.

4.5 Chọn board và cổng COM
Trong Arduino IDE, vào Tools → chọn đúng:

Board (ví dụ: Arduino UNO, Mega, ESP32, ...)

Port (cổng COM đang kết nối với Arduino)

4.6 Biên dịch và nạp chương trình
Nhấn nút Verify để biên dịch kiểm tra lỗi.

Nhấn nút Upload để nạp chương trình vào board Arduino.

4.7 Kiểm tra hoạt động
Mở Serial Monitor trong Arduino IDE (Tools → Serial Monitor).

Quan sát các thông tin log, dữ liệu cảm biến hoặc trạng thái thiết bị để đảm bảo chương trình hoạt động đúng.

```

Created by NTD

<div align="center"> [![AIoTLab](https://img.shields.io/badge/AIoTLab-green?style=for-the-badge)](https://www.facebook.com/DNUAIoTLab) [![Faculty of Information Technology](https://img.shields.io/badge/Faculty%20of%20Information%20Technology-blue?style=for-the-badge)](https://dainam.edu.vn/vi/khoa-cong-nghe-thong-tin) [![DaiNam University](https://img.shields.io/badge/DaiNam%20University-orange?style=for-the-badge)](https://dainam.edu.vn) </div>
