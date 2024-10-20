fn uu_ls::display_additional_leading_info() -> u32 {
    let v0: i8;  // [bp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [bp-0x108], Other Possible Types: Arguments
    let v5: i64;  // [sp-0x100]
    let v6: i64;  // [sp-0xf8]
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xe0]
    let v10: i8;  // [sp-0xd8]
    let v11: i64;  // [bp-0xd0], Other Possible Types: Arguments, Argument
    let v12: i64;  // [sp-0xc8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: i64;  // [sp-0x90]
    let v16: i192;  // [sp-0x88], Other Possible Types: String
    let v17: i64;  // [sp-0x70], Other Possible Types: Argument
    let v18: Argument;  // [bp-0x68]
    let v19: i64;  // [sp-0x58]
    let v20: i64;  // [sp-0x50]
    let v21: i64;  // [sp-0x48]
    let v23: i64;  // r8
    let v24: i64;  // rsi
    let v25: i64;  // rax
    let v26: i64;  // rbp
    let v27: i64;  // r9
    let v28: i64;  // rcx
    let v30: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // r14
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v36: i64;  // rsi
    let v37: i64;  // rdi
    let v38: i64;  // rdi

    v13 = 0;
    v14 = 1;
    v15 = 0;
    if *((v23 + 233) as &i8) {
        v25 = *((v24 + 72) as &i64);
        if v25 == 3 {
            v26 = v24 + 72;
            core::cell::once::OnceCell<T>::try_init(v26, v24, v27, v28, v23, v27);
            v25 = *(v26 as &i64);
        }
        if v25 != 2 {
            v17 = *((v24 + 112) as &i64);
            v11 = Argument {
                value: &v17
                formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
            };
            v4 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v11]
                fmt: None
            };
            alloc::fmt::format::format_inner(&v4);
        } else {
            v30 = __rust_alloc(1, 1);
            *(v30 as &i8) = 63;
            v1 = 1;
            v2 = v30;
            v3 = 1;
        }
        v20 = v30;
        v21 = 1;
        v17 = &v20;
        v18 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: v31
        };
        v19 = 0;
        v4 = 2;
        v6 = 1;
        v7 = 1;
        v8 = 0;
        v9 = 32;
        v10 = 1;
        v11 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: [&v17, &v18]
            fmt: 
        };
        v16 = alloc::fmt::format::format_inner(&v11);
        v11 = &v16;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if core::fmt::write(&v13, &g_5ac0e8, &v4) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
    }
    if !*((v23 + 234) as &i8) {
        *((v38 + 16) as &i64) = v15;
        *(v38 as &i64) = v13;
        return;
    }
    v32 = *((v24 + 72) as &i64);
    if v32 == 3 {
        v33 = v24 + 72;
        core::cell::once::OnceCell<T>::try_init(v33, v24, v27, v28, v23, v27);
        v32 = *(v33 as &i64);
    }
    if v32 == 2 {
        v34 = __rust_alloc(1, 1);
        *(v34 as &i8) = 63;
        v2 = v34;
        v3 = 1;
    } else {
        v35 = *((v23 + 241) as &i8);
        if (0xb000 & *((v24 + 128) as &i32) | 0x4000) == 0x6000 {
            v36 = 0;
            if !(!(v35 & 255 & 255)) {
                goto LABEL_4d21f3;
            }
        } else {
            v36 = *((v24 + 168) as &i64) * 0x200;
            if !(!(v35 & 255 & 255)) {
                goto LABEL_4d21f3;
            }
        }
        v37 = *((v23 + 216) as &i64);
        if !v37 {
            core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
        }
        v36 = (!(v36 | v37) >> 32 ? (0 CONCAT v36) /m v37 & 4294967295 & 4294967295 : (0 CONCAT v36) /m v37);
LABEL_4d21f3:
        uucore::features::format::human::human_readable(v36, v35 & 4294967295, v35, v23, v27, v0, v1);
    }
    if *((v23 + 248) as &i8) != 4 {
        v20 = v2;
        v17 = Argument {
            value: &v20
            formatter: <&T as core::fmt::Display>::fmt
        };
        v18 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: v28
        };
        v19 = 0;
        v4 = 2;
        v6 = 1;
        v7 = 1;
        v8 = 0;
        v9 = 32;
        v10 = 1;
        v11 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: [&v17, &v18]
            fmt: 
        };
        v16 = alloc::fmt::format::format_inner(&v11);
        v11 = &v16;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if core::fmt::write(&v13, &g_5ac0e8, &v4) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
    } else {
        v11 = &v1;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if core::fmt::write(&v13, &g_5ac0e8, &v4) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
    }
}
