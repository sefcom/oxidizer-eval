long long uu_cat::write_nonprint_to_end::he83ef31cc0d3cb6f(char *a0, char *a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: char, unsigned short
    char v1;  // [sp-0x3f]
    char v2;  // [sp-0x3e]
    char v3;  // [sp-0x3d]
    char *v5;  // rbx
    char *v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // 4096
    unsigned long long v9;  // 4096
    unsigned long long v10;  // 4096
    unsigned long long v14;  // rdx
    unsigned long long v20;  // rax

    if (!a1)
        return 0;
    v5 = 0;
    while (true)
    {
        v7 = *((char *)(a0 + v5));
        if ((unsigned int)v7 == 9)
            goto LABEL_486898;
        if ((unsigned int)v7 == 127)
            goto LABEL_486898;
        if ((unsigned int)v7 == 10)
            return v6;
        if ((v7 & 255) < 32)
        {
            v0 = 94;
            v1 = (char)v7 | 64;
            v14 = 2;
            goto LABEL_486890;
        }
        if ((v7 - 32 & 255) < 95)
        {
            v0 = v7;
            v14 = 1;
            goto LABEL_486890;
        }
        if ((char)v7 < 160)
        {
            v0 = 11597;
            v2 = 94;
            v3 = (char)v7 - 64;
            v14 = 4;
            goto LABEL_486890;
        }
        else if ((v7 + 96 & 255) >= 95)
        {
LABEL_486898:
            v20 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(v8, v9, v10);
            if (v20)
            {
                v0 = v20;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            v5 += 1;
            if (a1 == v5)
                return v6;
        }
        else
        {
            v0 = 11597;
            v2 = (char)v7 & 127;
            v14 = 3;
LABEL_486890:
            goto LABEL_486898;
        }
    }
}
