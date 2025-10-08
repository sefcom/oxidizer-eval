fn uu_runcon::get_plain_context(a1: i64, a2: i64) -> : struct72 {
    let a0: i64;  // rdi
    let v0: struct28;  // [bp-0x60]
    let v1: struct12;  // [bp-0x60]
    let v2: u32;  // [bp-0x5c]
    let v3: u64;  // [bp-0x58]
    let v4: i8;  // [bp-0x40]
    let v5: i8;  // [bp-0x38]
    let v6: u64;  // [bp-0x30]
    let v7: i8;  // [bp-0x28]
    let v9: iNone;  // xmm0
    let v10: iNone;  // xmm1
    let v11: iNone;  // xmm0

    if !uucore::features::selinux::is_selinux_enabled() {
        return struct4 {
            field_0: 11
        };
    }
    v0 = uu_runcon::os_str_to_c_string(a1, a2);
    if v0.field_0 != 17 {
        v11 = *(&v0.field_8 as &i128);
        return struct72 {
            field_0: v0.field_0
            field_4: v2
            field_8: v11
            field_24: *(&v3 as &i128)
            field_40: *(&v5 as &i128)
            field_56: *(&v7 as &i128)
        };
    }
    v1 = selinux::OpaqueSecurityContext::from_c_str(v3);
    if v1.field_0 != 10 {
        v9 = *(&v1.field_0 as &i128);
        v10 = *(&v0.field_16 as &i128);
        return struct72 {
            field_0: v9
            field_16: v10
            field_32: *(&v4 as &i128)
            field_48: v6
            field_56: &g_41b289
            field_64: 20
        };
    }
    return struct16 {
        field_0: 17
        padding_4: <UNKNOWN>
        field_8: v3
    };
}
