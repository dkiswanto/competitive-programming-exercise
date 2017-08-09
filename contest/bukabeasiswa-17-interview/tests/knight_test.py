import unittest

from component.knight import Knight


class KnightTest(unittest.TestCase):
    knight = Knight('BLACK')

    def test_move(self):
        init_x, init_y = 2, 3
        self.assertTrue(self.knight.validate_move(init_x, init_y, 1, 1, [])) # can move to 1, 1
        self.assertTrue(self.knight.validate_move(init_x, init_y, 0, 2, [])) # can move to 0, 2
        self.assertFalse(self.knight.validate_move(init_x, init_y, 1, 4, [])) # can't move to 1, 4

if __name__ == '__main__':
    unittest.main()
