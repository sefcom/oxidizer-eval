fn uu_tail::tail_file(a0: &u64, a1: u32, a2: void*, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i8;  // [bp-0x180]
    let v1: i352;  // [sp-0x168], Other Possible Types: struct44
    let v2: i64;  // [sp-0x160]
    let v3: i128;  // [bp-0x148]
    let v4: i32;  // [sp-0x138], Other Possible Types: struct24
    let v5: i64;  // [sp-0x130]
    let v6: Result<struct4, struct8>;  // [sp-0x120], Other Possible Types: i64
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x108]
    let v9: i64;  // [sp-0x100]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe8], Other Possible Types: Result<struct176, struct16>
    let v12: i128;  // [bp-0xd8]
    let v13: i128;  // [bp-0xc8]
    let v14: i64;  // [sp-0x38]
    let v15: i64;  // [bp+0x8]
    let v17: i64;  // rdx
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i64;  // r12
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v27: i64;  // rcx
    let v28: i64;  // r13
    let v31: i64;  // rcx
    let v32: i64;  // r13
    let v33: i64;  // rsi
    let v34: i64;  // r12
    let v35: i64;  // rbx
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1

    v11 = std::fs::metadata(a3, a4);
    match v11 {
        Err(_) => {
            uucore::mods::error::set_exit_code();
            v1 = uucore::util_name();
            v2 = v17;
            eprint!("{:?}: ", &v1);
            eprintln!("cannot open '{:?}' for reading: {:?}", a2, "No such file or directory");
            uu_tail::follow::watch::Observer::add_bad_path();
            return v24;
        },
        Ok(_) => {
            if std::path::Path::is_dir(a3, a4) as i8 {
                uucore::mods::error::set_exit_code();
                uu_tail::paths::HeaderPrinter::print_input(a1, a2);
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v1 = uucore::util_name();
                v2 = v25;
                eprint!("{:?}: ", &v1);
                eprintln!("error reading '{:?}': {:?}", v26, &v4);
                v27 = a0;
                if *((v27 + 76) as &i8) != 2 {
                    v31 = (*((v27 + 72) as &i8) ? 0 : 24);
                    v8 = (!*((v27 + 72) as &i8) ? &g_429039 : 1);
                    v9 = v31;
                    v1 = uucore::util_name();
                    v2 = v25;
                    eprint!("{:?}: ", &v1);
                    eprintln!("{:?}: cannot follow end of this type of file{:?}", v26, &v8);
                }
                v24 = 0;
                if !((*((a5 + 142) as &i8) & 1)) || !(*((a5 + 140) as &i8)) {
                    return v24;
                }
                v24 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                if v24 {
                    return v24;
                }
            } else {
                if !uu_tail::paths::Input::is_tailable(a2, v18, v19, v20, v21, v22) as i8 {
                    v24 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                    return v24;
                }
                v11 = std::fs::metadata(a3, a4);
                v23 = v11;
                if v23 != 2 {
                    v14 = *((&v11 as &char + 96) as &i64);
                }
                v28 = a0;
                v6 = std::fs::File::open(a3, a4);
                match v6 {
                    Err(v32) => {
                        if std::io::error::Error::kind(v32) as i8 != 1 {
                            v11 = v32;
                            v24 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                            if v24 {
                                return v24;
                            }
                            v24 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v32, a2);
                            return v24;
                        }
                        v10 = v32;
                        v24 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                        if v24 {
                            return v24;
                        }
                        v8 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v32, a2);
                        uucore::mods::error::set_exit_code();
                        *(&v4 as &long long) = uucore::util_name();
                        v5 = v19;
                        eprintln!("{:?}: {:?}", &v4, &v8);
                    },
                    Ok(v4) => {
                        uu_tail::paths::HeaderPrinter::print_input(a1, a2);
                        if !*((v28 + 75) as &i8) && (v33 = (*((a2 + 24) as &i64) == 0x8000000000000000 ? v15 : 0), <std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v4, v33) as i8) {
                            if v23 as i32 == 2 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            if v14 {
                                uu_tail::bounded_tail(&v4, v28);
                                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u32 as u64);
                                goto LABEL_500712;
                            }
                        }
                        v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u32 as u64);
                        v24 = uu_tail::unbounded_tail(&v1, v28, v19);
                        if v24 {
                            return v24;
                        }
LABEL_500712:
                        v34 = *((a2 + 8) as &i64);
                        v35 = *((a2 + 16) as &i64);
                        v36 = v1;
                        v37 = *((&v1 as &char + 16) as &i128);
                        v13 = v3;
                        v12 = v37;
                        v11 = v36;
                        v24 = uu_tail::follow::watch::Observer::add_path(a5, a3, a4, v34, v35, alloc::boxed::Box<T>::new(&v11), &g_5bb890, v0);
                        if v24 {
                            return v24;
                        }
                    },
                }
            }
            return 0;
        },
    }
}
