fn uu_wc::wc(a0: &struct32, a1: void*, a2: u64) -> u64 {
    let v0: i64;  // [sp-0x1a8], Other Possible Types: Option<struct24>
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i64;  // [sp-0x178], Other Possible Types: Result<struct40, struct16>, struct40, struct56, Arguments
    let v7: i64;  // [sp-0x170]
    let v8: i64;  // [sp-0x168]
    let v9: i8;  // [bp-0x150]
    let v10: i64;  // [sp-0x140]
    let v11: i64;  // [sp-0x138]
    let v12: i64;  // [bp-0x130]
    let v13: i64;  // [sp-0x128]
    let v14: i64;  // [sp-0x120]
    let v15: i64;  // [sp-0x118]
    let v16: i64;  // [sp-0x110]
    let v17: i64;  // [sp-0x100]
    let v18: i64;  // [sp-0xf8]
    let v19: i64;  // [sp-0xf0]
    let v20: i8;  // [bp-0xe8]
    let v21: i64;  // [sp-0xe0]
    let v22: i128;  // [sp-0xd8]
    let v23: i64;  // [sp-0xc8]
    let v24: i64;  // [sp-0xc0]
    let v25: i64;  // [sp-0xb8]
    let v26: i64;  // [sp-0xb0]
    let v27: i64;  // [sp-0xa8]
    let v28: i128;  // [sp-0xa0]
    let v29: i64;  // [sp-0x90]
    let v30: struct24;  // [bp-0x88]
    let v31: i64;  // [sp-0x80]
    let v32: i64;  // [sp-0x78]
    let v33: i192;  // [sp-0x70], Other Possible Types: Option<struct24>
    let v34: i320;  // [sp-0x58], Other Possible Types: struct40
    let v35: i128;  // [sp-0x48]
    let v36: i64;  // [sp-0x38]
    let v38: i64;  // rsi
    let v39: i64;  // r14
    let v40: i64;  // r15
    let v41: i64;  // rax
    let v42: i64;  // rdx
    let v43: i128;  // xmm0
    let v44: i256;  // ymm0
    let v45: i256;  // ymm0
    let v46: i64;  // r15
    let v47: i64;  // rbp
    let v48: i64;  // rbx
    let v49: i256;  // ymm1
    let v50: i64;  // rcx
    let v51: i64;  // rdi
    let v52: i64;  // rax
    let v53: i64;  // rdx
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v58: i64;  // rbp
    let v59: i64;  // rbx
    let v60: i64;  // rbx
    let v61: i64;  // rbp
    let v62: i64;  // rax
    let v64: i64;  // rbp
    let v66: i32;  // ecx
    let v68: i64;  // rax

    v38 = a1;
    v39 = a1;
    v35 = 0;
    v34 = 0;
    v36 = 0;
    v40 = *((a1 + 29) as &i8);
    v17 = 1;
    if v40 != 2 {
        v17 = uu_wc::compute_number_width(a0, v39, a2);
    }
    v6 = uu_wc::Inputs::try_iter(a0, v39);
    v41 = v7;
    v42 = v8;
    if v25 == 9223372036854775811 {
        return v41;
    }
    v19 = v40;
    v29 = v9;
    v43 = *((&v6 as &char + 24) as &i128);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
    v28 = v43;
    v25 = v6;
    v26 = v41;
    v24 = v8;
    v27 = v24;
    v46 = 0;
    v47 = &v20;
    v48 = &v12;
    loop {
        v33 = uu_wc::Inputs::try_iter::{{closure}}(&v25);
        v50 = v33;
        if v50 == 9223372036854775811 {
            break;
        }
        v51 = *((&v33 as &char + 8) as &i64);
        if v50 == 9223372036854775810 {
            v0 = v31;
            v1 = v32;
            *((v1 + 96) as &i64)();
            uucore::mods::error::set_exit_code();
            v20 = uucore::util_name();
            v21 = v53;
            v12 = v47;
            v13 = <&T as core::fmt::Display>::fmt;
            v14 = &v0;
            v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v6 = Arguments {
                pieces: ["", ": ", "\n"]
                args: &[Argument] {
                    ptr: v48
                    len: 2
                }
                fmt: 0
            };
            std::io::stdio::_eprint(&v6);
            v6 = v6;
            v7 = v7;
            goto LABEL_4bd6a0;
        } else {
            v30 = struct24 {
                field_0: v50
                field_8: v0
                field_16: v1
            };
            v6 = uu_wc::word_count_from_input(&v30, v39);
            v52 = v6;
            if !v52 {
LABEL_4bd928:
                v23 = *((&v6 as &char + 40) as &i64);
                v54 = *((&v6 as &char + 8) as &i128);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
                v55 = *((&v6 as &char + 24) as &i128);
                v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55;
                v22 = v55;
                v20 = v54;
                v6 = struct40 {
                    field_0: v54
                    field_16: v22
                    field_32: v23
                };
                v34 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v6);
                if v19 != 2 {
                    v0 = uu_wc::Input::to_title(&v30);
                    if v0 == 0x8000000000000000 || v0 != 9223372036854775809 {
                        v58 = v1;
                        v59 = v2;
                    } else {
                        v58 = 0;
                    }
                    v60 = v59;
                    v61 = v58;
                    v62 = uu_wc::print_stats(v39, &v20, v61, v60, v17);
                    v6 = v6;
                    v7 = v7;
                    if v62 {
                        if !v61 {
                            v64 = &g_41e56d;
                        }
                        if !v61 {
                            v60 = 7;
                        }
                        v4 = v64;
                        v5 = v60;
                        v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v62, &v4);
                        uucore::mods::error::set_exit_code();
                        v10 = uucore::util_name();
                        v11 = v53;
                        eprintln!("{:?}: {:?}", &v10, &v18);
                        v6 = v6;
                        v7 = v7;
                    }
                    v7 = v7;
                    v6 = v6;
                    v47 = &v20;
                    v48 = &v12;
                }
                v46 += 1;
            } else {
                if v52 == 2 {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, &v30);
                    uucore::mods::error::set_exit_code();
                    v10 = uucore::util_name();
                    v11 = v53;
                    v0 = &v10;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v12 = &g_5311c8;
                    v13 = 3;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 2;
                    std::io::stdio::_eprint(v48);
                    v6 = v6;
                    v7 = v7;
                } else {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v6 as &char + 48) as &i64), &v30);
                    uucore::mods::error::set_exit_code();
                    v10 = uucore::util_name();
                    v11 = v53;
                    v0 = &v10;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v12 = &g_5311c8;
                    v13 = 3;
                    v16 = 0;
                    v14 = &v0;
                    v15 = 2;
                    std::io::stdio::_eprint(v48);
                    goto LABEL_4bd928;
                }
LABEL_4bd6a0:
                v7 = v7;
                v6 = v6;
                v46 += 1;
            }
        }
    }
    v66 = v19;
    if !(v66 - 1 < 2 || !v66 && v46 >= 2) {
        return 0;
    }
    v68 = uu_wc::print_stats(v39, &v34, (v66 != 2 ? &g_41e574 : 0), 5, v17);
    if v68 {
        v20 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v68);
        uucore::mods::error::set_exit_code();
        v25 = uucore::util_name();
        v26 = v53;
        eprintln!("{:?}: {:?}", &v25, v47);
    }
}
