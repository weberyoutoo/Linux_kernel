# Description
#### 繳交內容
1. myfs.c
2. myfs.ko
3. 執行截圖
    - 3.1
      ```bash
      insmod myfs.ko
      ```
    - 3.2
      ```bash
      lsmod
      ```
      需看到`myfs.ko`
    - 3.3
      ```bash
      mount -t myfs loop /mnt  
      mount
      ```
      需看到 /mnt的掛載資訊如 loop on /mnt type myfs (rw)
    - 3.4
      ```bash
      echo 3 > /mnt/input/a  
      cat /mnt/input/a  
      echo 2 > /mnt/input/b  
      cat /mnt/input/b  
      cat /mnt/output/add  
      cat /mnt/output/sub  
      cat /mnt/output/add  
      cat /mnt/output/sub  
      ```
 
#### 請根據以下程式修改，達成以下功能
1. 將檔案系統的跟目錄改為下列結構
```
/--+ input (dir)
   |   |
   |   +-- a (file)
   |   +-- b (file)
   |
   + output (dir)
       |
       +-- add (file)
       +-- sub (file)
```
2. 可以透過 echo 數字 > /input/a 和 echo 數字 >/input/b 來設定a和b的值，數值大小0~255之間
3. 可以透過 cat /output/add取得a+b的值，透過cat /output/sub取得a-b的值
