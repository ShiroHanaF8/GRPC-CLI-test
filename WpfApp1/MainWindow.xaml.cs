using GRPC;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Rand_Click(object sender, RoutedEventArgs e)
        {
            Class1 class1 = new Class1();
            Output.Text = "Random Value: ";
            Output.Text += class1.Value().ToString();
        }

        private void KeyCertPair_Click(object sender, RoutedEventArgs e)
        {
            Class1 class1 = new Class1();
            Output.Text = "Key Certificate Pair: ";
            Output.Text += class1.GetKeyCertificatePair().ToString();
        }

        private void MessagePackattribute_Click(object sender, RoutedEventArgs e)
        {
            Class1 class1 = new Class1();
            Output.Text = "MessagePack Formatter Attribute: ";
            Output.Text += class1.GetMessagePackFormatterAttribute().ToString();
        }
    }
}