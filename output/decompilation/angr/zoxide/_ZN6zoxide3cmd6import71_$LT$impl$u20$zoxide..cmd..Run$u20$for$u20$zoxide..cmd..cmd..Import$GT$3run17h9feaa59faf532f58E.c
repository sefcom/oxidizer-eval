long long zoxide::cmd::import::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Import>::run(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v5;  // [bp-0x98]
    int v6;  // [bp-0x90]
    int v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x60]
    char v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x58]
    int v13;  // [bp-0x50]
    int v14;  // [bp-0x48]
    int v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // r12
    unsigned long long v20;  // rbx

    std::fs::read_to_string(&v9, a0);
    v3.with_context(&v9, a0->field_8, a0->field_10);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v1;
    v0 = v3;
    v1 = *((long long *)&v4);
    v2 = v5;
    v9.open();
    v18 = v10;
    if (*((int *)&v9) != 1)
    {
        v8 = *((long long *)&v16);
        v7 = v15;
        v6 = v14;
        *((int128_t *)&v4) = *((int128_t *)&v11);
        v3 = v18;
        if (a0->field_19 || !v5)
        {
            v18 = (!a0->field_18 ? zoxide::cmd::import::import_autojump(&v3, v1, v2) : zoxide::cmd::import::import_z(&v3, v1, v2)).context("import errorcould not open database for importing: invalid entry: invalid rank: invalid epoch: ", 12);
            if (!v18)
            {
                v20 = v3.save();
                core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v3);
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                return v20;
            }
        }
        else
        {
            v9 = &g_534900;
            v10 = 1;
            v12 = 8;
            *((uint128_t *)&v13) = 0;
            v18 = anyhow::__private::format_err(&v9);
        }
        core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v3);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v18;
}
