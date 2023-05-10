#include<ESP8266WiFi.h>

//WiFi参数
const char* ssid="Cute ShyShy";
const char* password="Rs1991021..";

void setup()
 {
  Serial.begin(115200);//设置串口号波特率
  WiFi.begin(ssid,password);//连接WiFi
  while (WiFi.status()!=WL_CONNECTED)//等待WiFi连接成功
  {
      //连接失败时等待500ms，并且通过串口打印等待连接WiFi
      delay(500);
      Serial.print("等待连接WiFi");//自己更改的这样比较清楚---原视频是打印一个点
  }
  //连接成功执行
  Serial.println("WiFi连接成功");//连接成功提示
  Serial.print("WiFi connectaed:");//先显示前面的名称这里是不带回车的---这里和原视频不一样先不回车和后面获取到IP地址结合显示出来更好看
  Serial.println(WiFi.localIP());//获取连接后的IP地址并且打印出来（带回车）
  //print是不带回车的，println是带回车的有区别的
}

void loop()
 {
  // put your main code here, to run repeatedly:

}