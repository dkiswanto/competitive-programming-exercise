from component.base import Base, QUEEN


class Queen(Base):
    def __init__(self, color):
        super().__init__(QUEEN, color)

    @staticmethod
    def validate_move(init_x, init_y, x, y, board):

        # diagonal condition bishop-like
        diff = abs(init_x - init_y)
        if abs(x-y) != diff:
            # bishop can't step aside
            for i in range(1, diff+1):
                if board[init_x+i][init_y+i] is not None:
                    return False
            return True

        # vertical/horizontal condition (rook like)
        elif init_x == x:
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

