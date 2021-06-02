def bubble_sort(thesequence):
   for i in range(thesequence-1):
       for j in range(len(thesequence)-1):
           if thesequence[j]>thesequence[j+1]:
               thesequence[j],thesequence[j+1]=thesequence[j+1],thesequence[j]
    return thesequence
  
