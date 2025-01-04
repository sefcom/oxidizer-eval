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
    let v15: struct24;  // [sp-0x278], Other Possible Types: i64
    let v16: i64;  // [sp-0x270]
    let v17: i64;  // [sp-0x268]
    let v18: i64;  // [sp-0x260]
    let v19: i64;  // [sp-0x258]
    let v20: i64;  // [sp-0x250]
    let v21: i64;  // [sp-0x248], Other Possible Types: struct24
    let v22: i64;  // [sp-0x240]
    let v23: i64;  // [sp-0x238]
    let v24: i64;  // [sp-0x230]
    let v25: i64;  // [sp-0x228]
    let v26: i64;  // [sp-0x220]
    let v27: i64;  // [sp-0x218]
    let v28: i64;  // [sp-0x210]
    let v29: i64;  // [sp-0x208]
    let v30: i64;  // [sp-0x200]
    let v31: i64;  // [sp-0x1f8]
    let v32: i64;  // [sp-0x1f0]
    let v33: struct24;  // [sp-0x1e8]
    let v34: struct24;  // [sp-0x1d0]
    let v35: i64;  // [sp-0x1b8]
    let v36: i64;  // [sp-0x1a8]
    let v37: i64;  // [sp-0x198]
    let v38: i64;  // [sp-0x190]
    let v39: i8;  // [sp-0x188]
    let v40: i64;  // [sp-0x180]
    let v41: i64;  // [sp-0x170]
    let v42: i64;  // [sp-0x160]
    let v43: i64;  // [sp-0x158]
    let v44: i8;  // [sp-0x150]
    let v45: i32;  // [bp-0x14f]
    let v46: i32;  // [sp-0x14c]
    let v47: i64;  // [sp-0x148]
    let v48: i64;  // [sp-0x138]
    let v49: i64;  // [sp-0x128]
    let v50: i64;  // [sp-0x120]
    let v51: i8;  // [sp-0x118]
    let v52: i64;  // [sp-0x110]
    let v53: i64;  // [sp-0x100]
    let v54: i64;  // [sp-0xf0]
    let v55: i64;  // [sp-0xe8]
    let v56: i8;  // [sp-0xe0]
    let v57: i32;  // [bp-0xdf]
    let v58: i32;  // [sp-0xdc]
    let v59: i64;  // [sp-0xd8]
    let v60: i64;  // [sp-0xc8]
    let v61: i64;  // [sp-0xb8]
    let v62: i64;  // [sp-0xb0]
    let v63: i8;  // [sp-0xa8]
    let v64: i64;  // [sp-0xa0]
    let v65: i64;  // [sp-0x90]
    let v66: i64;  // [sp-0x80]
    let v67: i64;  // [sp-0x78]
    let v68: i8;  // [sp-0x70]
    let v69: i32;  // [bp-0x6f]
    let v70: i32;  // [sp-0x6c]
    let v71: i64;  // [sp-0x68]
    let v72: i64;  // [sp-0x58]
    let v73: i64;  // [sp-0x48]
    let v74: i64;  // [sp-0x40]
    let v75: i8;  // [sp-0x38]
    let v77: i64;  // rbx
    let v78: i64;  // r14
    let v79: i64;  // r15
    let v80: i64;  // rax
    let v81: i64;  // rax
    let v82: i32;  // eax
    let v87: i64;  // rbx
    let v88: i64;  // r12
    let v89: i64;  // rbx
    let v90: i64;  // rax
    let v91: i64;  // 4096
    let v92: i64;  // 4096
    let v96: i32;  // ecx

    v77 = a3;
    v78 = a2;
    v31 = a2;
    v32 = a3;
    v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 ^ 1;
    v33 = alloc::str::<impl str>::repeat(v78, v77, v79);
    v34 = alloc::str::<impl str>::repeat(v78, v77, (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, &g_41c4e5, 1) as i8 ^ 1) + v79);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v80 = uu_comm::LineReader::read_line(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v81 = uu_comm::LineReader::read_line(a1, &v11);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v82 = 0;
    v4 = 0;
    v0 = 0;
    loop {
        v14 = v82;
        loop {
            v87 = v89;
            v88 = v88;
            if v80 {
                if !(!v81) {
                    goto LABEL_4aaff0;
                }
                goto LABEL_4aaee9;
            }
            if !v81 {
                if !v87 && !v88 {
LABEL_4aaff0:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "total") as i8 {
                        return;
                    }
                    v1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "zero-terminated") as i8 ? 0 : 10);
                    v21 = &v5;
                    v22 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v23 = &v31;
                    v24 = <&T as core::fmt::Display>::fmt;
                    v25 = &v6;
                    v26 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v27 = &v7;
                    v28 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v29 = &v1;
                    v30 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                    v35 = 2;
                    v36 = 2;
                    v37 = 0;
                    v38 = 32;
                    v39 = 3;
                    v40 = 2;
                    v41 = 2;
                    v42 = 1;
                    v43 = 32;
                    v44 = 3;
                    v96 = v3;
                    v45 = v2;
                    v46 = v96;
                    v47 = 2;
                    v48 = 2;
                    v49 = 2;
                    v50 = 32;
                    v51 = 3;
                    v52 = 2;
                    v53 = 2;
                    v54 = 1;
                    v55 = 32;
                    v56 = 3;
                    v58 = (&v2)[3];
                    v57 = v2;
                    v59 = 2;
                    v60 = 2;
                    v61 = 3;
                    v62 = 32;
                    v63 = 3;
                    v64 = 2;
                    v65 = 2;
                    v66 = 1;
                    v67 = 32;
                    v68 = 3;
                    v70 = (&v2)[3];
                    v69 = v2;
                    v71 = 2;
                    v72 = 2;
                    v73 = 4;
                    v74 = 32;
                    v75 = 3;
                    v15 = &g_511398;
                    v16 = 7;
                    v19 = &v35;
                    v20 = 7;
                    v17 = &v21;
                    v18 = 5;
                    std::io::stdio::_print(&v15);
                }
                if !v87 {
LABEL_4aaee9:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8 {
                        v15 = alloc::string::String::from_utf8_lossy(v12, v13);
                        print!("{:?}{:?}", &v33, &v15);
                    }
                    v13 = 0;
                    v81 = uu_comm::LineReader::read_line(a1, &v11);
                    v82 = v14 + 1;
                    v6 = v82;
                    break;
                } else {
                    if !v88 {
                        goto LABEL_4aadf0;
                    }
                    v90 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v9, v10, v12, v13);
                    if !v90 {
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") as i8 {
                            v15 = alloc::string::String::from_utf8_lossy(v9, v10);
                            print!("{:?}{:?}", &v34, &v15);
                        }
                        v10 = 0;
                        v13 = 0;
                        v80 = uu_comm::LineReader::read_line(v91, &v8);
                        v81 = uu_comm::LineReader::read_line(a1, &v11);
                        v0 += 1;
                        v7 = v0;
                        continue;
                    }
                    if v90 == 1 {
                        goto LABEL_4aaee9;
                    }
                }
            }
LABEL_4aadf0:
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 {
                v21 = alloc::string::String::from_utf8_lossy(v9, v10);
                print!("{:?}", &v21);
            }
            v10 = 0;
            v80 = uu_comm::LineReader::read_line(v92, &v8);
            v4 += 1;
            v5 = v4;
        }
    }
}
