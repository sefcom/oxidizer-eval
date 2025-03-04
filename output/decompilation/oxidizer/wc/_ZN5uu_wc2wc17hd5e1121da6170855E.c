fn uu_wc::wc(a0: u32, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x1a8], Other Possible Types: Option<struct24>
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i64;  // [sp-0x178], Other Possible Types: struct56, Result<struct40, struct16>, struct40, Arguments
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
    let v19: i64;  // [bp-0xe8], Other Possible Types: int
    let v20: i64;  // [sp-0xe0]
    let v21: iNone;  // [sp-0xd8]
    let v22: i64;  // [sp-0xc8]
    let v23: i64;  // [sp-0xc0]
    let v24: i64;  // [sp-0xb8]
    let v25: i64;  // [sp-0xb0]
    let v26: i64;  // [sp-0xa8]
    let v27: iNone;  // [sp-0xa0]
    let v28: i64;  // [sp-0x90]
    let v29: i64;  // [sp-0x88]
    let v30: i64;  // [sp-0x80]
    let v31: i64;  // [sp-0x78]
    let v32: Option<struct24>;  // [sp-0x70]
    let v33: iNone;  // [sp-0x48], Other Possible Types: struct40, unsigned long
    let v36: i64;  // r15
    let v37: i64;  // rax
    let v38: iNone;  // xmm0
    let v39: iNone;  // ymm0
    let v40: iNone;  // ymm0
    let v41: i64;  // r15
    let v44: i64;  // rbp
    let v45: iNone;  // ymm1
    let v46: i64;  // rcx
    let v47: i64;  // rax
    let v48: i64;  // rdx
    let v49: iNone;  // xmm0
    let v50: iNone;  // xmm1
    let v52: i64;  // rbp
    let v53: i64;  // rax
    let v55: i64;  // rbp
    let v57: i64;  // rbx
    let v59: i32;  // ecx
    let v61: i64;  // rax

    v33 = 0;
    v33 = 0;
    v33 = 0;
    v36 = *((a1 + 29) as &i8);
    v16 = 1;
    if v36 as u32 != 2 {
        v16 = uu_wc::compute_number_width(a0, a1);
    }
    v6 = uu_wc::Inputs::try_iter(a0);
    v37 = v7;
    if v24 == 9223372036854775811 {
        return v37;
    }
    v18 = v36;
    v28 = *((&v6 as &char + 40) as &i64);
    v38 = *((&v6 as &char + 24) as &i128);
    v40 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256;
    v27 = v38;
    v24 = v6;
    v25 = v37;
    v23 = v8;
    v26 = v23;
    v41 = 0;
    v44 = stack_base + -232;
    v57 = stack_base + -304;
    loop {
        v7 = v7;
        v6 = v6;
        v32 = uu_wc::Inputs::try_iter::{{closure}}(&v24);
        v46 = v32 as i64;
        if v46 == 9223372036854775811 {
            break;
        }
        if v46 == 9223372036854775810 {
            v0 = v30;
            v1 = v31;
            uucore::mods::error::set_exit_code(*((v1 + 96) as &i64)());
            v19 = uucore::util_name();
            v20 = v48;
            v11 = v44;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v0;
            v14 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v6 = Arguments {
                pieces: ["", ": ", "\n"]
                args: &[Argument] {
                    ptr: v57
                    len: 2
                }
                fmt: 0
            };
            std::io::stdio::_eprint(&v6);
            v0 = v0;
            v1 = v1;
            goto LABEL_4bd6a0;
        } else {
            v29 = v46;
            v30 = v0;
            v31 = v1;
            v6 = uu_wc::word_count_from_input(&v29, a1);
            v47 = v6;
            if !v47 {
LABEL_4bd928:
                v22 = v6.field_40;
                v49 = v6.field_8;
                v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u256;
                v50 = v6.field_24;
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256;
                v21 = v50;
                v19 = v49;
                v6 = struct40 {
                    field_0: v49
                    field_16: v21
                    field_32: v22
                };
                v33 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v6);
                if v18 as i32 != 2 {
                    v0 = uu_wc::Input::to_title(&v29);
                    if v0 == 0x8000000000000000 || v0 != 9223372036854775809 {
                        v52 = v1;
                        v57 = v2;
                    } else {
                        v52 = 0;
                    }
                    v53 = uu_wc::print_stats(a1, &v19, v52, v57, v16);
                    if v53 {
                        if !v52 {
                            v55 = &g_41e56d;
                        }
                        if !v52 {
                            v57 = 7;
                        }
                        v4 = v55;
                        v5 = v57;
                        v17 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v53, &v4);
                        uucore::mods::error::set_exit_code(1);
                        v9 = uucore::util_name();
                        v10 = v48;
                        eprintln!("{}: {}", &v9, &v17);
                    }
                }
                v41 += 1;
                v6 = v6;
                v7 = v7;
            } else {
                if v47 as u32 == 2 {
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
                    std::io::stdio::_eprint(v57);
                    v0 = v0;
                    v1 = v1;
                } else {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6.field_48, &v29);
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
                    std::io::stdio::_eprint(v57);
                    goto LABEL_4bd928;
                }
LABEL_4bd6a0:
                v1 = v1;
                v0 = v0;
                v41 += 1;
                v6 = v6;
                v7 = v7;
            }
        }
    }
    v59 = v18 as u32;
    if !(v59 - 1 < 2 || !v59 && v41 >= 2) {
        return 0;
    }
    v61 = uu_wc::print_stats(a1, &v33, (v59 != 2 ? &g_41e574 : 0), 5, v16);
    if v61 {
        v19 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v61);
        uucore::mods::error::set_exit_code(1);
        v24 = uucore::util_name();
        v25 = v48;
        eprintln!("{}: {}", &v24, v44);
    }
}
