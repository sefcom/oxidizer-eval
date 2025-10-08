fn just::parser::Parser::parse_expression(a1: i64) -> : struct128 {
    let a0: u64;  // rdi
    let v0: struct128;  // [bp-0x2b8], Other Possible Types: struct80
    let v1: struct82;  // [bp-0x2b8], Other Possible Types: u64
    let v2: core::fmt::Arguments;  // [bp-0x2b8]
    let v3: struct128;  // [bp-0x2b8]
    let v4: core::fmt::rt::Argument;  // [bp-0x2a8]
    let v5: struct16;  // [bp-0x298]
    let v6: u128;  // [bp-0x288]
    let v7: u128;  // [bp-0x278]
    let v8: struct80;  // [bp-0x270], Other Possible Types: u8
    let v9: struct104;  // [bp-0x26c], Other Possible Types: u32
    let v10: u128;  // [bp-0x268]
    let v11: struct24;  // [bp-0x258]
    let v12: u128;  // [bp-0x248]
    let v13: u64;  // [bp-0x240]
    let v14: iNone;  // [bp-0x238], Other Possible Types: struct32
    let v15: iNone;  // [bp-0x228], Other Possible Types: struct17
    let v16: iNone;  // [bp-0x218], Other Possible Types: struct16
    let v17: iNone;  // [bp-0x208]
    let v18: iNone;  // [bp-0x1f8], Other Possible Types: struct81
    let v19: Option<struct1>;  // [bp-0x1e0]
    let v20: core::fmt::rt::Argument;  // [bp-0x1d8], Other Possible Types: u128
    let v21: u128;  // [bp-0x1d0]
    let v22: u128;  // [bp-0x1c8]
    let v23: u128;  // [bp-0x1c0]
    let v24: u128;  // [bp-0x1b8]
    let v25: u128;  // [bp-0x1b0]
    let v26: u128;  // [bp-0x1a8]
    let v27: u128;  // [bp-0x1a0]
    let v28: u64;  // [bp-0x198]
    let v29: u128;  // [bp-0x190]
    let v30: struct24;  // [bp-0x180]
    let v31: u128;  // [bp-0x170]
    let v32: struct81;  // [bp-0x160]
    let v33: iNone;  // [bp-0x158]
    let v34: iNone;  // [bp-0x148]
    let v35: iNone;  // [bp-0x138]
    let v36: iNone;  // [bp-0x128]
    let v37: struct24;  // [bp-0x118]
    let v38: iNone;  // [bp-0x108]
    let v39: struct81;  // [bp-0xf8]
    let v40: u128;  // [bp-0xe8]
    let v41: iNone;  // [bp-0xd8]
    let v42: iNone;  // [bp-0xc8]
    let v43: iNone;  // [bp-0xb8]
    let v44: u64;  // [bp-0xa8]
    let v45: struct128;  // [bp-0xa0]
    let v47: struct16;  // xmm1
    let v48: struct40;  // xmm2
    let v49: struct32;  // xmm3
    let v50: struct80;  // ecx
    let v51: struct80;  // xmm0
    let v52: struct16;  // xmm1
    let v53: struct89;  // xmm2
    let v54: core::fmt::rt::Argument;  // r12
    let v55: struct24;  // xmm0
    let v56: struct24;  // al
    let v57: core::fmt::Arguments;  // xmm0
    let v58: core::fmt::rt::Argument;  // xmm1
    let v59: struct16;  // xmm2
    let v60: core::option::Option<&str>;  // r15
    let v61: struct4;  // rax
    let v62: Result<struct4, struct8>;  // xmm0
    let v63: struct24;  // xmm1
    let v64: alloc::string::String;  // xmm2

    if *((a1 + 96) as &i64) == 0x100 {
        v1 = just::parser::Parser::next(a1);
        v47 = v0.field_16;
        v48 = v0.field_32;
        v49 = v0.field_48;
        v20 = v0.field_0;
        *(&v22 as &struct16) = v47;
        *(&v24 as &struct40) = v48;
        *(&v26 as &struct32) = v49;
        v28 = v0.field_64;
        if v8 != 37 {
            v50 = *((&v0.field_64 as &char + 9) as &i32);
            v51 = v20;
            v52 = v22;
            v53 = v24;
            return struct96 {
                field_0: 18
                field_8: v51
                field_24: v52
                field_40: v53
                field_56: v26
                field_72: v28
                field_80: v8
                field_81: v9
                field_84: <UNKNOWN>
            };
        }
        v40 = v20;
        v41 = v22;
        v42 = v24;
        v43 = v26;
        v44 = v28;
        v1 = 9223372036854775855;
        just::compile_error::CompileError::new(a0 + 8, &v40, &v1);
        return struct8 {
            field_0: 18
        };
    } else {
        *((a1 + 96) as &i64) = *((a1 + 96) as &i64) + 1;
        v0 = just::parser::Parser::parse_disjunct(a1);
        v54 = v0.field_0;
        v14 = *(&v0.field_8 as &i128);
        v15 = v0.field_24;
        v16 = v0.field_40;
        v17 = v0.field_56;
        v18 = v0.field_72;
        if v54 == 18 {
            return struct88 {
                field_0: 18
                field_8: v14
                field_24: v15
                field_40: v16
                field_56: v17
                field_72: v18
            };
        }
        v32 = v13;
        v55 = v0.field_88;
        v31 = v0.field_104;
        v30 = v55;
        *(&v21 as void*) = v14;
        *(&v23 as void*) = v15;
        *(&v25 as void*) = v16;
        *(&v27 as void*) = v17;
        *(&v29 as &struct81) = v18;
        v20 = v54;
        v2 as u704 = just::parser::Parser::accepted(a1, 6);
        v56 = v1.field_0 as i8;
        if v8 != 37 {
            v62 = *((&v1.field_0 as &char + 1) as &i128);
            v63 = *((&v1.field_16 as &char + 1) as &i128);
            v64 = *((&v1.field_32 as &char + 1) as &i128);
            return struct104 {
                field_0: 18
                field_8: v56
                field_9: <UNKNOWN>
                field_25: <UNKNOWN>
                field_41: <UNKNOWN>
                field_57: <UNKNOWN>
                field_72: v8
                field_80: <UNKNOWN>
                field_81: <UNKNOWN>
                field_84: <UNKNOWN>
            };
        }
        if (v56 & 1) {
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1 + 104, 1);
            v12 = *((&v31 as &char + 8) as &i128);
            v11.field_0 = *((&v30.field_0 as &char + 8) as &i128);
            v10 = *((&v29 as &char + 8) as &i128);
            v7 = *((&v27 as &char + 8) as &i128);
            v57 = v20.ty;
            v58 = *((&v21 as &char + 8) as &i128);
            v59 = *((&v23 as &char + 8) as &i128);
            v6 = *((&v25 as &char + 8) as &i128);
            v5 = v59;
            v4 = v58;
            v2 = v57;
            v60 = alloc::boxed::Box<T>::new(&v2 as u704) as u64;
            v19 = v60;
            v3 = just::parser::Parser::parse_expression(a1);
            v14 = *(&v3.field_8 as &i128);
            v15 = v3.field_24;
            v16 = v3.field_40;
            v17 = v3.field_56;
            v18 = v3.field_72;
            if v3.field_0 == 18 {
                return struct88 {
                    field_0: 18
                    field_8: v14
                    field_24: v15
                    field_40: v16
                    field_56: v17
                    field_72: v18
                };
            }
            v45 = struct128 {
                field_0: v3.field_0
                field_8: v14
                field_24: v15
                field_40: v16
                field_56: v17
                field_72: v18
                field_88: v3.field_88
                field_104: v3.field_104
                field_120: v13
            };
            v61 = alloc::boxed::Box<T>::new(&v45) as u64;
        } else {
            v60 = v21 as i64;
            v61 = *((&v21 as &char + 8) as &i64);
            v33 = v23;
            v34 = v25;
            v35 = v27;
            v36 = v29;
            v37 = v30.field_0;
            v38 = v31;
            v39 = v32;
        }
        *((a1 + 96) as &i64) = *((a1 + 96) as &i64) - 1;
        return struct128 {
            field_0: v54
            field_8: v60
            field_16: v61
            field_24: v33
            field_40: v34
            field_56: v35
            field_72: v36
            field_88: v37
            field_104: v38
            field_120: v39
        };
    }
}
