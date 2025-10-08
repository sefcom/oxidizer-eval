long long firecracker::api_server::request::mmds::parse_get_mmds(void* *a0)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v2;  // rax

    g_7c46d0.add(1);
    v0 = 12;
    v2 = a0 + 1.new_sync(&v0);
    *(a0) = 0;
    return v2;
}
