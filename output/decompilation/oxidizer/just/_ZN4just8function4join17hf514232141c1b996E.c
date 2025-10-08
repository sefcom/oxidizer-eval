fn just::function::join(a0: i64, a1: i64, a2: void*, a3: &u8, a4: u64, a5: u64, a6: u64, a7: u64) -> long long {
    let v0: struct24;  // [bp-0x50]
    let v1: struct8;  // [bp-0x50]
    let v2: struct24;  // [bp-0x38]
    let v3: struct80;  // r12
    let v4: struct80;  // r12
    let v5: struct40;  // r12

    v0 = camino::Utf8Path::join(a2, a3, a4, a5);
    if a7 {
        do {
            v4 = v3;
            v1 = camino::Utf8PathBuf::push(a6);
            a6 += 24;
            v5 = v4 - 24;
            v3 = v5;
        } while (v4 != 24);
    }
    v2 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
    return struct32 {
        field_0: 0
        field_8: v2.field_0
        field_24: v2.field_16
    };
}
