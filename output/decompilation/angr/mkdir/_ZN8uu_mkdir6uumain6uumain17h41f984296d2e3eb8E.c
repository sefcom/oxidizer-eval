long long uu_mkdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x690]
    unsigned long long v1;  // [bp-0x688]
    unsigned long long v2;  // [bp-0x680]
    unsigned long long v3;  // [bp-0x678]
    unsigned long long v4;  // [bp-0x670]
    int v5;  // [bp-0x668]
    char v6;  // [bp-0x658]
    unsigned long long v7;  // [bp-0x648]
    char v8;  // [bp-0x640], Other Possible Types: unsigned long long
    char v9;  // [bp-0x638], Other Possible Types: unsigned int
    char v10;  // [bp-0x634]
    char v11;  // [bp-0x633]
    char v12;  // [bp-0x632]
    int v13;  // [bp-0x630]
    char v14;  // [bp-0x620]
    unsigned long long v15;  // [bp-0x610]
    unsigned long long v16;  // [bp-0x608]
    char v17;  // [bp-0x5f8], Other Possible Types: uint128_t
    char v18;  // [bp-0x5e0]
    unsigned long long v19;  // [bp-0x5d0]
    int v20;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v21;  // [bp-0x5c0]
    unsigned long long v22;  // [bp-0x5b8]
    unsigned int v23;  // [bp-0x5b0]
    int v24;  // [bp-0x5a8]
    unsigned long long v25;  // [bp-0x598]
    unsigned long long v26;  // [bp-0x590]
    char v27;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x2f8]
    unsigned long long v29;  // [bp-0x2f0]
    unsigned long long v30;  // [bp-0x2e8]
    char v31;  // [bp-0x2d8]
    unsigned long long v32;  // [bp-0x2c8]
    char v33;  // [bp-0x2c0]
    unsigned int v35;  // eax
    unsigned long long v37;  // r13
    char v38;  // al
    char v39;  // al
    char v40;  // al
    unsigned long long v41;  // r12
    unsigned long long v42;  // rbx

    v18.collect_lossy(a0, a1);
    v35 = uu_mkdir::strip_minus_from_mode(&v18);
    uu_mkdir::uu_app(&v20);
    v27.after_help(&v20);
    v22 = v19;
    memcpy(&v20, &v18, 16);
    v8.try_get_matches_from(&v27, &v20);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return *((long long *)&v9).from();
    v7 = v15;
    memcpy(&v6, &v14, 16);
    v5 = v13;
    v3 = v8;
    v4 = *((long long *)&v9);
    v20.try_get_many(&v3);
    v27.unwrap(&v20);
    if (v27)
    {
        v1 = v29;
        v16 = v30;
        memcpy(&v17, &v31, 16);
        v2 = v32;
        v0 = *((long long *)&v33);
        v28 = v27;
    }
    else
    {
        v17 = 0;
        v16 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v1 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v0 = 0;
        v28 = core::ops::function::FnOnce::call_once;
    }
    v37 = v28;
    v38 = v3.get_flag("verboseparentszcontextError flushing stdout: ", 7);
    v39 = v3.get_flag("parentszcontextError flushing stdout: ", 7);
    v40 = v3.get_flag("zcontextError flushing stdout: ", 1);
    v20.try_get_one(&v3);
    v41 = v20.unwrap();
    uu_mkdir::get_mode(&v27, &v3, v35);
    if (v27 == 0x8000000000000000)
    {
        v10 = v39;
        v9 = v29;
        v11 = v38;
        v12 = v40 | v41;
        v8 = v41;
        v20 = v37;
        v21 = v1;
        v22 = v16;
        *((uint128_t *)&v24) = v17;
        v25 = v2;
        v26 = v0;
        v42 = uu_mkdir::exec(&v20, &v8);
    }
    else
    {
        v22 = v30;
        *((int128_t *)&v20) = *((int128_t *)&v28);
        v23 = 1;
        v42 = v20.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
    return v42;
}
