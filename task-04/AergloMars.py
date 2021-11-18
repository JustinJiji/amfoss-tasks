import json
import webbrowser
import requests
import argparse


parser = argparse.ArgumentParser(
    description='Fetch Images'
)
parser.add_argument(
    'date',
    help='Enter date(YYYY-MM-DD)'
)
parser.add_argument(
    'id',
    help='Enter ID'
)
args=parser.parse_args()
    
apiKey='oXTSdq6hPBB0GsAwFc1UvPRuYj6foewfOcwjUbxg'
Date = args.date
url = "https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date="+Date+"&api_key="+apiKey

r = requests.get(url)
data = json.loads(r.text)

flag=0
ID = int(args.id)
for photos in data['photos']:
    if photos['id']==ID:
        webbrowser.open(photos['img_src']) 
        flag=1   
        break
if(flag==0):
    print(url)