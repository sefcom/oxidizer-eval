fn uu_comm::comm(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) {
    let v0: u32;  // [bp-0x2e8]
    let v1: u8;  // [bp-0x2e0]
    let v2: i8;  // [bp-0x2df]
    let v3: u32;  // [bp-0x2dc]
    let v4: u32;  // [bp-0x2d0]
    let v5: u32;  // [bp-0x2cc]
    let v6: u32;  // [bp-0x2c8]
    let v7: u32;  // [bp-0x2c4]
    let v8: void*;  // [bp-0x2c0]
    let v9: u64;  // [bp-0x2b8]
    let v10: void*;  // [bp-0x2b0]
    let v11: void*;  // [bp-0x2a0]
    let v12: u64;  // [bp-0x298]
    let v13: void*;  // [bp-0x290]
    let v14: u32;  // [bp-0x27c]
    let v15: u64;  // [bp-0x278]
    let v16: alloc::borrow::Cow<str>;  // [bp-0x278]
    let v17: u64;  // [bp-0x278]
    let v18: u64;  // [bp-0x248]
    let v19: u64;  // [bp-0x248], Other Possible Types: struct_0 *
    let v20: alloc::borrow::Cow<str>;  // [bp-0x248]
    let v21: u64;  // [bp-0x240]
    let v22: u128;  // [bp-0x238]
    let v23: i64;  // [bp-0x238]
    let v24: u64;  // [bp-0x230]
    let v25: u128;  // [bp-0x228]
    let v26: i64;  // [bp-0x228]
    let v27: u64;  // [bp-0x220]
    let v28: u128;  // [bp-0x218]
    let v29: i64;  // [bp-0x218]
    let v30: u64;  // [bp-0x210]
    let v31: u128;  // [bp-0x208]
    let v32: i64;  // [bp-0x208]
    let v33: u64;  // [bp-0x200]
    let v34: u64;  // [bp-0x1f8]
    let v35: u64;  // [bp-0x1f0]
    let v36: alloc::string::String;  // [bp-0x1e8]
    let v37: alloc::string::String;  // [bp-0x1d0]
    let v38: u64;  // [bp-0x1b8]
    let v39: u64;  // [bp-0x1a8]
    let v40: void*;  // [bp-0x198]
    let v41: u64;  // [bp-0x190]
    let v42: u8;  // [bp-0x188]
    let v43: u64;  // [bp-0x180]
    let v44: u64;  // [bp-0x170]
    let v45: u64;  // [bp-0x160]
    let v46: u64;  // [bp-0x158]
    let v47: u8;  // [bp-0x150]
    let v48: u32;  // [bp-0x14f]
    let v49: u32;  // [bp-0x14c]
    let v50: u64;  // [bp-0x148]
    let v51: u64;  // [bp-0x138]
    let v52: u64;  // [bp-0x128]
    let v53: u64;  // [bp-0x120]
    let v54: u8;  // [bp-0x118]
    let v55: u64;  // [bp-0x110]
    let v56: u64;  // [bp-0x100]
    let v57: u64;  // [bp-0xf0]
    let v58: u64;  // [bp-0xe8]
    let v59: u8;  // [bp-0xe0]
    let v60: u32;  // [bp-0xdf]
    let v61: u32;  // [bp-0xdc]
    let v62: u64;  // [bp-0xd8]
    let v63: u64;  // [bp-0xc8]
    let v64: u64;  // [bp-0xb8]
    let v65: u64;  // [bp-0xb0]
    let v66: u8;  // [bp-0xa8]
    let v67: u64;  // [bp-0xa0]
    let v68: u64;  // [bp-0x90]
    let v69: u64;  // [bp-0x80]
    let v70: u64;  // [bp-0x78]
    let v71: u8;  // [bp-0x70]
    let v72: u32;  // [bp-0x6f]
    let v73: u32;  // [bp-0x6c]
    let v74: u64;  // [bp-0x68]
    let v75: u64;  // [bp-0x58]
    let v76: u64;  // [bp-0x48]
    let v77: u64;  // [bp-0x40]
    let v78: u8;  // [bp-0x38]
    let v80: u64;  // r15
    let v81: u8;  // al
    let v82: u64;  // rax
    let v83: u64;  // rax
    let v84: u32;  // eax
    let v85: u64;  // rdx
    let v86: u64;  // r12
    let v87: u64;  // rbx
    let v89: u64;  // r12
    let v90: u64;  // rbx
    let v91: u64;  // rax
    let v92: u64;  // 4096

    v34 = a2;
    v35 = a3;
    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 ^ 1;
    v81 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8;
    v36 = alloc::str::<impl str>::repeat(a2, a3, v80);
    v37 = alloc::str::<impl str>::repeat(a2, a3, (v81 ^ 1) + v80);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v82 = uu_comm::LineReader::read_line(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v83 = uu_comm::LineReader::read_line(a1, &v11);
    loop {
        v14 = v84;
        v89 = v86;
        v90 = v87;
        loop {
            v87 = v90;
            if !v82 {
                if !v83 {
                    if !v87 && !v89 {
                        goto LABEL_4ab007;
                    }
                    if !v87 {
                        goto LABEL_4aaf00;
                    }
                    if v89 {
                        v91 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v9, 0, v12, 0);
                        if !v91 {
                            v92 = a0;
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") as i8 {
                                v16 = alloc::string::String::from_utf8_lossy(v9, None);
                                print!("{}{}", &v37, &v16);
                                v92 = a0;
                                v19 = v18;
                            }
                            v10 = 0;
                            v13 = 0;
                            v82 = uu_comm::LineReader::read_line(v92, &v8);
                            v83 = uu_comm::LineReader::read_line(a1, &v11);
                            v0 += 1;
                            v7 = v0;
                            v89 = v85;
                            v90 = v85;
                            continue;
                        }
                        if v91 == 1 {
                            goto LABEL_4aaf00;
                        }
                    }
                }
                v92 = a0;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 {
                    v20 = alloc::string::String::from_utf8_lossy(v9, None);
                    print!("{}", &v20);
                    v15 = v17;
                    v92 = a0;
                }
                v10 = 0;
                v82 = uu_comm::LineReader::read_line(v92, &v8);
                v4 += 1;
                v5 = v4;
                v90 = v85;
            } else {
                if v83 {
LABEL_4ab007:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "total") as i8 {
                        return;
                    }
                    v1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "zero-terminated") as i8 ? 0 : 10);
                    v19 = &v5;
                    v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v23 = &v34;
                    v24 = <&T as core::fmt::Display>::fmt;
                    v26 = &v6;
                    v27 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v29 = &v7;
                    v30 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    v32 = &v1;
                    v33 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                    v38 = 2;
                    v39 = 2;
                    v40 = 0;
                    v41 = 32;
                    v42 = 3;
                    v43 = 2;
                    v44 = 2;
                    v45 = 1;
                    v46 = 32;
                    v47 = 3;
                    v48 = *(&v2 as &i32);
                    v49 = v3;
                    v50 = 2;
                    v51 = 2;
                    v52 = 2;
                    v53 = 32;
                    v54 = 3;
                    v55 = 2;
                    v56 = 2;
                    v57 = 1;
                    v58 = 32;
                    v59 = 3;
                    v61 = v3;
                    v60 = *(&v2 as &i32);
                    v62 = 2;
                    v63 = 2;
                    v64 = 3;
                    v65 = 32;
                    v66 = 3;
                    v67 = 2;
                    v68 = 2;
                    v69 = 1;
                    v70 = 32;
                    v71 = 3;
                    v73 = v3;
                    v72 = *(&v2 as &i32);
                    v74 = 2;
                    v75 = 2;
                    v76 = 4;
                    v77 = 32;
                    v78 = 3;
                    v15 = core::fmt::Arguments {
                        pieces: [&g_511398, &g_5113a8, &g_5113b8, &g_5113c8, &g_5113d8, &g_5113e8, "total"]
                        args: [v18, v22, v25, v28, v31]
                        fmt: &v38
                    };
                    std::io::stdio::_print(&v15);
                    return;
                }
LABEL_4aaf00:
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8 {
                    v16 = alloc::string::String::from_utf8_lossy(v12, None);
                    print!("{}{}", &v36, &v16);
                    v19 = v18;
                }
                v13 = 0;
                v83 = uu_comm::LineReader::read_line(a1, &v11);
                v84 = v14 + 1;
                v6 = v84;
                v86 = v85;
                break;
            }
        }
    }
}
