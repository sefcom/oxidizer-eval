fn uu_dd::parseargs::parse_bytes_only(a0: &Option<struct8>, a1: &u8, a2: u32, a3: &u8) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0x28]

    v0 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a1, a3);
    match v0 {
        Ok(_) => {
            *((a0 + 8) as &i64) = v0 as i64;
        },
        Err(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a1, a2);
        },
    }
    return struct8 {
        field_0: v2
    };
}
