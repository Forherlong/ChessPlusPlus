#ifndef GameApllicationStateClass_HeaderPlusPlus
#define GameApllicationStateClass_HeaderPlusPlus

#include "SFML.hpp"
#include "TextureManager.hpp"
#include "gfx/Graphics.hpp"
#include "config/Configuration.hpp"
#include "config/GraphicsConfig.hpp"
#include "board/Board.hpp"
#include "factory/ClassicFactory.hpp"

#include "AppState.hpp"

namespace chesspp
{
    class Application;
    class AppStateGame : public AppState
    {
        Application *app;
        config::GraphicsConfig gfx_config;
        config::BoardConfig board_config;
        factory::ClassicFactory classic_factory;
        gfx::GraphicsHandler graphics;
        board::Board board;

        board::Piece *selected = nullptr;
        board::Board::Position_t p;

    public:
        AppStateGame(Application *app, sf::RenderWindow &display);
        virtual ~AppStateGame() = default;

        virtual void OnRender() override;

        virtual void OnMouseMoved(int x, int y) noexcept override;
        virtual void OnLButtonPressed(int x, int y) noexcept override;
        virtual void OnLButtonReleased(int x, int y) noexcept override;
    };
}

#endif
