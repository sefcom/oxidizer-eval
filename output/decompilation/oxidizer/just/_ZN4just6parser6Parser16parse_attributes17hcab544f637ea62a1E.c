fn just::parser::Parser::parse_attributes(a1: i64) -> : struct9 {
    let a0: u64;  // rdi
    let v0: void*;  // [bp-0x300]
    let v1: struct24;  // [bp-0x2f8], Other Possible Types: struct81
    let v2: struct64;  // [bp-0x2f8]
    let v3: struct80;  // [bp-0x2f8]
    let v4: struct82;  // [bp-0x2f8], Other Possible Types: u704
    let v5: struct81;  // [bp-0x2f8], Other Possible Types: u704
    let v6: u384;  // [bp-0x2f8]
    let v7: struct82;  // [bp-0x2f8]
    let v8: struct82;  // [bp-0x2f8]
    let v9: struct82;  // [bp-0x2f8]
    let v10: struct82;  // [bp-0x2f8]
    let v11: struct81;  // [bp-0x2f8]
    let v12: struct16;  // [bp-0x2c0]
    let v13: struct40;  // [bp-0x2b8]
    let v14: u32;  // [bp-0x2b7]
    let v15: u32;  // [bp-0x2b4]
    let v16: struct128;  // [bp-0x2b0]
    let v17: u32;  // [bp-0x290]
    let v18: i32;  // [bp-0x28d]
    let v19: struct48;  // [bp-0x288]
    let v20: u32;  // [bp-0x288]
    let v21: u32;  // [bp-0x288]
    let v22: u128;  // [bp-0x288]
    let v23: struct48;  // [bp-0x288]
    let v24: struct72;  // [bp-0x288]
    let v25: u128;  // [bp-0x288]
    let v26: struct80;  // [bp-0x288]
    let v27: u32;  // [bp-0x285]
    let v28: struct16;  // [bp-0x278], Other Possible Types: struct24
    let v29: iNone;  // [bp-0x278]
    let v30: struct16;  // [bp-0x268], Other Possible Types: struct24
    let v31: struct44;  // [bp-0x268]
    let v32: struct16;  // [bp-0x258]
    let v33: u128;  // [bp-0x258]
    let v34: struct16;  // [bp-0x258]
    let v35: struct16;  // [sp-0x248], Other Possible Types: u64
    let v36: void*;  // [bp-0x230]
    let v37: u64;  // [bp-0x228]
    let v38: void*;  // [bp-0x220]
    let v39: void*;  // [bp-0x218]
    let v40: u64;  // [bp-0x210]
    let v41: void*;  // [bp-0x208]
    let v42: void*;  // [bp-0x200]
    let v43: struct16;  // [bp-0x200]
    let v44: struct16;  // [bp-0x200]
    let v45: u64;  // [bp-0x1f8]
    let v46: void*;  // [bp-0x1f0]
    let v47: iNone;  // [sp-0x1e8], Other Possible Types: core::fmt::rt::Argument
    let v48: u576;  // [bp-0x1e8]
    let v49: iNone;  // [bp-0x1d8]
    let v50: iNone;  // [bp-0x1c8]
    let v51: iNone;  // [bp-0x1b8]
    let v52: i64;  // [bp-0x1a8]
    let v53: iNone;  // [bp-0x198]
    let v54: u512;  // [bp-0x198]
    let v55: iNone;  // [bp-0x188]
    let v56: struct44;  // [bp-0x178]
    let v57: u128;  // [bp-0x168]
    let v58: core::fmt::Arguments;  // [bp-0x158]
    let v60: iNone;  // [bp-0x148]
    let v61: iNone;  // [bp-0x138]
    let v62: u64;  // [bp-0x128]
    let v63: iNone;  // [bp-0x120]
    let v64: struct72;  // [bp-0x108]
    let v65: iNone;  // [bp-0xb8]
    let v66: core::fmt::Arguments;  // [bp-0xa8]
    let v67: iNone;  // [bp-0x98]
    let v68: iNone;  // [bp-0x88]
    let v70: struct72;  // [bp-0x78]
    let v74: u8;  // [bp-0x38]
    let v77: struct80;  // al
    let v78: core::fmt::Arguments;  // xmm1
    let v79: struct112;  // xmm2
    let v80: u64;  // r13
    let v81: struct80;  // al
    let v82: struct65;  // cl
    let v84: struct82;  // rax
    let v85: u64;  // rax
    let v87: struct17;  // al
    let v88: struct712;  // rsi
    let v89: struct20;  // xmm0
    let v90: struct104;  // xmm1
    let v91: struct44;  // xmm2
    let v92: struct32;  // edx
    let v93: struct82;  // xmm0
    let v94: struct128;  // xmm1
    let v95: struct24;  // xmm2
    let v96: i32;  // esi
    let v97: iNone;  // xmm0
    let v98: iNone;  // xmm1
    let v99: iNone;  // xmm2
    let v100: struct82;  // xmm0
    let v101: i32;  // ecx
    let v102: iNone;  // xmm0
    let v103: i32;  // ecx
    let v105: u64;  // rdx
    let v106: iNone;  // xmm0
    let v107: &mut [u8];  // rdi
    let v108: struct24;  // xmm0
    let v109: struct24;  // xmm1
    let v110: struct24;  // xmm2
    let v111: i32;  // esi
    let v112: i32;  // edx
    let v113: u32;  // edx
    let v116: u64;  // rcx
    let v117: iNone;  // xmm0
    let v118: struct128;  // xmm1
    let v119: iNone;  // xmm2
    let v120: u32;  // edi
    let v121: u64;  // rcx
    let v122: iNone;  // xmm0
    let v123: iNone;  // xmm1
    let v124: core::option::Option<u32>;  // xmm2
    let v125: u32;  // edi
    let v129: struct16;  // [bp-0x2e0]
    let v132: struct16;  // [bp-0x2c7]

    v36 = 0;
    v38 = 0;
    v39 = 0;
    v41 = 0;
    v74 = 37;
    loop {
        v1 = just::parser::Parser::accept(a1, 9);
        v53 = v1.field_0;
        v55 = v1.field_16;
        v56 = v1.field_32;
        v57 = v1.field_48;
        v17 = *((&v1.field_64 as &char + 1) as &i32);
        v18 = v15;
        if v16 != 37 {
            v112 = *(&(&v1.field_72)[1] as &i32);
            v107 = a0;
            *(&v0[84] as &u32) = v1.field_73;
            *(&v0[81] as &unsigned int) = v112;
            *(&v0[56] as &u128) = v57;
            *(&v0[40] as &struct44) = v56;
            v0[24] = v55;
            v0[8] = v53;
            v113 = v17;
            *(&v0[76] as &unsigned int) = v18;
            *(&v0[73] as &u32) = v113;
            *(&v0[72] as &struct40) = v13;
LABEL_68263e:
            *((v107 + 80) as &struct128) = v16;
            *(v107 as &i64) = 1;
            break;
        } else if v13 != 37 {
            v2 = v54;
            v15 = v18;
            v14 = v17;
            v70 = core::option::Option<T>::get_or_insert_with(&v2);
            do {
                v3 = just::parser::Parser::parse_name(a1);
                v77 = v16;
                v78 = v3.field_16;
                v79 = v3.field_32;
                v22 = v3.field_0;
                v28 = v78;
                v30 = v79;
                v80 = v3.field_48;
                v47 = *((&v3.field_48 as &char + 8) as &i128);
                if v16 != 37 {
                    v101 = *((&v3.field_64 as &char + 9) as &i32);
                    v88 = a0;
                    *(&v0[84] as &i32) = *((&v3.field_64 as &char + 12) as &i32);
                    *(&v0[81] as &unsigned int) = v101;
                    v102 = v22;
                    *(&v0[40] as &struct24) = v30;
                    *(&v0[24] as &struct24) = v28;
                    v0[8] = v102;
                    *(&v0[64] as &core::fmt::rt::Argument) = v47;
                    *(&v0[56] as &u64) = v62;
                    *((v88 + 80) as &struct80) = v77;
                    *(v88 as &i64) = 1;
                    return;
                }
                v66 = v22;
                v67 = v28;
                v68 = v30;
                v65 = v47;
                v58 = v66;
                v60 = v67;
                v61 = v68;
                v62 = v80;
                v63 = v65;
                v42 = 0;
                v45 = 8;
                v46 = 0;
                v4 = just::parser::Parser::accepted(a1, 12);
                v82 = v16;
                if v16 != 37 {
                    *(&v0[72] as &i64) = v13.field_0;
                    v93 = *((&v4 as &char + 1) as &i128);
                    v94 = *((&v4 as &char + 17) as &i128);
                    v95 = *((&v4 as &char + 33) as &i128);
                    *(&v0[57] as &i128) = *(&v132.field_0 as &i128);
                    *(&v0[41] as &struct24) = v95;
                    *(&v0[25] as &struct128) = v94;
                    *(&v0[9] as &struct82) = v93;
                    v96 = *((&v4 as &char + 76) as &i32);
                    *(&v0[81] as &i32) = *((&v4 as &char + 73) as &i32);
                    *(&v0[84] as &unsigned int) = v96;
                    *(&v0[8] as &struct80) = v81;
                    *(&v0[80] as &struct65) = v82;
                    *(v0 as &i64) = 1;
                    return;
                }
                if (v81 & 1) {
                    v5 = just::parser::Parser::parse_string_literal(a1);
                    if v16 == 37 {
                        v19 = v6;
                        v43 = alloc::vec::Vec<T,A>::push(&v19, "src/parser.rs");
                        goto LABEL_682140;
                    }
                } else {
                    v4 = just::parser::Parser::accepted(a1, 28);
                    v82 = v16;
                    if v16 != 37 {
                        *(&v0[72] as &i64) = v13.field_0;
                        v93 = *((&v4 as &char + 1) as &i128);
                        v94 = *((&v4 as &char + 17) as &i128);
                        v95 = *((&v4 as &char + 33) as &i128);
                        *(&v0[57] as &i128) = *(&v132.field_0 as &i128);
                        *(&v0[41] as &struct24) = v95;
                        *(&v0[25] as &struct128) = v94;
                        *(&v0[9] as &struct82) = v93;
                        v96 = *((&v4 as &char + 76) as &i32);
                        *(&v0[81] as &i32) = *((&v4 as &char + 73) as &i32);
                        *(&v0[84] as &unsigned int) = v96;
                        *(&v0[8] as &struct80) = v81;
                        *(&v0[80] as &struct65) = v82;
                        *(v0 as &i64) = 1;
                        return;
                    }
                    if (v81 & 1) {
                        loop {
                            v5 = just::parser::Parser::parse_string_literal(a1);
                            if v16 != 37 {
                                break;
                            }
                            v23 = v6;
                            v44 = alloc::vec::Vec<T,A>::push(&v23, "src/parser.rs");
                            v4 = just::parser::Parser::accepted(a1, 15);
                            v82 = v16;
                            if v16 != 37 {
                                *(&v0[72] as &i64) = v13.field_0;
                                v93 = *((&v4 as &char + 1) as &i128);
                                v94 = *((&v4 as &char + 17) as &i128);
                                v95 = *((&v4 as &char + 33) as &i128);
                                *(&v0[57] as &i128) = *(&v132.field_0 as &i128);
                                *(&v0[41] as &struct24) = v95;
                                *(&v0[25] as &struct128) = v94;
                                *(&v0[9] as &struct82) = v93;
                                v96 = *((&v4 as &char + 76) as &i32);
                                *(&v0[81] as &i32) = *((&v4 as &char + 73) as &i32);
                                *(&v0[84] as &unsigned int) = v96;
                                *(&v0[8] as &struct80) = v81;
                                *(&v0[80] as &struct65) = v82;
                                *(v0 as &i64) = 1;
                                return;
                            }
                            if !(v81 & 1) {
                                v7 = just::parser::Parser::expect(a1, 29);
                                if v16 != 37 {
                                    v116 = v7.field_0;
                                    v117 = *((&v7.field_0 as &char + 8) as &i128);
                                    v20 = *(&(&v7.field_64)[1] as &i32);
                                    v27 = v15;
                                    *(&v0[84] as &i32) = *(&v7.field_72 as &i32);
                                    *(&v0[81] as &i32) = *((&v7.field_68 as &char + 1) as &i32);
                                    v118 = *((&v7.field_16 as &char + 8) as &i128);
                                    v119 = *((&v7.field_32 as &char + 8) as &i128);
                                    v120 = v20;
                                    *(&v0[76] as &u32) = v27;
                                    *(&v0[73] as &u32) = v120;
                                    *(&v0[8] as &u64) = v116;
                                    v0[16] = v117;
                                    *(&v0[32] as &struct128) = v118;
                                    v0[48] = v119;
                                    *(&v0[64] as &struct16) = v12;
                                    *(&v0[72] as &struct40) = v13;
                                    *(&v0[80] as &struct128) = v16;
                                    *(v0 as &i64) = 1;
                                    return;
                                }
                                goto LABEL_682140;
                            }
                        }
                        v35 = *((&v5 as &char + 64) as &i64);
                        v97 = v5 as i128;
                        v98 = *((&v5 as &char + 16) as &i128);
                        v99 = *((&v5 as &char + 32) as &i128);
                        v33 = *((&v5 as &char + 48) as &i128);
                        v30 = v99;
                        v28 = v98;
                        *(&v25 as void*) = v97;
                        *(&v0[84] as &i32) = *((&v5 as &char + 76) as &i32);
                        *(&v0[81] as &i32) = *((&v5 as &char + 73) as &i32);
                        *(&v0[72] as &struct16) = v35;
                        v100 = v25;
                        *(&v0[56] as &u128) = v33;
                        *(&v0[40] as &struct16) = v30;
                        *(&v0[24] as &struct16) = v28;
                        *(&v0[8] as &struct82) = v100;
                        *(&v0[80] as &struct128) = v16;
                        *(v0 as &i64) = 1;
                        return;
                    } else {
LABEL_682140:
                        v24 = struct72 {
                            field_0: v66
                            field_16: v67
                            field_32: v68
                            field_48: v62
                            field_56: v65
                        };
                        v8 = just::attribute::Attribute::new(&v24, &v42);
                        v77 = v16;
                        v47 = v8.field_0;
                        v49 = v8.field_16;
                        v50 = v8.field_32;
                        v51 = v8.field_48;
                        v52 = *(&v8.field_64 as &i64);
                        if v16 != 37 {
                            v103 = *((&v8.field_68 as &char + 1) as &i32);
                            v88 = a0;
                            *(&v0[84] as &i32) = *(&v8.field_72 as &i32);
                            *(&v0[81] as &unsigned int) = v103;
                            *(&v0[72] as &unsigned long) = v52;
                            v0[56] = v51;
                            v0[40] = v50;
                            v0[24] = v49;
                            v0[8] = v47;
                            *((v88 + 80) as &struct80) = v77;
                            *(v88 as &i64) = 1;
                            return;
                        }
                        v64 = v48;
                        v84 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v36, v37, &v64);
                        v85 = core::option::Option<T>::or_else(v84, v64.field_0 as i64, v39, v40);
                        if v85 {
                            v129 = *(v85 as &i64);
                            v1 = struct24 {
                                field_0: 9223372036854775834
                                field_8: just::token::Token::lexeme(&v58 as u8)
                                field_16: v105
                            };
                            v26 = just::token::Token::error(&v58 as u8, &v1);
                            *(&v0[72] as &i128) = *(&v35 as &i128);
                            v106 = v26.field_0;
                            *(&v0[56] as &u128) = v26.field_48;
                            *(&v0[40] as &struct44) = v31;
                            v0[24] = v29;
                            v0[8] = v106;
                            *(v0 as &i64) = 1;
                        }
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, just::attribute::Attribute::discriminant(v64.field_0), v62);
                        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v36, &v64, v62);
                        v9 = just::parser::Parser::accepted(a1, 15);
                        v87 = v9.field_0 as i8;
                        if v16 != 37 {
                            v107 = a0;
                            *(&v0[72] as &i64) = v13.field_0;
                            v108 = *((&v9.field_0 as &char + 1) as &i128);
                            v109 = *((&v9.field_16 as &char + 1) as &i128);
                            v110 = *((&v9.field_32 as &char + 1) as &i128);
                            *(&v0[57] as &i128) = *(&v132.field_0 as &i128);
                            *(&v0[41] as &struct24) = v110;
                            *(&v0[25] as &struct24) = v109;
                            *(&v0[9] as &struct24) = v108;
                            v111 = *(&v9.field_72 as &i32);
                            *(&v0[81] as &i32) = *((&v9.field_68 as &char + 1) as &i32);
                            *(&v0[84] as &unsigned int) = v111;
                            *(&v0[8] as &struct17) = v87;
                            goto LABEL_68263e;
                        }
                    }
                }
                v32 = v34;
            } while ((v87 & 1));
            v10 = just::parser::Parser::expect(a1, 10);
            if v16 == 37 {
                v11 = just::parser::Parser::expect_eol(a1);
                v77 = v16;
                v32 = v34;
                if v16 != 37 {
                    v88 = a0;
                    *(&v0[72] as &i64) = v13.field_0;
                    v89 = v11.field_0;
                    v90 = v11.field_16;
                    v91 = v11.field_32;
                    *(&v0[56] as &u128) = v11.field_48;
                    *(&v0[40] as &struct44) = v91;
                    *(&v0[24] as &struct104) = v90;
                    *(&v0[8] as &struct20) = v89;
                    v92 = v11.field_73;
                    *(&v0[81] as &i32) = *(&(&v11.field_72)[1] as &i32);
                    *(&v0[84] as &struct32) = v92;
                    *((v88 + 80) as &struct80) = v77;
                    *(v88 as &i64) = 1;
                    return;
                }
            } else {
                v121 = v10.field_0;
                v122 = *((&v10.field_0 as &char + 8) as &i128);
                v21 = *(&(&v10.field_64)[1] as &i32);
                v27 = v15;
                *(&v0[84] as &i32) = *(&v10.field_72 as &i32);
                *(&v0[81] as &i32) = *((&v10.field_68 as &char + 1) as &i32);
                v123 = *((&v10.field_16 as &char + 8) as &i128);
                v124 = *((&v10.field_32 as &char + 8) as &i128);
                v125 = v21;
                *(&v0[76] as &u32) = v27;
                *(&v0[73] as &u32) = v125;
                *(&v0[8] as &u64) = v121;
                v0[16] = v122;
                v0[32] = v123;
                *(&v0[48] as &core::option::Option<u32>) = v124;
                *(&v0[64] as &struct16) = v12;
                *(&v0[72] as &struct40) = v13;
                *(&v0[80] as &struct128) = v16;
                *(v0 as &i64) = 1;
                break;
            }
        } else {
            *(&v0[72] as &i8) = 37;
            *(v0 as &i64) = 0;
        }
    }
    return;
}
