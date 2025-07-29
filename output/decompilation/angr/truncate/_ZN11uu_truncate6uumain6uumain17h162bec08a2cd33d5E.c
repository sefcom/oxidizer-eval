long long uu_truncate::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x680]
    void* v1;  // [bp-0x680], Other Possible Types: unsigned long long
    int v2;  // [bp-0x678], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x670], Other Possible Types: unsigned long long
    int v4;  // [bp-0x668], Other Possible Types: char, unsigned long long
    char v5;  // [bp-0x660], Other Possible Types: unsigned int
    char v6;  // [bp-0x65c]
    unsigned long long v7;  // [bp-0x658]
    char v8;  // [bp-0x64c]
    int v9;  // [bp-0x640]
    unsigned long long v10;  // [bp-0x630]
    unsigned int v11;  // [bp-0x628]
    char v12;  // [bp-0x624]
    int v13;  // [bp-0x614]
    int v14;  // [bp-0x608]
    char v15;  // [bp-0x5f8]
    int v16;  // [bp-0x5e0], Other Possible Types: char
    unsigned long long v17;  // [bp-0x5d0]
    int v18;  // [bp-0x5c8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x5c8]
    int v20;  // [bp-0x5c0]
    int v21;  // [bp-0x5b8], Other Possible Types: unsigned long long
    unsigned int v22;  // [bp-0x5b0]
    int v23;  // [bp-0x5a8]
    char v24;  // [bp-0x598]
    int v25;  // [bp-0x2f8], Other Possible Types: char
    char v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x2d8]
    char v28;  // [bp-0x2c8]
    unsigned int v30;  // eax
    char v31;  // al
    unsigned long long v32;  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rax
    unsigned long long v35;  // rbx

    uu_truncate::uu_app(&(char)v18);
    uucore::mods::locale::get_message(&v0, "truncate-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rstruncate-error-missing-file-operandError writing clap::Errordescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 19);
    v25.after_help(&(char)v18, &v0);
    v4.try_get_matches_from(&v25, a0, a1);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return (unsigned int)uu_truncate::uumain::uumain::{{closure}}(*((long long *)&v5)).from();
    memcpy(&v12, &v6, 16);
    *((int128_t *)&v13) = *((int128_t *)&v8);
    v14 = v9;
    v10 = v4;
    v11 = v5;
    (char)v18.try_get_many(&v10, _ZN11uu_truncate7options9ARG_FILES17hd03b4d49df036de3E, g_578238);
    v25.unwrap(_ZN11uu_truncate7options9ARG_FILES17hd03b4d49df036de3E, g_578238, &(char)v18);
    if (*((long long *)&v25))
    {
        memcpy(&v24, &v28, 16);
        v23 = v27;
        *((int128_t *)&v21) = *((int128_t *)&v26);
        v18 = v25;
        v4.from_iter(&(char)v18, &g_5779d8);
        *((int128_t *)&v2) = *((int128_t *)&v5);
        v1 = v4;
        if (!v3)
            goto LABEL_497f47;
        v30 = v10.get_flag(_ZN11uu_truncate7options9IO_BLOCKS17h40f68d0c8a0e4fd5E, g_5781f8);
        v31 = v10.get_flag(_ZN11uu_truncate7options9NO_CREATE17ha4a27809c1b61a44E, g_578208);
        (char)v18.try_get_one(&v10, _ZN11uu_truncate7options9REFERENCE17h8acc3f884e5eab84E, g_578218);
        v32 = _ZN11uu_truncate7options9REFERENCE17h8acc3f884e5eab84E.unwrap(g_578218, &(char)v18);
        v33 = 0x8000000000000000;
        if (v32)
        {
            (char)v18.call_once(v32);
            v7 = v21;
            *((int128_t *)&v4) = (int128_t)v18;
        }
        else
        {
            v4 = 0x8000000000000000;
        }
        (char)v18.try_get_one(&v10, _ZN11uu_truncate7options4SIZE17h300ede78d30061d9E, g_578228);
        v34 = _ZN11uu_truncate7options4SIZE17h300ede78d30061d9E.unwrap(g_578228, &(char)v18);
        if (v34)
        {
            (char)v18.call_once(v34);
            v33 = v18;
            memcpy(&v15, &(char)v18, 16);
        }
        v26 = v7;
        memcpy(&v25, &v4, 16);
        v19 = v33;
        *((int128_t *)&v20) = *((int128_t *)&v15);
        v35 = uu_truncate::truncate(v31, v30, &v25, &v19, v2, v3);
    }
    else
    {
        v1 = 0;
        v2 = 8;
        v3 = 0;
LABEL_497f47:
        uucore::mods::locale::get_message(&v16, "truncate-error-missing-file-operandError writing clap::Errordescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 35);
        v22 = 1;
        v18 = v16;
        v21 = v17;
        v35 = (char)v18.new();
    }
    ::0x4987c0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
    return v35;
}
