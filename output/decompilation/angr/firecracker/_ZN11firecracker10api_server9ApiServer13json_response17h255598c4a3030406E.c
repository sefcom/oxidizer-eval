long long firecracker::api_server::ApiServer::json_response(void* a0, unsigned int a1, unsigned long long a2)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xb0]

    v1.new(1, a1);
    v0.into(a2);
    v1.set_body(&v0);
    return memcpy(a0, &v1, 144);
}
