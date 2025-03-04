fn uu_du::read_files_from(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x168], Other Possible Types: struct44, struct48, int
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: struct24;  // [sp-0x138]
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x110]
    let v6: Result<struct4, struct8>;  // [bp-0x108], Other Possible Types: struct8
    let v7: i64;  // [sp-0x100]
    let v8: i8;  // [sp-0xf8]
    let v9: i64;  // [sp-0xf0]
    let v10: i64;  // [sp-0xe8]
    let v12: i64;  // [sp-0xb8], Other Possible Types: int, struct16
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0], Other Possible Types: struct32
    let v15: i64;  // [sp-0x98]
    let v16: i64;  // [sp-0x80]
    let v17: i64;  // [sp-0x78]
    let v18: i64;  // [sp-0x70]
    let v19: i64;  // [sp-0x68]
    let v20: String;  // [sp-0x60]
    let v21: String;  // [sp-0x48]
    let v25: i64;  // rcx
    let v26: i64;  // rbx
    let v28: i64;  // r15
    let v29: i64;  // rax
    let v31: i64;  // rdx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v5 = a0;
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
        alloc::boxed::Box<T>::new(&v0);
        v25 = &g_5847b0;
        goto LABEL_4f3966;
    } else {
        v0 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
        v3 = v0;
        if std::path::Path::is_dir(v4, v2) as i8 {
            v20 = format!("{}: read error: Is a directory", &v11);
            *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v20);
        } else {
            v6 = std::fs::File::open(a1, a2);
            match v6 {
                Err(v26) => {
                    if !std::io::error::Error::kind(v26) as i8 {
                        v10 = v26;
                        v21 = format!("cannot open '{}' for reading: No such file or directory", &v11);
                        v28 = a0;
                        return v28;
                    }
                    *((a0 + 8) as &unsigned long) = v26;
                },
                Ok(_) => {
                    v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v6 as &char + 4) as &i32) as u32 as u64);
                    alloc::boxed::Box<T>::new(&v0);
                    v25 = &g_584728;
LABEL_4f3966:
                    v12 = 0;
                    v12 = 8;
                    v13 = 0;
                    v6 = struct8 {
                        field_24: v24
                    };
                    v7 = v25;
                    v8 = 0;
                    v9 = 0;
                    loop {
                        v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v6);
                        v29 = v15;
                        if v29 == 9223372036854775809 {
                            v28 = v5;
                            *((v28 + 16) as &unsigned long) = v13;
                            *(v28 as &i128) = v12 as i128;
                            return v28;
                        } else if v29 == 0x8000000000000000 {
                            return v28;
                        } else {
                            v17 = v29;
                            v18 = *((&v14.field_8 as &char + 8) as &i64);
                            v19 = v14.field_24;
                            if !v19 {
                                v16 = v14 + 1;
                                v4 = v31;
                                show_error!("{}:{}: invalid zero-length file name", &v11, &v16);
                                uucore::mods::error::set_exit_code(1);
                            } else {
                                v0 = alloc::string::String::from_utf8_lossy(v18, v19);
                                v3 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v1, v2);
                                if !<T as core::slice::cmp::SliceContains>::slice_contains() as i8 {
                                    v0 = *(&v10 as &i192);
                                    v12 = alloc::vec::Vec<T,A>::push(&v0);
                                }
                            }
                        }
                    }
                },
            }
        }
        *(a0 as &i64) = 0x8000000000000000;
        return v28;
    }
}
