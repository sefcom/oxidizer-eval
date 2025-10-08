long long uu_paste::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x358]
    int v2;  // [bp-0x350]
    int v3;  // [bp-0x340]
    char v4;  // [bp-0x330]
    unsigned long long v5;  // [bp-0x320]
    unsigned long long v6;  // [bp-0x318]
    int v7;  // [bp-0x310]
    int v8;  // [bp-0x300]
    unsigned long long v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2e8]
    int v11;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v12;  // [bp-0x2c8]
    char v13;  // [bp-0x2b8]
    unsigned long long v15;  // rdi
    unsigned int v16;  // eax
    unsigned long long v17[3];  // r14
    char v18;  // al
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdi

    uu_paste::uu_app(&v10);
    v0.try_get_matches_from(&v10, a0, a1);
    v15 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v6.from();
    v9 = *((long long *)&v4);
    v8 = v3;
    v7 = v2;
    v5 = v0;
    v6 = v1;
    v16 = v5.get_flag("serialdelimiterszero-terminatedError flushing stdout: ", 6);
    v10.try_get_one(&v5);
    v17 = v10.unwrap();
    if (v17)
    {
        v10.try_get_many(&v5);
        v0.unwrap(&v10);
        if (v0)
        {
            memcpy(&v13, &v4, 16);
            v12 = v3;
            v11 = v2;
            memcpy(&v10, &v0, 16);
            v0.collect(&v10);
            v18 = v5.get_flag("zero-terminatedError flushing stdout: ", 15);
            v11 = (long long)v2;
            memcpy(&v10, &v0, 16);
            v19 = uu_paste::paste(&v10, v16, v17[1], v17[2], (v18 ? 0 : 10));
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v5);
            return v19;
        }
        v20 = &g_4de248;
    }
    else
    {
        v20 = &g_4de230;
    }
    core::option::unwrap_failed(v20); /* do not return */
}
