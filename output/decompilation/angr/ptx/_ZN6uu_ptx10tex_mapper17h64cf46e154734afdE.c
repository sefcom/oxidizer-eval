long long uu_ptx::tex_mapper(struct_1 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x4c]
    char *v1;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [sp-0x30]
    char *v5;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long long v10;  // rdx

    v0 = a1;
    if (a1 - 35 < 4)
        goto LABEL_5a2aca;
    switch (a1)
    {
    case 92:
        return a0.to_vec("\\backslash{}\\$\\$ {}{}", 12);
    case 95:
LABEL_5a2aca:
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = &g_73b828;
        v4 = 1;
        break;
    case 123: case 125:
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = &g_73b838;
        v4 = 2;
        break;
    default:
        v1 = 0;
        (char)v3.to_vec(::0x59f060::core::char::methods::encode_utf8_raw(a1, &v1), v10);
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v3);
        return v5;
    }
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return a0.map_or_else(&v3);
}
