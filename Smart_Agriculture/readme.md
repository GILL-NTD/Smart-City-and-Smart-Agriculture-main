## Hướng dẫn cài đặt và chạy module NNTM (Arduino)

```bash
# 1. Chuẩn bị phần cứng:
# - Arduino UNO/Mega hoặc board tương thích
# - Các cảm biến, thiết bị theo dự án (nhiệt độ, độ ẩm, relay,...)
# - Kết nối dây theo sơ đồ phần cứng

# 2. Cài đặt phần mềm:
# - Tải Arduino IDE mới nhất: https://www.arduino.cc/en/software
# - Cài driver USB cho Arduino nếu cần

# 3. Tải source code:
git clone https://github.com/GILL-NTD/Smart-City-and-Smart-Agriculture-main.git
cd Smart-City-and-Smart-Agriculture-main/NNTM

# 4. Mở file code Arduino (.ino) trong thư mục NNTM bằng Arduino IDE

# 5. Cài thư viện Arduino cần thiết:
# - Vào Sketch -> Include Library -> Manage Libraries...
# - Tìm và cài các thư viện được include trong code (ví dụ: WiFi, sensor libs...)

# 6. Chỉnh sửa cấu hình trong code (nếu có):
# - WiFi SSID, mật khẩu
# - Các chân GPIO, địa chỉ server API

# 7. Kết nối Arduino với máy tính qua cáp USB

# 8. Trong Arduino IDE:
# - Chọn đúng Board và Port (Tools -> Board, Tools -> Port)
# - Nhấn nút Verify (biên dịch)
# - Nhấn nút Upload (nạp code)

# 9. Mở Serial Monitor (Tools -> Serial Monitor)
# - Kiểm tra thông tin debug, trạng thái cảm biến, thiết bị

# 10. Kiểm tra thiết bị hoạt động theo yêu cầu
```
