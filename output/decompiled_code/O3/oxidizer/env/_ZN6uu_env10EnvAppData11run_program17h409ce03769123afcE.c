fn uu_env::EnvAppData::run_program(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x298]
    let v1: i32;  // [sp-0x28c]
    let v2: i64;  // [sp-0x288]
    let v3: i64;  // [sp-0x280]
    let v4: i64;  // [sp-0x278]
    let v5: i64;  // [bp-0x270]
    let v6: i64;  // [sp-0x268], Other Possible Types: Enum
    let v7: i64;  // [sp-0x260]
    let v8: i64;  // [sp-0x258]
    let v9: i64;  // [sp-0x250]
    let v10: i64;  // [bp-0x248], Other Possible Types: struct4
    let v11: i64;  // [sp-0x240]
    let v12: i64;  // [sp-0x238]
    let v13: i64;  // [sp-0x230]
    let v14: i64;  // [sp-0x228]
    let v15: i64;  // [sp-0x220]
    let v16: i64;  // [sp-0x1a0]
    let v17: i64;  // [sp-0x198], Other Possible Types: struct8, Arguments
    let v18: i64;  // [sp-0x190]
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [bp-0x180]
    let v21: i32;  // [sp-0x110]
    let v22: struct149;  // [sp-0x100], Other Possible Types: i1192, Enum
    let v24: i32;  // edx
    let v25: i64;  // r15
    let v26: i64;  // r14
    let v27: i64;  // r13
    let v28: i64;  // rbx
    let v29: i64;  // r13
    let v30: i64;  // r15
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v33: i64;  // r15
    let v37: i64;  // rbp
    let v38: i256;  // ymm0
    let v39: i128;  // xmm0
    let v40: i64;  // r12
    let v42: i32;  // ebx
    let v43: i32;  // ebx
    let v44: i64;  // rbx
    let v45: i64;  // rbx
    let v46: i8;  // bpl

    v1 = v24;
    v25 = *((a1 + 88) as &i64);
    if !v25 {
        core::panicking::panic_bounds_check(); /* do not return */
    }
    v26 = *((a1 + 80) as &i64);
    v27 = v26 + 16;
    v9 = *(v26 as &i64);
    v8 = *((v26 + 8) as &i64);
    v22 = std::sys::pal::unix::process::process_common::Command::new(*(v26 as &i64), v8);
    v28 = v25 * 16 + v26;
    v16 = v25;
    if v25 != 1 {
        do {
            v30 = v29;
            v22 = std::sys::pal::unix::process::process_common::Command::arg(*(v30 as &i64), *((v30 + 8) as &i64));
            v31 = v30 + 16;
        } while (v31 != v28);
    }
    v32 = *((a1 + 136) as &i64);
    if !v32 {
        v8 = v8;
        v9 = v9;
        if !v1 {
            goto LABEL_49bea3;
        }
    } else {
        v33 = *((a1 + 144) as &i64);
        std::sys::pal::unix::process::process_common::Command::set_arg_0(&v22, v32, v33);
        if !v1 {
            goto LABEL_49bea3;
        }
        v17 = 1;
        v18 = v32;
        v19 = v33;
        v20 = 1;
        v2 = &v17;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(&v10 as &&str) = "argv0:     ";
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint(&v10);
    }
    v17 = 1;
    v18 = v9;
    v19 = v8;
    v20 = 0;
    v2 = &v17;
    v3 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(&v10 as &&str) = "executing: ";
    v11 = 2;
    v14 = 0;
    v12 = &v2;
    v13 = 1;
    std::io::stdio::_eprint(&v10);
    v6 = &g_420398;
    v7 = 6;
    v17 = 1;
    v18 = v9;
    v19 = v8;
    v20 = 1;
    v2 = &v6;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = &v17;
    v5 = <os_display::Quoted as core::fmt::Display>::fmt;
    v10 = &g_50c788;
    v11 = 3;
    v14 = 0;
    v12 = &v2;
    v13 = 2;
    std::io::stdio::_eprint(&v10);
    if v16 != 1 {
        v37 = 1;
        do {
            v0 = v37;
            v39 = *(v27 as &i128);
            vvar_64{reg 224} = ((vvar_64{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_227{reg 224}))
            v2 = 1;
            v3 = v39;
            v5 = 1;
            v10 = &v6;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v0;
            v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v14 = &v2;
            v15 = <os_display::Quoted as core::fmt::Display>::fmt;
            v17 = Arguments {
                pieces: [&g_50c820, "[", "]= ", "\n"]
                args: &[&Argument] {
                    ptr: &v10
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v20 = 3;
            std::io::stdio::_eprint(&v17);
            v37 = v0 + 1;
            v27 += 16;
        } while (v27 != v28);
    }
LABEL_49bea3:
    v6 = std::process::Command::status(&v22);
    if v6 {
        v40 = v7;
        if !std::io::error::Error::kind(v40) as i8 || std::io::error::Error::kind(v40) as i8 == 20 {
            v46 = *((a0 + 1) as &i8);
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v17 = g_512018;
            v2 = &v17;
            v3 = <&T as core::fmt::Display>::fmt;
            v10 = &g_50c630;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint(&v10);
            v17 = 1;
            v18 = v9;
            v19 = v8;
            v20 = 1;
            v2 = &v17;
            v3 = <os_display::Quoted as core::fmt::Display>::fmt;
            v10 = &g_50c6e0;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint(&v10);
            if !v46 {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v17 = g_512018;
                v2 = &v17;
                v3 = <&T as core::fmt::Display>::fmt;
                v10 = &g_50c630;
                v11 = 2;
                v14 = 0;
                v12 = &v2;
                v13 = 1;
                std::io::stdio::_eprint(&v10);
                v17 = "use -[v]S to pass options in shebang lines";
                v18 = <&T as core::fmt::Display>::fmt;
                v10 = &g_50c710;
                v11 = 2;
                v14 = 0;
                v12 = &v17;
                v13 = 1;
                std::io::stdio::_eprint(&v10);
            }
            v45 = __rust_alloc(4, 4);
            *(v45 as &i32) = 127;
        } else {
            v0 = v40;
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v17 = g_512018;
            v2 = &v17;
            v3 = <&T as core::fmt::Display>::fmt;
            v10 = &g_50c630;
            v11 = 2;
            v14 = 0;
            v12 = &v2;
            v13 = 1;
            std::io::stdio::_eprint(&v10);
            v17 = &v0;
            v18 = <std::io::error::Error as core::fmt::Debug>::fmt;
            *(&v10 as &&str) = "unknown error: ";
            v11 = 2;
            v14 = 0;
            v12 = &v17;
            v13 = 1;
            std::io::stdio::_eprint(&v10);
            v45 = __rust_alloc(4, 4);
            *(v45 as &i32) = 126;
        }
    } else {
        if !v42 {
            return 0;
        }
        v43 = *((&v6 as &char + 4) as &i32);
        v44 = v43 & 127;
        if !(v43 & 127) {
            v45 = __rust_alloc(4, 4);
            *(v45 as &i32) = v43 >> 8;
        } else {
            if (v44 + 1 & 4294967295) < 2 {
                core::option::unwrap_failed(); /* do not return */
            }
            if v44 >= 32 {
                v10 = 22;
                core::result::unwrap_failed(); /* do not return */
            }
            sigfillset(&v17);
            v17 = struct8 {
                field_0: 0
            };
            v21 = 0;
            v10 = nix::sys::signal::sigaction(v44 & 4294967295, &v17);
            nix::sys::signal::raise(v44 & 4294967295);
        }
    }
    return v45;
}
