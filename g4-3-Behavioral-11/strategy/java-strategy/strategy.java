public interface TransportStrategy{
    void selectTransport();
}



class Bus implements TransportStrategy{
    @override
    public void selectTransport() {
        System.out.println("By bus");
}


class Car implements TransportStrategy{
    @override
    public void selectTransport() {
        System.out.println("By car");
}


class Taxi implements TransportStrategy{
    @override
    public void selectTransport() {
        System.out.println("By taxi");
}

