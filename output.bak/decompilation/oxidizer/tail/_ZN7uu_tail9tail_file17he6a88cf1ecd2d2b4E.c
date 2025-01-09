fn uu_tail::tail_file(a0: &u64, a1: u32, a2: void*, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x180]
    let v1: i352;  // [sp-0x168], Other Possible Types: struct44
    let v2: i64;  // [sp-0x160]
    let v3: i128;  // [bp-0x148]
    let v4: i32;  // [sp-0x138], Other Possible Types: struct24
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x120], Other Possible Types: Result<struct4, struct8>
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x108]
    let v9: i64;  // [sp-0x100]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe8], Other Possible Types: struct16
    let v12: i128;  // [bp-0xd8]
    let v13: i128;  // [bp-0xc8]
    let v14: i8;  // [bp-0x88]
    let v15: i64;  // [sp-0x38]
    let v16: i64;  // [bp+0x8]
    let v18: i64;  // rdx
    let v19: i64;  // r12
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v23: i64;  // rcx
    let v24: i64;  // r13
    let v27: i64;  // rcx
    let v28: i64;  // r13
    let v29: i64;  // rsi
    let v30: i64;  // rdx
    let v31: i64;  // r12
    let v32: i64;  // rbx
    let v33: i128;  // xmm0
    let v34: i128;  // xmm1

    v11 = std::fs::metadata(a3, a4);
    if v11 == 2 {
        uucore::mods::error::set_exit_code(1);
        v1 = uucore::util_name();
        v2 = v18;
        eprint!("{:?}: ", &v1);
        eprintln!("cannot open '{:?}' for reading: {:?}", a2, "No such file or directory");
        uu_tail::follow::watch::Observer::add_bad_path();
        return v20;
    }
    if std::path::Path::is_dir(a3, a4) as i8 {
        uucore::mods::error::set_exit_code(1);
        uu_tail::paths::HeaderPrinter::print_input(a1, a2);
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = uucore::util_name();
        v2 = v21;
        eprint!("{:?}: ", &v1);
        eprintln!("error reading '{:?}': {:?}", v22, &v4);
        v23 = a0;
        if *((v23 + 76) as &i8) != 2 {
            v27 = (*((v23 + 72) as &i8) ? 0 : 24);
            v8 = (!*((v23 + 72) as &i8) ? &g_429039 : 1);
            v9 = v27;
            v1 = uucore::util_name();
            v2 = v21;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}: cannot follow end of this type of file{:?}", v22, &v8);
        }
        v20 = 0;
        if !((*((a5 + 142) as &i8) & 1)) || !(*((a5 + 140) as &i8)) {
            return v20;
        }
        v20 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
        if v20 {
            return v20;
        }
    } else {
        if !uu_tail::paths::Input::is_tailable(a2) as i8 {
            v20 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
            return v20;
        }
        v11 = std::fs::metadata(a3, a4);
        v19 = v11;
        if v19 != 2 {
            v15 = v14;
        }
        v24 = a0;
        v6 = std::fs::File::open(a3, a4) as u64;
        match v6 {
            Err(v28) => {
                if std::io::error::Error::kind(v28) as i8 != 1 {
                    v11 = v28;
                    v20 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                    if v20 {
                        return v20;
                    }
                    v20 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v28, a2);
                    return v20;
                }
                v10 = v28;
                v20 = uu_tail::follow::watch::Observer::add_bad_path() as i64;
                if v20 {
                    return v20;
                }
                v8 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v28, a2);
                uucore::mods::error::set_exit_code(1);
                *(&v4 as &long long) = uucore::util_name();
                v5 = v30;
                eprintln!("{:?}: {:?}", &v4, &v8);
            },
            Ok(v4) => {
                uu_tail::paths::HeaderPrinter::print_input(a1, a2);
                if !*((v24 + 75) as &i8) && (v29 = (*((a2 + 24) as &i64) == 0x8000000000000000 ? v16 : 0), <std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v4, v29) as i8) {
                    if v19 as i32 == 2 {
                        core::option::unwrap_failed("src/uu/tail/src/tail.rs"); /* do not return */
                    }
                    if v15 {
                        uu_tail::bounded_tail(&v4, v24);
                        v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u32 as u64);
                        goto LABEL_500712;
                    }
                }
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v4 as u32 as u64);
                v20 = uu_tail::unbounded_tail(&v1, v24);
                if v20 {
                    return v20;
                }
LABEL_500712:
                v31 = *((a2 + 8) as &i64);
                v32 = *((a2 + 16) as &i64);
                v33 = v1;
                v34 = *((&v1 as &char + 16) as &i128);
                v13 = v3;
                v12 = v34;
                v11 = v33;
                v0 = 1;
                v20 = uu_tail::follow::watch::Observer::add_path(a5, a3, a4, v31, v32, alloc::boxed::Box<T>::new(&v11), &g_5bb890);
                if v20 {
                    return v20;
                }
            },
        }
    }
    return 0;
}
