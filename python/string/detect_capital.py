import  unittest;

class   Test(unittest.TestCase):
    def test_first(self):
        self.assertEqual(
                detect_capital("flaG"),
                False
            ),
    def test_second(self):
        self.assertEqual(
                detect_capital("flasdfghjk"),
                True
            ),
    def test_third(self):
        self.assertEqual(
                detect_capital("USAZERTY"),
                True
            ),
    def test_fourth(self):
        self.assertEqual(
                detect_capital("F"),
                True
            ),
    def test_fifth(self):
        self.assertEqual(
                detect_capital(""),
                False
            ),
    def test_sixth(self):
        self.assertEqual(
                detect_capital("FfghYghjU"),
                False
            ),
    def test_seventh(self):
        self.assertEqual(
                detect_capital("Fazertzertyu"),
                True
            ),

def     detect_capital(str):

    if not str:
        return False;
    else:
        i = 0;
        if str[i] >= chr(65) and str[i] <= chr(90):
            if (i + 1) < len(str) and (str[i + 1] >= chr(65) and str[i + 1] <= chr(90)):
                for i in range(len(str)):
                    if not (str[i] >= chr(65) and str[i] <= chr(90)):
                        return False;
            if (i + 1) < len(str) and (str[i + 1] >= chr(97) and str[i + 1] <= chr(122)):
                for i in range(len(str)):
                    if (i + 1) < len(str) and not (str[i + 1] >= chr(97)\
                            and str[i + 1] <= chr(122)):
                        return False;
        if i == 0 and (str[i] >= chr(97) and str[i] <= chr(122)):
            for i in range(len(str)):
                if not (str[i] >= chr(97) and str[i] <= chr(122)):
                    return False;
    return True;

if __name__ == "__main__":
    unittest.main();
