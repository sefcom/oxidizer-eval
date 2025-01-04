fn uu_touch::error::to_uioerror(a0: i64, a1: i64) -> u64 {
    let v0: struct9;  // [sp-0x20]
    let v1: i64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v4: i64;  // r14
    let v5: i64;  // rbx

    v2 = v4;
    v1 = v5;
    v0 = std::io::error::repr_bitpacked::decode_repr(a1);
    goto *((4676980 + (stack_base)[32] as i8 * 4) as &i32) + 4676980;
}
