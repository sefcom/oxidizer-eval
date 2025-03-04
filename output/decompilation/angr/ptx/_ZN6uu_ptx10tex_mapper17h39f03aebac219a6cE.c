long long uu_ptx::tex_mapper::h39f03aebac219a6c(struct_0 *a0, unsigned long a1)
{
    unsigned int v0;  // [sp-0x4c]
    unsigned int v1;  // [bp-0x48]
    char *v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    char v5;  // [bp-0x38]
    unsigned long long v6;  // [sp-0x30]
    char *v7;  // [sp-0x28], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x20]
    void* v9;  // [sp-0x18]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx

    v0 = a1;
    if ((unsigned int)(a1 - 35) < 4)
        goto LABEL_5b7d6a;
    switch ((unsigned int)a1)
    {
    case 92:
        return ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(a0, "\\backslash{}\\$\\$ {}{}", 12);
    case 95:
LABEL_5b7d6a:
        v2 = &v0;
        v3 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v4 = &g_6edf70;
        v6 = 1;
        break;
    case 123: case 125:
        v2 = &v0;
        v3 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
        v4 = &g_6edf80;
        v6 = 2;
        break;
    default:
        v1 = 0;
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v5, ::0x5b3e50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a1 & 4294967295, &v1), v12);
        v11 = v7;
        a0->field_10 = v11;
        a0->field_0 = *((int128_t *)&v4);
        return v11;
    }
    v9 = 0;
    v7 = &v1;
    v8 = 1;
    v11 = ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(a0, &v5);
    return v11;
}
