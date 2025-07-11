namespace GRPC
{
    public class Class1
    {
        public int Value()
        {
            return new Random((int)DateTime.Now.Ticks).Next();
        }

        public Grpc.Core.KeyCertificatePair GetKeyCertificatePair()
        {
            return new Grpc.Core.KeyCertificatePair(
                "-----BEGIN CERTIFICATE-----\n" +
                "MIIDXTCCAkWgAwIBAgIJAL5k1Z3b4z2wMA0GCSqGSIb3DQEBCwUAMEUxCzAJBgNV\n" +
                "BAYTAlVTMRMwEQYDVQQIEwpDYWxpZm9ybmlhMRAwDgYDVQQHEwdTYW4gSm9zZTET\n" +
                "MBEGA1UEChMKVGVzdCBDb21wYW55MB4XDTIxMDYyMjA5MDAwMFoXDTMxMDYyMjA5\n" +
                "MDAwMFowRTELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3JuaWExEDAOBgNV\n",
                "BAcTB1NhbiBKb3NlMRMwEQYDVQQKEwpUZXN0IENvbXBhbnkwggEiMA0GCSqGSIb3\n" +
                "DQEBAQUAA4IBDwAwggEKAoIBAQCy7d8f8+6v7d8f8+6v7d8f8+6v7d8f8+6v7d8f\n"
                );
        }
    }
}
