fn uu_dd::Source::skip(a0: &u32, a1: u64, a2: i64) -> u64 {
    let v0: Option<struct8>;  // [sp-0x78], Other Possible Types: u64
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u64;  // [sp-0x28]
    let v5: u64;  // [sp-0x20]
    let v7: u32;  // eax
    let v8: u64;  // r15
    let v9: void*;  // rax
    let v10: u64;  // rdx
    let v11: u64;  // rdx

    v7 = *(a0);
    v8 = a0 + 1;
    if !v7 {
        core::result::Result<T,E>::unwrap(a1 >> 63, "src/uu/dd/src/dd.rs");
        v9 = <std::fs::File as std::io::Seek>::seek(v8, 2);
    } else if v7 != 1 {
        v2 = v8;
        v3 = a1;
        v9 = std::io::copy::generic_copy();
    } else {
        v0 = uu_dd::try_get_len_of_block_device(v8);
        if v0 as i32 == 1 && v1 < a1 {
            v4 = uucore::util_name();
            v5 = v10;
            eprint!("{:?}: ", &v4);
            eprintln!("'standard input': cannot skip: Invalid argument");
            uucore::mods::error::set_exit_code();
            return 0;
        }
        v0 = v8;
        v1 = a1;
        v9 = std::io::copy::generic_copy();
        if v9 {
            return v9;
        } else if v11 >= a1 {
            return v9;
        } else {
            v4 = uucore::util_name();
            v5 = v11;
            eprint!("{:?}: ", &v4);
            eprintln!("'standard input': cannot skip to specified offset");
            return v9;
        }
    }
    return v9;
}
