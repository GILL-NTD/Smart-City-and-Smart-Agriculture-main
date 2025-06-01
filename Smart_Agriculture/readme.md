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

[![AIoTLab](https://img.shields.io/badge/AIoTLab-green?style=for-the-badge)](https://www.facebook.com/DNUAIoTLab)
[![Faculty of Information Technology](https://img.shields.io/badge/Faculty%20of%20Information%20Technology-blue?style=for-the-badge)](https://dainam.edu.vn/vi/khoa-cong-nghe-thong-tin)
[![DaiNam University](https://img.shields.io/badge/DaiNam%20University-orange?style=for-the-badge)](https://dainam.edu.vn)

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

1. **Tải code:**
   ```bash
   git clone https://github.com/GILL-NTD/Smart-City-and-Smart-Agriculture-main.git
   cd Smart-City-and-Smart-Agriculture-main/Smart-Agriculture
   Mở file Arduino .ino:
   Mở file chính trong thư mục Smart-Agriculture bằng Arduino IDE.
   ```

Cài thư viện:
Vào Sketch → Include Library → Manage Libraries...
Cài các thư viện được dùng trong code (WiFi, sensor libs,...).

Cấu hình code:
Chỉnh sửa các tham số trong code nếu cần (SSID WiFi, mật khẩu, chân GPIO...).

Kết nối Arduino:
Cắm board vào máy tính bằng cáp USB.

Chọn board và cổng:
Trong Arduino IDE, vào Tools → chọn đúng Board và Port.

Biên dịch và nạp code:
Nhấn Verify để kiểm tra code.
Nhấn Upload để nạp code vào Arduino.

Kiểm tra hoạt động:
Mở Serial Monitor (Tools → Serial Monitor) để xem log, dữ liệu cảm biến.
