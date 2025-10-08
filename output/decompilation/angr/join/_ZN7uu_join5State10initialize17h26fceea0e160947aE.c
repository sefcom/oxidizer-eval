long long uu_join::State::initialize(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x40]
    int v6;  // [bp-0x38]
    char v7;  // [bp-0x28]

    v4.read_line(a0, a1);
    if (v4 == 9223372036854775809)
        return 1;
    memcpy(&v3, &v7, 16);
    v2 = v6;
    v0 = v4;
    v1 = v5;
    if (v4 == 0x8000000000000000)
    {
        v0.drop_in_place<core::option::Option<uu_join::Line>>();
    }
    else
    {
        a0.push(&v0, &g_4fd318);
        if (!a2)
        {
            return 0;
        }
        else if (!a0->field_10)
        {
            core::panicking::panic_bounds_check(0, 0, &g_4fd330); /* do not return */
        }
    }
    return 0;
}
