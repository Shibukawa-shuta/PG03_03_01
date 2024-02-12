#include "GameManeger.h"
#include <Novice.h>

const char kWindowTitle[] = "LE2D_12_シブカワ_シュウタ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	// char keys[256] = { 0 };
	// char preKeys[256] = { 0 };

	GameManeger* gameManeger_ = new GameManeger();
	gameManeger_->Run();
}
