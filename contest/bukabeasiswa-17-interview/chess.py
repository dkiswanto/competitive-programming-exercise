from component.base import WHITE, BLACK
from component.bishop import Bishop
from component.king import King
from component.knight import Knight
from component.pawn import Pawn
from component.queen import Queen
from component.rook import Rook

KNIGHT, QUEEN, KING, PAWN = 'knight', 'queen', 'king', 'pawn'
MAX = 7

# must be different between black and white
# every bidak can eat another
# must eat with different color
# validate position
# gak boleh melewati


class Chess:

    def __init__(self):

        self.board = [
            [Rook(WHITE), Knight(WHITE), Bishop(WHITE), Queen(WHITE), King(WHITE), Bishop(WHITE), Knight(WHITE), Rook(WHITE)],
            [Pawn(WHITE), Pawn(WHITE), Pawn(WHITE), Pawn(WHITE), Pawn(WHITE), Pawn(WHITE), Pawn(WHITE), Pawn(WHITE)],
            [None, None, None, None, None, None, None, None],
            [None, None, None, None, None, None, None, None],
            [None, None, None, None, None, None, None, None],
            [None, None, None, None, None, None, None, None],
            [Pawn(BLACK), Pawn(BLACK), Pawn(BLACK), Pawn(BLACK), Pawn(BLACK), Pawn(BLACK), Pawn(BLACK), Pawn(BLACK)],
            [Rook(BLACK), Knight(BLACK), Bishop(BLACK), Queen(BLACK), King(BLACK), Bishop(BLACK), Knight(BLACK), Rook(BLACK)],
        ]

    def print_board(self):
        for row in self.board:
            print(row)

    def move(self, init_x, init_y, x, y, color):
        current = self.board[init_x][init_y]

        # don't move anything
        if current is None:
            return False

        # move another player element
        if current.color != color:
            return False

        # debug
        print('GET ELEMENT {}{}'.format(current.name, current.color))

        valid = current.validate_move(init_x, init_y, x, y, self.board)
        if valid:
            # check if eat something
            dest = self.board[x][y]
            if dest is not None:    # hey it eat something

                # dont eat if same color
                if dest.color != current.color:
                    self.board[x][y] = current  # eat it
                    self.board[init_x][init_y] = None   # empty state
                else:
                    # invalid, can't eat same color
                    return False

            # don't eat something
            else:
                self.board[x][y] = current  # eat it
                self.board[init_x][init_y] = None  # empty state
        else:
            return False
