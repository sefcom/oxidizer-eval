fn starship::logger::cleanup_log_files(a0: i64) -> void {
    let v0: u64;  // [bp-0x240]
    let v1: u8;  // [bp-0x238]
    let v2: u64;  // [bp-0x230]
    let v3: struct40;  // [bp-0x228]
    let v4: struct12;  // [bp-0x1f8]
    let v5: u128;  // [bp-0x1e8]
    let v6: iNone;  // [bp-0x1d8]
    let v7: u64;  // [bp-0x1c8]
    let v8: struct9;  // [bp-0x1c0]
    let v9: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x1c0]
    let v10: Result<struct176, struct16>;  // [bp-0x1c0], Other Possible Types: struct20, struct24
    let v11: struct12;  // [bp-0x1c0]
    let v12: struct12;  // [bp-0x1c0]
    let v13: u64;  // [bp-0x1b8]
    let v14: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x110]
    let v15: struct40;  // [bp-0x108]
    let v16: iNone;  // [bp-0x108]
    let v17: iNone;  // [bp-0xf8]
    let v18: u64;  // [bp-0xe8]
    let v19: struct24;  // [bp-0xe0]
    let v20: &u8;  // [bp-0xd8]
    let v21: i8;  // [bp-0xa8]
    let v23: u64;  // rbx
    let v24: u64;  // rax
    let v25: void*;  // rdx
    let v26: u64;  // rax
    let v28: u64;  // rsi
    let v30: u64;  // rdi
    let v31: u64;  // rcx
    let v32: u8;  // al
    let v33: void*;  // rax

    v23 = *((a0 + 8) as &i64);
    v24 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(v23, *((a0 + 16) as &i64));
    v8 = std::fs::read_dir(v24, v25);
    if v8.field_8 != 2 {
        v0 = v8.field_0;
        v1 = v8.field_8;
        loop {
            v14 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v0);
            if let None = v14 {
                break;
            }
            v3 = v15;
            if !v3.field_0 as i64 {
                continue;
            }
            v7 = v18;
            v6 = v17;
            v5 = v16;
            v19 = std::fs::DirEntry::path(&v5);
            v26 = std::path::Path::file_name(v20, v19.field_16);
            v9 = core::str::converts::from_utf8(v26, v25);
            match v9 {
                Err(_) => {
                    v30 = 1;
                },
                Ok(_) => {
                    v30 = v13;
                },
            }
            v32 = core::slice::<impl [T]>::starts_with(v30, v28, v25, v31);
            core::mem::drop(v19.field_0, v20);
            if v32 {
                v10 = std::fs::DirEntry::path(&v5);
                v33 = std::path::Path::extension();
                if v33 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, v25, "log") {
                    core::mem::drop(v10.field_0, v13);
                    v10 = std::fs::DirEntry::metadata(&v5);
                    if let Ok(_) = v10 {
                        memcpy(&v19, &v10, 176);
                        if (*(&v21 as &i32) as i16 & 0xf000) == 0x8000 {
                            v11 = std::fs::Metadata::modified(&v19);
                            if v11.field_8 != 0x3b9aca00 {
                                v4 = v12;
                                v10 = std::time::SystemTime::elapsed(&v4);
                                if core::result::Result<T,E>::unwrap_or_default(&v10) >= 86401 {
                                    v10 = std::fs::DirEntry::path(&v5);
                                    v2 = std::fs::remove_file(&v10);
                                }
                            }
                        }
                    }
                } else {
                    core::mem::drop(v10.field_0, v13);
                }
            }
        }
    }
    core::mem::drop(*(a0 as &i64), v23);
    return;
}
