from component.base import Base, BISHOP


class Bishop(Base):
    def __init__(self, color):
        super().__init__(BISHOP, color)

    @staticmethod
    def validate_move(init_x, init_y, x, y, board):
        diff = abs(init_x - init_y)
        if abs(x-y) == diff:
            return False
        else:
            # bishop can't step aside
            for i in range(1, diff+1):
                if board[init_x+i][init_y+i] is not None:
                    return False
            return True
