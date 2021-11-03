#HERITAGE 
class Vehicle(object):
    def honk(self):
        print('Honk honk')

class Car(Vehicle):
    def accelerate(self):
        print('Vrooom')

honda = Car()
honda.honk()
honda.accelerate()
