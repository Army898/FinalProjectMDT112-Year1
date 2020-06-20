# Weathering with GUU

คือ เป็นอุปกรณ์ที่ใช้สำหรับคาดการว่า ในช่วงเวลา ณ ขณะนั้นมีฝนตกหรือไม่ โดยอุปกรณ์นี้จะนำค่าความชื้นของอากาศรอบ ๆ ตัวอุปกรณ์มาตรวจสอบว่าช่วงเวลานั้นฝนจะตกหรือไม่พร้อมแสดงค่าตัวเลขอุณหภูมิ,ความชื้น และข้อความบอกกับเราว่าสภาพอากาศเป็นอย่างไรบนหน้าจอแสดงผลและจะคอยแจ้งเตือนเราเป็นแสงไฟ 3 ระดับคือ
1.สีแดง ฝนจะตกแล้ว 2.สีน้ำเงิน อาจมีฝนตกได้ 3.สีเขียว สภาพอากาศปกติ และเมื่อฝนตกลงใส่อุปกรณ์จะมีเสียงดังออกมาเพื่อแจ้งเตือนผู้ใช้ให้ตื่นตัวกับฝนที่กำลังตกลงมา

## ที่มาและความสำคัญ

ทุกวันนี้การจะซักผ้าหรือตากผ้าแต่ล่ะครั้งจำเป็นจะต้องทราบและคาดการถึงสภาพอากาศในช่วงเวลา ณ ขณะนั้นว่าท้องฟ้าเป็นใจหรือไม่ บางครั้งคนเราไม่มีกางเกงในจะใส่เพียงเพราะลืมเก็บผ้าแล้วฝนก็ตกใส่กางเกงในจนเปียกโชกไม่เว้นแม้แต่เสื้อผ้าของเรา ในวันดวงซวยวันนั้นพวกเราทำได้แค่ย้ายผ้าเปียก ๆ จากระเบียงมาตากในบ้านหรือหอพักของเรา นอกจากนี้แล้วมันจะทำให้เสื้อผ้าของเรามีกลิ่นอับที่น่าอบอวน สิ่งที่เราทำได้มีเพียง รอให้ฝนหยุดตกแล้วจึงนำไปตากใหม่หรือไม่ก็ต้องนำเสื้อผ้าไปซักและนำมาตากใหม่อีกครั้ง และปัญหานี้ทำให้พ่อบ้าน/แม่บ้านหลานคนต้องหัวเสียไปตาม ๆ กัน จะดีกว่าไหมถ้าเราสามารถเดาสภาพอากาศล่วงหน้าได้เองอย่าง REAL TIME

ด้วยเหตุนี้ อุปกรณ์ชิ้นนี้จึงเข้ามามีส่วนร่วมในชีวิตประจำวันของเราและอาจรวมไปถึงการทำงานของเราอีกด้วย เพราะอุปกรณ์ชิ้นนี้จะคอยคาดเดาพร้อมบอกกับเราว่าฝนจะตกในช่วงไหนเพื่อให้เราได้มีเวลาเตรียมรับมือกับฝนที่กำลังจะตกลงมา นอกจากนี้แล้วเมื่อฝนเริ่มตกลงมา อุปกรณ์ชิ้นนี้จะแจ้งเตือนออกมาเป็นเสียงให้เราทราบว่า มีฝนกำลังตกลงมาให้เราตื่นตัวมากยิ่งขึ้น และตัวอุปกรณ์ยังมีหน้าจอที่บอกอุณหภูมิ,ความชื้นและสภาพอากาศ ณ ขณะนั้นแบบ REAL TIME และยังมีเข็มหน้าปัดบอกถึงระดับความเสี่ยงที่ฝนจะตก เพื่อให้เราคาดเดาได้ว่าจะมีฝนตกหรือไม่นั้นเอง

## กลุ่มเป้าหมาย

- กลุ่มพ่อบ้าน/แม่บ้าน มือใหม่ที่เริ่มทำงานบ้านด้วยตัวเองและต้องการเก็บผ้าให้ทันก่อนฝนตก
- คนงานหรือช่างทำสีงานต่าง ๆ ว่าควรทำสีในช่วงเวลาไหนแล้วถึงจะเหมาะสมที่สุด 
- กลุ่มคนที่ต้องการเก็บผ้าให้ทันก่อนฝนตก

## รายละเอียดโปรเจค

### Perception Module
+ Digital Temperature & Humidity Sensor
+ Snow/Raindrops Detection Sensor
+ Passive Button

### Behavior
1. ตรวจสอบอุณหภูมิ, ความชื้นในอากาศ และหยดน้ำ ณ ขณะนั้น
2. แสดงไฟแจ้งเตือนเป็นระดับของความเสี่ยงที่ฝนจะตก
3. แสดงข้อความถึงสภาพอากาศ, อุณหภูมิและความชื้นในอากาศ ณ ขณะนั้น
4. ขยับเข็มหน้าปัดไปตามระดับสภาพอากาศ ณ ขณะนั้น
5. ส่งเสียงเมื่อมีหยดน้ำหยดลงบนตัวSensor

### Manipulation Module
+ OLED 0.91” Display I2C
+ RGB SMD LED
+ Servo Motor
+ Passive Buzzer

### โครงสร้างพื้นฐาน
![diagram picture][diagram]

[diagram]: https://github.com/Army898/FinalProjectMDT112-Year1/blob/master/diagram.png

### ระบบการทำงาน
![Flowc hart picture][Flow chart]

[Flow chart]:https://github.com/Army898/FinalProjectMDT112-Year1/blob/master/Flow%20chart.png
