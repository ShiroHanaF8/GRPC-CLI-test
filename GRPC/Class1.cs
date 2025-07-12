using MessagePack;

namespace GRPC
{
    public class Class1
    {
        public int Value()
        {
            return new Random((int)DateTime.Now.Ticks).Next();
        }

        public MessagePack.MessagePackType GetMessagePackType()
        {
            return MessagePack.MessagePackType.Integer;
        }
    }
}
