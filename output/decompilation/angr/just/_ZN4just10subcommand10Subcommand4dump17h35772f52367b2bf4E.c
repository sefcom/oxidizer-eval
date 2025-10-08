void just::subcommand::Subcommand::dump(struct_0 *a0, char a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [sp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40], Other Possible Types: unsigned long long
    int v4;  // [bp-0x38], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x30]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v9;  // rax

    if ((a1 & 1))
    {
        v0 = a2.root_ast();
        v6 = &v0;
        v7 = <&T as core::fmt::Display>::fmt;
        v1 = &g_465db0;
        v2 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_print(&v1);
    }
    else
    {
        v9 = serde_json::ser::to_writer(std::io::stdio::stdout(), a2);
        if (v9)
        {
            a0->field_0 = 18;
            a0->field_8 = v9;
            core::ptr::drop_in_place<just::compilation::Compilation>(a2);
            return;
        }
        v1 = &g_82dbf8;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        std::io::stdio::_print(&v1);
    }
    a0->field_0 = 56;
    core::ptr::drop_in_place<just::compilation::Compilation>(a2);
    return;
}
