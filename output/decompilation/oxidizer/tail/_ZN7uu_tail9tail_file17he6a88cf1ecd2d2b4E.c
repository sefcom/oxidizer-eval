fn uu_tail::tail_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> long long {
    let v0: u64;  // [bp-0x168]
    let v1: struct44;  // [bp-0x168], Other Possible Types: u384
    let v2: u64;  // [bp-0x160]
    let v3: u128;  // [bp-0x148]
    let v4: struct24;  // [bp-0x138], Other Possible Types: struct4, u64
    let v5: struct437;  // [bp-0x138], Other Possible Types: u64
    let v6: u64;  // [bp-0x130]
    let v7: Result<struct4, struct8>;  // [bp-0x120]
    let v8: struct4;  // [bp-0x11c]
    let v9: u64;  // [bp-0x118]
    let v10: i64;  // [bp-0x110]
    let v11: u64;  // [bp-0x108]
    let v12: u64;  // [bp-0xf0]
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: u64
    let v14: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v15: u128;  // [bp-0xd8]
    let v16: u128;  // [bp-0xc8]
    let v17: u64;  // [bp-0x38]
    let v18: u64;  // rdx
    let v19: &mut [u8];  // rbx
    let v21: u64;  // rcx
    let v22: u64;  // r8
    let v23: u64;  // rdx
    let v24: u64;  // r13
    let v25: struct16;  // rax
    let v26: void*;  // rax
    let v27: u64;  // rdx
    let v28: u64;  // r12
    let v29: u64;  // rbx
    let v30: u128;  // xmm0

    v13 = std::fs::metadata(a3, a4);
    match v13 {
        Err(_) => {
            uucore::mods::error::set_exit_code(1);
            v0 = uucore::util_name();
            v2 = v18;
            eprint!("{}: ", &v0);
            eprintln!("cannot open '{}' for reading: {}", a2, "No such file or directory");
            return uu_tail::follow::watch::Observer::add_bad_path(a5, a3, a4, v21, v22, 0) as i64;
        },
        Ok(_) => {
            if std::path::Path::is_dir(a3, a4) as u8 {
                uucore::mods::error::set_exit_code(1);
                uu_tail::paths::HeaderPrinter::print_input(a1, a2);
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v0 = uucore::util_name();
                v2 = v23;
                eprint!("{}: ", &v0);
                eprintln!("error reading '{}': {}", v20, &v4);
                if *((v10 + 76) as &i8) != 2 {
                    v0 = uucore::util_name();
                    v2 = v23;
                    eprint!("{}: ", &v0);
                    eprintln!("{}: cannot follow end of this type of file{}", v20, &v11);
                }
                if !((*((a5 + 142) as &i8) & 1) && *((a5 + 140) as &i8)) {
                    return v26;
                }
                uu_tail::follow::watch::Observer::add_bad_path();
            } else {
                v19 = a2;
                if !uu_tail::paths::Input::is_tailable(a2) as i8 {
                    return uu_tail::follow::watch::Observer::add_bad_path(a5, a3, a4, v21, v22, 0) as i64;
                }
                v13 as u1536 = std::fs::metadata(a3, a4);
                v7 = std::fs::File::open(a3, a4);
                match v7 {
                    Err(v24) => {
                        if std::io::error::Error::kind(v24) != 1 {
                            v13 = v24;
                            uu_tail::follow::watch::Observer::add_bad_path(a5, a3, a4, *((v19 + 8) as &i64), *((v19 + 16) as &i64), 0);
                            return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v24, v19);
                        }
                        v12 = v24;
                        uu_tail::follow::watch::Observer::add_bad_path(a5, a3, a4, *((v19 + 8) as &i64), *((v19 + 16) as &i64), 0);
                        if v25 {
                            return v25;
                        }
                        v11 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v24, v19);
                        uucore::mods::error::set_exit_code(1);
                        v4 = uucore::util_name();
                        v6 = v27;
                        eprintln!("{}: {}", &v4, &v11);
                    },
                    Ok(v4) => {
                        v4 = v5 & -0x100000000 | v4 as u64;
                        uu_tail::paths::HeaderPrinter::print_input(a1, v19);
                        if !*((v10 + 75) as &i8) && <std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v4, a6) as i8 {
                            if v14 as i64 as i32 == 2 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            if !v17 {
                                goto LABEL_500690;
                            }
                            uu_tail::bounded_tail(&v4, v10);
                            v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v5 as u64);
                        } else {
LABEL_500690:
                            v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v5 as u64);
                            uu_tail::unbounded_tail(&v1, v10);
                            if v25 {
                                return v25;
                            }
                        }
                        v28 = *((v19 + 8) as &i64);
                        v29 = *((v19 + 16) as &i64);
                        v30 = v1 as i128;
                        v16 = v3;
                        v15 = *((&v1 as &char + 16) as &i128) as u128;
                        v13 = v30;
                        return uu_tail::follow::watch::Observer::add_path(a5, a3, a4, v28, v29, alloc::boxed::Box<T>::new(&v13 as u1536), &g_5bb890, 1);
                    },
                }
            }
            return 0;
        },
    }
}
