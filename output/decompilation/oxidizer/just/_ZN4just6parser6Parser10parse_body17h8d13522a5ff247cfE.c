fn just::parser::Parser::parse_body(a1: i64) -> : struct82 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x200]
    let v1: u32;  // [bp-0x1fd]
    let v2: struct82;  // [bp-0x1f8], Other Possible Types: u704
    let v3: struct82;  // [bp-0x1f8], Other Possible Types: u704
    let v4: struct81;  // [bp-0x1f8]
    let v5: struct40;  // [bp-0x1f8], Other Possible Types: struct77
    let v6: struct128;  // [bp-0x1f8]
    let v7: struct82;  // [bp-0x1f8]
    let v8: struct89;  // [bp-0x1f8]
    let v9: iNone;  // [bp-0x1f7]
    let v10: iNone;  // [bp-0x1f7]
    let v12: iNone;  // [bp-0x1e7]
    let v13: iNone;  // [bp-0x1e7]
    let v14: u64;  // [bp-0x1e0]
    let v15: u64;  // [bp-0x1e0]
    let v16: u8;  // [bp-0x1d8]
    let v17: u8;  // [bp-0x1d8]
    let v18: u8;  // [bp-0x1d8]
    let v19: iNone;  // [bp-0x1d7]
    let v20: iNone;  // [bp-0x1d7]
    let v21: iNone;  // [bp-0x1d7]
    let v22: u8;  // [bp-0x1b8]
    let v23: u32;  // [bp-0x1b4]
    let v24: u8;  // [bp-0x1b0]
    let v25: u8;  // [bp-0x1b0]
    let v26: u32;  // [bp-0x1ac]
    let v28: iNone;  // [bp-0x1a0]
    let v29: core::option::Option<u32>;  // [bp-0x190]
    let v30: u64;  // [bp-0x180]
    let v31: void*;  // [bp-0x178]
    let v32: struct16;  // [bp-0x178]
    let v33: u64;  // [bp-0x170]
    let v34: &mut [u8];  // [bp-0x168]
    let v35: void*;  // [bp-0x160]
    let v36: struct16;  // [bp-0x160]
    let v37: struct16;  // [bp-0x160]
    let v38: u64;  // [bp-0x158]
    let v39: void*;  // [bp-0x150]
    let v40: iNone;  // [bp-0x148]
    let v41: iNone;  // [bp-0x138]
    let v42: iNone;  // [bp-0x128]
    let v43: iNone;  // [bp-0x118]
    let v44: iNone;  // [bp-0x108]
    let v45: iNone;  // [bp-0xf8]
    let v46: iNone;  // [bp-0xe8]
    let v47: iNone;  // [bp-0xd8]
    let v48: iNone;  // [bp-0xc8]
    let v49: struct77;  // [bp-0xb8], Other Possible Types: u128
    let v50: u32;  // [bp-0xb8]
    let v51: u32;  // [bp-0xb5]
    let v52: struct17;  // [bp-0xa8]
    let v53: u128;  // [bp-0x98]
    let v54: iNone;  // [bp-0x88]
    let v55: struct128;  // [bp-0x78]
    let v56: iNone;  // [bp-0x60]
    let v57: iNone;  // [bp-0x50]
    let v58: u64;  // [bp-0x40]
    let v60: struct73;  // al
    let v65: u64;  // rbp
    let v66: core::fmt::Arguments;  // al
    let v67: core::fmt::rt::Argument;  // cl
    let v76: struct64;  // rcx
    let v77: iNone;  // xmm0
    let v78: u64;  // rdx
    let v87: struct128;  // xmm0
    let v88: Option<struct1>;  // xmm1
    let v89: struct17;  // xmm2
    let v90: u128;  // xmm3
    let v91: iNone;  // xmm4
    let v92: struct24;  // r15
    let v105: u24;  // [bp-0x1b7]

    v31 = 0;
    v33 = 8;
    v34 = 0;
    v2 = just::parser::Parser::accepted(a1, 25);
    if v24 != 37 {
        return struct96 {
            field_0: v60
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_49: <UNKNOWN>
            field_64: v24
            field_72: <UNKNOWN>
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    if (v60 & 1) {
        loop {
            v2 = just::parser::Parser::accepted(a1, 17);
            if v24 != 37 {
                break;
            }
            if (v2.field_0 as i8 & 1) {
                return struct32 {
                    field_0: *(&v32.field_0 as &i128)
                    field_16: v92
                    padding_24: <UNKNOWN>
                    field_72: <UNKNOWN>
                };
            }
            v35 = 0;
            v38 = 8;
            v39 = 0;
            v65 = (*((a1 + 88) as &i64) < *((a1 + 32) as &i64) ? *((*((a1 + 24) as &i64) + *((a1 + 88) as &i64) * 72 + 48) as &i64) : 0);
            v3 = just::parser::Parser::accepted(a1, 20);
            v67 = v24;
            v20 = v19;
            if v24 != 37 {
                v19 = v20;
                return struct96 {
                    field_0: v66
                    field_1: <UNKNOWN>
                    field_17: <UNKNOWN>
                    field_33: <UNKNOWN>
                    field_49: <UNKNOWN>
                    field_64: v67
                    field_72: <UNKNOWN>
                    field_73: <UNKNOWN>
                    field_76: <UNKNOWN>
                };
            }
            v17 = v16;
            v20 = v19;
            if !(v66 & 1) {
                loop {
                    v3 = just::parser::Parser::accepted(a1, 20);
                    v67 = v24;
                    if v24 != 37 {
                        v19 = v20;
                        return struct96 {
                            field_0: v66
                            field_1: <UNKNOWN>
                            field_17: <UNKNOWN>
                            field_33: <UNKNOWN>
                            field_49: <UNKNOWN>
                            field_64: v67
                            field_72: <UNKNOWN>
                            field_73: <UNKNOWN>
                            field_76: <UNKNOWN>
                        };
                    }
                    if (v66 & 1) || just::parser::Parser::next_is(a1, 17) {
                        break;
                    }
                    v4 = just::parser::Parser::accept(a1, 34);
                    v40 = v4.field_0;
                    v41 = v4.field_16;
                    v42 = v4.field_32;
                    v43 = v4.field_48;
                    v0 = *(&v105 as &i32);
                    v1 = v23;
                    if v24 != 37 {
                        return struct88 {
                            field_0: v40
                            field_16: v41
                            field_32: v42
                            field_48: v43
                            field_64: v22
                            field_65: v1
                            field_68: v24
                            field_72: v26
                            field_73: <UNKNOWN>
                            field_76: <UNKNOWN>
                        };
                    } else if v22 != 37 {
                        v5 = struct77 {
                            field_0: 18
                            field_8: v40
                            field_24: v41
                            field_40: v42
                            field_56: v43
                            field_72: v22
                            field_73: v0
                        };
                        v36 = alloc::vec::Vec<T,A>::push(&v5, "src/parser.rs");
                        v24 = v25;
                    } else {
                        v3 = just::parser::Parser::accepted(a1, 27);
                        v67 = v24;
                        if v24 != 37 {
                            v19 = v20;
                            return struct96 {
                                field_0: v66
                                field_1: <UNKNOWN>
                                field_17: <UNKNOWN>
                                field_33: <UNKNOWN>
                                field_49: <UNKNOWN>
                                field_64: v67
                                field_72: <UNKNOWN>
                                field_73: <UNKNOWN>
                                field_76: <UNKNOWN>
                            };
                        } else if (v66 & 1) {
                            v6 = just::parser::Parser::parse_expression(a1);
                            v44 = *(&v6.field_8 as &i128);
                            v45 = v6.field_24;
                            v46 = v6.field_40;
                            v47 = v6.field_56;
                            v48 = v6.field_72;
                            if v6.field_0 == 18 {
                                return struct80 {
                                    field_0: v44
                                    field_16: v45
                                    field_32: v46
                                    field_48: v47
                                    field_64: v48
                                };
                            }
                            v58 = v30;
                            v57 = v29;
                            v56 = v28;
                            v49 = struct77 {
                                field_0: v6.field_0
                                field_8: v44
                                field_24: v45
                                field_40: v46
                                field_56: v47
                                field_72: v48
                                field_73: <UNKNOWN>
                            };
                            v37 = alloc::vec::Vec<T,A>::push(&v49, "src/parser.rs");
                            v7 = just::parser::Parser::expect(a1, 26);
                            if v24 != 37 {
                                v76 = v7.field_0 as i64;
                                v77 = *((&v7.field_0 as &char + 8) as &i128);
                                v78 = *((&v7.field_48 as &char + 8) as &i64);
                                v50 = *(&v105 as &i32);
                                v51 = v23;
                                return struct88 {
                                    field_0: v76
                                    field_8: v77
                                    field_24: *((&v7.field_16 as &char + 8) as &i128)
                                    field_40: *((&v7.field_32 as &char + 8) as &i128)
                                    field_56: v78
                                    field_64: v22
                                    field_65: v51
                                    field_68: v24
                                    field_72: v26
                                    field_73: <UNKNOWN>
                                    field_76: <UNKNOWN>
                                };
                            }
                        } else {
                            v8 = just::parser::Parser::unexpected_token(a1);
                            v87 = *(&v8.field_72 as &i128);
                            v55 = v87;
                            v88 = v8.field_8;
                            v89 = v8.field_24;
                            v90 = v8.field_40;
                            v91 = v8.field_56;
                            v54 = v91;
                            v53 = v90;
                            v52 = v89;
                            *(&v49 as &Option<struct1>) = v88;
                            return struct80 {
                                field_0: v88
                                field_16: v89
                                field_32: v90
                                field_48: v91
                                field_64: v87
                            };
                        }
                    }
                }
            }
            vvar_960{stack -504} = struct40 OrderedDict([(0, Load(addr=(Reference vvar_955{stack -352}), size=16, endness=Iend_LE)), (16, 0x0<64>), (24, vvar_943{reg 56}), (32, 𝜙@8b [((6816965, None), vvar_685{stack -472}), ((6817185, None), vvar_716{stack -472}), ((6817206, None), vvar_716{stack -472})]), (33, 𝜙@56b [((6816965, None), vvar_686{stack -471}), ((6817185, None), vvar_717{stack -471}), ((6817206, None), vvar_717{stack -471})])])
            v32 = alloc::vec::Vec<T,A>::push(&v5);
            v9 = v10;
            v12 = v13;
            v14 = v15;
            v16 = v18;
            v19 = v21;
        }
    } else {
        return struct32 {
            field_0: *(&v32.field_0 as &i128)
            field_16: v92
            padding_24: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    return struct96 {
        field_0: v60
        field_1: <UNKNOWN>
        field_17: <UNKNOWN>
        field_33: <UNKNOWN>
        field_49: <UNKNOWN>
        field_64: v24
        field_72: <UNKNOWN>
        field_73: <UNKNOWN>
        field_76: <UNKNOWN>
    };
}
