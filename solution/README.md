# Part 1 :

  1) sudo docker run infracloudio/csvserver:latest   /  sudo docker run --name server infracloudio/csvserver:latest
  2) Its failed with ERROR: No such file or directory.
     while reading the file "/csvserver/inputdata": open /csvserver/inputdata: no such file or directory
  3) Written a bash script gencsv.sh and a C program to generate a file name inputFile whose contents looks like:
     0, 234
     1, 98
  4) docker cp inputFile server:/csvserver/inputdata
  5) docker restart server
  	 docker stop server
  	 docker ps -a
  	 Port: 9300
  6)sudo docker run -d -p "9393:9300" -e CSVSERVER_BORDER="Orange" -v ${PWD}/inputFile:/csvserver/inputdata --name server infracloudio/csvserver:latest

    Now, the application is accessible on the host at http://localhost:9393

    




