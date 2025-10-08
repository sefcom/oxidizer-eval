fn uu_runcon::set_next_exec_context(a0: i64, a1: i64) -> long long {
    let v0: struct26;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: Result<struct24, struct16>;  // [bp-0x68]
    let v3: Option<struct24>;  // [bp-0x68]
    let v4: struct52;  // [bp-0x68]
    let v5: struct32;  // [bp-0x64]
    let v6: u64;  // [bp-0x60]
    let v7: core::fmt::Arguments;  // [bp-0x58]
    let v8: i8;  // [bp-0x48]
    let v9: i8;  // [bp-0x38], Other Possible Types: u128
    let v10: i8;  // [bp-0x28]
    let v12: u8;  // al
    let v13: iNone;  // xmm0
    let v14: iNone;  // xmm1
    let v15: iNone;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2
    let v18: iNone;  // xmm0

    v2 = selinux::OpaqueSecurityContext::to_c_string(a1);
    match v2 {
        Ok(_) => {
            v18 = *((&v2 as &char + 8) as &i128);
            return struct72 {
                field_0: v2 as i32
                field_4: v5
                field_8: v18
                field_24: *(&v4.field_0 as &i128)
                field_40: *(&v4.field_0 as &i128)
                field_56: &g_41b289
                field_64: 20
            };
        },
        Err(_) => {
            v0 = struct26 {
                field_0: 1
                field_8: v7 - 1
                field_16: v6
                field_24: 0
            };
            v12 = selinux::SecurityContext::check(&v0);
            if v12 != 2 && (v12 & 1) {
                v3 = selinux::SecurityContext::set_for_next_exec(&v0);
                match v3 {
                    Some(_) => {
                        v13 = v3 as i128;
                        v14 = *((&v3 as &char + 16) as &i128);
                        return struct72 {
                            field_0: v13
                            field_16: v14
                            field_32: *(&v8 as &i128)
                            field_48: *(&v9 as &i64)
                            field_56: &g_41b29d
                            field_64: 28
                        };
                    },
                    None => {
                        return struct4 {
                            field_0: 17
                        };
                    },
                }
            }
            v4 = uu_runcon::errors::Error::from_io1("Checking security context", v6, v1, 85899345923);
            v15 = *(&v4.field_0 as &i128);
            v16 = *((&v4.field_8 as &char + 8) as &i128);
            v17 = *(&v4.field_32 as &i128);
            return struct72 {
                field_0: v15
                field_16: v16
                field_32: v17
                field_48: v9
                field_64: *(&v10 as &i64)
            };
        },
    }
}
