long long uu_groups::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x4f8]
    unsigned long long v1;  // [bp-0x4f0]
    unsigned long long v2;  // [bp-0x4f0]
    char *v3;  // [bp-0x4e8]
    unsigned long long v4;  // [bp-0x4e8]
    unsigned long long v5;  // [bp-0x4e0]
    void* v6;  // [bp-0x4d8]
    unsigned long long v7;  // [bp-0x4c8]
    unsigned long long v8;  // [bp-0x4c0]
    unsigned long long v9;  // [bp-0x4b8]
    unsigned long long v10;  // [bp-0x4a8]
    int v11;  // [bp-0x4a8]
    unsigned long long v12;  // [bp-0x4a0]
    char *v13;  // [bp-0x498]
    char *v14;  // [bp-0x488]
    int v15;  // [bp-0x488]
    unsigned long long v16;  // [bp-0x480]
    char *v17;  // [bp-0x478], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x470]
    void* v19;  // [bp-0x460]
    int v20;  // [bp-0x458], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x450], Other Possible Types: unsigned long
    char v22;  // [bp-0x448]
    int v23;  // [bp-0x448]
    unsigned long long v24;  // [bp-0x438]
    unsigned long long v25;  // [bp-0x430]
    unsigned long long v26;  // [bp-0x428]
    unsigned long long v27;  // [bp-0x420]
    int v28;  // [bp-0x418], Other Possible Types: char
    unsigned long long v29;  // [bp-0x410]
    char v30;  // [bp-0x408], Other Possible Types: unsigned long long
    int v31;  // [bp-0x3f8]
    int v32;  // [bp-0x3e8], Other Possible Types: char
    int v33;  // [bp-0x3d8]
    int v34;  // [bp-0x3c8]
    int v35;  // [bp-0x3b8]
    int v36;  // [bp-0x3a8]
    unsigned long long v37;  // [bp-0x390]
    unsigned long long v38;  // [bp-0x388]
    char v39;  // [bp-0x380]
    int v40;  // [bp-0x370]
    unsigned long long v41;  // [bp-0x360]
    char v42;  // [bp-0x358]
    int v43;  // [bp-0x338], Other Possible Types: char, unsigned long long
    void* v44;  // [bp-0x338]
    unsigned long long v45;  // [bp-0x338]
    char v46;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v47;  // [bp-0x330]
    char *v48;  // [bp-0x328], Other Possible Types: unsigned long long
    int v49;  // [bp-0x328]
    unsigned long long v50;  // [bp-0x320]
    int v51;  // [bp-0x318], Other Possible Types: void*
    int v52;  // [bp-0x308]
    int v53;  // [bp-0x2f8]
    int v54;  // [bp-0x2e8]
    int v55;  // [bp-0x2d8]
    int v56;  // [bp-0x2c8]
    char v57;  // [bp-0x70]
    int v59;  // ymm0
    uint256_t v60;  // ymm0
    int v61;  // xmm0
    uint256_t v62;  // ymm0
    char *v63;  // rbx
    char *v64;  // r14
    uint256_t v65;  // ymm0
    unsigned long long v66;  // rdx
    int v67;  // xmm0
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    unsigned long long v72;  // rdx
    void* v73;  // rbx

    uu_groups::uu_app(&v43);
    (char)v28.try_get_matches_from(&v43, a0, a1);
    if ((char)(((0 ^ *((long long *)&v28)) & (0 ^ -(*((long long *)&v28)))) >> 63))
        return v38.from();
    v41 = *((long long *)&v32);
    v60 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30);
    v40 = v31;
    memcpy(&v39, &v30, 16);
    v37 = *((long long *)&v28);
    v38 = v29;
    v43.try_get_many(&v37);
    v57.unwrap(&v43);
    if (*((long long *)&v57))
    {
        v43.collect(&v57);
        v61 = *((int128_t *)&v46);
        *((int128_t *)&v28) = *((int128_t *)&v46);
        if (v44 == 0x8000000000000000)
            goto LABEL_4553e9;
        v62 = (v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v28;
        *((int128_t *)&v20) = (int128_t)v28;
        v19 = v44;
        if (v21)
        {
            v42.into_iter(&v19);
            (char)v23.next(&v42);
            if (*((long long *)&v22) != 0x8000000000000000)
            {
                v63 = &(char)v28;
                v64 = &(char)v23;
                do
                {
                    v9 = v24;
                    v65 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
                    memcpy(&v7, &(char)v23, 16);
                    v63.locate(v8, v24);
                    if ((long long)v28 == 0x8000000000000000)
                    {
                        v17 = v9;
                        v62 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v7);
                        *((int128_t *)&v15) = *((int128_t *)&v7);
                        uucore::mods::error::set_exit_code(1);
                        v10 = uucore::util_name();
                        v12 = v66;
                        v0 = &v10;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v3 = &(unsigned long long)v15;
                        v5 = <uu_groups::GroupsError as core::fmt::Display>::fmt;
                        v45 = &g_4e17a0;
                        v46 = 3;
                        v51 = 0;
                        v48 = &v0;
                        v50 = 2;
                        std::io::stdio::_eprint(&v45);
                        core::ptr::drop_in_place<uu_groups::GroupsError>(&(unsigned long long)v15);
                        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(v63);
                    }
                    else
                    {
                        v67 = (int128_t)v36;
                        v56 = v67;
                        v68 = v35;
                        v55 = v68;
                        v69 = v34;
                        v54 = v69;
                        v70 = v33;
                        v53 = v70;
                        v71 = (int128_t)v28;
                        v52 = v32;
                        v51 = v31;
                        *((int128_t *)&v49) = *((int128_t *)&v30);
                        v43 = v71;
                        v0.belongs_to(&v43);
                        v25.collect(v1, v3 * 4 + v1);
                        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v0, v1);
                        alloc::str::join_generic_copy(&v0, v26, v27);
                        v13 = v3;
                        v62 = (((((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                        *((int128_t *)&v11) = *((int128_t *)&v0);
                        v14 = &v7;
                        v16 = <alloc::string::String as core::fmt::Display>::fmt;
                        v17 = &v10;
                        v18 = <alloc::string::String as core::fmt::Display>::fmt;
                        v0 = &g_4e1770;
                        v1 = 3;
                        v6 = 0;
                        v3 = &v14;
                        v5 = 2;
                        std::io::stdio::_print(&v0);
                        core::ptr::drop_in_place<alloc::string::String>(v10, v12);
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v25);
                        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v43);
                        core::ptr::drop_in_place<alloc::string::String>(v7, v8);
                    }
                    v64.next(&v42);
                } while (*((long long *)&v22) != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v42);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
            return 0;
        }
    }
    else
    {
LABEL_4553e9:
        v19 = 0;
        v20 = 8;
        v21 = 0;
    }
    uucore::features::entries::get_groups_gnu(&v43, 0, v72);
    if (v44 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u32>,std::io::error::Error>>(0x8000000000000000, v46);
        v43 = 0x8000000000000000;
        v73 = v43.new();
    }
    else
    {
        (char)v0.collect(v46, v46 + v48 * 4);
        alloc::str::join_generic_copy(&v43, v2, v4);
        v30 = v48;
        *((int128_t *)&v28) = *((int128_t *)&v44);
        v14 = &(char)v28;
        v16 = <alloc::string::String as core::fmt::Display>::fmt;
        v43 = &g_4e1718;
        v47 = 2;
        v51 = 0;
        v48 = &v14;
        v50 = 1;
        std::io::stdio::_print(&v43);
        core::ptr::drop_in_place<alloc::string::String>((long long)v28, v29);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v44, v46);
        v73 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
    return v73;
}
