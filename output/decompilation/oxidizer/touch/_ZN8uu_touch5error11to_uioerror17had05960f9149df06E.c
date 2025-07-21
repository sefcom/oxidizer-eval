fn uu_touch::error::to_uioerror(a0: i64, a1: i64) -> void {
    let v0: struct32;  // [bp-0x20]
    let v2: u64;  // rbx
    let v3: u64;  // r14

    v0 = struct32 {
        field_0: std::io::error::repr_bitpacked::decode_repr(a1)
        field_16: v2
        field_24: v3
    };
}
