import RequestBuilder from './requestBuilder';

describe('builder test', () => {
  it('creat request', () => {
    const requestBuilder = new RequestBuilder();
    const url = 'http://something/users';
    const method = 'GET';
    const request = requestBuilder
      .forUrl(url)
      .useMethod(method)
      .payload(null)
      .build();

    expect(request.method).toEqual(method);
    expect(request.payload).toBe(null);
    expect(request.url).toEqual(url);
  });
});