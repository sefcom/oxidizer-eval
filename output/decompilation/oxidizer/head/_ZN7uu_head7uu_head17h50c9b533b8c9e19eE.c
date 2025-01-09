fn uu_head::uu_head(a0: &struct48) -> u64 {
    let v0: i8;  // [sp-0x110]
    let v1: i8;  // [sp-0x10f]
    let v2: i8;  // [sp-0x10e]
    let v3: i8;  // [sp-0x10d]
    let v4: i32;  // [sp-0x10c]
    let v5: i64;  // [bp-0x108], Other Possible Types: Arguments
    let v6: i8;  // [bp-0x100]
    let v7: i64;  // [sp-0xf8]
    let v8: i64;  // [bp-0xf0]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xd8]
    let v11: i64;  // [sp-0xd0], Other Possible Types: Result<struct4, struct8>
    let v12: i64;  // [sp-0xc8]
    let v13: i64;  // [sp-0xc0]
    let v14: i64;  // [sp-0xb8]
    let v15: i64;  // [sp-0xb0]
    let v16: i64;  // [sp-0xa8]
    let v17: i64;  // [sp-0xa0]
    let v18: i64;  // [sp-0x98]
    let v19: i64;  // [sp-0x78]
    let v20: i64;  // [sp-0x70]
    let v21: i64;  // [sp-0x68]
    let v22: i64;  // [sp-0x60]
    let v23: i64;  // [sp-0x58]
    let v24: i64;  // [sp-0x50]
    let v25: i8;  // [bp-0x48]
    let v26: i8;  // [bp-0x38]
    let v28: struct8;  // rax
    let v29: i8;  // r15b
    let v30: i64;  // rbx
    let v31: i64;  // r12
    let v32: i64;  // rdx
    let v33: i8;  // al

    v19 = *((a0 + 32) as &i64);
    v22 = *((a0 + 24) as &i64);
    v23 = v22 + v19 * 24;
    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v28 {
        return 0;
    }
    v3 = *((a0 + 42) as &i8);
    v2 = *((a0 + 41) as &i8);
    v1 = *((a0 + 40) as &i8) & !v2;
    v24 = *(a0 as &i64);
    v13 = *((a0 + 8) as &i64);
    v0 = *((a0 + 43) as &i8);
    v29 = 0;
LABEL_4ba303:
    v12 = v12;
    if !v3 {
        loop {
            v30 = *((v28 + 8) as &i64);
            v31 = *((v28 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "-") as i8 {
                break;
            }
            v15 = v30;
            v16 = v31;
            v11 = std::fs::File::open(v30, v31);
            match v11 {
                Err(_) => {
                    v14 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v12, v15, v16);
                    uucore::mods::error::set_exit_code(1);
                    v20 = uucore::util_name();
                    v21 = v32;
                    eprintln!("{}: {}", &v20, &v14);
                    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v28 {
                        return 0;
                    }
                },
                Ok(v4) => {
                    if v19 > 1 {
                        if !(!v1) {
                            goto LABEL_4ba769;
                        }
                    } else {
                        if !v2 {
                            goto LABEL_4ba769;
                        }
                    }
                    if (v29 & 1) {
                        v5 = Arguments {
                            pieces: ["\n"]
                            args: []
                            fmt: 0
                        };
                        std::io::stdio::_print(&v5);
                    }
                    println!("==> {} <==", &v15);
LABEL_4ba769:
                    if v10 {
                        v33 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "-") as i8;
                        if v33 {
                            v30 = &g_41df94;
                        }
                        if v33 {
                            v31 = 14;
                        }
                        v15 = v30;
                        v16 = v31;
                        v17 = &v15;
                        v18 = <&T as core::fmt::Display>::fmt;
                        v5 = "error reading ";
                        v6 = 2;
                        v9 = 0;
                        v7 = &v17;
                        v8 = 1;
                        core::option::Option<T>::map_or_else();
                        v8 = 1;
                        v5 = v25;
                        v7 = v26;
                        v11 = alloc::boxed::Box<T>::new(&v5);
                        v12 = &g_52cfb8;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v11) as i32 as u32 as u64);
                        v20 = uucore::util_name();
                        v21 = v32;
                        eprintln!("{}: {}", &v20, &v11);
                    }
                    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v29 = (v10 & -0x100 | 1) as i8;
                    v12 = v12;
                    if !v28 {
                        return 0;
                    }
                    goto LABEL_4ba303;
                },
            }
        }
    }
    if v19 <= 1 {
        if !v2 {
            vvar_556{stack -160} = std::io::stdio::stdin();
            vvar_558{stack -264} = std::io::stdio::Stdin::lock(&v17);
            v6 = v32 as u8 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    } else {
        if v1 {
            vvar_561{stack -160} = std::io::stdio::stdin();
            vvar_563{stack -264} = std::io::stdio::Stdin::lock(&v17);
            v6 = v32 as u8 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    }
    if (v29 & 1) {
        v5 = Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v5);
    }
    println!("==> standard input <==");
    v17 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(&v17);
    v6 = v32 as u8 & 1;
    goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
}
