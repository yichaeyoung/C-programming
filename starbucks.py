pip install openai

My_OpenAI_key = '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'

import openai
openai.api_key = My_OpenAI_key
completion = openai.Completion()

def get_answer(prompt):
  model_engine = "text-davinci-003"
  max_tokens = 2048

  completion = openai.Completion.create(
      engine=model_engine,
      prompt=prompt,
      max_tokens=max_tokens,
      temperature=0.8
  )
  answer = completion.choices[0].text
  answer = answer.strip("\n")

  return answer
  
  prompt = "이번주 로또번호 찝어줘"
get_answer(prompt)
