import requests
url = "http://localhost:8080/get_message"
files = {
    'file': open('audio.wav', 'rb')
}
s = requests.Session()
r = s.post(url, files=files)
print(r.text)
