fn uu_du::read_files_from(a0: &Result<struct24, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x168], Other Possible Types: struct24, struct48, struct44
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i64;  // [sp-0x148]
    let v5: i192;  // [bp-0x138], Other Possible Types: struct24
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128]
    let v8: i64;  // [sp-0x110]
    let v9: i64;  // [sp-0x108], Other Possible Types: Result<struct4, struct8>
    let v10: i64;  // [sp-0x100]
    let v11: i8;  // [sp-0xf8]
    let v12: i64;  // [sp-0xf0]
    let v13: i64;  // [sp-0xe8]
    let v14: i64;  // [sp-0xd8]
    let v15: i8;  // [bp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8], Other Possible Types: struct16
    let v18: i64;  // [sp-0xb0]
    let v19: i64;  // [sp-0xa8]
    let v20: i64;  // [sp-0xa0], Other Possible Types: struct32
    let v21: i64;  // [sp-0x98]
    let v22: i64;  // [sp-0x80]
    let v23: i64;  // [sp-0x78]
    let v24: i64;  // [sp-0x70]
    let v25: i64;  // [sp-0x68]
    let v26: i8;  // [bp-0x60]
    let v27: i8;  // [bp-0x48]
    let v29: i64;  // rbx
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i256;  // ymm0
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // rbx
    let v36: i64;  // rax
    let v38: i64;  // rdx
    let v39: i128;  // xmm0

    v29 = a2;
    v16 = a2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v29, "-") as i8 {
        v8 = a0;
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
        v33 = alloc::boxed::Box<T>::new(&v0);
        v34 = &g_5847b0;
    } else {
        v0 = std::sys::os_str::bytes::Slice::to_owned(a1, v29);
        v7 = v2;
        v30 = v0;
        v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v5 = v30;
        if std::path::Path::is_dir(v6, v2) as i8 {
            v20 = &v15;
            v21 = <&T as core::fmt::Display>::fmt;
            v0 = &g_584698;
            v1 = 2;
            v4 = 0;
            v2 = &v20;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v26);
        }
        v9 = std::fs::File::open(a1, v16) as u64;
        match v9 {
            Ok(_) => {
                v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v9 as &char + 4) as &i32) as u32 as u64);
                v33 = alloc::boxed::Box<T>::new(&v0);
                v8 = a0;
                v34 = &g_584728;
            },
            Err(v35) => {
                if std::io::error::Error::kind(v35) as i8 {
                    return Err(struct8 {
                        field_0: v35
                    });
                }
                v13 = v35;
                v20 = &v15;
                v21 = <&T as core::fmt::Display>::fmt;
                v0 = "cannot open '";
                v1 = 2;
                v4 = 0;
                v2 = &v20;
                v3 = 1;
                core::option::Option<T>::map_or_else();
                *((a0 + 8) as &long long) = std::io::error::Error::new(39, &v27);
                *(a0 as &i64) = 0x8000000000000000;
            },
        }
    }
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v9 = v33;
    v10 = v34;
    v11 = 0;
    v12 = 0;
    loop {
        v20 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9);
        v36 = v21;
        if v36 == 9223372036854775809 {
            a0 = v8;
            return Ok(struct24 {
                field_0: v17
                field_16: v19
            });
        }
        if v36 == 0x8000000000000000 {
            a0 = v8;
            return Err(struct8 {
                field_0: v24
            });
        }
        v23 = v36;
        v24 = *((&v20 as &char + 16) as &i64);
        v25 = *((&v20 as &char + 24) as &i64);
        if !v25 {
            v22 = v20 + 1;
            v5 = uucore::util_name();
            v6 = v38;
            eprint!("{:?}: ", &v5);
            eprintln!("{:?}:{:?}: invalid zero-length file name", &v15, &v22);
            uucore::mods::error::set_exit_code(1);
            v7 = v7;
            v1 = v1;
            v2 = v2;
        } else {
            v0 = alloc::string::String::from_utf8_lossy(v24, v25);
            v5 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v1, v2);
            v14 = v7;
            v39 = v5;
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
            v13 = v39;
            if <T as core::slice::cmp::SliceContains>::slice_contains() as i8 {
                v7 = v7;
                v1 = v1;
                v2 = v2;
            } else {
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
                *(&v0.field_0 as &struct24) = struct24 {
                    field_0: v31 as u128
                    field_16: v14
                };
                v17 = alloc::vec::Vec<T,A>::push(&v0);
                v7 = v7;
                v1 = v1;
                v2 = v2;
            }
        }
        v2 = v2;
        v1 = v1;
        v7 = v7;
    }
}
