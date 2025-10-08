fn uu_chcon::SELinuxSecurityContext::to_c_string(a0: i64, a1: i64) -> int {
    let v0: struct28;  // [bp-0x40]
    let v1: u64;  // [bp-0x28]
    let v2: u128;  // [bp-0x20]
    let v3: i8;  // [bp-0x10]
    let v5: u64;  // rax
    let v7: iNone;  // xmm0
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // xmm1

    if *(a1 as &i32) == 2 {
        v5 = *((a1 + 8) as &i64);
        return struct32 {
            field_0: 18
            padding_4: <UNKNOWN>
            field_8: ((!v5) as u8 as u32 * 2) as u64
            field_16: v5
            field_24: *((a1 + 16) as &i64)
        };
    }
    v0 = selinux::SecurityContext::to_c_string(a1);
    if v0.field_0 != 10 {
        v7 = *(&v0.field_0 as &i128);
        v8 = *(&v0.field_16 as &i128);
        return Ok(struct72 {
            field_0: v7
            field_16: v8
            field_32: v2
            field_48: *(&v3 as &i64)
            field_56: &g_41ba73
            field_64: 37
        });
    }
    return struct32 {
        field_0: 18
        padding_4: <UNKNOWN>
        field_8: *(&v0.field_8 as &i128)
        field_24: v1
    };
}
