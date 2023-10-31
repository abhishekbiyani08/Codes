#!/usr/bin/env python
# coding: utf-8

# In[1]:


get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib.pyplot as plt
from sklearn.datasets import load_digits


# In[2]:


digits = load_digits()


# In[6]:


digits.target_names


# In[7]:


dir(digits)


# In[8]:


digits.data[9]


# In[9]:


plt.gray()
plt.matshow(digits.images[9])


# In[10]:


plt.gray()
for i in range(3):
    plt.matshow(digits.images[i])


# In[18]:


from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(digits.data, digits.target,test_size = 0.2)
len(X_train)


# In[17]:


len(X_test)


# In[20]:


from sklearn.linear_model import LogisticRegression
model = LogisticRegression()


# In[22]:


model.fit(X_train,y_train)     


# In[23]:


model.score(X_test,y_test)


# In[24]:


plt.matshow(digits.images[1000])


# In[25]:


digits.target[1000]


# In[26]:


model.predict([digits.data[1000]])


# In[28]:


model.predict(digits.data[500:510])


# In[ ]:




