FROM python:3.7.3-stretch

RUN mkdir /app
ADD . .

WORKDIR /app
COPY . .

RUN pip install -r requirements.txt

EXPOSE 8000

ENTRYPOINT ["python"]
CMD ["app.py"]


