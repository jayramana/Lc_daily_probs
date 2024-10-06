def areSentencesSimilar( sentence1, sentence2) :
    s1 = sentence1.split()
    s2 = sentence2.split()
    large = s1
    check = s2
    if len(s1) == len(s2):
        return s1 == s2
    if len(s1) < len(s2):
        check = s1
        large = s2

    l  = 0
    while l < min(len(s1),len(s2)):
        if s1[l] != s2[l]:
            break
        l += 1 
    ind = len(large) - 1
    r = len(check) - 1
    while r >= l and large[ind] == check[r]:
        ind -= 1
        r -= 1
    return r < l
print(areSentencesSimilar("My name is Haley", "My Haley"))