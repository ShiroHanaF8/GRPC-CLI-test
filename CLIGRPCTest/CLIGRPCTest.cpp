// CLIGRPCTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "WrapperClass.h"

int main()
{
    std::cout << "Hello World!\n";

    while(true)
    {
		std::wcout << "1: Rand int 2: GRPC KeyCertPair 3: Message Pack attribute\n";
        const wchar_t input = std::wcin.get(); // ユーザーがEnterキーを押すまで待機
        switch (input) {
        case '1':
            std::wcout << "Rand:";
            std::wcout << WrapperClass::WrapperFunction1() << "\n";
            break;
		case '2':
            std::wcout << "GRPC KeyCertPair: ";
            std::wcout << WrapperClass::WrapperFunction2() << "\n";
            break;
		case '3':
            std::wcout << "Message Pack attribute: ";
            std::wcout << WrapperClass::WrapperFunction3() << "\n";
            break;
        case 'e':
            return 0;
            break;
        }
        std::wcout << "Press input...\n";
	}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
