long long uu_ptx::tex_mapper::heb4546a92a4ddf55(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0x4c]
    unsigned int v1;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [sp-0x38], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x30]
    unsigned long v5;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    v0 = a1;
    if ((unsigned int)(a1 - 35) < 4)
        goto LABEL_5b785a;
    switch ((unsigned int)a1)
    {
    case 92:
        return ::0x5b3f20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd078b50c69433b57(a0, "\\backslash{}\\$\\$ {}{}", 12);
    case 95:
LABEL_5b785a:
        v1 = &v0;
        v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v3 = &g_6ee838;
        v4 = 1;
        break;
    case 123: case 125:
        v1 = &v0;
        v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v3 = &g_6ee848;
        v4 = 2;
        break;
    default:
        v1 = 0;
        ::0x5b3f20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd078b50c69433b57(&v3, ::0x5b38d0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a1 & 4294967295, &v1), v10);
        v9 = v5;
        a0->field_10 = v9;
        a0->field_0 = *((int128_t *)&v3);
        return v9;
    }
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    v9 = ::0x5b3b90::core::option::Option$LT$T$GT$::map_or_else::h2b6b835b61421c58(a0, &v3);
    return v9;
}
