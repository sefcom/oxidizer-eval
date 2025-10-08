fn just::parser::Parser::parse_alias(a1: i64, a2: &struct32) -> : struct120 {
    let a0: void*;  // rdi
    let v0: struct82;  // [bp-0x158]
    let v1: struct81;  // [bp-0x158]
    let v2: struct81;  // [bp-0x158]
    let v3: struct81;  // [bp-0x158]
    let v4: struct80;  // [bp-0x158]
    let v5: struct80;  // [bp-0x158]
    let v6: u128;  // [bp-0x158]
    let v7: u64;  // [bp-0x148]
    let v8: struct24;  // [bp-0x140]
    let v9: u128;  // [bp-0x130]
    let v10: u128;  // [bp-0x120]
    let v11: struct24;  // [bp-0x118]
    let v12: u32;  // [bp-0x114]
    let v13: u128;  // [bp-0x110]
    let v14: u32;  // [bp-0x10c]
    let v15: alloc::string::String;  // [bp-0x108]
    let v16: alloc::string::String;  // [bp-0x100]
    let v17: u128;  // [bp-0xf8]
    let v18: u64;  // [bp-0xe8]
    let v19: u128;  // [bp-0xd8]
    let v20: u32;  // [bp-0xd8]
    let v21: u32;  // [bp-0xd5]
    let v22: struct80;  // [bp-0xc8]
    let v23: struct24;  // [bp-0xb8]
    let v24: struct80;  // [bp-0xa8]
    let v25: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x98]
    let v26: iNone;  // [bp-0x88]
    let v27: u64;  // [bp-0x78]
    let v28: struct24;  // [bp-0x68]
    let v29: Result<struct40, struct16>;  // [bp-0x58]
    let v30: iNone;  // [bp-0x48]
    let v31: iNone;  // [bp-0x38]
    let v32: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x28]
    let v34: struct65;  // al
    let v35: struct72;  // xmm1
    let v36: struct24;  // xmm2
    let v37: iNone;  // xmm3
    let v39: iNone;  // xmm0
    let v40: struct73;  // xmm0
    let v41: iNone;  // xmm1
    let v42: core::fmt::rt::Argument;  // xmm2
    let v43: struct80;  // ecx
    let v44: struct72;  // rcx
    let v45: iNone;  // xmm0
    let v46: u64;  // rdx
    let v47: iNone;  // xmm1
    let v48: iNone;  // xmm2
    let v49: u32;  // edi
    let v50: u8;  // al
    let v51: struct73;  // xmm0
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm1
    let v54: struct56;  // xmm2

    v0 = just::parser::Parser::presume_keyword(a1, 0);
    if &v5 as u8 != "%" {
        *(&a0[72] as &i128) = *(&v0.field_64 as &i128);
        v52 = v0.field_0;
        v53 = v0.field_16;
        v54 = v0.field_32;
        *(&a0[56] as &u128) = v0.field_48;
        *(&a0[40] as &struct56) = v54;
        a0[24] = v53;
        a0[8] = v52;
    }
    v4 = just::parser::Parser::parse_name(a1);
    v34 = *((&v4.field_64 as &char + 8) as &i8);
    v35 = v4.field_16;
    v36 = v4.field_32;
    v37 = v4.field_48;
    v19 = v4.field_0;
    v22 = v35;
    v23 = v36;
    v24 = v37;
    v25 = v4.field_64 as i64;
    if v34 == 37 {
        v28 = v19;
        v29 = v22;
        v30 = v23;
        v31 = v24;
        v32 = v25;
        v1 = just::parser::Parser::presume_any(a1);
        if v1.field_72 != 37 {
            v44 = v1.field_0 as i64;
            v45 = *((&v1.field_0 as &char + 8) as &i128);
            v46 = *((&v1.field_48 as &char + 8) as &i64);
            v20 = *((&v1.field_64 as &char + 1) as &i32);
            v21 = v12;
            v47 = *((&v1.field_16 as &char + 8) as &i128);
            v48 = *((&v1.field_32 as &char + 8) as &i128);
            v49 = v20;
            return struct96 {
                field_0: 0x8000000000000000
                field_8: v44
                field_16: v45
                field_32: v47
                field_48: v48
                field_64: v46
                field_72: v11
                field_73: v21
                field_76: v50
                field_80: v14
                field_81: <UNKNOWN>
                field_84: <UNKNOWN>
            };
        }
        v2 = just::parser::Parser::parse_namepath(a1);
        v34 = v2.field_72;
        if v34 == 37 {
            v26 = v2.field_0;
            v27 = v7;
            v3 = just::parser::Parser::expect_eol(a1);
            if &v5 as u8 == "%" {
                v5 = just::attribute_set::AttributeSet::ensure_valid_attributes(a2, "Alias", &v28, &g_4715f0, 0x1);
                if &v5 as u8 == "%" {
                    v7 = v27;
                    *(&v6 as void*) = v26;
                    v17 = *(a2 as &i128);
                    v18 = *((a2 + 16) as &i64);
                    v8 = v28;
                    *(&v13 as void*) = v31;
                    v16 = v32;
                    *(&v10 as void*) = v30;
                    *(&v9 as &Result<struct40, struct16>) = v29;
                    v39 = v6;
                    return struct120 {
                        field_0: v39
                        field_16: v7
                        field_24: v8.field_0
                        field_32: v8.field_8
                        field_48: *((&v9 as &char + 8) as &i128)
                        field_64: *((&v10 as &char + 8) as &i128)
                        field_80: v15
                        field_88: v16
                        field_96: v17
                        field_112: v18
                    };
                }
            }
            v40 = v3.field_0;
            v41 = v3.field_16;
            v42 = v3.field_32;
            return struct88 {
                field_0: 0x8000000000000000
                field_8: v40
                field_24: v41
                field_40: v42
                field_56: v3.field_48
                field_72: *(&v3.field_64 as &i128)
            };
        } else {
            v25 = v2.field_64;
            v24 = v2.field_48;
            v23 = v2.field_32;
            v22 = v2.field_16;
            v19 = v2.field_0;
            *(&a0[84] as &u32) = v14;
            v43 = *(&(&v2.field_72)[1] as &i32);
        }
    } else {
        v43 = *((&v4.field_64 as &char + 9) as &i32);
        *(&a0[84] as &u32) = v14;
    }
    *(&a0[81] as &struct80) = v43;
    *(&a0[72] as &alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>) = v25;
    v51 = v19;
    *(&a0[56] as &struct80) = v24;
    *(&a0[40] as &struct24) = v23;
    *(&a0[24] as &struct80) = v22;
    *(&a0[8] as &struct73) = v51;
}
