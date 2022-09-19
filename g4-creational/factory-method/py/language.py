class Greek:
    def __init__(self):
        self.trans = dict(dog="aaa", cat="bbb")

    def get(self, msgid):
        return self.trans.get(msgid, str(msgid))


class English:
    def get(self, msgid):
        return str(msgid)


def get_localizer(language="English"):
    """The factory method"""
    languages = dict(English=English, Greek=Greek)
    return languages[language]()


# Create our localizers
e, g = get_localizer(language="English"), get_localizer(language="Greek")
# Localize some text
for msgid in "dog parrot cat bear".split():
    print(e.get(msgid), g.get(msgid))
