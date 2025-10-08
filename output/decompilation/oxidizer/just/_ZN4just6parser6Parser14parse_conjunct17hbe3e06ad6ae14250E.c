fn just::parser::Parser::parse_conjunct(a1: i64) -> : struct128 {
    let a0: i64;  // rdi
    let v0: struct82;  // [bp-0x2f8], Other Possible Types: u704
    let v1: struct82;  // [bp-0x2f8], Other Possible Types: u704
    let v2: u128;  // [bp-0x2f8]
    let v3: struct128;  // [bp-0x2f8]
    let v4: struct128;  // [bp-0x2f8]
    let v5: struct128;  // [bp-0x2f8]
    let v6: u128;  // [bp-0x2e8]
    let v7: struct88;  // [bp-0x2d8]
    let v8: u128;  // [bp-0x2c8]
    let v9: u128;  // [bp-0x2b8]
    let v10: u8;  // [bp-0x2b0]
    let v11: u32;  // [bp-0x2ac]
    let v12: u128;  // [bp-0x2a8]
    let v13: i8;  // [bp-0x2a0]
    let v14: u128;  // [bp-0x298]
    let v15: i8;  // [bp-0x290]
    let v16: u128;  // [bp-0x288]
    let v17: i8;  // [bp-0x280]
    let v18: struct82;  // [bp-0x270], Other Possible Types: u64
    let v19: void*;  // [bp-0x268], Other Possible Types: struct16, struct80, u128
    let v20: struct128;  // [bp-0x258], Other Possible Types: struct80, struct88
    let v21: iNone;  // [bp-0x248], Other Possible Types: struct80, u128
    let v22: iNone;  // [bp-0x238], Other Possible Types: struct80, u128
    let v23: struct24;  // [bp-0x228], Other Possible Types: int
    let v24: alloc::string::String;  // [bp-0x218], Other Possible Types: u128
    let v25: u128;  // [bp-0x210]
    let v26: struct24;  // [bp-0x208]
    let v27: struct88;  // [bp-0x200]
    let v28: struct81;  // [bp-0x1f8]
    let v29: u128;  // [bp-0x1f0]
    let v30: u128;  // [bp-0x1e8]
    let v31: u128;  // [bp-0x1e0]
    let v32: u128;  // [bp-0x1d8]
    let v33: u128;  // [bp-0x1d0]
    let v34: u128;  // [bp-0x1c0]
    let v35: u128;  // [bp-0x1b0]
    let v36: u64;  // [bp-0x1a0]
    let v37: struct128;  // [bp-0x198]
    let v38: struct128;  // [bp-0x118]
    let v39: struct128;  // [bp-0x98]
    let v41: struct24;  // al
    let v42: struct16;  // rax
    let v43: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // xmm0
    let v44: struct24;  // xmm1
    let v45: struct81;  // xmm2
    let v47: struct24;  // rax
    let v48: u128;  // xmm0
    let v49: struct32;  // al
    let v50: u128;  // xmm0
    let v51: u128;  // xmm1
    let v52: struct88;  // xmm2
    let v54: iNone;  // xmm0
    let v55: u128;  // xmm1
    let v56: struct88;  // xmm2
    let v58: struct24;  // xmm0
    let v59: iNone;  // xmm1
    let v60: struct88;  // xmm2
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm2
    let v64: struct72;  // xmm0
    let v65: iNone;  // xmm1
    let v66: iNone;  // xmm2

    v0 = just::parser::Parser::accepted_keyword(a1, 13);
    v41 = v0.field_0 as i8;
    if v10 == 37 {
        if (v0.field_0 as i8 & 1) {
            just::parser::Parser::parse_conditional(a0, a1);
            return;
        }
        v0 = just::parser::Parser::accepted(a1, 32);
        v41 = v0.field_0 as i8;
        if v10 == 37 {
            if (v0.field_0 as i8 & 1) {
                v19 = 0;
                v3 = just::parser::Parser::parse_conjunct(a1);
                v42 = v3.field_0 as i64;
                v24 = *((&v3.field_0 as &char + 8) as &i128);
                *(&v26.field_0 as &i128) = *((&v3.field_16 as &char + 8) as &i128);
                v28.field_0 = *((&v3.field_32 as &char + 8) as &i128);
                v30 = *((&v3.field_48 as &char + 8) as &i128);
                v32 = *(&v10 as &i128);
                if v42 != 18 {
                    v37 = struct128 {
                        field_0: v42
                        field_8: v24
                        field_24: *(&v26.field_0 as &i128)
                        field_40: v28.field_0
                        field_56: v30
                        field_72: v32
                        field_88: *((&v3.field_80 as &char + 8) as &i128)
                        field_104: *((&v3.field_96 as &char + 8) as &i128)
                        field_120: *((&v3.field_112 as &char + 8) as &i64)
                    };
                    return struct24 {
                        field_0: 14
                        field_8: alloc::boxed::Box<T>::new(&v37) as u64
                        field_16: 0
                    };
                }
                v43 = v24;
                v44 = *(&v26.field_0 as &i128);
                v45 = v28.field_0;
                return struct88 {
                    field_0: 18
                    field_8: v43
                    field_24: v44
                    field_40: v45
                    field_56: v30
                    field_72: v32
                };
            } else {
                just::parser::Parser::parse_value(&v0, a1);
                v47 = v0.field_0;
                v19 = v0.field_8;
                v20 = v0.field_24;
                v21 = v0.field_40;
                v22 = *(&v0.field_56 as &i128);
                v23 = *(&v0.field_68 as &i128);
                if v47 == 18 {
                    *((a0 + 72) as void*) = v23;
                    *((a0 + 56) as &u128) = v22;
                    *((a0 + 40) as &u128) = v21;
                    *((a0 + 24) as &struct88) = v20;
                    *((a0 + 8) as &u128) = v19;
                }
                v36 = *(&v17 as &i64);
                v48 = *(&v13 as &i128);
                v35 = *(&v15 as &i128);
                v34 = v48;
                v25 = v19;
                v27 = v20;
                v29 = v21;
                v31 = v22;
                *(&v33 as void*) = v23;
                v24 = v47;
                v2 = just::parser::Parser::accepted(a1, 32);
                v49 = v1.field_0 as i8;
                if v10 == 37 {
                    if (v1.field_0 as i8 & 1) {
                        v16 = *((&v35 as &char + 8) as &i128);
                        v14 = *((&v34 as &char + 8) as &i128);
                        v12 = *((&v33 as &char + 8) as &i128);
                        v9 = *((&v31 as &char + 8) as &i128);
                        v50 = *(&v24.vec.buf.inner.cap as &i128);
                        v51 = *((&v25 as &char + 8) as &i128);
                        v52 = *((&v27.field_0 as &char + 8) as &i128);
                        v8 = *((&v29 as &char + 8) as &i128);
                        v7 = v52;
                        v6 = v51;
                        v2 = v50;
                        v18 = alloc::boxed::Box<T>::new(&v2) as u64;
                        v4 = just::parser::Parser::parse_conjunct(a1);
                        v19 = *((&v4.field_0 as &char + 8) as &i128);
                        v20 = *((&v4.field_16 as &char + 8) as &i128);
                        v21 = *((&v4.field_32 as &char + 8) as &i128);
                        v22 = *((&v4.field_48 as &char + 8) as &i128);
                        v23 = *((&v4.field_64 as &char + 8) as &i128);
                        if v4.field_0 as i64 != 18 {
                            v38 = struct128 {
                                field_0: v4.field_0 as i64
                                field_8: v19
                                field_24: v20
                                field_40: v21
                                field_56: v22
                                field_72: v23
                                field_88: *((&v4.field_80 as &char + 8) as &i128)
                                field_104: *((&v4.field_96 as &char + 8) as &i128)
                                field_120: *((&v4.field_112 as &char + 8) as &i64)
                            };
                            return struct24 {
                                field_0: 14
                                field_8: alloc::boxed::Box<T>::new(&v38) as u64
                                field_16: v18
                            };
                        }
                        return struct88 {
                            field_0: 18
                            field_8: v19
                            field_24: v20
                            field_40: v21
                            field_56: v22
                            field_72: v23
                        };
                    } else {
                        v2 = just::parser::Parser::accepted(a1, 30);
                        v49 = v1.field_0 as i8;
                        if v10 == 37 {
                            if (v49 & 1) {
                                v16 = *((&v35 as &char + 8) as &i128);
                                v14 = *((&v34 as &char + 8) as &i128);
                                v12 = *((&v33 as &char + 8) as &i128);
                                v9 = *((&v31 as &char + 8) as &i128);
                                v54 = *(&v24.vec.buf.inner.cap as &i128);
                                v55 = *((&v25 as &char + 8) as &i128);
                                v56 = *((&v27.field_0 as &char + 8) as &i128);
                                v8 = *((&v29 as &char + 8) as &i128);
                                v7 = v56;
                                v6 = v55;
                                *(&v2 as void*) = v54;
                                v18 = alloc::boxed::Box<T>::new(&v2) as u64;
                                v5 = just::parser::Parser::parse_conjunct(a1);
                                v19 = *((&v5.field_0 as &char + 8) as &i128);
                                v20 = *((&v5.field_16 as &char + 8) as &i128);
                                v21 = *((&v5.field_32 as &char + 8) as &i128);
                                v22 = *((&v5.field_48 as &char + 8) as &i128);
                                v23 = *((&v5.field_64 as &char + 8) as &i128);
                                if v5.field_0 as i64 != 18 {
                                    v39 = struct128 {
                                        field_0: v5.field_0 as i64
                                        field_8: v19
                                        field_24: v20
                                        field_40: v21
                                        field_56: v22
                                        field_72: v23
                                        field_88: *((&v5.field_80 as &char + 8) as &i128)
                                        field_104: *((&v5.field_96 as &char + 8) as &i128)
                                        field_120: *((&v5.field_112 as &char + 8) as &i64)
                                    };
                                    return struct24 {
                                        field_0: 11
                                        field_8: v18
                                        field_16: alloc::boxed::Box<T>::new(&v39) as u64
                                    };
                                }
                                return struct88 {
                                    field_0: 18
                                    field_8: v19
                                    field_24: v20
                                    field_40: v21
                                    field_56: v22
                                    field_72: v23
                                };
                            } else {
                                v58 = *(&v24.vec.buf.inner.cap as &i128);
                                v59 = *((&v25 as &char + 8) as &i128);
                                v60 = *((&v27.field_0 as &char + 8) as &i128);
                                return struct128 {
                                    field_0: v58
                                    field_16: v59
                                    field_32: v60
                                    field_48: *((&v29 as &char + 8) as &i128)
                                    field_64: *((&v31 as &char + 8) as &i128)
                                    field_80: *((&v33 as &char + 8) as &i128)
                                    field_96: *((&v34 as &char + 8) as &i128)
                                    field_112: *((&v35 as &char + 8) as &i128)
                                };
                            }
                        }
                    }
                }
                v61 = *((&v1 as &char + 1) as &i128);
                v62 = *((&v1 as &char + 17) as &i128);
                v63 = *((&v1 as &char + 33) as &i128);
                return struct104 {
                    field_0: 18
                    field_8: v49
                    field_9: <UNKNOWN>
                    field_25: <UNKNOWN>
                    field_41: <UNKNOWN>
                    field_57: <UNKNOWN>
                    field_72: v10
                    field_80: <UNKNOWN>
                    field_81: <UNKNOWN>
                    field_84: <UNKNOWN>
                };
            }
        }
    }
    v64 = *((&v0 as &char + 1) as &i128);
    v65 = *((&v0 as &char + 17) as &i128);
    v66 = *((&v0 as &char + 33) as &i128);
    return struct104 {
        field_0: 18
        field_8: v41
        field_9: <UNKNOWN>
        field_25: <UNKNOWN>
        field_41: <UNKNOWN>
        field_57: <UNKNOWN>
        field_72: v10
        field_80: <UNKNOWN>
        field_81: <UNKNOWN>
        field_84: <UNKNOWN>
    };
}
