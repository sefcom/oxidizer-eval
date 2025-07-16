fn uu_wc::wc(a0: &struct32, a1: i64) -> long long {
    let v0: i64;  // [bp-0x1a8]
    let v1: struct32;  // [bp-0x1a0]
    let v2: i64;  // [bp-0x198]
    let v3: u64;  // [sp-0x190]
    let v4: u64;  // [bp-0x188]
    let v5: u64;  // [bp-0x180]
    let v6: u320;  // [bp-0x178]
    let v7: u64;  // [bp-0x178]
    let v8: u64;  // [bp-0x178]
    let v9: u64;  // [bp-0x170]
    let v10: u64;  // [bp-0x170]
    let v11: u64;  // [bp-0x170]
    let v12: u64;  // [bp-0x168]
    let v13: u64;  // [bp-0x168]
    let v14: u64;  // [bp-0x168]
    let v15: u8;  // [bp-0x160]
    let v16: u64;  // [bp-0x150]
    let v17: u64;  // [bp-0x148]
    let v18: u64;  // [bp-0x140]
    let v19: u64;  // [sp-0x138]
    let v20: u8;  // [bp-0x130]
    let v21: i64;  // [bp-0x130], Other Possible Types: u64
    let v22: u64;  // [bp-0x130]
    let v23: u64;  // [sp-0x128]
    let v24: i64;  // [sp-0x120]
    let v25: u64;  // [sp-0x118]
    let v26: void*;  // [sp-0x110]
    let v27: u64;  // [bp-0x100]
    let v28: u64;  // [bp-0xf8]
    let v29: u64;  // [bp-0xf0]
    let v30: u8;  // [bp-0xe8]
    let v31: u64;  // [bp-0xe8]
    let v32: u64;  // [bp-0xe0]
    let v33: u8;  // [bp-0xd8]
    let v34: u64;  // [bp-0xc8]
    let v35: u64;  // [bp-0xc0]
    let v36: u64;  // [bp-0xb8]
    let v37: u64;  // [bp-0xb0]
    let v38: u64;  // [bp-0xa8]
    let v39: u8;  // [bp-0xa0]
    let v40: u64;  // [bp-0x90]
    let v41: u64;  // [bp-0x88], Other Possible Types: struct24
    let v42: i64;  // [bp-0x80]
    let v43: struct32;  // [bp-0x78]
    let v44: u192;  // [bp-0x70]
    let v45: i64;  // [bp-0x68]
    let v46: struct32;  // [bp-0x60]
    let v47: u128;  // [bp-0x58]
    let v49: u128;  // [bp-0x48]
    let v50: void*;  // [bp-0x38]
    let v52: u64;  // r15
    let v53: &u64;  // rcx
    let v54: void*;  // r15
    let v55: i64;  // rbp
    let v56: u64;  // rbx
    let v57: Result<struct56, struct16>;  // rdi
    let v58: struct32;  // rax
    let v60: void*;  // rdx
    let v61: u128;  // xmm0
    let v62: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rbp
    let v63: u64;  // rax
    let v65: u64;  // rbp
    let v66: u64;  // rbp
    let v69: u32;  // ecx
    let v70: u64;  // rax

    v49 = 0;
    v47 = 0;
    v50 = 0;
    v52 = *((a1 + 29) as &i8);
    v27 = 1;
    if v52 != 2 {
        v27 = uu_wc::compute_number_width(a0, a1);
    }
    uu_wc::Inputs::try_iter(a0, a1, v53);
    if v8 == 9223372036854775811 {
        return v9;
    }
    v29 = v52;
    v40 = v16;
    memcpy(&v39, &v15, 16);
    v36 = v8;
    v37 = v9;
    v35 = v12;
    v38 = v35;
    v54 = 0;
    v55 = &v30;
    v56 = &v20;
    loop {
        do {
            loop {
                vvar_701{stack -112} = struct24 OrderedDict({0: 𝜙@64b [((4971217, None), vvar_515{stack -112}), ((4970144, None), vvar_515{stack -112}), ((4970144, 1), vvar_515{stack -112}), ((4970035, None), None)], 8: 𝜙@64b [((4971217, None), vvar_516{stack -104}), ((4970144, None), vvar_516{stack -104}), ((4970144, 1), vvar_516{stack -104}), ((4970035, None), None)], 16: 𝜙@64b [((4971217, None), vvar_517{stack -96}), ((4970144, None), vvar_517{stack -96}), ((4970144, 1), vvar_517{stack -96}), ((4970035, None), None)]})
                uu_wc::Inputs::try_iter::{{closure}}(&v44, &v36);
                if v44 as i64 == 9223372036854775811 {
                    v69 = v29;
                    if v69 - 1 < 2 || !v69 && v54 >= 2 {
                        v70 = uu_wc::print_stats(a1, &v47, (v69 != 2 ? &g_41e574 : 0), 5, v27);
                        if v70 {
                            v30 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v70);
                            uucore::mods::error::set_exit_code(1);
                            v36 = uucore::util_name();
                            v37 = v60;
                            eprintln!("{}: {}", &v36, v55);
                        }
                    }
                    return 0;
                }
                v57 = v45;
                v58 = v46;
                if v44 as i64 != 9223372036854775810 {
                    break;
                }
                v0 = v57;
                v1 = v58;
                uucore::mods::error::set_exit_code(*((v58 + 96) as &i64)(v57) as u32);
                v31 = uucore::util_name();
                v32 = v60;
                v21 = v55;
                v23 = <&T as core::fmt::Display>::fmt;
                v24 = &v0;
                v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v6 = core::fmt::Arguments {
                    pieces: [&g_5311c8, ": ", "\n"]
                    args: &[core::fmt::rt::Argument] {
                        ptr: v56
                        len: 2
                    }
                    fmt: 0
                };
                std::io::stdio::_eprint(&v6);
                v54 += 1;
                v8 = v7;
                v9 = v10;
                v12 = v13;
            }
            v41 = v44;
            v42 = v57;
            v43 = v58;
            uu_wc::word_count_from_input(&v8, &v41, a1);
            if v8 {
                if v8 == 2 {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v9, &v41);
                    uucore::mods::error::set_exit_code(1);
                    v18 = uucore::util_name();
                    v19 = v60;
                    v0 = &v18;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v21 = &g_5311c8;
                    v23 = 3;
                    v26 = 0;
                    v24 = &v0;
                    v25 = 2;
                    std::io::stdio::_eprint(v56);
                } else {
                    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v17, &v41);
                    uucore::mods::error::set_exit_code(1);
                    v18 = uucore::util_name();
                    v19 = v60;
                    v0 = &v18;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v4;
                    v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v22 = &g_5311c8;
                    v23 = 3;
                    v26 = 0;
                    v24 = &v0;
                    v25 = 2;
                    std::io::stdio::_eprint(v56);
                }
            }
            v34 = v16;
            v61 = *(&v9 as &i128);
            memcpy(&v33, &v15, 16);
            v30 = v61;
            v6 = struct40 {
                field_0: v61
                field_16: v33
                field_32: v34
            };
            v47 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v6);
        } while (v29 as i32 == 2);
        v41 = uu_wc::Input::to_title(v60);
        if v0 == 0x8000000000000000 || v0 != 9223372036854775809 {
            v62 = v1;
            v56 = v2;
        }
        v63 = uu_wc::print_stats(a1, &v30, v62, v56, v27);
        v6 = v8;
        v11 = v9;
        v14 = v12;
        if v63 {
            if !v62 {
                v65 = &g_41e56d;
            } else {
                v65 = v62;
            }
            v66 = v65;
            v4 = v66;
            v5 = v56;
            v28 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v63, &v4);
            uucore::mods::error::set_exit_code(1);
            v18 = uucore::util_name();
            v19 = v60;
            eprintln!("{}: {}", &v18, &v28);
            v6 = v7;
            v11 = v10;
            v14 = v13;
        }
        v12 = v14;
        v9 = v11;
        v8 = v6;
    }
}
