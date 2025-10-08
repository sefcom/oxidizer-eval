long long uu_pathchk::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x401]
    void* v1;  // [bp-0x400]
    unsigned long long v2;  // [bp-0x3f8]
    void* v3;  // [bp-0x3f0]
    int v4;  // [bp-0x3e8], Other Possible Types: char
    unsigned long long v5;  // [bp-0x3e0]
    int v6;  // [bp-0x3d8]
    int v7;  // [bp-0x3c8], Other Possible Types: char
    char v8;  // [bp-0x3b8]
    unsigned long long v9;  // [bp-0x3a0]
    unsigned long long v10;  // [bp-0x398]
    int v11;  // [bp-0x390]
    char v12;  // [bp-0x380]
    unsigned long long v13;  // [bp-0x370]
    int v14;  // [bp-0x368]
    unsigned long long v15;  // [bp-0x358]
    int v16;  // [bp-0x350]
    unsigned long long v17;  // [bp-0x340]
    int v18;  // [bp-0x338], Other Possible Types: char
    int v19;  // [bp-0x328]
    int v20;  // [bp-0x318]
    char v21;  // [bp-0x308]
    void* v22;  // [bp-0x2f8], Other Possible Types: char
    unsigned long v23;  // [bp-0x2f0]
    unsigned long long v24;  // [bp-0x2e8]
    unsigned int v25;  // [bp-0x2e0]
    unsigned short v26;  // [bp-0x2b8]
    char v28;  // al
    char v29;  // r14b
    char v31;  // r14b
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    char v35;  // al
    unsigned long long v36;  // rax

    uu_pathchk::uu_app(&v22);
    v4.try_get_matches_from(&v22, a0, a1);
    if ((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63))
        return v10.from();
    v13 = *((long long *)&v8);
    memcpy(&v12, &v7, 16);
    v11 = v6;
    v9 = *((long long *)&v4);
    v10 = v5;
    v28 = v9.get_flag("posixposix-specialportability", 5);
    v29 = v9.get_flag("posix-specialportability", 13);
    *((int *)&v0) = (!v28 ? ((char)v9.get_flag("portability", 11) ? 3 : v29 * 2) : (v29 ? 3 : (char)v9.get_flag("portability", 11) * 2 + 1));
    v22.try_get_many(&v9);
    v18.unwrap(&v22);
    if (!*((long long *)&v18))
    {
        v4.to_vec("missing operandposixposix-specialportability", 15);
        v24 = (long long)v6;
        memcpy(&v22, &v4, 16);
        v25 = 1;
        v36 = v22.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
        return v36;
    }
    memcpy(&v8, &v21, 16);
    v7 = v20;
    v6 = v19;
    v4 = v18;
    v31 = 1;
    while (true)
    {
        v32 = v4.next();
        if (!v32)
            break;
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v24.into_searcher(v32[1], v32[2]);
        v22 = 0;
        v23 = v32[2];
        v26 = 1;
        while (true)
        {
            v33 = v22.next();
            if (!v33)
                break;
            v16.to_vec(v33, v34);
            v15 = v17;
            v14 = v16;
            v1.push(&v14);
        }
        v35 = (unsigned int)uu_pathchk::check_path(&v0, 8, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
        v31 &= v35;
    }
    if (!(v31 & 1))
        uucore::mods::error::set_exit_code(1);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return 0;
}
