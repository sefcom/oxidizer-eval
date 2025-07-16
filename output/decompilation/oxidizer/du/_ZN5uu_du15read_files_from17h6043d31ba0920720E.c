fn uu_du::read_files_from(a1: i64, a2: i64) -> Result<struct24, struct16> {
    let a0: u64;  // rsi
    let v0: struct48;  // [bp-0x168], Other Possible Types: alloc::borrow::Cow<str>, u192, alloc::string::String
    let v1: u64;  // [bp-0x160]
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x160]
    let v4: u64;  // [bp-0x158], Other Possible Types: struct24
    let v5: struct24;  // [bp-0x158]
    let v6: struct24;  // [bp-0x158]
    let v7: u128;  // [bp-0x138]
    let v8: struct24;  // [bp-0x138], Other Possible Types: u64
    let v9: u64;  // [bp-0x138]
    let v10: u64;  // [bp-0x130]
    let v11: u64;  // [bp-0x128], Other Possible Types: struct16
    let v12: struct16;  // [bp-0x128]
    let v13: struct16;  // [bp-0x128]
    let v14: i64;  // [bp-0x110]
    let v15: Result<struct4, struct8>;  // [bp-0x108]
    let v16: u64;  // [bp-0x108]
    let v17: u32;  // [bp-0x104]
    let v18: u64;  // [bp-0x100]
    let v19: u8;  // [bp-0xf8]
    let v20: void*;  // [bp-0xf0]
    let v21: u64;  // [bp-0xe8]
    let v22: u128;  // [bp-0xe8]
    let v23: u64;  // [bp-0xe8]
    let v24: u64;  // [bp-0xe8]
    let v25: struct16;  // [bp-0xd8]
    let v26: u64;  // [bp-0xc8]
    let v27: void*;  // [bp-0xb8]
    let v28: struct16;  // [bp-0xb8]
    let v29: u64;  // [bp-0xb0]
    let v30: void*;  // [bp-0xa8]
    let v32: u256;  // [bp-0xa0]
    let v33: u64;  // [bp-0x98]
    let v34: u64;  // [bp-0x90]
    let v35: u64;  // [bp-0x88]
    let v37: u64;  // [bp-0x78]
    let v38: u64;  // [bp-0x70]
    let v39: u64;  // [bp-0x68]
    let v40: alloc::string::String;  // [bp-0x60]
    let v41: alloc::string::String;  // [bp-0x48]
    let v43: i64;  // rdi
    let v45: u64;  // rax
    let v46: u64;  // rcx
    let v47: i64;  // rdi
    let v48: i64;  // rdi
    let v49: i64;  // rdi
    let v51: u64;  // rdx

    v26 = a0;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v14 = v43;
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
        v45 = alloc::boxed::Box<T>::new(&v0);
        goto LABEL_4f3966;
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
    v11 = v4;
    v7 = *(&v0.vec.buf.cap as &i128);
    if std::path::Path::is_dir(v10, v4) {
        v40 = format!("{}: read error: Is a directory", &v26);
        *((v47 + 8) as &long long) = std::io::error::Error::new(39, &v40);
        goto LABEL_4f3d09;
    } else {
        v15 = std::fs::File::open(v26, a1);
        if let Ok(_) = v15 {
            std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v17 as u64, a2);
            v45 = alloc::boxed::Box<T>::new(&v0);
            v14 = v48;
LABEL_4f3966:
            v27 = 0;
            v29 = 8;
            v30 = 0;
            v16 = v45;
            v18 = v46;
            v19 = 0;
            v20 = 0;
            loop {
                vvar_522{stack -160} = struct32 OrderedDict({0: 𝜙@64b [((5192152, None), vvar_373{stack -160}), ((5192038, None), None)], 8: 𝜙@64b [((5192152, None), vvar_374{stack -152}), ((5192038, None), None)], 24: 𝜙@64b [((5192152, None), vvar_379{stack -136}), ((5192038, None), None)]})
                <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v32, &v15);
                if v33 == 9223372036854775809 {
                    *((v14 + 16) as &void*) = v30;
                    *(v14 as &i128) = *(&v28.field_0 as &i128);
                    return;
                } else if v33 != 0x8000000000000000 {
                    v37 = v33;
                    v38 = v34;
                    v39 = v35;
                    if v35 {
                        v0 = alloc::string::String::from_utf8_lossy(v34, v35);
                        v8 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v1, v4);
                        v25 = v11;
                        v22 = v8.field_0;
                        v5 = v4;
                        v12 = v11;
                        v2 = v1;
                        v8 = v7;
                        v23 = v21;
                        if !<T as core::slice::cmp::SliceContains>::slice_contains(&v23, 8, v30) as u8 {
                            v0 = v24;
                            v28 = alloc::vec::Vec<T,A>::push(&v0);
                            v5 = v6;
                            v12 = v11;
                            v2 = v1;
                            v8 = v7;
                            v23 = v21;
                        }
                    } else {
                        v7 = uucore::util_name();
                        v10 = v51;
                        eprint!("{}: ", &v7);
                        eprintln!("{}:{}: invalid zero-length file name", &v26, &v36);
                        uucore::mods::error::set_exit_code(1);
                        v5 = v6;
                        v12 = v13;
                        v2 = v3;
                        v8 = v9;
                        v23 = v24;
                    }
                    v21 = v23;
                    v7 = v8;
                    v1 = v2;
                    v11 = v12;
                    v4 = v5;
                } else {
                    *((v14 + 8) as &u64) = v34;
                    *(v14 as &i64) = 0x8000000000000000;
                    return;
                }
            }
        }
        if std::io::error::Error::kind(v18) {
            *((v47 + 8) as &u64) = v18;
LABEL_4f3d09:
            *(v47 as &i64) = 0x8000000000000000;
        } else {
            v21 = v18;
            v41 = format!("cannot open '{}' for reading: No such file or directory", &v26);
            *((v49 + 8) as &long long) = std::io::error::Error::new(39, &v41);
            *(v49 as &i64) = 0x8000000000000000;
        }
        return;
    }
}
