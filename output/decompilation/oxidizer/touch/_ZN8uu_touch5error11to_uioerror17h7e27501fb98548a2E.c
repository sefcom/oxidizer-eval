fn uu_touch::error::to_uioerror(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x20]
    let v2: i64;  // rax
    let v3: u64;  // rcx

    v0 = std::io::error::repr_bitpacked::decode_repr(a1);
    if v0.field_0 {
        v2 = std::io::error::Error::kind(a1) as u32;
        v3 = 3;
    }
    return struct24 {
        field_0: 0x8000000000000000
        padding_8: <UNKNOWN>
        field_24: <UNKNOWN>
    };
}
