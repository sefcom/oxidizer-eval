long long uu_numfmt::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x478], Other Possible Types: char, unsigned long long
    int v1;  // [bp-0x468]
    unsigned long long v2;  // [bp-0x450]
    unsigned long long v3;  // [bp-0x448]
    char v4;  // [bp-0x440]
    char v5;  // [bp-0x430]
    unsigned long long v6;  // [bp-0x420]
    int v7;  // [bp-0x418]
    int v8;  // [bp-0x408]
    char v9;  // [bp-0x3f8], Other Possible Types: unsigned long long
    int v10;  // [bp-0x3f0], Other Possible Types: char
    char v11;  // [bp-0x3e8]
    int v12;  // [bp-0x3e0]
    char v13;  // [bp-0x3d8]
    char v14;  // [bp-0x3d0]
    char v15;  // [bp-0x3c8]
    char v16;  // [bp-0x328]
    int v17;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    char v18;  // [bp-0x2e0]
    int v19;  // [bp-0x2d8]
    int v20;  // [bp-0x2d0]
    char v21;  // [bp-0x2c0]
    unsigned long long v23;  // rbx
    void* v24;  // rbx
    char v25;  // dl

    uu_numfmt::uu_app(&v17);
    v9.try_get_matches_from(&v17, a0, a1);
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
        return *((long long *)&v10).from();
    v6 = *((long long *)&v15);
    memcpy(&v5, &v13, 16);
    memcpy(&v4, &v11, 16);
    v2 = v9;
    v3 = *((long long *)&v10);
    uu_numfmt::parse_options(&v17, &v2);
    if (v17 == 2)
    {
        v0.call_once(&v18);
        v7 = v0;
        v8 = v1;
        v19 = v1;
        v17 = v0;
        v23 = v17.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
        return v23;
    }
    v1 = v20;
    memcpy(&v0, &v18, 16);
    memcpy(&v14, &v21, 168);
    v7 = v0;
    v10 = v0;
    v12 = v1;
    v9 = v17;
    v17.try_get_many(&v2, "NUMBERerror flushing stdout", 6);
    v16.unwrap("NUMBERerror flushing stdout", 6, &v17);
    if (*((long long *)&v16))
    {
        v24 = uu_numfmt::handle_args(&v16, &v9);
        if (v24)
        {
LABEL_4a22b7:
            v17 = std::io::stdio::stdout();
            v17.flush().expect();
        }
        else
        {
LABEL_4a22dd:
            v24 = 0;
        }
    }
    else
    {
        v0 = std::io::stdio::stdin();
        v17 = v0.lock();
        v18 = v25 & 1;
        v24 = uu_numfmt::handle_buffer(&v17, &v9);
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(v17, *((int *)&v18));
        if (!v24)
            goto LABEL_4a22dd;
        goto LABEL_4a22b7;
    }
    core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v9);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
    return v24;
}
