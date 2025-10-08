long long fish::env::environment::EnvStack::snapshot(unsigned long long a0)
{
    char v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    char v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8], Other Possible Types: char
    int v4;  // [bp-0xd8]
    int v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    int v7;  // [bp-0xa8]
    int v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x88]
    int v10;  // [bp-0x78]
    int v11;  // [bp-0x68]
    int v12;  // [bp-0x58]
    int v13;  // [bp-0x48]
    int v14;  // [bp-0x38]
    int v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x18]

    v0.lock(a0);
    v3.snapshot(v0);
    v16 = v9;
    v15 = v8;
    v14 = v7;
    v13 = v6;
    v12 = v5;
    v11 = v4;
    v10 = v3;
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    v9 = v16;
    memcpy(&v8, &v15, 16);
    v7 = v14;
    memcpy(&v6, &v13, 16);
    v5 = v12;
    v4 = v11;
    v3 = v10;
    return v3.new();
}
