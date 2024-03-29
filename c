FROM python:3.7.3-stretch

WORKDIR /app
COPY . .

RUN pip install -r requirements.txt

EXPOSE 8000

ENTRYPOINT ["python"]
CMD ["app.py"]

CMD ["python","--bind","0.0.0.0:8000","app:test"]
RUN bash make_prediction.sh


