fn uu_dd::Source::skip(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x79]
    let v1: struct16;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: struct16;  // [bp-0x68]
    let v4: u64;  // [bp-0x28]
    let v5: u64;  // [bp-0x20]
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v11: u64;  // rdx
    let v12: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v13: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v14: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v7 = a0 + 4;
    if !*(a0 as &i32) {
        core::result::Result<T,E>::unwrap(a1 >> 63, "src/uu/dd/src/dd.rs");
        v13 = <std::fs::File as std::io::Seek>::seek(v7, 2, a1);
    } else if *(a0 as &i32) == 1 {
        v1 = uu_dd::try_get_len_of_block_device(v7);
        if v1.field_0 as i32 == 1 && v2 < a1 {
            v4 = uucore::util_name();
            v5 = v9;
            eprint!("{}: ", &v4);
            eprintln!("'standard input': cannot skip: Invalid argument");
            uucore::mods::error::set_exit_code(1);
            return 0;
        }
        v1 = struct16 {
            field_0: v7
            field_8: a1
        };
        v12 = std::io::copy::generic_copy(&v1, &v0);
        if v12 as i64 {
            return v12 as i64;
        } else if *((&v12 as &char + 8) as &i64) >= a1 {
            return v12 as i64;
        } else {
            v4 = uucore::util_name();
            v5 = v11;
            eprint!("{}: ", &v4);
            eprintln!("'standard input': cannot skip to specified offset");
            return 0;
        }
    } else {
        v3 = struct16 {
            field_0: v7
            field_8: a1
        };
        v14 = std::io::copy::generic_copy(&v3, &v0);
    }
    return v8;
}
