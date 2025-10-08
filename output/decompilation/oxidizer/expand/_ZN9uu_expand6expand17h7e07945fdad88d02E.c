fn uu_expand::expand(a0: &struct80) -> u64 {
    let v0: struct56;  // [bp-0x128]
    let v1: struct56;  // [bp-0x128], Other Possible Types: struct80
    let v2: struct56;  // [bp-0x128]
    let v3: u64;  // [bp-0x118]
    let v4: u64;  // [bp-0x118]
    let v5: u64;  // [bp-0x118]
    let v6: iNone;  // [bp-0x108]
    let v7: u64;  // [bp-0xf8]
    let v8: u64;  // [bp-0xf0]
    let v9: u64;  // [bp-0xe8]
    let v10: struct24;  // [bp-0xe0]
    let v11: u128;  // [bp-0xc8]
    let v12: i64;  // [bp-0xb0]
    let v13: u64;  // [bp-0xa8]
    let v14: core::option::Option<&str>;  // [bp-0xa0], Other Possible Types: struct64
    let v15: struct64;  // [bp-0xa0]
    let v16: Result<struct56, struct24>;  // [bp-0xa0]
    let v17: struct24;  // [bp-0x98], Other Possible Types: u64
    let v18: struct24;  // [bp-0x98]
    let v19: u128;  // [bp-0x90]
    let v20: iNone;  // [bp-0x80]
    let v21: u64;  // [bp-0x70]
    let v25: u64;  // r14
    let v26: u32;  // r15d
    let v27: i64;  // r13
    let v28: u64;  // r12
    let v29: i64;  // rax
    let v30: i64;  // r13
    let v31: i64;  // r13
    let v32: struct80;  // xmm0
    let v34: i64;  // rdx
    let v35: struct640;  // r12

    v16 as u320 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::stdout());
    v25 = *((a0 + 32) as &i64);
    v26 = *((a0 + 40) as &i64);
    v10 = struct24 {
        field_0: 0
        field_8: ""
    };
    if !*((a0 + 16) as &i64) {
        return v35;
    }
    v27 = *((a0 + 8) as &i64);
    v28 = *((a0 + 16) as &i64) * 24 + v27;
    v29 = v27 + 24;
    v13 = v28;
    loop {
        v30 = v27;
        v12 = v30;
        if std::path::Path::is_dir(*((v30 + 8) as &i64), *((v30 + 16) as &i64)) {
            v14 = uucore::util_name();
            v17 = v34;
            eprint!("{}: ", &v14);
            eprintln!("{}: Is a directory", &v12);
            uucore::mods::error::set_exit_code(1);
            v14 = v15;
            v17 = v18;
            v1 = v0;
            v4 = v3;
        } else {
            v16 = uu_expand::open(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
            match v16 {
                Ok(_) => {
                    v7 = v21;
                    v32 = v16 as i128;
                    v6 = v20;
                    v4 = v19;
                    v1 = v32;
                    do {
                        if (std::io::read_until(&v2, &v10) as u8 & 1) {
                            if 1 {
                                continue;
                            }
                            goto LABEL_45dbf2;
                        } else if !v34 {
LABEL_45dbf2:
                            v28 = v13;
                            v1 = v2;
                            v4 = v5;
                            goto LABEL_45d940;
                        }
                        v35 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_expand::expand_line(&v10, &v16 as u320, v25, v26, a0));
                    } while (!v35);
                },
                Err(_) => {
                    v11 = *((&v16 as &char + 8) as &i128) as u128;
                    v8 = uucore::util_name();
                    v9 = v34;
                    eprint!("{}: ", &v8);
                    eprintln!("{}", &v11 as u8);
                    uucore::mods::error::set_exit_code(1);
                    v1 = v0;
                    v4 = v3;
                },
            }
        }
LABEL_45d940:
        v5 = v4;
        v2 = v1;
        v29 = v31 + 24;
        if v31 == v28 {
            v27 = v31;
            if v27 == v28 {
                break;
            }
        } else {
            v27 = v31;
            if v27 == v28 {
                break;
            }
        }
    }
    return v35;
}
