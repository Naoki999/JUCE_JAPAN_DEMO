/*
  ==============================================================================

    ParametricEQ.h
    Created: 27 Sep 2016 1:51:16am
    Author:  COx2

  ==============================================================================
*/

// �@二重インクルード防止のためのプリプロセッサ（自動生成）
#ifndef PARAMETRICEQ_H_INCLUDED			//"PARAMETRICEQ_H_INCLUDED"がdefine定義されていなければ、以下の処理を実行
#define PARAMETRICEQ_H_INCLUDED			//"PARAMETRICEQ_H_INCLUDED"をdefine定義する

// �Aクラス名宣言
class ParametricEQ {
public:								// �B変数・関数のアクセス権をPublicに指定する宣言
	ParametricEQ();					// �Cコンストラクタ
	~ParametricEQ();				// �Dデストラクタ
	void SetParameter(float samplerate, float freq, float bw, float gain);	// �Eフィルタのパラメータを変更する関数
	void DoProcess(float* bufferPtr, int bufferSize);						// �Fデジタルフィルタを適用する関数

private:
	float a0, a1, a2, b0, b1, b2;						// �G伝達関数のパラメータを保持する変数
	float in1, in2;										// �Hフィルタ計算用の一時保存変数（入力側遅延器）
	float out1, out2;									// �Hフィルタ計算用の一時保存変数（出力側遅延器）
};

// �@二重インクルード防止のためのプリプロセッサ（自動生成）
#endif  // PARAMETRICEQ_H_INCLUDED
