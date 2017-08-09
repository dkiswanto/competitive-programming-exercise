# WHITE, BLACK = 'white', 'black'
# ROOK, KNIGHT, BISHOP, QUEEN, KING, PAWN = \
#     'rook', 'knight', 'bishop', 'queen', 'king', 'pawn'

WHITE, BLACK = 'WH', 'BL'
ROOK, KNIGHT, BISHOP, QUEEN, KING, PAWN = \
    'RK', 'KN', 'BS', 'QN', 'KG', 'PW'

MAX = 7

class Base:
    def __init__(self, name, color):
        self.name = name
        self.color = color

    def __repr__(self):
        return "{}-{}".format(self.name, self.color)
