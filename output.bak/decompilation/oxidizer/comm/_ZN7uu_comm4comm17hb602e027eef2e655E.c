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
    let v15: struct24;  // [sp-0x278], Other Possible Types: Arguments
    let v16: i64;  // [sp-0x250]
    let v17: Argument;  // [sp-0x248], Other Possible Types: struct24
    let v18: Argument;  // [bp-0x238]
    let v19: Argument;  // [bp-0x228]
    let v20: Argument;  // [bp-0x218]
    let v21: Argument;  // [bp-0x208]
    let v22: i64;  // [sp-0x1f8]
    let v23: i64;  // [sp-0x1f0]
    let v24: struct24;  // [sp-0x1e8]
    let v25: struct24;  // [sp-0x1d0]
    let v26: i64;  // [sp-0x1b8]
    let v27: i64;  // [sp-0x1a8]
    let v28: i64;  // [sp-0x198]
    let v29: i64;  // [sp-0x190]
    let v30: i8;  // [sp-0x188]
    let v31: i64;  // [sp-0x180]
    let v32: i64;  // [sp-0x170]
    let v33: i64;  // [sp-0x160]
    let v34: i64;  // [sp-0x158]
    let v35: i8;  // [sp-0x150]
    let v36: i32;  // [bp-0x14f]
    let v37: i32;  // [sp-0x14c]
    let v38: i64;  // [sp-0x148]
    let v39: i64;  // [sp-0x138]
    let v40: i64;  // [sp-0x128]
    let v41: i64;  // [sp-0x120]
    let v42: i8;  // [sp-0x118]
    let v43: i64;  // [sp-0x110]
    let v44: i64;  // [sp-0x100]
    let v45: i64;  // [sp-0xf0]
    let v46: i64;  // [sp-0xe8]
    let v47: i8;  // [sp-0xe0]
    let v48: i32;  // [bp-0xdf]
    let v49: i32;  // [sp-0xdc]
    let v50: i64;  // [sp-0xd8]
    let v51: i64;  // [sp-0xc8]
    let v52: i64;  // [sp-0xb8]
    let v53: i64;  // [sp-0xb0]
    let v54: i8;  // [sp-0xa8]
    let v55: i64;  // [sp-0xa0]
    let v56: i64;  // [sp-0x90]
    let v57: i64;  // [sp-0x80]
    let v58: i64;  // [sp-0x78]
    let v59: i8;  // [sp-0x70]
    let v60: i32;  // [bp-0x6f]
    let v61: i32;  // [sp-0x6c]
    let v62: i64;  // [sp-0x68]
    let v63: i64;  // [sp-0x58]
    let v64: i64;  // [sp-0x48]
    let v65: i64;  // [sp-0x40]
    let v66: i8;  // [sp-0x38]
    let v68: i64;  // rbx
    let v69: i64;  // r14
    let v70: i64;  // r15
    let v71: i64;  // rax
    let v72: i64;  // rax
    let v73: i32;  // eax
    let v78: i64;  // rbx
    let v79: i64;  // r12
    let v80: i64;  // rbx
    let v81: i64;  // rax
    let v82: i64;  // 4096
    let v83: i64;  // 4096
    let v87: i32;  // ecx

    v68 = a3;
    v69 = a2;
    v22 = a2;
    v23 = a3;
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 ^ 1;
    v24 = alloc::str::<impl str>::repeat(v69, v68, v70);
    v25 = alloc::str::<impl str>::repeat(v69, v68, (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, &g_41c4e5, 1) as i8 ^ 1) + v70);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v71 = uu_comm::LineReader::read_line(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v72 = uu_comm::LineReader::read_line(a1, &v11);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v73 = 0;
    v4 = 0;
    v0 = 0;
    loop {
        v14 = v73;
        loop {
            v78 = v80;
            v79 = v79;
            if v71 {
                if !(!v72) {
                    goto LABEL_4aaff0;
                }
                goto LABEL_4aaee9;
            }
            if !v72 {
                if !v78 && !v79 {
LABEL_4aaff0:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "total") as i8 {
                        return;
                    }
                    v1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "zero-terminated") as i8 ? 0 : 10);
                    v17 = Argument {
                        value: &v5
                        formatter: core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt
                    };
                    v18 = Argument {
                        value: &v22
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v19 = Argument {
                        value: &v6
                        formatter: core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt
                    };
                    v20 = Argument {
                        value: &v7
                        formatter: core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt
                    };
                    v21 = Argument {
                        value: &v1
                        formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                    };
                    v26 = 2;
                    v27 = 2;
                    v28 = 0;
                    v29 = 32;
                    v30 = 3;
                    v31 = 2;
                    v32 = 2;
                    v33 = 1;
                    v34 = 32;
                    v35 = 3;
                    v87 = v3;
                    v36 = v2;
                    v37 = v87;
                    v38 = 2;
                    v39 = 2;
                    v40 = 2;
                    v41 = 32;
                    v42 = 3;
                    v43 = 2;
                    v44 = 2;
                    v45 = 1;
                    v46 = 32;
                    v47 = 3;
                    v49 = (&v2)[3];
                    v48 = v2;
                    v50 = 2;
                    v51 = 2;
                    v52 = 3;
                    v53 = 32;
                    v54 = 3;
                    v55 = 2;
                    v56 = 2;
                    v57 = 1;
                    v58 = 32;
                    v59 = 3;
                    v61 = (&v2)[3];
                    v60 = v2;
                    v62 = 2;
                    v63 = 2;
                    v64 = 4;
                    v65 = 32;
                    v66 = 3;
                    v15 = Arguments {
                        pieces: ["", "", "", "", "", "", "total"]
                        args: [&v17, &v18, &v19, &v20, &v21]
                        fmt: &v26
                    };
                    v16 = 7;
                    std::io::stdio::_print(&v15);
                }
                if !v78 {
LABEL_4aaee9:
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "2") as i8 {
                        v15 = alloc::string::String::from_utf8_lossy(v12, v13);
                        print!("{:?}{:?}", &v24, &v15);
                    }
                    v13 = 0;
                    v72 = uu_comm::LineReader::read_line(a1, &v11);
                    v73 = v14 + 1;
                    v6 = v73;
                    break;
                } else {
                    if !v79 {
                        goto LABEL_4aadf0;
                    }
                    v81 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v9, v10, v12, v13);
                    if !v81 {
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "3") as i8 {
                            v15 = alloc::string::String::from_utf8_lossy(v9, v10);
                            print!("{:?}{:?}", &v25, &v15);
                        }
                        v10 = 0;
                        v13 = 0;
                        v71 = uu_comm::LineReader::read_line(v82, &v8);
                        v72 = uu_comm::LineReader::read_line(a1, &v11);
                        v0 += 1;
                        v7 = v0;
                        continue;
                    }
                    if v81 == 1 {
                        goto LABEL_4aaee9;
                    }
                }
            }
LABEL_4aadf0:
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a4, "1") as i8 {
                v17 = alloc::string::String::from_utf8_lossy(v9, v10);
                print!("{:?}", &v17);
            }
            v10 = 0;
            v71 = uu_comm::LineReader::read_line(v83, &v8);
            v4 += 1;
            v5 = v4;
        }
    }
}
