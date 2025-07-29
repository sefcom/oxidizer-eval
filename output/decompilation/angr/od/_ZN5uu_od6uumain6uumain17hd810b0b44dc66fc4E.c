long long uu_od::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4b0]
    unsigned long long v1;  // [bp-0x4a8]
    unsigned long long v2;  // [bp-0x498]
    unsigned long long v3;  // [bp-0x490]
    unsigned long long v4;  // [bp-0x488]
    int v5;  // [bp-0x480]
    int v6;  // [bp-0x470]
    unsigned long long v7;  // [bp-0x468]
    int v8;  // [bp-0x460]
    unsigned long long v9;  // [bp-0x458]
    int v10;  // [bp-0x450]
    unsigned long long v11;  // [bp-0x448]
    int v12;  // [bp-0x440]
    char v13;  // [bp-0x438]
    char v14;  // [bp-0x437]
    unsigned long long v15;  // [bp-0x430]
    unsigned long long v16;  // [bp-0x428]
    char v17;  // [bp-0x420]
    char v18;  // [bp-0x410]
    unsigned long long v19;  // [bp-0x400]
    unsigned long long v20;  // [bp-0x3f8]
    unsigned long long v21;  // [bp-0x3f0]
    unsigned long long v22;  // [bp-0x3e8]
    char v23;  // [bp-0x3e0]
    int v24;  // [bp-0x3d8]
    unsigned long long v25;  // [bp-0x3c8]
    char *v26;  // [bp-0x3c0]
    unsigned long long v27;  // [bp-0x3b8]
    uint128_t v28;  // [bp-0x3b0]
    char v29;  // [bp-0x3a0]
    char v30;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0x390]
    char v32;  // [bp-0x388], Other Possible Types: unsigned long long
    char v33;  // [bp-0x380]
    char v34;  // [bp-0x378]
    char v35;  // [bp-0x370]
    unsigned long long v36;  // [bp-0x368]
    int v37;  // [bp-0x360]
    int v38;  // [bp-0x350]
    char v39;  // [bp-0x340]
    int v40;  // [bp-0x310], Other Possible Types: char
    char v41;  // [bp-0x300]
    char v42;  // [bp-0x2d8]
    unsigned long long v44;  // rbx
    int v45;  // xmm0
    int v46;  // xmm1

    v0.collect_ignore(a0, a1);
    uu_od::uu_app(&v42);
    v30.try_get_matches_from(&v42, &v0);
    if ((char)(((0 ^ v30) & (0 ^ -(v30))) >> 63))
    {
        v44 = v16.from();
    }
    else
    {
        v19 = v36;
        memcpy(&v18, &v34, 16);
        memcpy(&v17, &v32, 16);
        v15 = v30;
        v16 = v31;
        v30.new(&v15, v1);
        v44 = v31;
        if (v30 == 2)
        {
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
        }
        else
        {
            *((int128_t *)&v12) = *((int128_t *)&v39);
            v45 = *((int128_t *)&v33);
            v46 = *((int128_t *)&v35);
            v10 = v38;
            v8 = v37;
            v6 = v46;
            v5 = v45;
            v2 = v30;
            v3 = v44;
            v4 = v32;
            v23 = (char)(&v12)[10];
            v22 = v11;
            v20 = v4;
            v21 = (long long)v5;
            uu_od::open_input_peek_reader(&v30, (long long)v6, v7, v11, v30, v3);
            v40.from_elem((long long)v12 + 4);
            v26 = &v30;
            v24 = v40;
            v25 = *((long long *)&v41);
            v27 = 4;
            v28 = 0;
            v29 = v14;
            v40.new((long long)v12, v9, (long long)v10, v13);
            v44 = uu_od::odfunc(&v20, &v24, &v40);
            core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(&v40);
            core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>>(&v24);
            core::ptr::drop_in_place<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(&v30);
            core::ptr::drop_in_place<uu_od::OdOptions>(&v2);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
        }
    }
    ::0x4a8b50::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return v44;
}
