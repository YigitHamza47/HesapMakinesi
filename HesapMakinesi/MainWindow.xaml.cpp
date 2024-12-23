#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::HesapMakinesi::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    double ilkSayiV, ikinciSayiV, cevapV;

    void MainWindow::convertions() {

        ilkSayiV = stod(to_string(ilkSayi().Text()));
        ikinciSayiV = stod(to_string(ikinciSayi().Text()));
    }

    void MainWindow::topla(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        convertions();
        cevapV = ilkSayiV + ikinciSayiV;
        cevap().Text(L"Cevap: " + to_hstring(cevapV));
    }
    void MainWindow::cikar(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        convertions();
        cevapV = ilkSayiV - ikinciSayiV;
        cevap().Text(L"Cevap: " + to_hstring(cevapV));
    }
    void MainWindow::carp(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        convertions();
        cevapV = ilkSayiV * ikinciSayiV;
        cevap().Text(L"Cevap: " + to_hstring(cevapV));
    }
    void MainWindow::bol(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        convertions();
        cevapV = ilkSayiV / ikinciSayiV;
        cevap().Text(L"Cevap: " + to_hstring(cevapV));
    }
}
