fn uu_split::platform::unix::WithEnvVarSet::new(a0: &struct56, a1: u64, a2: u64) -> int {
    let v0: Result<struct24, struct8>;  // [sp-0x58]
    let v1: struct24;  // [sp-0x38]
    let v3: iNone;  // xmm0
    let v4: iNone;  // xmm0

    v0 = std::env::var("FILE");
    std::env::set_var("FILE", a1, a2);
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("FILE");
    v3 = *(&v1.field_0 as &i128);
    v4 = v0 as i128;
    return struct56 {
        field_0: v4
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v3
        field_48: v1.field_16
    };
}
