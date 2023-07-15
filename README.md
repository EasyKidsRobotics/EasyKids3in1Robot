# **Arduino Library For 3in1EasyKids Robot Kit**
## **Introduction**
#### ชุดหุ่นยนต์สอนเขียนโปรแกรม 3 ภาษาคอมพิวเตอร์ 3 ระดับ ในหุ่นยนต์ชุดเดียว

* Block-Based Programming
* Python
* C/C++

สนุกเข้าใจง่ายเพื่อฝึกทักษะการประดิษฐ์หุ่นยนต์ด้วยตัวเอง เรียนรู้การเขียนโปรแกรมควบคุมหุ่นยนต์เพื่อทำภารกิจต่าง ๆ เช่น การเคลื่อนที่ด้วยล้อ Mecanum การแสดงไฟ RGB การแสดงเสียงและดนตรี การหยิบจับวัตถุ การเคลื่อนย้ายวัตถุ การหลบหลีกวัตถุ การแสดงภาพบน LCD รวมถึงการควบคุมหุ่นยนต์ด้วยการสื่อสารแบบ WiFi/BT จากโทรศัพท์มือถือ ฯลฯ เรียนรู้แบบบูรณาการ STEAM (Science Technology Engineering Art Mathematic) เป็นการปูพื้นฐานความรู้ด้านวิทยาการคำนวณและหุ่นยนต์ เสริมสร้างความคิดสร้างสรรค์ การคิดวิเคราะห์อย่างเป็นระบบ เพื่อพัฒนาศักยภาพและฝึกทักษะการแก้ไขปัญหาอย่างมีเหตุผลให้แก่เยาวชน

[EasyKidsRobotics](https://www.easykidsrobotics.com/) สอนให้เยาวชนได้ลงมือทำ ทดลอง และแก้ไขปัญหาด้วยตัวเอง 
การให้เยาวชนได้เจอโจทย์และแก้ปัญหาบ่อย ๆ จะช่วยให้เกิดการพัฒนาตัวเอง สร้างความมั่นใจ ไม่กลัว และไม่หนีปัญหา เยาวชนจะสามารถแก้ปัญหาได้ รู้ที่มาที่ไป สาเหตุของปัญหา และคิดหาวิธีแก้ หากวิธีนี้ไม่สำเร็จ 
ก็เปลี่ยนวิธีใหม่ทักษะนี้สามารถประยุกต์ใช้กับชีวิตจริงของพวกเขาได้ ทำให้รู้สึกว่าทุกปัญหามีทางออก เป็นการสร้างพื้นฐานการคิดและจิตใจให้เข้มแข็ง มีความพยายามมากขึ้น ให้พวกเขาพร้อมต่อยอดไปได้ในทุก ๆ เรื่อง ไม่ว่าการเข้ามหาวิทยาลัย การทำงานในอนาคต หรือทำอะไรก็ตามในชีวิตของพวกเขา

![image](https://github.com/EasykidsRobotics/EasyKids3in1/assets/66917385/ea4982af-c097-402c-a2f1-4fe42d3f4692)
![image](https://github.com/EasykidsRobotics/EasyKids3in1/assets/66917385/4caaa5ae-43b1-4eee-9088-f165cef0792f)

## **How to Install**

1. เพิ่มบอร์ด ใน Arduino IDE 
1. เพิ่ม Library 3in1EasyKidsRobot ใน Arduino IDE
1. เลือกบอร์ด 
1. เลือก Library ลงในโค้ด

## **การเพิ่มบอร์ด 3in1EasyKids(ESP32) ใน Arduino IDE**
(Windows) เลือกที่ File >>> preferences 
(Mac) เลือกที่ Arduino IDE >>> Settings... 

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/ab8fcb36-e563-4370-bf43-fc291f1e1450")

ในช่อง Additional boards managers URLS: จะนำลิงค์ข้อมูลบอร์ดลงไปใส่

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/7d5f8ea0-6864-40d6-b10d-e8a0b444fc1b")

กรอกข้อมูลของบอร์ด 2 ลิงค์ได้แก่

* Official ESP32 package: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

* Bluepad32 package: https://raw.githubusercontent.com/ricardoquesada/esp32-arduino-lib-builder/master/bluepad32_files/package_esp32_bluepad32_index.json

จากนั้นกด "OK"

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/19663f57-c77d-4808-b728-1fd060c99d7a")

จากนั้นเลือกที่ BOARDS MANAGER พิมพ์คำว่า ESP32 ในช่องค้นหา จากนั้นให้กดคลิ๊ก "INSTALL" ทั้ง 2 อัน

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/8bac720b-8660-484b-8377-2f48a72cdeb9")

หลังจากที่ทำการโหลดและติดตั้งเรียบร้อยแล้ว ให้เลือกไปที่ Tools >>> Board: >>> esp32_bluepad32 >>> คลิ๊กที่ ESP32 Dev Module เป็นการเสร็จสิ้นการติดตั้งบอร์ด

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/5eb60fd2-dc1e-4d7f-8fca-49f371e46e3a")

## **การเพิ่ม Library 3in1EasyKidsRobot ใน Arduino IDE**
ขั้นตอนแรกให้ Download Library EasyKids3in1Robot จาก https://github.com/EasyKidsRobotics/EasyKids3in1Robot เก็บไว้ในเครื่องก่อน
จากนั้นให้เราเลือกที่ Sketch >>> Include Library >>> Add .ZIP Library...

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/d804a5c0-0f5b-4614-be63-1da073d1585e")

จากนั้นให้เลือกไฟล์ .ZIP ที่เรา Download มา หรืออีกหนึ่งวิธีสามารถแตกไฟล์แล้วนำไปวางใน Folder Documents >>> Arduino >>> libraries ได้เช่นกัน

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/2780c48d-3811-43ec-8f5a-37d8274bfffa")

จากนั้นให้เลือกไปที่ Sketch >>> Include Library >>> แล้วเลือก EasyKids3in1Robot
![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/eb5c7506-8281-4f8e-903e-5f3c166ed186")

## **โค้ดตัวอย่าง**
ให้เลือกไปที่ File >>> Examples >>> EasyKids3in1Robot 

![image](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/7199c15b-9255-4c65-83eb-bba9182038dc")

โดยโค้ดตัวอย่างจะมีการใช้งานต่างๆ ของหุ่นยนต์ เช่น Input Output Motor LCD RGB เป็นต้น 
