#ifndef IGAME_H
#define IGAME_H


class IGame
{
    public:
        IGame() {}
        virtual ~IGame() {}
        virtual bool onTurn(IPlayer player);
    protected:
    private:
};

#endif // IGAME_H
