public TransportMain{
    public static void main(String[] args) {
        // pass in the strategy
        new TransportMain().selectTransport(new Car());
    }

    public selectTransport(TransportStrategy transportStrategy) {
        TransportContext transportContext = new TransportContext(transportStrategy);
        transportContext.useTransportStrategy();
    }
}