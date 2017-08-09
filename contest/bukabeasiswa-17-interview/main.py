from chess import Chess
from component.base import BLACK, WHITE

if __name__ == '__main__':
    chess = Chess()
    chess.print_board()

    # white comes first
    play = WHITE

    # let the game begin
    while True:

        # get input coordinate
        init_x, init_y = map(int, input('[{}] Masukan koordinat pertama: '.format(play)).split())
        x, y = map(int, input('[{}] Masukan koordinat kedua: '.format(play)).split())

        # change the state
        valid = chess.move(init_x, init_y, x, y, play)

        # change turn
        play = BLACK if play == WHITE else WHITE

        # re-output state
        if valid != False:
            chess.print_board()
        else:
            print('INVALID MOVE')
