long long uu_cat::write_nonprint_to_end::hdc218db947567585(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    char v0;  // [sp-0x4c], Other Possible Types: unsigned short
    char v1;  // [sp-0x4b]
    char v2;  // [sp-0x4a]
    char v3;  // [sp-0x49]
    unsigned long v4;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x38]
    char *v7;  // rax
    void* v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // 4096
    unsigned long long v11;  // 4096
    unsigned long long v12;  // 4096
    unsigned long long v16;  // rdx

    v4 = a0;
    v5 = a1 + a0;
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4afc93e8ed5a0ea4(&v4);
    v8 = 0;
    if (!v7)
        return 0;
    while (true)
    {
        v9 = *(v7);
        if ((unsigned int)v9 == 9)
            goto LABEL_4b12ef;
        if ((unsigned int)v9 == 127)
            goto LABEL_4b12ef;
        if ((unsigned int)v9 == 10)
            return v8;
        if ((v9 & 255) < 32)
        {
            v0 = 94;
            v1 = (char)v9 | 64;
            v16 = 2;
            goto LABEL_4b13a0;
        }
        if ((v9 - 32 & 255) < 95)
        {
            v0 = v9;
            v16 = 1;
            goto LABEL_4b13a0;
        }
        if ((char)v9 < 160)
        {
            v0 = 11597;
            v2 = 94;
            v3 = (char)v9 - 64;
            v16 = 4;
            goto LABEL_4b13a0;
        }
        else if ((v9 + 96 & 255) >= 95)
        {
LABEL_4b12ef:
            core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(v10, v11, v12), &g_519250);
            v8 += 1;
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4afc93e8ed5a0ea4(&v4);
            if (!v7)
                return v8;
        }
        else
        {
            v0 = 11597;
            v2 = (char)v9 & 127;
            v16 = 3;
LABEL_4b13a0:
            goto LABEL_4b12ef;
        }
    }
}
