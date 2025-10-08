long long uu_od::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4b8]
    unsigned long long v1;  // [bp-0x4b0]
    unsigned long long v2;  // [bp-0x4a8]
    unsigned long long v3;  // [bp-0x4a0]
    unsigned long long v4;  // [bp-0x498]
    unsigned long long v5;  // [bp-0x490]
    int v6;  // [bp-0x488]
    int v7;  // [bp-0x478]
    unsigned long long v8;  // [bp-0x470]
    int v9;  // [bp-0x468]
    unsigned long long v10;  // [bp-0x460]
    int v11;  // [bp-0x458]
    unsigned long long v12;  // [bp-0x450]
    int v13;  // [bp-0x448]
    char v14;  // [bp-0x440]
    char v15;  // [bp-0x43f]
    int v16;  // [bp-0x438]
    unsigned long long v17;  // [bp-0x430]
    unsigned long long v18;  // [bp-0x428]
    char *v19;  // [bp-0x420]
    unsigned long long v20;  // [bp-0x418]
    uint128_t v21;  // [bp-0x410]
    char v22;  // [bp-0x400]
    unsigned long long v23;  // [bp-0x3f8]
    unsigned long long v24;  // [bp-0x3f0]
    char v25;  // [bp-0x3e8]
    char v26;  // [bp-0x3d8]
    unsigned long long v27;  // [bp-0x3c8]
    char v28;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x3b8]
    char v30;  // [bp-0x3b0]
    unsigned long long v31;  // [bp-0x388]
    unsigned long long v32;  // [bp-0x380]
    unsigned long long v33;  // [bp-0x378]
    char v34;  // [bp-0x370]
    char v35;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x360]
    char v37;  // [bp-0x358], Other Possible Types: unsigned long long
    char v38;  // [bp-0x350]
    char v39;  // [bp-0x348]
    char v40;  // [bp-0x340]
    unsigned long long v41;  // [bp-0x338]
    int v42;  // [bp-0x330]
    int v43;  // [bp-0x320]
    char v44;  // [bp-0x310]
    char v45;  // [bp-0x2e0]
    unsigned long long v47;  // rbx
    int v48;  // xmm0
    int v49;  // xmm1
    unsigned long long v50;  // rbx

    v0.collect_ignore(a0, a1);
    uu_od::uu_app(&v45);
    v35.try_get_matches_from(&v45, v1, v2);
    if ((char)(((0 ^ v35) & (0 ^ -(v35))) >> 63))
    {
        v47 = v24.from();
    }
    else
    {
        v27 = v41;
        memcpy(&v26, &v39, 16);
        memcpy(&v25, &v37, 16);
        v23 = v35;
        v24 = v36;
        v35.new(&v23, v1, v2);
        v47 = v36;
        if (v35 == 2)
        {
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
        }
        else
        {
            *((int128_t *)&v13) = *((int128_t *)&v44);
            v48 = *((int128_t *)&v38);
            v49 = *((int128_t *)&v40);
            v11 = v43;
            v9 = v42;
            v7 = v49;
            v6 = v48;
            v3 = v35;
            v4 = v47;
            v5 = v37;
            v34 = (char)(&v13)[10];
            v33 = v12;
            v31 = v5;
            v32 = (long long)v6;
            uu_od::open_input_peek_reader(&v35, (long long)v7, v8, v12, v35, v4);
            v50 = (long long)v13;
            v28.from_elem(v50 + 4);
            v19 = &v35;
            *((int128_t *)&v16) = *((int128_t *)&v28);
            v18 = *((long long *)&v30);
            v20 = 4;
            v21 = 0;
            v22 = v15;
            v28.new(v50, v10, (long long)v11, v14);
            v47 = uu_od::odfunc(&v31, &(char)v16, &v28);
            core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(v28, v29);
            core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>>((long long)v16, v17);
            core::ptr::drop_in_place<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(&v35);
            core::ptr::drop_in_place<uu_od::OdOptions>(&v3);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return v47;
}
