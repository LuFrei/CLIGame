#pragma once
#include <Windows.h>
#include <string>
#include <map>
#include <vector>
#include "CORE/Vector2.h"
#include "MapData.h"

class TileMap {
private:
    std::vector<CHAR_INFO> _map;
    CLGEngine::CORE::Vector2<int> _offset;
public:
    int width, height;
    TileMap(MapData data);
    wchar_t GetTile(CLGEngine::CORE::Vector2<float> coords);
    void SetMap(MapData map);
};