long long starship::modules::golang::parse_go_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned short v8;  // [bp-0x18]
    unsigned long long v10;  // rax

    core::str::<impl str>::split_once(&v0, a1, a2, "go version go(?:go\\s)(\\d+(\\.\\d+)+)Error in module `gradle`:\nsrc/modules/gradle.rs");
    if (*((long long *)&v0))
    {
        v7.into_searcher(v1, v2);
        v5 = 0;
        v6 = v2;
        v8 = 1;
        v10 = v5.try_fold();
        if (v10)
        {
            v3.to_vec(v10, a2);
            *((unsigned long *)&a0[16]) = v4;
            *(a0) = v3;
            return v4;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
