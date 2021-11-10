cd ~/Desktop
mkdir Coordinates-Location
cd Coordinates-Location
mkdir North 
cd North
echo 9° > NDegree.txt
echo 5’ > NMinutes.txt
echo 38.1″ > NSeconds.txt
cat NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinate.txt
cp NorthCoordinate.txt /home/justin/Desktop/Coordinates-Location/North.txt
rm NorthCoordinate.txt
cd ..
mkdir East
cd East
echo 76° > EDegree.txt
echo 29' > EMinutes.txt
echo 30.8" > ESeconds.txt
cat EDegree.txt EMinutes.txt ESeconds.txt > EastCoordinate.txt
cp EastCoordinate.txt /home/justin/Desktop/Coordinates-Location/East.txt
rm EastCoordinate.txt
cd ..
cat North.txt East.txt > Location-Coordinate.txt
cd ..
mv Coordinates-Location/ /home/justin/Desktop/amfoss-tasks/task-2/
cd amfoss-tasks
git add .
git commit -m "Intial commit"
git push
