# Smart Retail Analytics System using Computer Vision

## 📌 Overview
This project implements a **Smart Retail Analytics System** using computer vision and deep learning techniques.  
It analyzes in-store customer movement using camera feeds to understand customer behavior, crowd density, and high-traffic zones within a retail environment.

The system can help retailers:
- Identify areas with maximum customer engagement
- Understand customer flow patterns
- Optimize product placement and store layout
- Improve decision-making for higher sales and profit

---

## 🧠 Key Features
- Person detection using **YOLOv8**
- Unique ID assignment and tracking of customers
- Works on both **images and video streams**
- Real-time bounding box visualization
- Lightweight custom object tracking logic
- Scalable for multiple camera inputs

---

## 🛠️ Tech Stack
- **Python**
- **OpenCV**
- **YOLOv8 (Ultralytics)**
- **NumPy**
- **Pandas**

---

## 🧩 System Architecture
1. Camera captures video/image frames inside the retail store  
2. YOLOv8 detects people in each frame  
3. A custom tracker assigns unique IDs to detected individuals  
4. Customer movement data can be analyzed to identify:
   - Popular store sections
   - Customer density
   - Traffic patterns  

---

## 📂 Project Structure
