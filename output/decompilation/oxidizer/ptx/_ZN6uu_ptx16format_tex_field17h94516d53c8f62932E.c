fn uu_ptx::format_tex_field(a0: i64, a1: u64, a2: u64) -> void {
    let v0: u8;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u32;  // [bp-0x28]
    let v3: struct24;  // [bp-0x20]

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2 + a1);
    v3 = alloc::str::join_generic_copy(v1, v2);
    return struct24 {
        field_0: v3.field_0
        field_16: v3.field_16
    };
}
