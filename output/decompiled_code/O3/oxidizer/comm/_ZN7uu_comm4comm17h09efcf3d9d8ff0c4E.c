fn uu_comm::comm(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0x2e8]
    let v1: i8;  // [sp-0x2e0]
    let v2: i8;  // [bp-0x2df]
    let v3: i8;  // [bp-0x2dc]
    let v4: i32;  // [sp-0x2d0]
    let v5: i32;  // [sp-0x2cc]
    let v6: i32;  // [sp-0x2c8]
    let v7: i32;  // [sp-0x2c4]
    let v8: i64;  // [sp-0x2c0]
    let v9: i64;  // [sp-0x2b8]
    let v10: i64;  // [sp-0x2b0]
    let v11: i64;  // [sp-0x2a0]
    let v12: i64;  // [sp-0x298]
    let v13: i64;  // [sp-0x290]
    let v14: i32;  // [sp-0x27c]
    let v15: i64;  // [sp-0x278], Other Possible Types: struct24
    let v16: i64;  // [sp-0x260]
    let v17: i64;  // [sp-0x258]
    let v18: i64;  // [sp-0x250]
    let v19: struct24;  // [sp-0x248], Other Possible Types: i64
    let v20: i64;  // [sp-0x230]
    let v21: i64;  // [sp-0x228]
    let v22: i64;  // [sp-0x220]
    let v23: i64;  // [sp-0x218]
    let v24: i64;  // [sp-0x210]
    let v25: i64;  // [sp-0x208]
    let v26: i64;  // [sp-0x200]
    let v27: i64;  // [sp-0x1f8]
    let v28: i64;  // [sp-0x1f0]
    let v29: struct24;  // [sp-0x1e8]
    let v30: struct24;  // [sp-0x1d0]
    let v31: i64;  // [sp-0x1b8]
    let v32: i64;  // [sp-0x1a8]
    let v33: i64;  // [sp-0x198]
    let v34: i64;  // [sp-0x190]
    let v35: i8;  // [sp-0x188]
    let v36: i64;  // [sp-0x180]
    let v37: i64;  // [sp-0x170]
    let v38: i64;  // [sp-0x160]
    let v39: i64;  // [sp-0x158]
    let v40: i8;  // [sp-0x150]
    let v41: i32;  // [bp-0x14f]
    let v42: i32;  // [sp-0x14c]
    let v43: i64;  // [sp-0x148]
    let v44: i64;  // [sp-0x138]
    let v45: i64;  // [sp-0x128]
    let v46: i64;  // [sp-0x120]
    let v47: i8;  // [sp-0x118]
    let v48: i64;  // [sp-0x110]
    let v49: i64;  // [sp-0x100]
    let v50: i64;  // [sp-0xf0]
    let v51: i64;  // [sp-0xe8]
    let v52: i8;  // [sp-0xe0]
    let v53: i32;  // [bp-0xdf]
    let v54: i32;  // [sp-0xdc]
    let v55: i64;  // [sp-0xd8]
    let v56: i64;  // [sp-0xc8]
    let v57: i64;  // [sp-0xb8]
    let v58: i64;  // [sp-0xb0]
    let v59: i8;  // [sp-0xa8]
    let v60: i64;  // [sp-0xa0]
    let v61: i64;  // [sp-0x90]
    let v62: i64;  // [sp-0x80]
    let v63: i64;  // [sp-0x78]
    let v64: i8;  // [sp-0x70]
    let v65: i32;  // [bp-0x6f]
    let v66: i32;  // [sp-0x6c]
    let v67: i64;  // [sp-0x68]
    let v68: i64;  // [sp-0x58]
    let v69: i64;  // [sp-0x48]
    let v70: i64;  // [sp-0x40]
    let v71: i8;  // [sp-0x38]
    let v73: i64;  // rbx
    let v74: i64;  // r14
    let v75: i64;  // r15
    let v76: i64;  // rax
    let v77: i64;  // rax
    let v78: i32;  // eax
    let v83: i64;  // rbx
    let v84: i64;  // r12
    let v85: i64;  // rbx
    let v87: i64;  // 4096
    let v88: i64;  // 4096
    let v92: i32;  // ecx

    v73 = a3;
    v74 = a2;
    v27 = a2;
    v28 = a3;
    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 ^ 1;
    v29 = alloc::str::<impl str>::repeat(v74, v73, v75);
    v30 = alloc::str::<impl str>::repeat(v74, v73, (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, &g_41c605, 1) as i8 ^ 1) + v75);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v76 = uu_comm::LineReader::read_line(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v77 = uu_comm::LineReader::read_line(a1, &v11);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v78 = 0;
    v4 = 0;
    v0 = 0;
    loop {
        v14 = v78;
        loop {
            v83 = v85;
            v84 = v84;
            if v76 {
                if !(!v77) {
                    goto LABEL_4ab3d0;
                }
                goto LABEL_4ab2c9;
            }
            if v77 {
LABEL_4ab1d0:
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 {
                    v19 = alloc::string::String::from_utf8_lossy(v9, v10);
                    print!("{:?}", &v19);
                }
                v10 = 0;
                v76 = uu_comm::LineReader::read_line(v88, &v8);
                v4 += 1;
                v5 = v4;
            } else {
                if !v83 && !v84 {
LABEL_4ab3d0:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "total") as i8 {
                        return;
                    }
                    v1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "zero-terminated") as i8 ? 0 : 10);
                    v19 = &v5;
                    v19.field_8 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v19.field_16 = stack_base + -504;
                    v20 = <&T as core::fmt::Display>::fmt;
                    v21 = &v6;
                    v22 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v23 = &v7;
                    v24 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v25 = &v1;
                    v26 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                    v31 = 2;
                    v32 = 2;
                    v33 = 0;
                    v34 = 32;
                    v35 = 3;
                    v36 = 2;
                    v37 = 2;
                    v38 = 1;
                    v39 = 32;
                    v40 = 3;
                    v92 = v3;
                    v41 = v2;
                    v42 = v92;
                    v43 = 2;
                    v44 = 2;
                    v45 = 2;
                    v46 = 32;
                    v47 = 3;
                    v48 = 2;
                    v49 = 2;
                    v50 = 1;
                    v51 = 32;
                    v52 = 3;
                    v54 = (&v2)[3];
                    v53 = v2;
                    v55 = 2;
                    v56 = 2;
                    v57 = 3;
                    v58 = 32;
                    v59 = 3;
                    v60 = 2;
                    v61 = 2;
                    v62 = 1;
                    v63 = 32;
                    v64 = 3;
                    v66 = (&v2)[3];
                    v65 = v2;
                    v67 = 2;
                    v68 = 2;
                    v69 = 4;
                    v70 = 32;
                    v71 = 3;
                    v15 = &g_5125a8;
                    v15.field_8 = 7;
                    v17 = &v31;
                    v18 = 7;
                    v15.field_16 = stack_base + -584;
                    v16 = 5;
                    std::io::stdio::_print(&v15);
                }
                if v83 {
                    if !v84 {
                        goto LABEL_4ab1d0;
                    }
                    if !<alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v9, v10, v12, v13) as i8 {
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") as i8 {
                            v15 = alloc::string::String::from_utf8_lossy(v9, v10);
                            print!("{:?}{:?}", &v30, &v15);
                        }
                        v10 = 0;
                        v13 = 0;
                        v76 = uu_comm::LineReader::read_line(v87, &v8);
                        v77 = uu_comm::LineReader::read_line(a1, &v11);
                        v0 += 1;
                        v7 = v0;
                        continue;
                    }
                    if !(!v77) {
                        goto LABEL_4ab1d0;
                    }
                }
LABEL_4ab2c9:
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8 {
                    v15 = alloc::string::String::from_utf8_lossy(v12, v13);
                    print!("{:?}{:?}", &v29, &v15);
                }
                v13 = 0;
                v77 = uu_comm::LineReader::read_line(a1, &v11);
                v78 = v14 + 1;
                v6 = v78;
                break;
            }
        }
    }
}
