fn just::name::Name::from_identifier(a0: i64, a1: void*) -> long long {
    let v0: &mut [u8];  // [bp-0x30]
    let v2: u64;  // rax
    let v3: u128;  // xmm0
    let v4: iNone;  // xmm1
    let v5: iNone;  // xmm2

    if a1[64] as i8 != 24 {
        v0 = 0;
        core::panicking::assert_failed(0, a1 + 64, &g_46e88e, &v0, "src/name.rs"); /* do not return */
    }
    v2 = a1[64] as i64;
    v3 = *(a1 as &i128);
    v4 = a1[16] as i128;
    v5 = a1[32] as i128;
    return struct72 {
        field_0: v3
        field_16: v4
        field_32: v5
        field_48: a1[48] as i128
        field_64: v2
    };
}
