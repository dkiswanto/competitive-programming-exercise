from component.base import Base, KNIGHT


class Knight(Base):
    def __init__(self, color):
        super().__init__(KNIGHT, color)
        self.first_move = True

    def validate_move(self, init_x, init_y, x, y, board):
        diff_x = abs(init_x - x)
        diff_y = abs(init_y - y)

        if diff_x == 1 and diff_y == 2:
            return True
        elif diff_x == 2 and diff_y == 1:
            return True
        else:
            return False
