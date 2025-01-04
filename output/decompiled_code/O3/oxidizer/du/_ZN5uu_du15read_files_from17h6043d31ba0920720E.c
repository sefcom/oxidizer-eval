fn uu_du::read_files_from(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i128;  // [sp-0x168], Other Possible Types: struct24, struct44, struct48
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i128;  // [bp-0x138], Other Possible Types: struct24
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: i64;  // [sp-0x110]
    let v7: i64;  // [sp-0x108], Other Possible Types: Result<struct4, struct8>
    let v8: i64;  // [sp-0x100]
    let v9: i8;  // [sp-0xf8]
    let v10: i64;  // [sp-0xf0]
    let v11: i128;  // [sp-0xe8]
    let v12: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xc0]
    let v15: i128;  // [sp-0xb8], Other Possible Types: struct16
    let v16: i64;  // [sp-0xb0]
    let v17: i64;  // [sp-0xa8]
    let v18: i256;  // [sp-0xa0], Other Possible Types: struct32
    let v19: i64;  // [sp-0x98]
    let v20: i64;  // [sp-0x80]
    let v21: i64;  // [sp-0x78]
    let v22: i64;  // [sp-0x70]
    let v23: i64;  // [sp-0x68]
    let v24: i192;  // [sp-0x60]
    let v25: i192;  // [sp-0x48]
    let v27: i64;  // rbx
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rbx
    let v34: i64;  // rax
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i64;  // rdx

    v27 = a2;
    v14 = a2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v27, "-") as i8 {
        v6 = a0;
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
        v31 = alloc::boxed::Box<T>::new(&v0);
        v32 = &g_5847b0;
        goto LABEL_4f3966;
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(a1, v27);
    v5 = v2;
    v28 = v0;
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v3 = v28;
    if std::path::Path::is_dir(v4, v2) as i8 {
        v24 = format!("{:?}: read error: Is a directory", &v13);
        *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v24);
        goto LABEL_4f3d09;
    } else {
        v7 = std::fs::File::open(a1, v14);
        match v7 {
            Ok(_) => {
                v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v7 as &char + 4) as &i32) as u32 as u64);
                v31 = alloc::boxed::Box<T>::new(&v0);
                v6 = a0;
                v32 = &g_584728;
LABEL_4f3966:
                v15 = 0;
                v16 = 8;
                v17 = 0;
                v7 = v31;
                v8 = v32;
                v9 = 0;
                v10 = 0;
                loop {
                    v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v7);
                    v34 = v19;
                    if v34 == 9223372036854775809 {
                        a0 = v6;
                        *((a0 + 16) as &i64) = v17;
                        *(a0 as &i128) = v15;
                        return a0;
                    }
                    if v34 == 0x8000000000000000 {
                        a0 = v6;
                        *((a0 + 8) as &i64) = v22;
                        *(a0 as &i64) = 0x8000000000000000;
                        return a0;
                    }
                    v21 = v34;
                    v22 = *((&v18 as &char + 16) as &i64);
                    v23 = *((&v18 as &char + 24) as &i64);
                    if !v23 {
                        v20 = v18 + 1;
                        v3 = uucore::util_name();
                        v4 = v38;
                        eprint!("{:?}: ", &v3);
                        eprintln!("{:?}:{:?}: invalid zero-length file name", &v13, &v20);
                        uucore::mods::error::set_exit_code();
                        v5 = v5;
                        v1 = v1;
                        v2 = v2;
                    } else {
                        v0 = alloc::string::String::from_utf8_lossy(v22, v23);
                        v3 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v1, v2);
                        v12 = v5;
                        v36 = v3;
                        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u128 as u256;
                        v11 = v36;
                        if <T as core::slice::cmp::SliceContains>::slice_contains() as i8 {
                            v5 = v5;
                            v1 = v1;
                            v2 = v2;
                        } else {
                            v2 = v12;
                            v37 = v11;
                            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                            v0 = v37;
                            v15 = alloc::vec::Vec<T,A>::push(&v0, v38);
                            v5 = v5;
                            v1 = v1;
                            v2 = v2;
                        }
                    }
                    v2 = v2;
                    v1 = v1;
                    v5 = v5;
                }
            },
            Err(v33) => {
            },
        }
        if !std::io::error::Error::kind(v33) as i8 {
            v11 = v33;
            v25 = format!("cannot open '{:?}' for reading: No such file or directory", &v13);
            *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v25);
            *(a0 as &i64) = 0x8000000000000000;
        } else {
            *((a0 + 8) as &i64) = v33;
LABEL_4f3d09:
            *(a0 as &i64) = 0x8000000000000000;
        }
        return a0;
    }
}
