fn uu_head::uu_head(a0: &struct48) -> u64 {
    let v0: u8;  // [sp-0x110]
    let v1: u8;  // [sp-0x10f]
    let v2: u8;  // [sp-0x10e]
    let v3: u8;  // [sp-0x10d]
    let v4: u32;  // [sp-0x10c]
    let v5: Arguments;  // [bp-0x108], Other Possible Types: u64
    let v6: u8;  // [bp-0x100]
    let v7: &&struct_0;  // [sp-0xf8], Other Possible Types: u64
    let v8: u32;  // [bp-0xf0]
    let v9: void*;  // [sp-0xe8]
    let v10: u64;  // [sp-0xd8]
    let v11: u64;  // [sp-0xd0], Other Possible Types: Result<struct4, struct8>
    let v12: u64;  // [sp-0xc8]
    let v13: u64;  // [sp-0xc0]
    let v14: u64;  // [sp-0xb8]
    let v15: u64;  // [sp-0xb0]
    let v16: u64;  // [sp-0xa8]
    let v17: &u8;  // [sp-0xa0]
    let v18: u64;  // [sp-0x98]
    let v19: u64;  // [sp-0x78]
    let v20: u64;  // [sp-0x70]
    let v21: u64;  // [sp-0x68]
    let v22: u64;  // [sp-0x60]
    let v23: u64;  // [sp-0x58]
    let v24: u64;  // [sp-0x50]
    let v25: i8;  // [bp-0x48]
    let v26: i8;  // [bp-0x38]
    let v28: struct8;  // rax
    let v29: u8;  // r15b
    let v30: u256;  // ymm0
    let v31: u64;  // rbx
    let v32: u64;  // r12
    let v33: u64;  // rdx
    let v34: u8;  // al
    let v35: u128;  // xmm0

    v19 = a0->field_20;
    v22 = a0->field_18;
    v23 = v22 + v19 * 24;
    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v28 {
        return 0;
    }
    v3 = a0->field_2a;
    v2 = a0->field_29;
    v1 = a0->field_28 & !v2;
    v24 = a0->field_0;
    v13 = a0->field_8;
    v0 = a0->field_2b;
    v29 = 0;
LABEL_4ba303:
    if !v3 {
        loop {
            v31 = *((v28 + 8) as &i64);
            v32 = *((v28 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-") as i8 {
                break;
            }
            v15 = v31;
            v16 = v32;
            v11 = std::fs::File::open(v31, v32) as u64;
            if v11 as i32 {
                v14 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v12, v15, v16);
                uucore::mods::error::set_exit_code(1);
                v20 = uucore::util_name();
                v21 = v33;
                eprintln!("{:?}: {:?}", &v20, &v14);
                v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v28 {
                    return 0;
                }
            } else {
                v4 = *((&v11 as &char + 4) as &i32);
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
                    *(&v5.pieces as &Arguments) = Arguments {
                        pieces: ["\n"]
                        args: []
                        fmt: 0
                    };
                    v30 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    std::io::stdio::_print(&v5);
                }
                println!("==> {:?} <==", &v15);
LABEL_4ba769:
                v10 = uu_head::head_file(&v4, a0);
                if v10 {
                    v34 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-") as i8;
                    if v34 {
                        v31 = &g_41df94;
                    }
                    if v34 {
                        v32 = 14;
                    }
                    v15 = v31;
                    v16 = v32;
                    v17 = &v15;
                    v18 = <&T as core::fmt::Display>::fmt;
                    v5 = "error reading ";
                    v6 = 2;
                    v9 = 0;
                    v7 = &v17;
                    v8 = 1;
                    core::option::Option<T>::map_or_else();
                    v8 = 1;
                    v35 = v25;
                    v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                    *(&v5.pieces.ptr as &u128) = v35;
                    v7 = v26;
                    v11 = alloc::boxed::Box<T>::new(&v5);
                    v12 = &g_52cfb8;
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v11) as i32);
                    v20 = uucore::util_name();
                    v21 = v33;
                    eprintln!("{:?}: {:?}", &v20, &v11);
                }
                v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                v29 = v10 | -0x100 | 1;
                if !v28 {
                    return 0;
                }
                goto LABEL_4ba303;
            }
        }
    }
    if v19 <= 1 {
        if !v2 {
            vvar_554{stack -160} = std::io::stdio::stdin();
            vvar_556{stack -264} = std::io::stdio::Stdin::lock(&v17);
            v6 = v33 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    } else {
        if v1 {
            vvar_559{stack -160} = std::io::stdio::stdin();
            vvar_561{stack -264} = std::io::stdio::Stdin::lock(&v17);
            v6 = v33 & 1;
            goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
        }
    }
    if (v29 & 1) {
        *(&v5.pieces as &Arguments) = Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v5);
    }
    println!("==> standard input <==");
    v17 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(&v17);
    v6 = v33 & 1;
    goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
}
