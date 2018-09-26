FROM debian:jessie

RUN apt-get update --fix-missing && apt-get install -y wget bzip2 ca-certificates \
    libglib2.0-0 libxext6 libsm6 libxrender1 && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

ENV PATH /opt/conda/bin:$PATH
ENV LANG C.UTF-8
ENV MINICONDA Miniconda3-latest-Linux-x86_64.sh
RUN echo 'export PATH=/opt/conda/bin:$PATH' > /etc/profile.d/conda.sh && \
    wget --quiet https://repo.continuum.io/miniconda/$MINICONDA && \
    bash /$MINICONDA -b -p /opt/conda && \
    rm $MINICONDA && \
    conda install -y conda==4.2.12 && \
    conda update -y conda && \
    conda install -y jupyter && \
    pip install --upgrade pip && \
    pip install numpy scipy flask-googlemaps flask Werkzeug psycopg2-binary ImageHash pulp MySQL-connector-python unionfind Pillow opencv-python watson_developer_cloud && \
    rm -rf /opt/conda/pkgs/*
EXPOSE 8080
WORKDIR /src
COPY init.sh /root/
CMD ["sh", "init.sh"]
