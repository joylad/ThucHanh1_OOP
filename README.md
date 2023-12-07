# ThucHanh1_OOP
BÀI 6: QUẢN LÝ DỰ ÁN

Khai bảo lớp Nhân viên (mã NV, Họ tên, Địa chỉ, Số ĐT, chuyên môn), mã NV là một số nguyên có 5 chữ số, tự động tăng.

Khai bảo lớp Dự án gồm các thuộc tỉnh (mã dự án, Tên dự án, Kiểu dự án, Tổng kinh phí) 
    – trong đó kiểu dự án có thể gồm: nhỏ, trung bình hoặc lớn. Mã dự án là một số nguyên có 5 chữ số, tự động tăng.

Khai bảo lớp Bảng phân công có quan hệ kết hợp (association) với lớp Nhân viên và lớp Dự án.
Trong đó một nhân viên có thể được gán cho một hoặc nhiều dự án một lúc với số ngày tham gia khác nhau và vị trí công việc khác nhau. 
Viết chương trình trong ngôn ngữ C++ thực hiện các yêu cầu sau:

    1. Nhập danh sách dự án. In ra danh sách dự án đã có
    
    2. Nhập danh sách nhân viên. In ra danh sách nhân viên đã có
    
    3. Nhập danh sách phân công dự án cho mỗi nhân viên đã có và in danh sách ra màn hình. 
    (chủ ý: cũng một nhân viên thì không thể tham gia cũng một dự án với hai vị trí khác nhau nhưng có thể tham gia cùng lúc vào nhiều dự án)
    
    4. Sắp xếp danh sách phân công
    
        a. Theo Họ tên nhân viên
        
        b. Theo Số ngày tham gia (giảm dần)
    
    5. Tìm kiếm và hiển thị danh sách phân công theo tên nhân viên
