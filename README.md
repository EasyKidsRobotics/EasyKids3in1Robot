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

![IMG_2068](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/8130b79f-7d6e-41a5-a3ad-62e5738a8081)

![242159788-4caaa5ae-43b1-4eee-9088-f165cef0792f](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/9744b2ee-056d-438c-bc0d-ca359eac3376)


## **How to Install**

1. เพิ่มบอร์ด ใน Arduino IDE 
1. เพิ่ม Library 3in1EasyKidsRobot ใน Arduino IDE
1. เลือกบอร์ด 

## **การเพิ่มบอร์ด 3in1EasyKids ใน Arduino IDE**
(Windows OS) เลือกที่ File >>> preferences 

(Mac OS) เลือกที่ Arduino IDE >>> Settings... 

![Screenshot 2023-09-15 111051](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/dd8353f5-ace5-41e8-b70e-48a8405cdbff)

Copy Link Package บอร์ด 3in1EasyKids 

* 3in1EasyKids Package: https://github.com/EasyKidsRobotics/arduino-easykidsrobotics/releases/download/3.8.5/package_easykidsrobotics_index.json

![Screenshot 2023-09-15 111235](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/3b153bd6-6cb8-49cb-9bb9-1c09fb380ef0)

ใส่ลงในช่อง Additional boards managers URLS แล้วกด "OK"

![Screenshot 2023-09-15 111440](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/cfcddee7-7f79-4ed7-956d-974ff5fe78b3)

จากนั้นกด "OK"

![Screenshot 2023-09-15 111501](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/65cb4395-d57a-4765-a880-a76cd3386108)

จากนั้นเลือกไปที่ BOARDS MANAGER พิมพ์คำว่า EasyKidsRobotics ในช่องค้นหา และให้กดคลิ๊ก "INSTALL" เพื่อทำการติดตั้งและรอจนกว่าจะติดตั้งเสร็จสมบูรณ์

![Screenshot 2023-09-15 111724](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/4d9a13db-a1cc-4bd1-a99c-2243daad543f)

หลังจากทำการติดตั้งเสร็จสมบูรณ์แล้วจะมี Pop-Up ข้อความแสดงขึ้นมาว่าติดตั้งเสร็จเรียบร้อยแล้ว

![Screenshot 2023-09-15 112005](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/da5bf892-8b90-4cda-b63e-56c40f40c2f5)


หลังจากที่ทำการโหลดและติดตั้งบอร์ด 3in1EasyKids เรียบร้อยแล้ว ต่อไปจะเป็นการเลือกบอร์ด โดยให้คลิ๊กไปที่ Tools >>> Board: >>> EasyKidsRobotics >>> และเลือกที่ 3in1EasyKids 

![Screenshot 2023-09-15 112144](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/8210c916-fb4b-47e6-870b-6f0c6b97997b)


## **การเพิ่ม Library 3in1EasyKidsRobot ใน Arduino IDE**

เลือกไปที่ Sketch >>> Include Library >>> แล้วเลือก EasyKids3in1
![Screenshot 2023-09-15 112246](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/9e650eb1-cba6-461f-a7ce-8e6ce894b77d)

![Screenshot 2023-09-15 143629](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/4472cc9e-85e5-43be-a17e-75ba8e2c6b62)


## **โค้ดตัวอย่าง**
ให้เลือกไปที่ File >>> Examples >>> EasyKids3in1 

![Screenshot 2023-09-15 112332](https://github.com/EasyKidsRobotics/EasyKids3in1Robot/assets/66917385/b0d5a1a2-693d-48fb-af5b-60ba2378d3e7)


โดยโค้ดตัวอย่างจะมีการใช้งานต่างๆ ของหุ่นยนต์ เช่น Input Output Motor LCD RGB เป็นต้น  
