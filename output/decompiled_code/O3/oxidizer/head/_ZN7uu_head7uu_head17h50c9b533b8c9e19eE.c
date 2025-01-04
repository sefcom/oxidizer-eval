fn uu_head::uu_head() -> u32 {
    let v1: u8;  // [sp-0x10f]
    let v2: u8;  // [sp-0x10e]
    let v3: u8;  // [sp-0x10d]
    let v4: u32;  // [sp-0x10c]
    let v5: Arguments;  // [sp-0x108], Other Possible Types: u64
    let v6: u64;  // [bp-0x100]
    let v7: u64;  // [sp-0xf8]
    let v8: u128;  // [bp-0xf0]
    let v9: u64;  // [sp-0xd8]
    let v10: u64;  // [sp-0xd0], Other Possible Types: Result<struct4, struct8>
    let v11: u64;  // [sp-0xc8]
    let v13: u64;  // [sp-0xb8]
    let v14: u64;  // [sp-0xb0]
    let v15: u64;  // [sp-0xa8]
    let v16: u64;  // [sp-0xa0]
    let v17: u64;  // [sp-0x78]
    let v18: u64;  // [sp-0x70]
    let v19: u64;  // [sp-0x68]
    let v23: i192;  // [sp-0x48]
    let v25: &struct_0;  // rdi
    let v26: struct8;  // rax
    let v27: u8;  // r15b
    let v28: u256;  // ymm0
    let v29: u64;  // rbx
    let v30: u64;  // r12
    let v31: u64;  // rdx
    let v32: u8;  // al
    let v33: u128;  // xmm0

    do {
        if v3 {
            goto LABEL_4ba316;
        }
        v29 = *((v26 + 8) as &i64);
        v30 = *((v26 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, "-") as i8 {
LABEL_4ba316:
            if v17 <= 1 {
                if !v2 {
                    goto LABEL_4ba4eb;
                }
            } else {
                if v1 {
                    goto LABEL_4ba4eb;
                }
            }
            if (v27 & 1) {
                *(&v5.pieces as &Arguments) = Arguments {
                    pieces: ["\n"]
                    args: []
                    fmt: 0
                };
                std::io::stdio::_print(&v5);
            }
            println!("==> standard input <==");
            goto LABEL_4ba4eb;
        }
        v14 = v29;
        v15 = v30;
        v10 = std::fs::File::open(v29, v30);
        if v10 as i32 {
            v13 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v11, v14, v15);
            uucore::mods::error::set_exit_code();
            v18 = uucore::util_name();
            v19 = v31;
            eprintln!("{:?}: {:?}", &v18, &v13);
            v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v26 {
                break;
            }
            continue;
        }
        v4 = *((&v10 as &char + 4) as &i32);
        if v17 > 1 {
            if !(!v1) {
                goto LABEL_4ba769;
            }
        } else {
            if !v2 {
                goto LABEL_4ba769;
            }
        }
        if (v27 & 1) {
            v5 = "\n";
            v6 = 1;
            v7 = 8;
            v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v8 = 0;
            std::io::stdio::_print(&v5);
        }
        println!("==> {:?} <==", &v14);
LABEL_4ba769:
        v9 = uu_head::head_file(&v4, v25);
        if v9 {
            v32 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, "-") as i8;
            if v32 {
                v29 = &g_41df94;
            }
            if v32 {
                v30 = 14;
            }
            v14 = v29;
            v15 = v30;
            v23 = format!("error reading {:?}: Input/output error", &v14);
            v8 = 1;
            v33 = v23;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
            *(&v5.pieces.ptr as &u128) = v33;
            v7 = *((&v23 as &char + 16) as &i64);
            v10 = alloc::boxed::Box<T>::new(&v5);
            v11 = &g_52cfb8;
            <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v10);
            uucore::mods::error::set_exit_code();
            v18 = uucore::util_name();
            v19 = v31;
            eprintln!("{:?}: {:?}", &v18, &v10);
        }
        v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        v27 = v9 | -0x100 | 1;
    } while (v26);
    return;
LABEL_4ba4eb:
    v16 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(&v16);
    v6 = v31 & 1;
    goto *((4316068 + (stack_base)[80] as i64 * 4) as &i32) + 4316068;
}
