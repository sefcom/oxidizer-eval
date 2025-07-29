long long metal_crusher::fun::run_in_terminal(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x28]

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    v5 = 0x8000000000000000;
    v4 = 0;
    v6 = 0;
    v7.spawn_unchecked(&v4, &v0);
    v4.expect(&v7);
    ::0x783e80::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v4);
    return 0;
}
