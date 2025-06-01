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

## 🚦 Hướng dẫn chi tiết bài tập `traffic_light_violation.py`

### 🎯 1. Mục tiêu của bài tập

- Phát hiện và theo dõi (tracking) **ô tô** trên video sử dụng YOLOv8n.
- Phát hiện **trạng thái đèn giao thông** (đỏ/xanh/vàng/tắt) bằng model `best_traffic_nano_yolo.pt`.
- Xác định **khi ô tô vượt vạch lúc đèn đỏ** và **lưu ảnh vi phạm**.
- Minh hoạ kết quả: vẽ **bounding box**, **trạng thái đèn**, **đếm số vi phạm**, hiển thị **thông báo vi phạm**.

### 🧩 2. Yêu cầu môi trường và thư viện

- **Python**: 3.12 hoặc cao hơn.
- Cài đặt thư viện bằng pip:

```bash
pip install ultralytics opencv-python numpy
📁 3. Cấu trúc chính của project
bash
Copy
Edit
traffic_light_violation.py       # Script chính
hi2.mp4                          # Video đầu vào
yolov8n.pt                       # Model YOLOv8 COCO để detect ô tô
best_traffic_nano_yolo.pt       # Model detect đèn giao thông
vi_pham/                        # Tự động tạo để lưu ảnh vi phạm
📏 4. Vẽ vạch kiểm soát (line)
Biến toàn cục line_pts = [] lưu tối đa 2 điểm do người dùng click.

Hàm mouse_callback(event, x, y, flags, param):

Bắt sự kiện cv2.EVENT_LBUTTONDOWN.

Nếu len(line_pts) < 2 thì thêm (x, y) vào line_pts và in ra console.

Cách chọn vạch:

Đọc frame đầu tiên từ video.

Hiển thị cửa sổ "Select Line".

Dùng cv2.setMouseCallback để kích hoạt sự kiện chuột.

Cách vẽ:

python
Copy
Edit
if len(line_pts) >= 1:
    cv2.circle(frame, line_pts[0], 5, (0,255,0), -1)
if len(line_pts) == 2:
    cv2.line(frame, line_pts[0], line_pts[1], (0,255,0), 2)
Phím tắt khi chọn vạch:

s: xác nhận 2 điểm để bắt đầu.

q: hủy bỏ.
```
