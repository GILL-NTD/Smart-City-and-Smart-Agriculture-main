# Một dự án ví dụ nhỏ cho các bài toán nằm trong Thành phố thông minh về Giám sát giao thông thông minh

## Yêu cầu môi trường

## 🚦 Hướng dẫn chi tiết by NTD `traffic_light_violation.py`

### 🎯 1. Mục tiêu của bài tập

- Phát hiện và theo dõi ô tô trên video sử dụng YOLOv8n.
- Phát hiện trạng thái đèn giao thông (đỏ/xanh/vàng/tắt) bằng model `best_traffic_nano_yolo.pt`.
- Xác định khi ô tô vượt vạch trong lúc đèn đỏ và lưu ảnh vi phạm.
- Minh hoạ kết quả: vẽ bounding box, trạng thái đèn, đếm số vi phạm, hiển thị thông báo vi phạm.

- Chuyển đổi đầu vào từ xử lý video file sang xử lý video stream trực tiếp từ camera ESP32-Camera.
- Tích hợp nhận dạng biển số xe (OCR) sử dụng thư viện như Tesseract hoặc OpenALPR, trích xuất biển số sau khi crop ảnh vi phạm, lưu kèm timestamp và file ảnh.
- Lưu trữ thông tin vi phạm vào cơ sở dữ liệu (SQLite hoặc MySQL) phục vụ tra cứu và thống kê.
- Xây dựng giao diện giám sát web với Flask hoặc Django để hiển thị video live, danh sách vi phạm, và biểu đồ thống kê số lần vi phạm theo thời gian.
- Báo cáo tự động tổng hợp dữ liệu vi phạm theo ngày/tuần/tháng, xuất file CSV, Excel hoặc PDF và gửi email đến người quản lý.
- Hệ thống cảnh báo thời gian thực: gửi email, SMS hoặc thông báo push khi có xe vi phạm mới.
- Mở rộng logic xử lý: lưu vecto chuyển động để tính tốc độ, phân loại loại xe (ô tô con, xe tải...) để phân loại vi phạm.

### 🧩 2. Yêu cầu môi trường và thư viện

- Python 3.12 hoặc cao hơn.
- Cài đặt thư viện:
  pip install ultralytics opencv-python numpy

### 📁 3. Cấu trúc chính của project

traffic_light_violation.py # Script chính
hi2.mp4 # Video đầu vào
yolov8n.pt # Model YOLOv8 COCO để detect ô tô
best_traffic_nano_yolo.pt # Model detect đèn giao thông
vi_pham/ # Tự động tạo để lưu ảnh vi phạm

### 📏 4. Vẽ vạch kiểm soát (line)

- Biến toàn cục `line_pts = []` lưu tối đa 2 điểm do người dùng click.
- Hàm `mouse_callback(event, x, y, flags, param)`:
  - Bắt sự kiện `cv2.EVENT_LBUTTONDOWN`.
  - Nếu `len(line_pts) < 2` thì thêm `(x, y)` vào `line_pts` và in ra console.

Cách chọn vạch:

- Đọc frame đầu tiên từ video.
- Hiển thị cửa sổ `"Select Line"`.
- Dùng `cv2.setMouseCallback` để kích hoạt sự kiện chuột.

Cách vẽ:

```python
if len(line_pts) >= 1:
    cv2.circle(frame, line_pts[0], 5, (0,255,0), -1)
if len(line_pts) == 2:
    cv2.line(frame, line_pts[0], line_pts[1], (0,255,0), 2)

Phím tắt khi chọn vạch:

Nhấn s để xác nhận 2 điểm.

Nhấn q để hủy bỏ và thoát.

*Created by Nguyen Van Nhan*
[![AIoTLab](https://img.shields.io/badge/AIoTLab-green?style=for-the-badge)](https://www.facebook.com/DNUAIoTLab)
[![Faculty of Information Technology](https://img.shields.io/badge/Faculty%20of%20Information%20Technology-blue?style=for-the-badge)](https://dainam.edu.vn/vi/khoa-cong-nghe-thong-tin)
[![DaiNam University](https://img.shields.io/badge/DaiNam%20University-orange?style=for-the-badge)](https://dainam.edu.vn)
```
