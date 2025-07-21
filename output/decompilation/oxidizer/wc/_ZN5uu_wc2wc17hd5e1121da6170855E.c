fn uu_wc::wc(a0: &struct32, a1: i64) -> long long {
    let v0: i64;  // [bp-0x1a8]
    let v1: struct16;  // [bp-0x1a0]
    let v2: i64;  // [bp-0x198]
    let v3: u64;  // [sp-0x190]
    let v4: struct16;  // [bp-0x188], Other Possible Types: u64
    let v5: core::fmt::Arguments;  // [bp-0x178], Other Possible Types: struct40, u64
    let v6: u64;  // [bp-0x178]
    let v7: u64;  // [bp-0x178]
    let v8: u64;  // [bp-0x170]
    let v9: u64;  // [bp-0x170]
    let v10: u64;  // [bp-0x170]
    let v11: u64;  // [bp-0x168]
    let v12: u64;  // [bp-0x168]
    let v13: u64;  // [bp-0x168]
    let v14: i8;  // [bp-0x160]
    let v15: u64;  // [bp-0x150]
    let v16: u64;  // [bp-0x148]
    let v17: u64;  // [bp-0x140]
    let v18: u64;  // [sp-0x138]
    let v19: u8;  // [bp-0x130]
    let v20: i64;  // [bp-0x130], Other Possible Types: u64
    let v21: u64;  // [bp-0x130]
    let v22: u64;  // [sp-0x128]
    let v23: i64;  // [sp-0x120]
    let v24: u64;  // [sp-0x118]
    let v25: void*;  // [sp-0x110]
    let v26: u64;  // [bp-0x100]
    let v27: u64;  // [bp-0xf8]
    let v28: u64;  // [bp-0xf0]
    let v29: u8;  // [bp-0xe8]
    let v30: u64;  // [bp-0xe8]
    let v31: u64;  // [bp-0xe0]
    let v32: u128;  // [bp-0xd8]
    let v33: u64;  // [bp-0xc8]
    let v34: u64;  // [bp-0xc0]
    let v35: u64;  // [bp-0xb8]
    let v36: u64;  // [bp-0xb0]
    let v37: u64;  // [bp-0xa8]
    let v38: u128;  // [bp-0xa0]
    let v39: u64;  // [bp-0x90]
    let v40: struct24;  // [bp-0x88]
    let v41: struct24;  // [bp-0x70]
    let v42: core::slice::iter::Iter<u8>;  // [bp-0x68]
    let v43: struct16;  // [bp-0x60]
    let v44: u128;  // [bp-0x58]
    let v45: struct40;  // [bp-0x58]
    let v46: u128;  // [bp-0x48]
    let v47: void*;  // [bp-0x38]
    let v49: u64;  // r15
    let v50: &u64;  // rcx
    let v51: struct24;  // r15
    let v52: i64;  // rbp
    let v53: core::result::Result<alloc::string::String, core::char::decode::DecodeUtf16Error>;  // rbx
    let v54: core::slice::iter::Iter<u8>;  // rdi
    let v55: struct16;  // rax
    let v57: void*;  // rdx
    let v58: u128;  // xmm0
    let v59: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rbp
    let v60: u64;  // rax
    let v62: u64;  // rbp
    let v63: u64;  // rbp
    let v66: u32;  // ecx
    let v67: u64;  // rax

    v46 = 0;
    v44 = 0;
    v47 = 0;
    v49 = *((a1 + 29) as &i8);
    v26 = 1;
    if v49 != 2 {
        v26 = uu_wc::compute_number_width(a0, a1);
    }
    uu_wc::Inputs::try_iter(a0, a1, v50);
    if v7 == 9223372036854775811 {
        return v8;
    }
    v28 = v49;
    v39 = v15;
    v38 = *(&v14 as &i128);
    v35 = v7;
    v36 = v8;
    v34 = v11;
    v37 = v34;
    v51 = 0;
    v52 = &v29;
    v53 = &v19;
    loop {
        do {
            loop {
                vvar_701{stack -112} = struct24 OrderedDict({0: 𝜙@64b [((4971217, None), vvar_515{stack -112}), ((4970144, None), vvar_515{stack -112}), ((4970144, 1), vvar_515{stack -112}), ((4970035, None), None)], 8: 𝜙@64b [((4971217, None), vvar_516{stack -104}), ((4970144, None), vvar_516{stack -104}), ((4970144, 1), vvar_516{stack -104}), ((4970035, None), None)], 16: 𝜙@64b [((4971217, None), vvar_517{stack -96}), ((4970144, None), vvar_517{stack -96}), ((4970144, 1), vvar_517{stack -96}), ((4970035, None), None)]})
                uu_wc::Inputs::try_iter::{{closure}}(&v41, &v35);
                if v41.field_0 == 9223372036854775811 {
                    v66 = v28;
                    if v66 - 1 < 2 || !v66 && v51 >= 2 {
                        v67 = uu_wc::print_stats(a1, &v45, (v66 != 2 ? &g_41e574 : 0), 5, v26);
                        if v67 {
                            v29 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v67);
                            uucore::mods::error::set_exit_code(1);
                            v35 = uucore::util_name();
                            v36 = v57;
                            eprintln!("{}: {}", &v35, v52);
                        }
                    }
                    return 0;
                }
                v54 = v42;
                v55 = v43;
                if v41.field_0 != 9223372036854775810 {
                    break;
                }
                v0 = v54;
                v1 = v55;
                uucore::mods::error::set_exit_code(*((v55 + 96) as &i64)(v54) as u32);
                v30 = uucore::util_name();
                v31 = v57;
                v20 = v52;
                v22 = <&T as core::fmt::Display>::fmt;
                v23 = &v0;
                v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v5 = core::fmt::Arguments {
                    pieces: [&g_5311c8, ": ", "\n"]
                    args: &[core::fmt::rt::Argument] {
                        ptr: v53
                        len: 2
                    }
                    fmt: 0
                };
                std::io::stdio::_eprint(&v5);
                v51 += 1;
                v7 = v6;
                v8 = v9;
                v11 = v12;
            }
            v40 = struct24 {
                field_0: v41.field_0
                field_8: v54
                field_16: v55
            };
            uu_wc::word_count_from_input(&v7, &v40, a1);
            if v7 {
                if v7 == 2 {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v8, &v40);
                    uucore::mods::error::set_exit_code(1);
                    v17 = uucore::util_name();
                    v18 = v57;
                    v0 = &v17;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v20 = &g_5311c8;
                    v22 = 3;
                    v25 = 0;
                    v23 = &v0;
                    v24 = 2;
                    std::io::stdio::_eprint(v53);
                } else {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v16, &v40);
                    uucore::mods::error::set_exit_code(1);
                    v17 = uucore::util_name();
                    v18 = v57;
                    v0 = &v17;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v21 = &g_5311c8;
                    v22 = 3;
                    v25 = 0;
                    v23 = &v0;
                    v24 = 2;
                    std::io::stdio::_eprint(v53);
                }
            }
            v33 = v15;
            v58 = *(&v8 as &i128);
            v32 = *(&v14 as &i128);
            v29 = v58;
            v5 = struct40 {
                field_0: v58
                field_16: v32
                field_32: v33
            };
            v45 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v5);
        } while (v28 as i32 == 2);
        v40 = uu_wc::Input::to_title(v57);
        if v0 == 0x8000000000000000 || v0 != 9223372036854775809 {
            v59 = v1;
        }
        v60 = uu_wc::print_stats(a1, &v29, v59, v2, v26);
        v5 = v7;
        v10 = v8;
        v13 = v11;
        if v60 {
            if !v59 {
                v62 = &g_41e56d;
            } else {
                v62 = v59;
            }
            v63 = v62;
            v4 = struct16 {
                field_0: v63
                field_8: v53
            };
            v27 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v60, &v4);
            uucore::mods::error::set_exit_code(1);
            v17 = uucore::util_name();
            v18 = v57;
            eprintln!("{}: {}", &v17, &v27);
            v5 = v6;
            v10 = v9;
            v13 = v12;
        }
        v11 = v13;
        v8 = v10;
        v7 = v5;
    }
}
