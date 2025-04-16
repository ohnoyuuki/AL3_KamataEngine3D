#include "GameScene.h"

using namespace KamataEngine;

// 初期化
void GameScene::Initialize() 
{
	textureHandle_ = TextureManager::Load("uvChecker.png");

	model_ = KamataEngine::Model::Create();

	worldTransform_.Initialize();

	camera_.Initialize();

	}
// 更新
void GameScene::Update() 
{


	

}
// 描画
void GameScene::Draw() 
{
	/*KamataEngine::Sprite::PreDraw(KamataEngine::DirectXCommon::GetInstance()->GetCommandList());

	sprite_->Draw();
	
	KamataEngine::Sprite::PostDraw();*/

	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	Model::PreDraw(dxCommon->GetCommandList());

	model_->Draw(worldTransform_, camera_, textureHandle_);

	Model::PostDraw();

	/*KamataEngine::Model::PreDraw(KamataEngine::DirectXCommon::GetInstance()->GetCommandList());
	
	model_->Draw(worldTransform_, debugCamera_->GetCamera(), textureHandle_);
	KamataEngine::Model::PostDraw();*/
}

// デストラクタ
GameScene::~GameScene() 
{
	delete model_;

	//delete sprite_;


}
