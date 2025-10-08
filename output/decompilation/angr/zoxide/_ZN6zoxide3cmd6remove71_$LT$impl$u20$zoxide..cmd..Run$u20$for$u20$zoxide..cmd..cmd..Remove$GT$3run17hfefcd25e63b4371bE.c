long long zoxide::cmd::remove::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Remove>::run(unsigned long long a0[3], unsigned long a1)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc8]
    char *v4;  // [bp-0xc0], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0], Other Possible Types: char
    char v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x90]
    unsigned long long v9[3];  // [bp-0x88]
    char *v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    char v14;  // [bp-0x58]
    char v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v18;  // r15
    unsigned long long v19;  // r15

    v0.open();
    if (*((int *)&v0) == 1)
        return v2;
    v16 = v8;
    memcpy(&v15, &v7, 16);
    memcpy(&v14, &v6, 16);
    memcpy(&v13, &v4, 16);
    v12 = v2;
    if (a1)
    {
        v18 = a1 * 24;
        do
        {
            v19 = v18;
            v9[0] = a0;
            if (!(char)v12.remove(a0))
            {
                zoxide::util::resolve_path(&v0, a0);
                v3 = v2;
                if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                {
                    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v12);
                    return v3;
                }
                zoxide::util::path_to_str(&v0, v2, v4);
                v3 = v2;
                if (!v1)
                {
                    core::mem::drop(v1, v2);
                    v3 = v3;
                    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v12);
                    return v3;
                }
                else if (!(char)v1.equal(v2, a0[1], a0[2]) && (char)v12.remove(v1, v2))
                {
                    core::mem::drop(v1, v2);
                }
                else
                {
                    v10 = &v9;
                    v11 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_534970;
                    v3 = 1;
                    v6 = 0;
                    v4 = &v10;
                    v5 = 1;
                    v3 = anyhow::__private::format_err(&v0);
                    core::mem::drop(v1, v2);
                    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v12);
                    return v3;
                }
            }
            a0 += 1;
            v18 = v19 - 24;
        } while (v19 != 24);
    }
    v3 = v12.save();
    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v12);
    return v3;
}
