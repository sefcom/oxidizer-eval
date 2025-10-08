long long uu_df::blocks::read_block_size(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    char *v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    char *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    void* v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    char v10;  // [bp-0x20]
    unsigned long long v12[3];  // rax
    unsigned long long v13[3];  // r14
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    if ((char)a1.contains_id("blocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 9))
    {
        v0.try_get_one(a1);
        v12 = v0.unwrap();
        if (!v12)
            core::option::unwrap_failed(&g_502e08); /* do not return */
        v13 = v12;
        uucore::features::parser::parse_size::parse_size_u64(&v0, v12[1], v12[2]);
        if (v0 != 4)
        {
            a0->field_10 = *((int128_t *)&v2);
            a0->field_0 = v0;
            a0->field_8 = v1;
            return v1;
        }
        else if (!v1)
        {
            v7 = 0;
            v8 = v13[1];
            v9 = v13[2];
            v10 = 1;
            v5 = &v7;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_419280;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v14 = a0->field_8.map_or_else(&v0);
            a0->field_0 = 1;
            return v14;
        }
        goto LABEL_46ac64;
    }
    else
    {
        if (!(char)a1.get_flag("portabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 11))
        {
            v1 = uu_df::blocks::block_size_from_env();
            if (!((char)v1 & 1))
                goto LABEL_46ac5e;
            a0->field_8 = v15;
        }
        else
        {
LABEL_46ac5e:
            v1 = <uu_df::blocks::BlockSize as core::default::Default>::default();
LABEL_46ac64:
            a0->field_8 = v1;
        }
        a0->field_0 = 4;
        return v1;
    }
}
