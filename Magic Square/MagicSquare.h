#ifndef MAGIC_SQUARE_INCLUDED
#define MAGIC_SQUARE_INCLUDED

class MagicSquare{

    private:

        int sizeOfSquare;
        int **square;

    public:

        MagicSquare(int);
        void generate();
        void printSelf();

};

#endif