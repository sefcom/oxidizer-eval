long long fish::env::environment_impl::EnvNodeRef::new(char a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    void* v3;  // [bp-0x60]
    int v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    void* v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    char v10;  // [bp-0x18]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx

    v0 = a1;
    v12 = std::thread::local::LocalKey<T>::with();
    v1 = 1;
    v2 = 1;
    v3 = 0;
    *((uint128_t *)&v4) = g_14bd810;
    *((uint128_t *)&v5) = g_14bd820;
    v6 = v12;
    v7 = v13;
    v8 = 0;
    v9 = a1;
    v10 = a0;
    return v1.new();
}
