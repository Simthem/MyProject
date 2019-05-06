import unittest

class Test(unittest.TestCase):
    def test_negativ(self):
        self.assertEqual(
                atoi("-42"),
                -4
            ),

    def test_max(self):
        self.assertEqual(
                atoi("123456789123456789"),
                2**31 - 1
            )

def atoi(str1):
    i = 0;
    pos_neg = 1;
    result = 0;

    while i < len(str1) and str1[i] < chr(33):
        i += 1;
    if i < len(str1) and (str1[i] == '-' or str1[i] == '+'):
        if str1[i] == '-':
            pos_neg *= -1;
        i += 1;
    if i < len(str1) and not (str1[i] >= '0' and str1[i] <= '9'):
        return (0);
    while i < len(str1) and str1[i] >= '0' and str1[i] <= '9':
        result = result * 10 + int(str1[i]);
        i += 1;
    if result * pos_neg > 2**31 - 1:
        return 2**31 - 1;
    elif result * pos_neg < -2**31:
        return -2**31;
    return result * pos_neg;
             

if __name__ == "__main__":
    unittest.main();
