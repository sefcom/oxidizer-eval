fn uu_wc::wc(a0: &struct32, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x198]
    let v1: struct16;  // [bp-0x190], Other Possible Types: u64
    let v2: void*;  // [bp-0x188]
    let v3: struct24;  // [bp-0x180], Other Possible Types: u64
    let v4: u64;  // [bp-0x180]
    let v5: u64;  // [bp-0x180]
    let v6: void*;  // [bp-0x178]
    let v7: void*;  // [bp-0x178]
    let v8: void*;  // [bp-0x178]
    let v9: u64;  // [bp-0x170]
    let v10: u64;  // [bp-0x170]
    let v11: u64;  // [bp-0x170]
    let v12: struct56;  // [bp-0x130], Other Possible Types: u64
    let v13: u64;  // [bp-0x130]
    let v14: u64;  // [bp-0x130]
    let v15: Result<struct48, struct24>;  // [bp-0x130]
    let v16: i64;  // [bp-0x128]
    let v17: struct40;  // [bp-0x128], Other Possible Types: u64
    let v18: u64;  // [bp-0x128], Other Possible Types: unsigned long
    let v19: u64;  // [bp-0x120]
    let v20: u64;  // [bp-0x108]
    let v21: u64;  // [bp-0x100]
    let v22: struct712;  // [bp-0xf8]
    let v23: struct24;  // [bp-0xf0]
    let v24: u64;  // [bp-0xe8]
    let v25: void*;  // [bp-0xe0], Other Possible Types: u64
    let v26: u64;  // [bp-0xd8]
    let v27: iNone;  // [bp-0xd0]
    let v28: u64;  // [bp-0xc0]
    let v29: struct24;  // [bp-0xb8]
    let v30: struct24;  // [bp-0xa0]
    let v31: u64;  // [bp-0x98]
    let v32: i64;  // [bp-0x90]
    let v33: struct40;  // [bp-0x88], Other Possible Types: u320
    let v35: struct40;  // [bp-0x58]
    let v37: struct24;  // r15
    let v38: struct64;  // rbp
    let v39: u64;  // rdi
    let v40: i64;  // rax
    let v43: struct24;  // r15
    let v44: void*;  // r13
    let v45: struct32;  // r13
    let v46: u64;  // rax
    let v48: i64;  // r13
    let v49: Result<struct4, struct8>;  // r13
    let v50: void*;  // rdx, Other Possible Types: unsigned long
    let v52: u32;  // ecx
    let v53: u64;  // rax

    v33 = struct40 {
        field_0: 0
        field_16: 0
        field_32: 0
    };
    v37 = *((a1 + 29) as &i8);
    v22 = 1;
    if v37 as u32 != 2 {
        v22 = uu_wc::compute_number_width(a0, a1);
    }
    v15 = uu_wc::Inputs::try_iter(a0, a1);
    match v15 {
        Err(_) => {
            return v18;
        },
        Ok(_) => {
            v23 = v37;
            v28 = v20;
            v27 = *((&v15 as &char + 24) as &i128);
            v24 = v15 as i64;
            v25 = v18;
            v26 = v19;
            v38 = 0;
            loop {
                v16 = v18;
                v13 = v12;
                vvar_710{stack -160} = struct24 OrderedDict([(0, 𝜙@64b [((4627693, None), vvar_506{stack -160}), ((4627931, None), vvar_506{stack -160}), ((4627587, None), None)]), (8, 𝜙@64b [((4627693, None), vvar_507{stack -152}), ((4627931, None), vvar_507{stack -152}), ((4627587, None), None)]), (16, 𝜙@64b [((4627693, None), vvar_508{stack -144}), ((4627931, None), vvar_508{stack -144}), ((4627587, None), None)])])
                uu_wc::Inputs::try_iter::{{closure}}(&v30, &v24);
                if v30.field_0 as i64 == 9223372036854775811 {
                    break;
                }
                v39 = v31;
                v40 = v32;
                if v30.field_0 as i64 == 9223372036854775810 {
                    v1 = struct16 {
                        field_0: v39
                        field_8: v40
                    };
                    uucore::mods::error::set_exit_code(*((v40 + 88) as &i64)(v39) as u32 as u64);
                    v3 = uucore::util_name();
                    v6 = v50;
                    eprintln!("{}: {}", &v3, &v1);
                    v38 += 1;
                    v12 = v14;
                    v18 = v17;
                    continue;
                }
                v29 = struct24 {
                    field_0: v30.field_0 as i64
                    field_8: v39
                    field_16: v40
                };
                v12 = uu_wc::word_count_from_input(&v29, a1);
                v3 = v3;
                v6 = v6;
                v9 = v9;
                if v12.field_0 {
                    if v12.field_0 as u32 == 2 {
                        v0 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v16, &v29);
                        uucore::mods::error::set_exit_code(1);
                        v1 = uucore::util_name();
                        v2 = v50;
                        eprintln!("{}: {}", &v1, &v0);
                        v3 = v4;
                        v6 = v7;
                        v9 = v10;
                        goto LABEL_469ce5;
                    } else {
                        v0 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v21, &v29);
                        uucore::mods::error::set_exit_code(1);
                        v1 = uucore::util_name();
                        v2 = v50;
                        eprintln!("{}: {}", &v1, &v0);
                        v3 = v4;
                        v6 = v7;
                        v9 = v10;
                    }
                }
                v11 = v9;
                v8 = v6;
                v5 = v3;
                v35 = v17;
                v33 = <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(&v35);
                v3 = v5;
                v6 = v8;
                v9 = v11;
                if v23.field_0 as i32 != 2 {
                    v3 = uu_wc::Input::to_title(&v29);
                    if !((((0 ^ v3.field_0 as i64) & (0 ^ -(v5))) >> 63) as char) && v3.field_0 as i64 == 9223372036854775809 {
                        v43 = v37;
                        v44 = 0;
                    } else {
                        v43 = v11;
                        v44 = v8;
                    }
                    v45 = v44;
                    v37 = v43;
                    v46 = uu_wc::print_stats(a1, &v35, v45, v37, v22);
                    v12 = v13;
                    v18 = v16;
                    if v46 {
                        if !v45 {
                            v48 = &g_41a446;
                        } else {
                            v48 = v45;
                        }
                        v49 = v48;
                        v0 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v46, v49, v37);
                        uucore::mods::error::set_exit_code(1);
                        v1 = uucore::util_name();
                        v2 = v50;
                        eprintln!("{}: {}", &v1, &v0);
                        v12 = v14;
                        v18 = v17;
                    }
                    v16 = v18;
                    v13 = v12;
                    v3 = v5;
                    v6 = v8;
                    v9 = v11;
                }
LABEL_469ce5:
                v38 += 1;
                v12 = v13;
                v18 = v16;
            }
            v52 = v23 as u32;
            if v52 - 1 < 2 || !v52 && v38 >= 2 {
                v53 = uu_wc::print_stats(a1, &v33, (v52 != 2 ? &g_41a12f : 0), 5, v22);
                if v53 {
                    v3 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v53);
                    uucore::mods::error::set_exit_code(1);
                    v24 = uucore::util_name();
                    v25 = v50;
                    eprintln!("{}: {}", &v24, &v3);
                }
            }
            return 0;
        },
    }
}
