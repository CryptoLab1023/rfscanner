from watson_developer_cloud import SpeechToTextV1
from os.path import join, dirname
import json

def isVoice(audioFile):

    speech_to_text = SpeechToTextV1(
        username="",
        password=""
        )

    speech_recognition_results = speech_to_text.recognize(
        audio=audioFile,
        content_type='audio/wav',
        timestamps=True,
        word_alternatives_threshold=0.9,
        keywords=['colorado', 'tornado', 'tornadoes'],
        keywords_threshold=0.5).get_result()

    print(json.dumps(speech_recognition_results, indent=2))
