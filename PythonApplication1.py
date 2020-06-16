
class Donkey:

    def __init__(self, name, g, years):
        self.name= name
        self.g= g
        self.years = years

    def __str__(self):
        return f"Donkey-boy {self.name},{self.g}"


    def cry(self):
        i=self.years
        s=""
        while i!=0:
            s+="Eeyore"
            i-=1
        return print(s)

    def work_hard(self, amount):
        i=0
        if amount<0:
               self.years+=2
        else:
            while amount!=0:
                amount-=1
                i+=1
                if i==5 and self.years!=0:
                    self.years-=1
                    i=0
          
    def carry(self, load):
        return(load<=self.g)