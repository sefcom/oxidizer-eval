long long uu_numfmt::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x458], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x448]
    unsigned long long v2;  // [bp-0x440]
    unsigned long long v3;  // [bp-0x438]
    int v4;  // [bp-0x430]
    char v5;  // [bp-0x420]
    unsigned long long v6;  // [bp-0x410]
    int v7;  // [bp-0x408], Other Possible Types: char
    unsigned long long v8;  // [bp-0x3f8]
    char v9;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x3e8]
    int v11;  // [bp-0x3e0]
    char v12;  // [bp-0x3d0], Other Possible Types: unsigned long long
    char v13;  // [bp-0x3c8]
    char v14;  // [bp-0x3c0]
    int v15[16][4];  // [bp-0x320]
    char v16;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v17;  // [bp-0x2d8], Other Possible Types: char
    char v18;  // [bp-0x2d0]
    unsigned long long v19;  // [bp-0x2c8]
    unsigned long long v20;  // [bp-0x2c0]
    char v21;  // [bp-0x2b8]
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rax
    void* v25;  // rax
    char v26;  // dl

    uu_numfmt::uu_app(&v16);
    v9.try_get_matches_from(&v16, a0, a1);
    v23 = v10;
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
        return v3.from();
    v6 = *((long long *)&v14);
    memcpy(&v5, &v12, 16);
    v4 = v11;
    v2 = v9;
    v3 = v10;
    uu_numfmt::parse_options(&v16, &v2);
    if (v16 == 2)
    {
        memcpy(&v7, &v17, 16);
        v8 = v19;
        v19 = v8;
        *((int128_t *)&v17) = *((int128_t *)&v17);
        v16 = 1;
        v24 = v16.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
        return v24;
    }
    memcpy(&v0, &v18, 16);
    v1 = v20;
    memcpy(&v13, &v21, 168);
    v7 = v0;
    v11 = v7;
    v12 = v1;
    v9 = v16;
    v10 = (long long)v17;
    v16.try_get_many(&v2);
    v15.unwrap(&v16);
    if ((long long)v15[0])
    {
        v25 = uu_numfmt::handle_args(&v15, &v9);
        if (v25)
        {
LABEL_463ac0:
            v16 = std::io::stdio::stdout();
            v16.flush().expect();
        }
        else
        {
LABEL_463ae6:
            v25 = 0;
        }
    }
    else
    {
        v0 = std::io::stdio::stdin();
        v16 = v0.lock();
        v17 = v26 & 1;
        v25 = uu_numfmt::handle_buffer(&v16, &v9);
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, (int)v17);
        if (!v25)
            goto LABEL_463ae6;
        goto LABEL_463ac0;
    }
    core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v9);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
    return v25;
}
