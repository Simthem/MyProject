import  unittest

class   Test(unittest.TestCase):
    def test_first(self):
        self.assertEqual(
                lemonade_change([5,5,5,10,20]),
                True
            ),
    def test_second(self):
        self.assertEqual(
                lemonade_change([5,5,10]),
                True
            ),
    def test_fourth(self):
        self.assertEqual(
                lemonade_change([10,10]),
                False
            ),
    def test_fifth(self):
        self.assertEqual(
                lemonade_change([5,5,10,10,20]),
                False
            ),
    def test_sixth(self):
        self.assertEqual(
                lemonade_change([6]),
                False
            ),

def     lemonade_change(arr):
    paid_5 = 0;
    paid_10 = 0;

    for pay in arr:
        if pay == 5:
            paid_5 += 1;
        if pay == 10:
            if paid_5 > 0:
                paid_10 += 1;
                paid_5 -= 1;
            else:
                return False;
        if pay == 20:
            if paid_5 >= 1 and paid_10 >= 1:
                paid_5 -= 1;
                paid_10 -= 1;
            elif paid_5 >= 3:
                paid_5 -= 3;
            else:
                return False;
        if pay != 5 and pay != 10 and pay != 20:
            return False;
    return True;

if __name__ == "__main__":
    unittest.main();
