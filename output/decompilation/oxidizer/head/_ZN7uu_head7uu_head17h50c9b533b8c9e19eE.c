fn uu_head::uu_head(a0: void*) -> u64 {
    let v0: i8;  // [sp-0x110]
    let v1: i8;  // [sp-0x10f]
    let v2: i8;  // [sp-0x10e]
    let v3: i8;  // [sp-0x10d]
    let v4: String;  // [sp-0x10c]
    let v5: Arguments;  // [bp-0x108], Other Possible Types: unsigned long
    let v6: i8;  // [bp-0x100]
    let v7: i32;  // [bp-0xf0]
    let v8: i64;  // [sp-0xd8]
    let v9: Result<struct4, struct8>;  // [sp-0xd0], Other Possible Types: unsigned long
    let v10: i64;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc0]
    let v12: i64;  // [sp-0xb8]
    let v13: i64;  // [sp-0xb0]
    let v14: i64;  // [sp-0xa8]
    let v15: i64;  // [sp-0xa0]
    let v16: i64;  // [sp-0x78]
    let v17: i64;  // [sp-0x70]
    let v18: i64;  // [sp-0x68]
    let v19: i64;  // [sp-0x60]
    let v20: i64;  // [sp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: String;  // [sp-0x48]
    let v24: struct8;  // rax
    let v25: i8;  // r15b
    let v26: i64;  // rbx
    let v27: i64;  // r12
    let v28: i64;  // rdx
    let v29: i8;  // al

    v16 = *((a0 + 32) as &i64);
    v19 = *((a0 + 24) as &i64);
    v20 = v19 + v16 * 24;
    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v24 {
        return 0;
    }
    v3 = *((a0 + 42) as &i8);
    v2 = *((a0 + 41) as &i8);
    v1 = *((a0 + 40) as &i8) & !v2;
    v21 = *(a0 as &i64);
    v11 = *((a0 + 8) as &i64);
    v0 = *((a0 + 43) as &i8);
    v25 = 0;
LABEL_4ba303:
    v10 = v10;
    if !v3 {
        loop {
            v26 = *((v24 + 8) as &i64);
            v27 = *((v24 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v26, v27, "-") as i8 {
                break;
            }
            v13 = v26;
            v14 = v27;
            v9 = std::fs::File::open(v26, v27);
            match v9 {
                Err(_) => {
                    v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v10, v13, v14);
                    uucore::mods::error::set_exit_code(1);
                    v17 = uucore::util_name();
                    v18 = v28;
                    eprintln!("{}: {}", &v17, &v12);
                    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v24 {
                        return 0;
                    }
                },
                Ok(v4) => {
                    if v16 > 1 {
                        if !(!v1) {
                            goto LABEL_4ba769;
                        }
                    } else {
                        if !v2 {
                            goto LABEL_4ba769;
                        }
                    }
                    if (v25 & 1) {
                        v5 = Arguments {
                            pieces: ["\n"]
                            args: []
                            fmt: 0
                        };
                        std::io::stdio::_print(&v5);
                    }
                    println!("==> {} <==", &v13);
LABEL_4ba769:
                    if v8 {
                        v29 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v26, v27, "-") as i8;
                        if v29 {
                            v26 = &g_41df94;
                        }
                        if v29 {
                            v27 = 14;
                        }
                        v13 = v26;
                        v14 = v27;
                        v22 = format!("error reading {}: Input/output error", &v13);
                        *(&v7 as &i32) = 1;
                        v4 as u192 = v22;
                        v9 = alloc::boxed::Box<T>::new(&v4);
                        v10 = &g_52cfb8;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v9) as i32 as u32 as u64);
                        v17 = uucore::util_name();
                        v18 = v28;
                        eprintln!("{}: {}", &v17, &v9);
                    }
                    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    v25 = (v8 & -0x100 | 1) as u8;
                    v10 = v10;
                    if !v24 {
                        return 0;
                    }
                    goto LABEL_4ba303;
                },
            }
        }
    }
    if v16 <= 1 {
        if !v2 {
            vvar_556{stack -160} = std::io::stdio::stdin();
            vvar_558{stack -264} = std::io::stdio::Stdin::lock(&v15);
            *(&v6 as &u8) = v28 as u8 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    } else {
        if v1 {
            vvar_561{stack -160} = std::io::stdio::stdin();
            vvar_563{stack -264} = std::io::stdio::Stdin::lock(&v15);
            *(&v6 as &u8) = v28 as u8 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    }
    if (v25 & 1) {
        v5 = Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v5);
    }
    println!("==> standard input <==");
    v15 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(&v15);
    *(&v6 as &u8) = v28 as u8 & 1;
    goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
}
