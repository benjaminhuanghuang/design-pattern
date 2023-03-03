public class TransportContext {
    public TransportStrategy transportStrategy;

    public TransportContext(TransportStrategy transportStrategy) {
        this.transportStrategy = transportStrategy;
    }

    public void useTransportStrategy() {
        transportStrategy.selectTransport()
    }
}