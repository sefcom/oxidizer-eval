long long uu_df::blocks::read_block_size(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    char *v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    void* v4;  // [bp-0x68]
    char *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    void* v7;  // [bp-0x48]
    unsigned long v8;  // [bp-0x40]
    unsigned long v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    unsigned long long v12[3];  // rax
    unsigned long long v13[3];  // r14
    unsigned long v14;  // rdx

    if ((char)a1.contains_id(_ZN5uu_df13OPT_BLOCKSIZE17h6ad1e384b7ca5861E, g_59cad8))
    {
        v0.try_get_one(a1, _ZN5uu_df13OPT_BLOCKSIZE17h6ad1e384b7ca5861E, g_59cad8);
        v12 = _ZN5uu_df13OPT_BLOCKSIZE17h6ad1e384b7ca5861E.unwrap(g_59cad8, &v0);
        if (!v12)
            core::option::unwrap_failed(&g_59cec8); /* do not return */
        v13 = v12;
        uucore::features::parser::parse_size::parse_size_u64(&v0, v12[1], v12[2]);
        if (v0 != 4)
        {
            a0->field_10 = *((int128_t *)&v2);
            a0->field_0 = v0;
            a0->field_8 = v1;
            return a0;
        }
        else if (!v1)
        {
            v7 = 0;
            v8 = v13[1];
            v9 = v13[2];
            v10 = 1;
            v5 = &v7;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_4152c0;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            a0->field_8.map_or_else(&v0);
            a0->field_0 = 1;
            return a0;
        }
        goto LABEL_4bdf48;
    }
    else
    {
        if (!(char)a1.get_flag(_ZN5uu_df15OPT_PORTABILITY17h1102b19ba461646cE, g_59cb18) && uu_df::blocks::block_size_from_env() == 1)
        {
            a0->field_8 = v14;
        }
        else
        {
            v1 = <uu_df::blocks::BlockSize as core::default::Default>::default();
LABEL_4bdf48:
            a0->field_8 = v1;
        }
        a0->field_0 = 4;
        return a0;
    }
}
