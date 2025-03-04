fn uu_tail::tail_file(a0: &u64, a1: u32, a2: void*, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x180]
    let v1: struct44;  // [sp-0x168], Other Possible Types: int
    let v2: i64;  // [sp-0x160]
    let v3: iNone;  // [bp-0x148]
    let v4: struct24;  // [sp-0x138], Other Possible Types: unsigned long, unsigned int
    let v5: i64;  // [sp-0x130]
    let v6: Result<struct4, struct8>;  // [sp-0x120]
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x108]
    let v9: i64;  // [sp-0x100]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe8], Other Possible Types: Result<struct176, struct8>, int
    let v12: iNone;  // [bp-0xd8]
    let v13: iNone;  // [bp-0xc8]
    let v14: i64;  // [sp-0x38]
    let v15: i64;  // [bp+0x8]
    let v16: i32;  // r13d
    let v17: i64;  // rdx
    let v18: i64;  // rbx
    let v20: i64;  // r12
    let v21: i64;  // rax
    let v22: i64;  // rdx
    let v23: i64;  // r13
    let v24: i64;  // rcx
    let v27: i64;  // r13
    let v28: i64;  // rcx
    let v30: i64;  // rdx
    let v31: i64;  // r12
    let v32: i64;  // rbx
    let v33: iNone;  // xmm0
    let v34: iNone;  // xmm1
    let v35: i64;  // rbx

    v11 = std::fs::metadata(a3, a4);
    if v16 == 2 {
        uucore::mods::error::set_exit_code(1);
        v2 = v17;
        show_error!("cannot open '{}' for reading: {}", a2, "No such file or directory");
        vvar_736{reg 16} = uu_tail::follow::watch::Observer::add_bad_path() as i64;
        return v21;
    }
    if std::path::Path::is_dir(a3, a4) as i8 {
        uucore::mods::error::set_exit_code(1);
        uu_tail::paths::HeaderPrinter::print_input(a1, a2);
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v2 = v22;
        show_error!("error reading '{}': {}", v19, &v4);
        v24 = a0;
        if *((v24 + 76) as &i8) != 2 {
            v28 = (*((v24 + 72) as &i8) ? 0 : 24);
            v8 = (!*((v24 + 72) as &i8) ? &g_429039 : 1);
            v9 = v28;
            v2 = v22;
            show_error!("{}: cannot follow end of this type of file{}", v19, &v8);
        }
        if !((*((a5 + 142) as &i8) & 1)) || !(*((a5 + 140) as &i8)) {
            return v21;
        } else if uu_tail::follow::watch::Observer::add_bad_path() as i64 {
            return v21;
        }
    } else {
        v18 = a2;
        if !uu_tail::paths::Input::is_tailable(a2) as i8 {
            v21 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
            return v21;
        }
        v11 = std::fs::metadata(a3, a4);
        v20 = v11;
        if v20 != 2 {
            v14 = *((&v11 as &char + 96) as &i64);
        }
        v23 = a0;
        v6 = std::fs::File::open(a3, a4);
        match v6 {
            Ok(v4) => {
                uu_tail::paths::HeaderPrinter::print_input(a1, v18);
                if !*((v23 + 75) as &i8) && <std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v4, (*((v18 + 24) as &i64) == 0x8000000000000000 ? v15 : 0)) as i8 {
                    if v20 as u32 == 2 {
                        core::option::unwrap_failed("src/uu/tail/src/tail.rs"); /* do not return */
                    }
                    if !v14 {
                        goto LABEL_500690;
                    }
                    uu_tail::bounded_tail(&v4, v23);
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u64);
LABEL_500712:
                    v31 = *((v18 + 8) as &i64);
                    v32 = *((v18 + 16) as &i64);
                    v33 = v1 as i128;
                    v34 = (&v1)[16] as i128;
                    *(&v13 as &i128) = v3 as i128;
                    v12 = v34;
                    v11 = v33;
                    v0 = 1;
                    v21 = uu_tail::follow::watch::Observer::add_path(a5, a3, a4, v31, v32, alloc::boxed::Box<T>::new(&v11), &g_5bb890);
                    if v21 {
                        return v21;
                    }
                } else {
LABEL_500690:
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u64);
                    if !uu_tail::unbounded_tail(&v1, v23) {
                        goto LABEL_500712;
                    }
LABEL_5006c6:
                    v21 = v35;
                    return v21;
                }
            },
            Err(v27) => {
                if std::io::error::Error::kind(v27) as i8 != 1 {
                    v11 = v27;
                    if !uu_tail::follow::watch::Observer::add_bad_path() as i64 {
                        v21 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v27, v18);
                        return v21;
                    }
                    goto LABEL_5006c6;
                } else {
                    v10 = v27;
                    if uu_tail::follow::watch::Observer::add_bad_path() as i64 {
                        goto LABEL_5006c6;
                    } else {
                        v8 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v27, v18);
                        uucore::mods::error::set_exit_code(1);
                        *(&v4 as &long long) = uucore::util_name();
                        v5 = v30;
                        eprintln!("{}: {}", &v4, &v8);
                    }
                }
            },
        }
    }
    return 0;
}
