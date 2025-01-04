long long uu_ptx::tex_mapper::h39f03aebac219a6c(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0x4c]
    char *v1;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [sp-0x38], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x30]
    char *v5;  // [sp-0x28], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    v0 = a1;
    if ((unsigned int)(a1 - 35) < 4)
        goto LABEL_5b7d6a;
    switch ((unsigned int)a1)
    {
    case 92:
        return ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(a0, "\\backslash{}\\$\\$ {}{}", 12);
    case 95:
LABEL_5b7d6a:
        v1 = &v0;
        v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v3 = &g_6edf70;
        v4 = 1;
        break;
    case 123: case 125:
        v1 = &v0;
        v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v3 = &g_6edf80;
        v4 = 2;
        break;
    default:
        v1 = 0;
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v3, ::0x5b3e50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a1 & 4294967295, &v1), v10);
        v9 = v5;
        a0->field_10 = v9;
        a0->field_0 = *((int128_t *)&v3);
        return v9;
    }
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    v9 = ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(a0, &v3);
    return v9;
}
