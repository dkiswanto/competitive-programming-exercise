from component.base import Base, ROOK


class Rook(Base):
    def __init__(self, color):
        super().__init__(ROOK, color)

    @staticmethod
    def validate_move(init_x, init_y, x, y, board):

        if init_x == x:
            if init_y == y:
                return False
            else:
                # x is same, y is diff
                for move_y in range(init_y+1, y+1):
                    if board[x][move_y] is not None: # you can't step aside
                        return False
                return True

        elif init_y == y:
            if init_x == x:
                return False
            else:
                # y is same, x is diff
                for move_x in range(init_y+1, x+1):
                    if board[move_x][y] is not None:  # you can't step aside
                        return False
                return True
        else:
            return False
