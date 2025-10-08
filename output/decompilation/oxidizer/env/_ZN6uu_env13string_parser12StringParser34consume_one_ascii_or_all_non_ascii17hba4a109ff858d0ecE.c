fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: i64, a1: i64) -> u64 {
    let v0: Option<struct17>;  // [bp-0x78]
    let v1: struct16;  // [bp-0x78]
    let v2: struct40;  // [bp-0x70]
    let v3: struct41;  // [bp-0x68]
    let v4: i64;  // [bp-0x60]
    let v5: struct24;  // [bp-0x58]
    let v7: struct25;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: u8;  // [bp-0x48]
    let v11: i32;  // [bp-0x44]
    let v12: struct21;  // [bp-0x40]
    let v13: u8;  // [bp-0x38]
    let v14: u32;  // [bp-0x37]
    let v15: Result<(), Error>;  // [bp-0x34]

    v0 = 0;
    v2 = 8;
    v3 = 0;
    do {
        vvar_180{stack -88} = struct25 OrderedDict([(0, 𝜙@64b [((4659356, None), vvar_143{stack -88}), ((4659368, None), vvar_143{stack -88}), ((4659152, None), None)]), (8, 𝜙@64b [((4659356, None), vvar_145{stack -80}), ((4659368, None), vvar_145{stack -80}), ((4659152, None), None)]), (16, 𝜙@8b [((4659356, None), vvar_146{stack -72}), ((4659368, None), vvar_146{stack -72}), ((4659152, None), None)]), (17, 𝜙@24b [((4659356, None), vvar_147{stack -71}), ((4659368, None), vvar_147{stack -71}), ((4659152, None), None)])])
        uu_env::string_parser::StringParser::consume_chunk(&v7, a1);
        if v7.field_0 as i32 == 1 {
            *((v4 + 8) as &u64) = v8;
            *((v4 + 16) as &u8) = v9;
            *(v4 as &i64) = 0x8000000000000000;
            return v4;
        }
        v15 = v11;
        v14 = *(&(&v7.field_16)[1] as &i32);
        v12 = v8;
        v13 = v9;
        if v8 {
            v1 = alloc::vec::Vec<T,A>::push(&v12);
        } else {
            v1 = alloc::vec::Vec<T,A>::push(&v12);
            if *(&v13 as &i32) < 128 {
                break;
            }
            continue;
        }
        v5 = uu_env::string_parser::StringParser::peek_chunk(a1);
    } while (v5.field_0 as i32 == 1 && (v8 || *((&v5.field_8 as &char + 8) as &i32) > 127));
    *((v4 + 16) as &i64) = 0;
    *(v4 as &i128) = *(&v1.field_0 as &i128);
    return a0;
}
