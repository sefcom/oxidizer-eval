long long uu_join::State::initialize(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    int v2;  // [bp-0x98]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    int v6;  // [bp-0x68]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x40]
    int v10;  // [bp-0x38]
    char v11;  // [bp-0x28]

    v8.read_line(a0, a1);
    if (v8 == 9223372036854775809)
        return 1;
    memcpy(&v3, &v11, 16);
    v2 = v10;
    v0 = v8;
    v1 = v9;
    if (v8 == 0x8000000000000000)
    {
        v0.drop_in_place<core::option::Option<uu_join::Line>>();
LABEL_4a5917:
    }
    else
    {
        memcpy(&v7, &v3, 16);
        v6 = v2;
        v4 = v0;
        v5 = v1;
        a0.push(&v4, &g_593ad8);
        if (!a2)
            goto LABEL_4a5917;
        if (!a0->field_10)
            core::panicking::panic_bounds_check(0, 0, &g_593af0); /* do not return */
    }
    return 0;
}
