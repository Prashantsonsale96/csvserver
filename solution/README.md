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

    
# Part 2:

  1)Deleted containers by docker rm command
  2)Written docker-compose.yaml file.
  3)and able to run the application by docker-compose up command.
   Linux terminal O/P
   prashant@prashant-E6420:~/Assignment/csvserver$ sudo docker-compose up
   Starting csvserver_server_1 ... done
   Attaching to csvserver_server_1
   server_1  | 2020/11/27 04:13:00 listening on ****


# Part 3:
  1)Added Prometheus container (prom/prometheus:v2.22.0) to the docker-compose.yaml form part II.
  2)configured prometheus.yml
  3)sudo docker-compose up
   Linux terminal O/P :
   Starting csvserver_prometheus_1 ... done
   Starting csvserver_server_1     ... done
   Attaching to csvserver_prometheus_1, csvserver_server_1
   

