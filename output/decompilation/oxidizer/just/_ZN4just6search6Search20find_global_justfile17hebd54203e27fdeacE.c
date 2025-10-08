fn just::search::Search::find_global_justfile(a0: i64) -> int {
    let v0: struct9;  // [bp-0x170]
    let v1: u128;  // [bp-0x170]
    let v2: i64;  // [bp-0x160]
    let v3: struct16;  // [bp-0x158]
    let v4: struct128;  // [bp-0x140]
    let v5: u192;  // [bp-0x140]
    let v6: alloc::string::String;  // [bp-0x138]
    let v7: alloc::string::String;  // [bp-0x130]
    let v8: u128;  // [bp-0x128]
    let v9: struct80;  // [bp-0x120]
    let v10: Option<struct1>;  // [bp-0x118]
    let v11: struct24;  // [bp-0x108]
    let v12: struct80;  // [bp-0x100]
    let v13: Option<struct40>;  // [bp-0xe8], Other Possible Types: u128
    let v14: struct81;  // [bp-0xd8]
    let v15: struct81;  // [bp-0xd0]
    let v16: struct81;  // [bp-0xc8]
    let v17: struct80;  // [bp-0xc0]
    let v18: struct80;  // [bp-0xb8]
    let v19: iNone;  // [bp-0xb0]
    let v20: struct24;  // [bp-0xa0]
    let v21: struct32;  // [bp-0x98]
    let v22: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x78], Other Possible Types: u64
    let v23: struct80;  // [bp-0x70]
    let v24: struct80;  // [bp-0x68]
    let v25: struct24;  // [bp-0x60]
    let v26: struct24;  // [bp-0x50]
    let v27: struct24;  // [bp-0x48]
    let v29: alloc::string::String;  // rsi
    let v31: u64;  // [bp-0x168]
    let v32: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x148], Other Possible Types: struct24, struct32

    just::search::Search::global_justfile_paths(&v22);
    v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v22);
    v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
    if !((((0 ^ v13 as i64) & (0 ^ -(v13 as i64))) >> 63) as char) {
        do {
            v10 = v14;
            v8 = v13;
            v0 = std::fs::read_dir(v29);
            if v31 as i8 != 2 {
                v3 = v1;
                loop {
                    v22 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v3);
                    if let None = v22 {
                        break;
                    }
                    if !v23 {
                        v32 = just::search::Search::find_global_justfile::{{closure}}(v9, v10, v24);
                        v27 = v5;
                        *((v2 + 24) as &alloc::string::String) = v7;
                        *((v2 + 8) as &u128) = v27.field_0;
                        *(v2 as &u64) = v32.field_0;
                        return;
                    }
                    v20 = v26;
                    v19 = v25;
                    v17 = v23;
                    v18 = v24;
                    v11 = std::fs::DirEntry::file_name(&v17);
                    v32 = core::str::converts::from_utf8(v12, v11.field_16);
                    if let Ok(_) = v32 {
                        if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v4, v6, v15, v16) as u8 {
                            v32 = std::fs::DirEntry::path(&v17);
                            *((v2 + 24) as &alloc::string::String) = v6;
                            *((v2 + 8) as &u128) = v32.field_0;
                            *(v2 as &i64) = 9223372036854775814;
                            return;
                        }
                    }
                }
            }
            v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
        } while (v13 as i64 != 0x8000000000000000);
    }
    *(v2 as &i64) = 9223372036854775809;
    return;
}
