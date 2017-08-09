from component.base import Base, PAWN


class Pawn(Base):
    def __init__(self, color):
        super().__init__(PAWN, color)
        self.first_move = True

    def validate_move(self, init_x, init_y, x, y, board):
        diff_x = abs(init_x - x)
        diff_y = abs(init_y - y)

        if diff_x < 0:  # cant backward:
            return False
        if diff_y == 1 and diff_x == 1: # face an enemies
            if board[x][y] is not None:
                return True
            else:
                return False

        if self.first_move:
            if diff_x <= 2:
                self.first_move = False
                return True
            else:
                return False
        else:
            if diff_x == 1:
                return True
            else:
                return False
