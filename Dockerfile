FROM gcc:latest

    COPY . /usr/src/DCLLG
    
    WORKDIR /usr/src/DCLLG

    RUN apt-get update \
            && apt-get install cmake -y \
            && mkdir build \
            && cd build \
            && cmake .. \
            && make

    CMD ["./build/main"]

