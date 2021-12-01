// Copyright (c) Jon Thysell <http://jonthysell.com>
// Licensed under the MIT License.

#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "MacCommon.h"
#include "WindowBuffer.h"
#include "GameEngine.h"
#include "Bitmaps.h"
#include "Sounds.h"
#include "Scenes.h"

#define WindowPattern  black

typedef struct sGameWindow
{
    WindowPtr        Window;
    WindowBuffer     WindowBuffer;
    GameEngine       Engine;
    Bitmaps          Bitmaps;
    Sounds           Sounds;
    SceneId          CurrentSceneId;
    TitleScene       TitleScene;
    LevelSelectScene LevelSelectScene;
    PlayScene        PlayScene;
    LevelEndScene    LevelEndScene;
    GameEndScene     GameEndScene;
} GameWindow;

void GameWindow_Init(GameWindow *pGameWindow);
void GameWindow_Draw(const GameWindow *pGameWindow, bool fullRefresh);
void GameWindow_Click(GameWindow *pGameWindow, const Point *pPosition);

void GameWindow_SetScene(GameWindow *pGameWindow, const SceneId sceneId);
void GameWindow_Show(const GameWindow *pGameWindow);

void GameWindow_ClearScores(GameWindow *pGameWindow);

#endif
