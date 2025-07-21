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
    let v15: core::fmt::Arguments;  // [bp-0x278], Other Possible Types: u64
    let v16: alloc::borrow::Cow<str>;  // [bp-0x278]
    let v17: u64;  // [bp-0x278]
    let v18: u64;  // [bp-0x248]
    let v19: i64;  // [bp-0x248], Other Possible Types: u64
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
    let v34: struct16;  // [bp-0x1f8]
    let v35: alloc::string::String;  // [bp-0x1e8]
    let v36: alloc::string::String;  // [bp-0x1d0]
    let v37: u64;  // [bp-0x1b8]
    let v38: u64;  // [bp-0x1a8]
    let v39: void*;  // [bp-0x198]
    let v40: u64;  // [bp-0x190]
    let v41: u8;  // [bp-0x188]
    let v42: u64;  // [bp-0x180]
    let v43: u64;  // [bp-0x170]
    let v44: u64;  // [bp-0x160]
    let v45: u64;  // [bp-0x158]
    let v46: u8;  // [bp-0x150]
    let v47: u32;  // [bp-0x14f]
    let v48: u32;  // [bp-0x14c]
    let v49: u64;  // [bp-0x148]
    let v50: u64;  // [bp-0x138]
    let v51: u64;  // [bp-0x128]
    let v52: u64;  // [bp-0x120]
    let v53: u8;  // [bp-0x118]
    let v54: u64;  // [bp-0x110]
    let v55: u64;  // [bp-0x100]
    let v56: u64;  // [bp-0xf0]
    let v57: u64;  // [bp-0xe8]
    let v58: u8;  // [bp-0xe0]
    let v59: u32;  // [bp-0xdf]
    let v60: u32;  // [bp-0xdc]
    let v61: u64;  // [bp-0xd8]
    let v62: u64;  // [bp-0xc8]
    let v63: u64;  // [bp-0xb8]
    let v64: u64;  // [bp-0xb0]
    let v65: u8;  // [bp-0xa8]
    let v66: u64;  // [bp-0xa0]
    let v67: u64;  // [bp-0x90]
    let v68: u64;  // [bp-0x80]
    let v69: u64;  // [bp-0x78]
    let v70: u8;  // [bp-0x70]
    let v71: u32;  // [bp-0x6f]
    let v72: u32;  // [bp-0x6c]
    let v73: u64;  // [bp-0x68]
    let v74: u64;  // [bp-0x58]
    let v75: u64;  // [bp-0x48]
    let v76: u64;  // [bp-0x40]
    let v77: u8;  // [bp-0x38]
    let v79: u64;  // r15
    let v80: u8;  // al
    let v81: u64;  // rax
    let v82: u64;  // rax
    let v83: u32;  // eax
    let v84: u64;  // rdx
    let v85: u64;  // r12
    let v86: u64;  // rbx
    let v88: u64;  // r12
    let v89: u64;  // rbx
    let v90: core::fmt::Arguments;  // rax
    let v91: u64;  // 4096

    v34 = struct16 {
        field_0: a2
        field_8: a3
    };
    v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 ^ 1;
    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8;
    v35 = alloc::str::<impl str>::repeat(a2, a3, v79);
    v36 = alloc::str::<impl str>::repeat(a2, a3, (v80 ^ 1) + v79);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v81 = uu_comm::LineReader::read_line(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v82 = uu_comm::LineReader::read_line(a1, &v11);
    loop {
        v14 = v83;
        v88 = v85;
        v89 = v86;
        loop {
            v86 = v89;
            if !v81 {
                if !v82 {
                    if !v86 && !v88 {
                        goto LABEL_4ab007;
                    }
                    if !v86 {
                        goto LABEL_4aaf00;
                    }
                    if v88 {
                        v90 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v9, 0, v12, 0);
                        if !v90 as u8 {
                            v91 = a0;
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") as i8 {
                                v16 = alloc::string::String::from_utf8_lossy(v9, None);
                                print!("{}{}", &v36, &v16);
                                v91 = a0;
                                v19 = v18;
                            }
                            v10 = 0;
                            v13 = 0;
                            v81 = uu_comm::LineReader::read_line(v91, &v8);
                            v82 = uu_comm::LineReader::read_line(a1, &v11);
                            v0 += 1;
                            v7 = v0;
                            v88 = v84;
                            v89 = v84;
                            continue;
                        }
                        if v90 as u32 == 1 {
                            goto LABEL_4aaf00;
                        }
                    }
                }
                v91 = a0;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 {
                    v20 = alloc::string::String::from_utf8_lossy(v9, None);
                    print!("{}", &v20);
                    v15 = v17;
                    v91 = a0;
                }
                v10 = 0;
                v81 = uu_comm::LineReader::read_line(v91, &v8);
                v4 += 1;
                v5 = v4;
                v89 = v84;
            } else {
                if v82 {
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
                    v37 = 2;
                    v38 = 2;
                    v39 = 0;
                    v40 = 32;
                    v41 = 3;
                    v42 = 2;
                    v43 = 2;
                    v44 = 1;
                    v45 = 32;
                    v46 = 3;
                    v47 = *(&v2 as &i32);
                    v48 = v3;
                    v49 = 2;
                    v50 = 2;
                    v51 = 2;
                    v52 = 32;
                    v53 = 3;
                    v54 = 2;
                    v55 = 2;
                    v56 = 1;
                    v57 = 32;
                    v58 = 3;
                    v60 = v3;
                    v59 = *(&v2 as &i32);
                    v61 = 2;
                    v62 = 2;
                    v63 = 3;
                    v64 = 32;
                    v65 = 3;
                    v66 = 2;
                    v67 = 2;
                    v68 = 1;
                    v69 = 32;
                    v70 = 3;
                    v72 = v3;
                    v71 = *(&v2 as &i32);
                    v73 = 2;
                    v74 = 2;
                    v75 = 4;
                    v76 = 32;
                    v77 = 3;
                    v15 = core::fmt::Arguments {
                        pieces: [&g_511398, &g_5113a8, &g_5113b8, &g_5113c8, &g_5113d8, &g_5113e8, "total"]
                        args: [v18, v22, v25, v28, v31]
                        fmt: &v37
                    };
                    std::io::stdio::_print(&v15);
                    return;
                }
LABEL_4aaf00:
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8 {
                    v16 = alloc::string::String::from_utf8_lossy(v12, None);
                    print!("{}{}", &v35, &v16);
                    v19 = v18;
                }
                v13 = 0;
                v82 = uu_comm::LineReader::read_line(a1, &v11);
                v83 = v14 + 1;
                v6 = v83;
                break;
            }
        }
    }
}
