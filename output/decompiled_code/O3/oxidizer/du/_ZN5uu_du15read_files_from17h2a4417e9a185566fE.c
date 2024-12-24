fn uu_du::read_files_from(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x168], Other Possible Types: struct24, struct44, struct48
    let v1: i64;  // [bp-0x138], Other Possible Types: struct24
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x110]
    let v5: i64;  // [sp-0x108], Other Possible Types: Result<struct4, struct8>
    let v6: i64;  // [sp-0x100]
    let v7: i8;  // [sp-0xf8]
    let v8: i64;  // [sp-0xf0]
    let v9: i128;  // [sp-0xe8]
    let v10: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xc0]
    let v13: i128;  // [sp-0xb8], Other Possible Types: struct16
    let v14: i64;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i256;  // [sp-0xa0], Other Possible Types: struct32
    let v17: i64;  // [sp-0x80]
    let v18: i64;  // [sp-0x78]
    let v19: i64;  // [sp-0x70]
    let v20: i64;  // [sp-0x68]
    let v21: i192;  // [sp-0x60]
    let v22: i192;  // [sp-0x48]
    let v24: i64;  // rbx
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rbx
    let v31: i64;  // rax
    let v33: i128;  // xmm0
    let v34: i64;  // rcx
    let v35: i64;  // r8
    let v36: i64;  // r9
    let v37: i128;  // xmm0
    let v38: i64;  // rdx

    v24 = a2;
    v12 = a2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v24, "-") as i8 {
        v4 = a0;
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
        v28 = alloc::boxed::Box<T>::new(&v0);
        v29 = &g_584200;
        goto LABEL_4f3596;
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(a1, v24);
    v3 = v0.field_16;
    v25 = v0;
    v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    v1 = v25;
    if std::path::Path::is_dir(v2, v0.field_16) as i8 {
        v21 = format!("{:?}: read error: Is a directory", &v11);
        *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v21);
        goto LABEL_4f3939;
    } else {
        v5 = std::fs::File::open(a1, v12);
        match v5 {
            Ok(_) => {
                v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v5 as &char + 4) as &i32) as u32 as u64);
                v28 = alloc::boxed::Box<T>::new(&v0);
                v4 = a0;
                v29 = &g_584138;
LABEL_4f3596:
                v13 = 0;
                v14 = 8;
                v15 = 0;
                v5 = v28;
                v6 = v29;
                v7 = 0;
                v8 = 0;
                loop {
                    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
                    v31 = v16.field_8;
                    if v31 == 9223372036854775809 {
                        a0 = v4;
                        *((a0 + 16) as &i64) = v15;
                        *(a0 as &i128) = v13;
                        return a0;
                    }
                    if v31 == 0x8000000000000000 {
                        a0 = v4;
                        *((a0 + 8) as &i64) = v19;
                        *(a0 as &i64) = 0x8000000000000000;
                        return a0;
                    }
                    v18 = v31;
                    v19 = *((&v16 as &char + 16) as &i64);
                    v20 = *((&v16 as &char + 24) as &i64);
                    if !v20 {
                        v17 = v16 + 1;
                        v1 = uucore::util_name();
                        v1.field_8 = vvar_235{reg 32};
                        eprint!("{:?}: ", &v1);
                        eprintln!("{:?}:{:?}: invalid zero-length file name", &v11, &v17);
                        uucore::mods::error::set_exit_code();
                    } else {
                        v0 = alloc::string::String::from_utf8_lossy(v19, v20);
                        v1 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v0.field_8, v0.field_16);
                        v10 = v1.field_16;
                        v33 = v1;
                        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u128 as u256;
                        v9 = v33;
                        if !<T as core::slice::cmp::SliceContains>::slice_contains(&v9, v13.field_8, v15, v34, v35, v36) as i8 {
                            v0.field_16 = vvar_465{stack -216};
                            v37 = v9;
                            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                            v0 = v37;
                            v13 = alloc::vec::Vec<T,A>::push(&v0, v38);
                        }
                    }
                }
            },
            Err(_) => {
                v30 = v6;
            },
        }
        if !std::io::error::Error::kind(v30) as i8 {
            v9 = v30;
            v22 = format!("cannot open '{:?}' for reading: No such file or directory", &v11);
            *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v22);
            *(a0 as &i64) = 0x8000000000000000;
        } else {
            *((a0 + 8) as &i64) = v30;
LABEL_4f3939:
            *(a0 as &i64) = 0x8000000000000000;
        }
        return a0;
    }
}
