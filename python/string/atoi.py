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

def atoi(str):
    i = 0;
    pos_neg = 1;
    final_num = 0;
   
    while str[i] < chr(33):
        i += 1;
    if i < len(str) and (str[i] == '-' or str[i] == '+'):
        if str[i] == '-':
            pos_neg *= -1;
        i += 1;
    if i < len(str):
        if not (str[i] >= chr(48) and str[i] <= chr(57)):
            return (0);
    while i < len(str) and str[i] >= chr(48) and str[i] <= chr(57):
        final_num = final_num * 10 + int(str[i]);
        i += 1;
    if final_num * pos_neg > 2**31 - 1:
        return (2**31 - 1);
    if final_num * pos_neg < -2**31:
        return (-2**31);
    return (final_num * pos_neg);
             

if __name__ == "__main__":
    unittest.main();
