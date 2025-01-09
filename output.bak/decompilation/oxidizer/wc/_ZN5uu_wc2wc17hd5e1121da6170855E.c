fn uu_wc::wc(a0: &struct32, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x1a8], Other Possible Types: Option<struct24>
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i328;  // [sp-0x178], Other Possible Types: struct56, Result<struct40, struct16>, struct40, Arguments
    let v7: i64;  // [sp-0x170]
    let v8: i64;  // [sp-0x168]
    let v9: i64;  // [sp-0x140]
    let v10: i64;  // [sp-0x138]
    let v11: i64;  // [bp-0x130]
    let v12: i64;  // [sp-0x128]
    let v13: i64;  // [sp-0x120]
    let v14: i64;  // [sp-0x118]
    let v15: i64;  // [sp-0x110]
    let v16: i64;  // [sp-0x100]
    let v17: i64;  // [sp-0xf8]
    let v18: i64;  // [sp-0xf0]
    let v19: i128;  // [bp-0xe8]
    let v20: i64;  // [sp-0xe0]
    let v21: i128;  // [sp-0xd8]
    let v22: i64;  // [sp-0xc8]
    let v23: i64;  // [sp-0xc0]
    let v24: i64;  // [sp-0xb8]
    let v25: i64;  // [sp-0xb0]
    let v26: i64;  // [sp-0xa8]
    let v27: i128;  // [sp-0xa0]
    let v28: i64;  // [sp-0x90]
    let v29: i64;  // [sp-0x88]
    let v30: i64;  // [sp-0x80]
    let v31: i64;  // [sp-0x78]
    let v32: i192;  // [sp-0x70], Other Possible Types: Option<struct24>
    let v33: i320;  // [sp-0x58], Other Possible Types: struct40
    let v34: i128;  // [sp-0x48]
    let v35: i64;  // [sp-0x38]
    let v37: i64;  // r15
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i256;  // ymm0
    let v41: i256;  // ymm0
    let v42: i64;  // r15
    let v43: i64;  // rbp
    let v44: i64;  // rbx
    let v45: i256;  // ymm1
    let v46: i64;  // rcx
    let v47: i64;  // rax
    let v48: i64;  // rdx
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v53: i64;  // rbp
    let v54: i64;  // rbx
    let v55: i64;  // rbx
    let v56: i64;  // rbp
    let v57: i64;  // rax
    let v59: i64;  // rbp
    let v61: i32;  // ecx
    let v63: i64;  // rax

    v34 = 0;
    v33 = 0;
    v35 = 0;
    v37 = *((a1 + 29) as &i8);
    v16 = 1;
    if v37 != 2 {
        v16 = uu_wc::compute_number_width(a0, a1);
    }
    v6 = uu_wc::Inputs::try_iter(a0);
    v38 = v7;
    if v24 == 9223372036854775811 {
        return v38;
    }
    v18 = v37;
    v28 = v7;
    v39 = *((&v6 as &char + 24) as &i128);
    v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
    v27 = v39;
    v24 = v6;
    v25 = v38;
    v23 = v8;
    v26 = v23;
    v42 = 0;
    v43 = &v19;
    v44 = &v11;
    loop {
        v32 = uu_wc::Inputs::try_iter::{{closure}}(&v24);
        v46 = v32;
        if v46 == 9223372036854775811 {
            break;
        }
        if v46 == 9223372036854775810 {
            v0 = v30;
            v1 = v31;
            uucore::mods::error::set_exit_code(*((v1 + 96) as &i64)());
            v19 = uucore::util_name();
            v20 = v48;
            v11 = v43;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v0;
            v14 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v6 = Arguments {
                pieces: ["", ": ", "\n"]
                args: &[Argument] {
                    ptr: v44
                    len: 2
                }
                fmt: 0
            };
            std::io::stdio::_eprint(&v6);
            v0 = v0;
            v1 = v1;
            v6 = v6;
            v7 = v7;
            goto LABEL_4bd6a0;
        } else {
            v29 = v46;
            v30 = v0;
            v31 = v1;
            v6 = uu_wc::word_count_from_input(&v29, a1);
            v47 = v6;
            if !v47 {
LABEL_4bd928:
                v22 = *((&v6 as &char + 40) as &i64);
                v49 = *((&v6 as &char + 8) as &i128);
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v50 = *((&v6 as &char + 24) as &i128);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                v21 = v50;
                v19 = v49;
                v6 = struct40 {
                    field_0: v49
                    field_16: v21
                    field_32: v22
                };
                v33 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v6);
                if v18 != 2 {
                    v0 = uu_wc::Input::to_title(&v29);
                    if v0 == 0x8000000000000000 || v0 != 9223372036854775809 {
                        v53 = v1;
                        v54 = v2;
                    } else {
                        v53 = 0;
                    }
                    v55 = v54;
                    v56 = v53;
                    v57 = uu_wc::print_stats(a1, &v19, v56, v55, v16);
                    v6 = v6;
                    v7 = v7;
                    if v57 {
                        if !v56 {
                            v59 = &g_41e56d;
                        }
                        if !v56 {
                            v55 = 7;
                        }
                        v4 = v59;
                        v5 = v55;
                        v17 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v57, &v4);
                        uucore::mods::error::set_exit_code(1);
                        v9 = uucore::util_name();
                        v10 = v48;
                        eprintln!("{:?}: {:?}", &v9, &v17);
                        v6 = v6;
                        v7 = v7;
                    }
                    v7 = v7;
                    v6 = v6;
                    v43 = &v19;
                    v44 = &v11;
                }
                v42 += 1;
            } else {
                if v47 == 2 {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, &v29);
                    uucore::mods::error::set_exit_code(1);
                    v9 = uucore::util_name();
                    v10 = v48;
                    v0 = &v9;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v11 = &g_5311c8;
                    v12 = 3;
                    v15 = 0;
                    v13 = &v0;
                    v14 = 2;
                    std::io::stdio::_eprint(v44);
                    v0 = v0;
                    v1 = v1;
                    v6 = v6;
                    v7 = v7;
                } else {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*((&v6 as &char + 48) as &i64), &v29);
                    uucore::mods::error::set_exit_code(1);
                    v9 = uucore::util_name();
                    v10 = v48;
                    v0 = &v9;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v11 = &g_5311c8;
                    v12 = 3;
                    v15 = 0;
                    v13 = &v0;
                    v14 = 2;
                    std::io::stdio::_eprint(v44);
                    goto LABEL_4bd928;
                }
LABEL_4bd6a0:
                v7 = v7;
                v6 = v6;
                v1 = v1;
                v0 = v0;
                v42 += 1;
            }
        }
    }
    v61 = v18;
    if !(v61 - 1 < 2 || !v61 && v42 >= 2) {
        return 0;
    }
    v63 = uu_wc::print_stats(a1, &v33, (v61 != 2 ? &g_41e574 : 0), 5, v16);
    if v63 {
        v19 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v63);
        uucore::mods::error::set_exit_code(1);
        v24 = uucore::util_name();
        v25 = v48;
        eprintln!("{:?}: {:?}", &v24, v43);
    }
}
