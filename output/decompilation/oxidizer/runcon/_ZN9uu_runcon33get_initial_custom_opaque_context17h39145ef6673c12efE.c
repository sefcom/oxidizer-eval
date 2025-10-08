fn uu_runcon::get_initial_custom_opaque_context(a0: i64, a1: i64, a2: i64, a3: i64) -> double {
    let v0: u64;  // [bp-0xd8]
    let v1: iNone;  // [bp-0xd0], Other Possible Types: alloc::ffi::c_str::CString
    let v2: iNone;  // [bp-0xc8], Other Possible Types: struct52, u64
    let v3: core::fmt::rt::Argument;  // [bp-0xb8], Other Possible Types: u32
    let v4: struct28;  // [bp-0xb0], Other Possible Types: u8
    let v5: struct12;  // [bp-0xb0], Other Possible Types: struct28
    let v6: i8;  // [bp-0xac], Other Possible Types: u32
    let v7: struct32;  // [bp-0xa8], Other Possible Types: char, u64
    let v8: i8;  // [bp-0x9c]
    let v9: u32;  // [bp-0x8c]
    let v10: i8;  // [bp-0x88]
    let v11: u64;  // [bp-0x80]
    let v12: struct26;  // [bp-0x78]
    let v13: struct32;  // [bp-0x68]
    let v14: iNone;  // [bp-0x48]
    let v15: iNone;  // [bp-0x38]
    let v17: i64;  // rdi
    let v18: iNone;  // xmm0
    let v19: u256;  // ymm0
    let v20: u256;  // ymm0
    let v21: u256;  // ymm0
    let v22: u64;  // rdx
    let v23: iNone;  // xmm0
    let v24: u256;  // ymm0
    let v25: iNone;  // xmm1
    let v26: iNone;  // xmm0
    let v27: struct12;  // xmm0
    let v28: iNone;  // xmm0
    let v29: u256;  // ymm0
    let v30: iNone;  // xmm0

    v17 = &v4;
    if a1 {
        uu_runcon::get_transition_context(v17, a2, a3);
        if v5 != 17 {
            v3 = v9;
            v2 = *(&v8 as &i128);
            v0 = *(&v6 as &i128);
            v18 = v0;
            return struct80 {
                field_0: v5
                field_4: <UNKNOWN>
                field_20: <UNKNOWN>
                field_36: *(&v10 as &i128)
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        }
    } else {
        selinux::SecurityContext::current(v17, 0);
        if v5 != 10 {
            v3 = v9;
            v2 = v7.field_0;
            v0 = *(&v6 as &i128);
            v30 = v0;
            return struct80 {
                field_0: v5
                field_4: <UNKNOWN>
                field_20: <UNKNOWN>
                field_36: *(&v10 as &i128)
                field_40: <UNKNOWN>
                field_56: 47
                field_64: <UNKNOWN>
            };
        }
    }
    v20 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v7 as &i128);
    v13 = v7;
    v4 = selinux::SecurityContext::to_c_string(&v13);
    if v4.field_0 != 10 {
        v26 = *(&v4.field_16 as &i128);
        v15 = *(&v4.field_16 as &i128);
        v27 = v7.field_0;
        v28 = v15;
        v29 = ((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
        v14 = v28;
        return struct72 {
            field_0: v4.field_0
            field_4: v6
            field_8: v7
            field_16: v14
            field_32: v27
            field_48: v11
            field_56: &g_41b34f
            field_64: 24
        };
    }
    v21 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v4.field_16 as &i128);
    v14 = *(&v4.field_16 as &i128);
    if v7 == 2 {
        v1 = <alloc::ffi::c_str::CString as core::default::Default>::default() as u64;
        v2 = v22;
        v0 = 1;
    } else {
        v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 as u256;
        v1 = v14;
        v0 = v7;
    }
    v5 = selinux::OpaqueSecurityContext::from_c_str(v1);
    if v5.field_0 != 10 {
        v23 = *(&v5.field_0 as &i128);
        v24 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256;
        v25 = *(&v4.field_16 as &i128);
        return struct72 {
            field_0: v23
            field_16: v25
            field_32: v7.field_0
            field_48: v11
            field_56: &g_41b289
            field_64: 20
        };
    }
    return struct16 {
        field_0: 17
        padding_4: <UNKNOWN>
        field_8: v7
    };
}
