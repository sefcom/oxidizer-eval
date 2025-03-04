fn uu_dd::Source::skip(a0: &u32, a1: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x78], Other Possible Types: struct16
    let v1: u64;  // [sp-0x70]
    let v2: struct16;  // [bp-0x68]
    let v3: u64;  // [sp-0x20]
    let v5: u32;  // eax
    let v6: u64;  // r15
    let v7: void*;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rdx

    v5 = *(a0);
    v6 = a0 + 1;
    if !v5 {
        core::result::Result<T,E>::unwrap(a1 >> 63, "src/uu/dd/src/dd.rs");
        v7 = <std::fs::File as std::io::Seek>::seek(v6, 2, a1);
    } else if v5 != 1 {
        v2 = struct16 {
            field_0: v6
            field_8: a1
        };
        v7 = std::io::copy::generic_copy(&v2);
    } else {
        v0 = uu_dd::try_get_len_of_block_device(v6);
        if v0 as i32 == 1 && v1 < a1 {
            v3 = v8;
            show_error!("'standard input': cannot skip: Invalid argument");
            uucore::mods::error::set_exit_code(1);
            return 0;
        }
        v0 = struct16 {
            field_0: v6
            field_8: a1
        };
        v7 = std::io::copy::generic_copy(&v0);
        if v7 {
            return v7;
        } else if v9 >= a1 {
            return v7;
        } else {
            v3 = v9;
            show_error!("'standard input': cannot skip to specified offset");
            return v7;
        }
    }
    return v7;
}
