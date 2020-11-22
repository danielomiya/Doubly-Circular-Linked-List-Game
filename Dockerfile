FROM gcc:latest

    COPY . /usr/src/DCLLG
    
    WORKDIR /usr/src/DCLLG

    RUN g++ -o DCLLG main.cpp

    CMD ["./DCLLG"]

