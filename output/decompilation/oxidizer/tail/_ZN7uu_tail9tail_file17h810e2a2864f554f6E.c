fn uu_tail::tail_file(a0: i64, a1: i64, a2: i64, a3: &std::path::Path, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [bp-0x180]
    let v1: struct640;  // [bp-0x180], Other Possible Types: u64
    let v2: u128;  // [bp-0x178]
    let v3: struct48;  // [bp-0x178]
    let v4: u64;  // [bp-0x170]
    let v5: u128;  // [bp-0x168]
    let v6: struct640;  // [bp-0x158]
    let v7: i64;  // [bp-0x138]
    let v8: struct712;  // [bp-0x138]
    let v9: Result<struct4, struct8>;  // [bp-0x130]
    let v10: u32;  // [bp-0x12c]
    let v11: u64;  // [bp-0x128]
    let v12: struct24;  // [bp-0x120], Other Possible Types: struct4, struct712
    let v13: u32;  // [bp-0x120]
    let v14: struct640;  // [bp-0x118]
    let v15: u64;  // [bp-0x108]
    let v16: u64;  // [bp-0x100]
    let v17: u64;  // [bp-0xf0]
    let v18: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: struct712
    let v19: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v20: struct44;  // [bp-0xe8]
    let v21: struct44;  // [bp-0xe8]
    let v23: u128;  // [bp-0xe8]
    let v24: u128;  // [bp-0xd8]
    let v25: struct640;  // [bp-0xc8]
    let v26: u64;  // rdx
    let v27: core::option::Option<&str>;  // rcx
    let v28: core::result::Result<&str, core::str::error::Utf8Error>;  // r8d
    let v29: u64;  // r8
    let v32: u64;  // rdx
    let v33: u64;  // rcx
    let v34: struct32;  // rax
    let v36: i64;  // r12
    let v37: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // r13
    let v38: u64;  // r8
    let v39: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rax
    let v40: struct640;  // rdx
    let v41: u64;  // r8
    let v44: iNone;  // xmm0
    let v46: iNone;  // xmm0
    let v47: u64;  // r8
    let v48: u64;  // rax
    let v49: u64;  // r8

    v0 = a1;
    v7 = a0;
    v19 = std::fs::metadata(a3);
    match v19 {
        Err(_) => {
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v4 = v26;
            eprint!("{}: ", &v2);
            eprintln!("cannot open '{}' for reading: {}", a2, "No such file or directory");
LABEL_4a6c22:
            uu_tail::follow::watch::Observer::add_bad_path(a4, a3, v49, v27, v28);
        },
        Ok(_) => {
            if std::path::Path::is_dir(a3) as u8 {
                v15 = v29;
                uucore::mods::error::set_exit_code(1);
                v1 = *((a2 + 16) as &i64);
                uu_tail::paths::HeaderPrinter::print_input(v0, *((a2 + 8) as &i64) as i32, *((a2 + 16) as &i64));
                v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Is a directory");
                v2 = uucore::util_name();
                v4 = v32;
                eprint!("{}: ", &v2);
                eprintln!("error reading '{}': {}", v30, &v12);
                if *((v7 + 76) as &i8) != 2 {
                    v2 = uucore::util_name();
                    v4 = v32;
                    eprint!("{}: ", &v2);
                    eprintln!("{}: cannot follow end of this type of file{}", v30, &v16);
                }
                if *((a4 + 142) as &i8) == 2 || !(*((a4 + 142) as &i8) & 1) || *((a4 + 140) as &i8) != 1 {
                    return v34;
                }
                v34 = uu_tail::follow::watch::Observer::add_bad_path(a4, v33, v15, *((a2 + 8) as &i64), v1 as u32, a4);
                if !v34 {
                    return 0;
                }
                return v34;
            }
            v36 = a2;
            if !uu_tail::paths::Input::is_tailable(a2) as u8 {
                goto LABEL_4a6c22;
            }
            v18 = std::fs::metadata(a3);
            v9 = std::fs::File::open(a3);
            if let Err(v37) = v9 {
                if std::io::error::Error::kind(v37) as u8 == 1 {
                    v17 = v37;
                    uu_tail::follow::watch::Observer::add_bad_path(a4, a3, v38, *((v36 + 8) as &i64), *((v36 + 16) as &i64) as i32);
                    if !v39 {
                        v16 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v37, v36);
                        uucore::mods::error::set_exit_code(1);
                        v12 = uucore::util_name();
                        v14 = v40;
                        eprintln!("{}: {}", &v12, &v16);
                        return 0;
                    }
                } else {
                    v18 = v37;
                    uu_tail::follow::watch::Observer::add_bad_path(a4, a3, v41, *((v36 + 8) as &i64), *((v36 + 16) as &i64) as i32);
                    if !v39 {
                        return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v37, v36);
                    }
                }
                return v39;
            }
            v12 = v10;
            v8 = *((v36 + 8) as &i64);
            v1 = *((v36 + 16) as &i64);
            uu_tail::paths::HeaderPrinter::print_input(v0, *((v36 + 8) as &i64) as i32, *((v36 + 16) as &i64));
            if !*((v7 + 75) as &i8) && <std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v12 as u64, a5) as u8 {
                if v18 as i64 as i32 == 2 {
                    core::option::unwrap_failed(); /* do not return */
                }
                if (v15 & 1) {
                    goto LABEL_4a7021;
                }
                uu_tail::bounded_tail(&v12 as u64, v7);
                v23 as u384 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v13);
                v44 = *(&v20.field_0 as &i128);
                v6 = v25;
                v5 = v20.field_16;
                *(&v2 as void*) = v44;
            } else {
LABEL_4a7021:
                v21 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v13);
                v3 = struct48 {
                    field_0: *(&v21.field_0 as &i128)
                    field_16: v21.field_16
                    field_32: v25
                };
                uu_tail::unbounded_tail(&v3, v7);
                if let Ok(_) = v39 {
                    return v39;
                }
            }
            v46 = v3.field_0;
            v25 = v6;
            v24 = v3.field_16;
            *(&v23 as void*) = v46;
            uu_tail::follow::watch::Observer::add_path(a4, a3, v47, v8, v1 as u32, alloc::boxed::Box<T>::new(&v23 as u384) as u64, &g_573408);
        },
    }
    return v48;
}
