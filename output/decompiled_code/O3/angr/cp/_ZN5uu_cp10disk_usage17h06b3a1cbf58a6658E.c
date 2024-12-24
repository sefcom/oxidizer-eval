long long uu_cp::disk_usage::h06b3a1cbf58a6658(unsigned long a0, unsigned long a1, char a2)
{
    unsigned long v0;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xe0]
    char v2;  // [bp-0xd8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x88]
    unsigned long long v6[3];  // rax
    void* v7;  // rbx
    void* v8;  // rbx
    unsigned long long v9;  // rdx
    unsigned long long v10[3];  // r12
    unsigned long v11;  // rdx
    unsigned long long v12;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3d4fd1380a26239b(&v0);
    if (!a2)
    {
        v8 = 0;
        while (true)
        {
            std::fs::metadata::hf5abd8c4fecf91b8(&v2, v6, v12);
            if (*((int *)&v2) == 2)
                break;
            v8 += ((*((int *)&v3) & 0xf000) == 0x4000 ? 0 : *((long long *)&v4));
            v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3d4fd1380a26239b(&v0);
        }
    }
    v7 = 0;
    while (true)
    {
        v10 = v6;
        std::fs::metadata::hf5abd8c4fecf91b8(&v2, v10, v9);
        if (*((int *)&v2) == 2)
            break;
        if (((short)*((int *)&v3) & 0xf000) != 0x4000)
        {
            v7 += *((long long *)&v4);
        }
        else if (!uu_cp::disk_usage_directory::hd443ce2ef4d477c4(v10[1], v10[2]))
        {
            v7 += v11;
        }
        v6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3d4fd1380a26239b(&v0);
    }
}
