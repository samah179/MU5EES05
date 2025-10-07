def maxim(T):
    """Retourne le maximum d'un tableau"""
    max_val = T[0]
    for x in T:
        if x > max_val:
            max_val = x
    return max_val

def minim(T):
    """Retourne le minimum d'un tableau"""
    min_val = T[0]
    for x in T:
        if x < min_val:
            min_val = x
    return min_val

def variance(T):
    """Retourne la variance d'un tableau"""
    n = len(T)
    moy = sum(T) / n
    var = sum((x - moy) ** 2 for x in T) / n
    return var
