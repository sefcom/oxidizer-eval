fn just::subcommand::Subcommand::format(a0: i64, a1: i64, a2: void*) -> void {
    let v0: struct8;  // [bp-0x2b8], Other Possible Types: u8
    let v1: u8;  // [bp-0x2b8]
    let v2: void*;  // [bp-0x2b8]
    let v3: struct24;  // [bp-0x2b0]
    let v4: core::fmt::rt::Argument;  // [bp-0x2ac]
    let v5: alloc::string::String;  // [bp-0x2a0]
    let v6: u8;  // [bp-0x29f]
    let v7: u8;  // [bp-0x29e]
    let v8: struct24;  // [bp-0x29d]
    let v9: u8;  // [bp-0x29c]
    let v10: struct64;  // [bp-0x29b]
    let v11: u8;  // [bp-0x29a]
    let v12: alloc::string::String;  // [bp-0x299]
    let v13: struct24;  // [bp-0x298]
    let v14: core::fmt::Arguments;  // [bp-0x294]
    let v15: i64;  // [bp-0x290], Other Possible Types: u64
    let v16: struct18;  // [bp-0x280]
    let v17: struct18;  // [bp-0x280]
    let v18: struct18;  // [bp-0x280]
    let v19: u8;  // [bp-0x27f]
    let v20: u8;  // [bp-0x27f]
    let v21: u8;  // [bp-0x27f]
    let v22: u8;  // [bp-0x27e]
    let v23: u8;  // [bp-0x27e]
    let v24: u8;  // [bp-0x27e]
    let v25: u8;  // [bp-0x27d]
    let v26: u8;  // [bp-0x27d]
    let v27: u8;  // [bp-0x27d]
    let v28: u8;  // [bp-0x27c]
    let v29: u8;  // [bp-0x27c]
    let v30: u8;  // [bp-0x27c]
    let v31: i8;  // [bp-0x27b]
    let v32: i8;  // [bp-0x27b]
    let v33: i8;  // [bp-0x27b]
    let v34: u8;  // [bp-0x27a]
    let v35: u8;  // [bp-0x27a]
    let v36: u8;  // [bp-0x27a]
    let v37: i8;  // [bp-0x279]
    let v38: i8;  // [bp-0x279]
    let v39: i8;  // [bp-0x279]
    let v40: u32;  // [bp-0x277]
    let v41: u32;  // [bp-0x277]
    let v42: u32;  // [bp-0x277]
    let v43: iNone;  // [bp-0x273]
    let v44: iNone;  // [bp-0x273]
    let v45: iNone;  // [bp-0x273]
    let v46: iNone;  // [bp-0x26f]
    let v47: iNone;  // [bp-0x26f]
    let v48: iNone;  // [bp-0x26f]
    let v49: struct24;  // [bp-0x240]
    let v50: u32;  // [bp-0x238]
    let v51: u64;  // [bp-0x230]
    let v52: struct33;  // [bp-0x228], Other Possible Types: u128
    let v53: struct81;  // [bp-0x218]
    let v54: u16;  // [bp-0x210]
    let v55: struct82;  // [bp-0x208]
    let v56: iNone;  // [bp-0x207]
    let v57: struct82;  // [bp-0x1f8]
    let v58: i8;  // [bp-0x1f7]
    let v59: struct82;  // [bp-0x1e8]
    let v60: i8;  // [bp-0x1e7]
    let v61: struct89;  // [bp-0x1d8]
    let v62: i8;  // [bp-0x1d7]
    let v63: u64;  // [bp-0x1c8]
    let v64: u64;  // [bp-0x1c0]
    let v65: iNone;  // [bp-0x1b8], Other Possible Types: struct74, u128
    let v66: struct18;  // [bp-0x1b0]
    let v67: iNone;  // [bp-0x1a8]
    let v68: iNone;  // [bp-0x198]
    let v69: iNone;  // [bp-0x188]
    let v70: iNone;  // [bp-0x178]
    let v71: u128;  // [bp-0x168]
    let v72: u64;  // [bp-0x159]
    let v73: struct16;  // [bp-0x150], Other Possible Types: u64
    let v74: u64;  // [bp-0x150]
    let v75: u64;  // [bp-0x150]
    let v76: struct82;  // [bp-0x110]
    let v77: struct56;  // [bp-0x110], Other Possible Types: struct82
    let v78: struct56;  // [bp-0x110]
    let v79: struct80;  // [bp-0x100]
    let v80: struct80;  // [bp-0x100]
    let v81: struct72;  // [bp-0xf0]
    let v82: struct72;  // [bp-0xf0]
    let v83: struct82;  // [bp-0xe0]
    let v84: struct82;  // [bp-0xe0]
    let v85: struct56;  // [bp-0xd8]
    let v86: struct97;  // [bp-0x98]
    let v87: struct81;  // [bp-0x88]
    let v88: struct82;  // [bp-0x78]
    let v89: struct82;  // [bp-0x68]
    let v90: struct82;  // [bp-0x58]
    let v91: struct89;  // [bp-0x48]
    let v93: i64;  // rcx
    let v94: u64;  // r12
    let v95: u64;  // rax
    let v96: u32;  // rdx
    let v97: struct18;  // rbx
    let v98: struct18;  // rax
    let v99: struct18;  // rax
    let v100: alloc::string::String;  // bpl
    let v101: struct82;  // r12
    let v102: u32;  // edx
    let v103: struct73;  // eax
    let v104: alloc::string::String;  // cl
    let v105: struct24;  // r14
    let v106: u8;  // sil
    let v107: u8;  // dil
    let v108: struct24;  // r8b
    let v109: Option<struct224>;  // r9b
    let v110: struct64;  // r10b
    let v111: u8;  // r11b
    let v112: alloc::string::String;  // bl
    let v113: u64;  // rax
    let v114: struct712;  // al
    let v115: iNone;  // xmm0

    v94 = just::compilation::Compilation::root_src(v93);
    v95 = just::compilation::Compilation::root_ast(v93);
    if !*((a1 + 420) as &i8) && !*((v93 + 491) as &i8) {
        return struct2 {
            field_0: 54
        };
    }
    v49 = <T as alloc::string::SpecToString>::spec_to_string(v95);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v50, v51, v94, v96) {
        return struct1 {
            field_0: 56
        };
    } else if *((a1 + 407) as &i8) {
        if !*((a1 + 423) as &i8) {
            return struct1 {
                field_0: 24
            };
        }
        v15 = a1;
        v52 = 2;
        v54 = 513;
        v65 = similar::text::TextDiffConfig::diff_lines(&v52, v94, v96, v50, v51);
        if v65.field_16 {
            v97 = v66;
            v64 = v97 + v65.field_16 * 40;
            v98 = v97 + 40;
            v15 += 388;
            loop {
                vvar_1124{stack -152} = struct97 OrderedDict([(0, 𝜙@128b [((6872864, None), vvar_944{stack -152}), ((6872864, 1), vvar_944{stack -152}), ((6872794, None), None)]), (16, 𝜙@128b [((6872864, None), vvar_950{stack -136}), ((6872864, 1), vvar_950{stack -136}), ((6872794, None), None)]), (32, 𝜙@128b [((6872864, None), vvar_951{stack -120}), ((6872864, 1), vvar_951{stack -120}), ((6872794, None), None)]), (48, 𝜙@128b [((6872864, None), vvar_952{stack -104}), ((6872864, 1), vvar_952{stack -104}), ((6872794, None), None)]), (64, 𝜙@128b [((6872864, None), vvar_948{stack -88}), ((6872864, 1), vvar_948{stack -88}), ((6872794, None), None)]), (80, 𝜙@128b [((6872864, None), vvar_946{stack -72}), ((6872864, 1), vvar_946{stack -72}), ((6872794, None), None)])])
                similar::text::TextDiff<T>::iter_changes(&v86, &v65, v97);
                v63 = *(&v86.field_96 as &i64);
                v61 = v91;
                v59 = v90;
                v57 = v89;
                v55 = v88;
                v53 = v87;
                v52 = v86.field_0;
                v48 = v47;
                v21 = v20;
                v24 = v23;
                v27 = v26;
                v30 = v29;
                v33 = v32;
                v36 = v35;
                v39 = v38;
                v42 = v41;
                v45 = v44;
                v99 = v97;
                loop {
                    v97 = v98;
                    v44 = v45;
                    v41 = v42;
                    v38 = v39;
                    v35 = v36;
                    v32 = v33;
                    v29 = v30;
                    v26 = v27;
                    v23 = v24;
                    v20 = v21;
                    v47 = v48;
                    vvar_1123{stack -272} = struct56 OrderedDict([(0, 𝜙@128b [((6872897, None), vvar_957{stack -272}), ((6873729, None), vvar_891{stack -272})]), (16, 𝜙@128b [((6872897, None), vvar_960{stack -256}), ((6873729, None), vvar_894{stack -256})]), (32, 𝜙@128b [((6872897, None), vvar_961{stack -240}), ((6873729, None), vvar_895{stack -240})]), (48, 𝜙@64b [((6872897, None), vvar_958{stack -224}), ((6873729, None), vvar_892{stack -224})])])
                    <similar::iter::ChangesIter<Old,New,T> as core::iter::traits::iterator::Iterator>::next(&v78, &v52);
                    if v78.field_0 as i32 == 2 {
                        break;
                    }
                    v85 = v77;
                    if v84 as u8 {
                        if v84 as u8 == 1 {
                            v16 = just::color::Color::stdout(v15);
                        } else {
                            v17 = just::color::Color::stdout(v15);
                        }
                        v106 = 0;
                        v107 = 0;
                        v108 = 0;
                        v109 = 0;
                        v110 = 0;
                        v111 = 0;
                        v112 = 0;
                        v73 = struct16 {
                            field_0: v105
                            field_8: 1
                        };
                        v73 = v74;
                        v75 = v74;
                        if v101 as u8 == 2 {
                            goto LABEL_68e180;
                        }
                    } else {
                        v18 = just::color::Color::stdout(v15);
                        v100 = v18.field_0 as i8;
                        v104 = v20;
                        v106 = v23;
                        v107 = v26;
                        v108 = v29;
                        v109 = v32;
                        v110 = v35;
                        v111 = v38;
                        v112 = *((&v18.field_0 as &char + 8) as &i8);
                        v103 = v41;
                        v102 = *((&v18.field_0 as &char + 13) as &i32);
                        v101 = *((&v18.field_16 as &char + 1) as &i8);
                        v73 = struct16 {
                            field_0: " "
                        };
                        v73 = v74;
                        v75 = v74;
                        if v101 as u8 == 2 {
                            goto LABEL_68e180;
                        }
                    }
                    v75 = v75;
                    if v101 as u32 == 1 {
                        v73 = v75;
                        if (v100 & 1) {
                            goto LABEL_68e157;
                        }
LABEL_68e180:
                        v75 = v73;
                        v2 = 0;
                        v103 = 10;
                        v104 = 0;
                        v102 = 10;
                        v106 = 0;
                        v107 = 0;
                        v108 = 0;
                        v109 = 0;
                        v110 = 0;
                        v111 = 0;
                        v112 = 0;
LABEL_68e1a6:
                        v5 = v104;
                        v6 = v106;
                        v7 = v107;
                        v8 = v108;
                        v9 = v109;
                        v10 = v110;
                        v11 = v111;
                        v12 = v112;
                        v3 = v103;
                        v13 = v103;
                        v4 = v102;
                        v14 = v102;
                        print!("{}{}{}{}", &v0, &v75, &v85, &v5);
                        v48 = v46;
                        v21 = v19;
                        v24 = v22;
                        v27 = v25;
                        v30 = v28;
                        v33 = v31;
                        v36 = v34;
                        v39 = v37;
                        v42 = v40;
                        v45 = v43;
                    } else {
LABEL_68e157:
                        v0 = struct8 {
                            field_0: v104
                            field_1: v106
                            field_2: v107
                            field_3: v108
                            field_4: v109
                            field_5: v110
                            field_6: v111
                            field_7: v112
                        };
                        v0 = v1;
                        goto LABEL_68e1a6;
                    }
                }
                v98 = v97 + 40;
                if v97 == v64 {
                    v76 = v77;
                    v83 = v84;
                    v79 = v80;
                    v81 = v82;
                    if v97 == v64 {
                        break;
                    }
                } else {
                    v76 = v77;
                    v83 = v84;
                    v79 = v80;
                    v81 = v82;
                    if v97 == v64 {
                        break;
                    }
                }
            }
        }
        return struct1 {
            field_0: 24
        };
    } else {
        v113 = std::fs::write(a2, &v49);
        if v113 {
            v52 = just::subcommand::Subcommand::format::{{closure}}(a2[8] as i64, a2[16] as i64, v113);
            v114 = v52.field_0;
            *(&v65 as &i128) = *(&(&v52.field_0)[1] as &i128);
            v67 = *((&v52.field_16 as &char + 1) as &i128);
            v68 = v56 as i128;
            v69 = *(&v58 as &i128);
            v70 = *(&v60 as &i128);
            v71 = *(&v62 as &i128);
            v72 = v63;
            if v114 != 56 {
                v115 = v65 as i128;
                return struct112 {
                    field_0: v114
                    field_1: <UNKNOWN>
                    field_17: <UNKNOWN>
                    field_33: <UNKNOWN>
                    field_49: <UNKNOWN>
                    field_65: <UNKNOWN>
                    field_81: <UNKNOWN>
                    field_96: <UNKNOWN>
                };
            }
        }
        if !*((a1 + 423) as &i8) {
            return struct1 {
                field_0: 56
            };
        }
        v65 = a2[8] as i128;
        eprintln!("Wrote justfile to `{}`", &v65 as u8);
        return struct1 {
            field_0: 56
        };
    }
}
