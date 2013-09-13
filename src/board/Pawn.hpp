#ifndef PawnChessPiece_HeaderPlusPlus
#define PawnChessPiece_HeaderPlusPlus

#include "Board.hpp"

namespace chesspp
{
    namespace board
    {
        class Pawn : public Piece
        {
            bool en_passant = false;
            util::Direction facing;

        public:
            Pawn(Board &b, Position_t const &pos, Suit const &s, util::Direction const &face);
            virtual ~Pawn() = default;

            virtual config::BoardConfig::Textures_t::mapped_type::mapped_type const &texture() const override;

            virtual void tick(Position_t const &p) override;

        protected:
            virtual void calcTrajectory() override;
        };
    }
}

#endif
