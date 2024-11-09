class User:
    id = ""
    username = ""

    def __init__(self, id, username):
        self.id = id
        self.username = username

    def showAttributes(self):
        print(self.id)
        print(self.username)

#----M A I N -----#

user1 = User("001", "Dann")
user1.showAttributes()

