fn uu_cut::cut_files(a0: &struct24, a1: &struct80) -> int {
    let v0: void*;  // [bp-0xf8]
    let v1: struct24;  // [bp-0xf8], Other Possible Types: void*, u64
    let v2: void*;  // [bp-0xf8]
    let v3: Result<struct16, struct12>;  // [bp-0xf8]
    let v4: i64;  // [bp-0xf0]
    let v5: i64;  // [bp-0xf0]
    let v6: i64;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: u8;  // [bp-0xe0]
    let v9: struct16;  // [bp-0xd0]
    let v10: u64;  // [bp-0xc0]
    let v11: i64;  // [bp-0xb8]
    let v12: Result<struct4, struct8>;  // [bp-0xb0], Other Possible Types: struct24, struct33, unsigned long, u64
    let v13: u64;  // [bp-0xb0]
    let v14: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v15: u64;  // [bp-0x80]
    let v16: i64;  // [bp-0x78]
    let v17: struct16;  // [bp-0x70], Other Possible Types: u64
    let v18: i64;  // [bp-0x68], Other Possible Types: struct_9 *
    let v19: u64;  // [bp-0x58]
    let v20: u64;  // [bp-0x50]
    let v21: u64;  // [bp-0x48]
    let v22: u64;  // [bp-0x38]
    let v24: u64;  // rax
    let v25: i64;  // rcx
    let v27: i64;  // r12
    let v28: u64;  // rbx
    let v29: i64;  // rax
    let v30: u8;  // r15b
    let v31: i64;  // r13
    let v32: u64;  // r14
    let v33: i64;  // rdx
    let v34: u64;  // rax
    let v35: i64;  // rdx
    let v37: u64;  // rax
    let v38: i64;  // rdx
    let v39: i64;  // rdx
    let v40: u32;  // eax

    if !*((a0 + 16) as &i64) {
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v1 = v14;
        alloc::vec::Vec<T,A>::push(a0, &v1);
    }
    std::io::stdio::stdout();
    if std::sys::io::is_terminal::isatty::is_terminal() {
        v24 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::stdout());
        v24 = alloc::boxed::Box<T>::new(&v12) as u64;
    }
    v15 = v24;
    v16 = v25;
    if *((a0 + 16) as &i64) {
        v27 = *((a0 + 8) as &i64);
        v28 = v27 + *((a0 + 16) as &i64) * 24;
        v29 = v27 + 24;
        v22 = *(a1 as &i64);
        v21 = *((a1 + 64) as &i64);
        v20 = a1 + 8;
        v19 = *((a1 + 72) as &i64);
        loop {
            v31 = *((v27 + 8) as &i64);
            v32 = *((v27 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-") {
                v12 = v13;
                if !(v30 & 1) {
                    if v22 <= 1 {
                        v34 = uu_cut::cut_bytes(std::io::stdio::stdin(), &v15, v21, v19, v20);
                    } else {
                        v34 = uu_cut::cut_fields(std::io::stdio::stdin() as u32, &v15, v21, v19, v20);
                    }
                    v17 = v34;
                    v18 = v35;
                    v12 = v13;
                    v1 = v0;
                    v5 = v4;
                    if v34 {
                        v9 = struct16 {
                            field_0: v34
                            field_8: v35
                        };
                        uucore::mods::error::set_exit_code(*((v35 + 88) as &i64)(v34) as u32);
                        v10 = uucore::util_name();
                        v11 = v33;
                        eprintln!("{}: {}", &v10, &v9);
                        v12 = v14;
                        v1 = v2;
                        v5 = v6;
                    }
                    v30 = 1;
                    goto LABEL_469ec4;
                }
            } else if std::path::Path::is_dir(v31, v32) {
                v1 = uucore::util_name();
                v5 = v33;
                eprint!("{}: ", &v1);
                v0 = 0;
                v4 = *((v27 + 8) as &i64);
                v7 = *((v27 + 16) as &i64);
                v8 = 0;
                eprintln!("{}: Is a directory", &v0);
                uucore::mods::error::set_exit_code(1);
                v12 = v14;
                v13 = v12;
                v29 = v27 + 24;
                if v27 == v28 {
                    break;
                }
            } else {
                v12 = std::fs::File::open(v31, v32);
                v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v12, *((v27 + 8) as &i64), *((v27 + 16) as &i64));
                v37 = v3 as i64;
                if v37 {
                    v38 = v4;
                    v17 = v37;
                    v18 = v38;
                    v39 = v38;
                    goto LABEL_469e2d;
                } else {
                    v17 = struct16 {
                        field_0: uu_cut::cut_files::{{closure}}(a1, &v15, *((&v3 as &char + 8) as &i32) as u32 as u64)
                        field_8: v33
                    };
                    v39 = v33;
                    if v17.field_0 {
LABEL_469e2d:
                        v9 = struct16 {
                            field_0: v37
                            field_8: v39
                        };
                        v40 = *((v39 + 88) as &i64)(v37);
                        uucore::mods::error::set_exit_code(v40);
                        v10 = uucore::util_name();
                        v11 = v33;
                        eprintln!("{}: {}", &v10, &v9);
                        v12 = v14;
                        v1 = v2;
                        v5 = v6;
                    } else {
                        v12 = v13;
                        v1 = v0;
                        v5 = v4;
                    }
                }
LABEL_469ec4:
                v4 = v5;
                v0 = v1;
                v13 = v12;
                v29 = v27 + 24;
                if v27 == v28 {
                    if v27 == v28 {
                        break;
                    }
                } else {
                    if v27 == v28 {
                        break;
                    }
                }
            }
        }
    }
    v17 = struct16 {
        field_0: <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(*((v16 + 48) as &i64)(v15) as i64)
        field_8: &g_4f8e20
    };
    if v17.field_0 {
        v9 = struct16 {
            field_0: v17.field_0
            field_8: &g_4f8e20
        };
        uucore::mods::error::set_exit_code(uucore::mods::error::UError::code());
        v10 = uucore::util_name();
        v11 = v33;
        eprintln!("{}: {}", &v10, &v9);
    }
    return;
}
