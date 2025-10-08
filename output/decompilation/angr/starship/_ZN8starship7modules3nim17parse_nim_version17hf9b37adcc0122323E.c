long long starship::modules::nim::parse_nim_version(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    unsigned short v3;  // [bp-0x58]
    void* v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    unsigned short v7;  // [bp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    v6.into_searcher(10, a0, a1);
    v4 = 0;
    v5 = a1;
    v7 = 0;
    v9 = v4.next_inclusive();
    if (!v9)
        return 0;
    v2.into_searcher(32, v9.call(v10), v10);
    v0 = 0;
    v1 = v10;
    v3 = 1;
    return v0.try_fold();
}
