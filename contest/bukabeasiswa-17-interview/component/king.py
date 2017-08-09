from component.base import Base, KING


class King(Base):
    def __init__(self, color):
        super().__init__(KING, color)

    @staticmethod
    def validate_move(init_x, init_y, x, y, board):

        # diagonal condition bishop-like
        diff_x = abs(init_x - x)
        diff_y = abs(init_y - y)

        if diff_x > 1 or diff_y > 1:
            return False
        else:
            return True
