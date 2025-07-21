fn uu_numfmt::format::remove_suffix(a1: i64, a2: i8, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v1: u64;  // xmm0lq

    if (a3 & 1) && !(a3 - 2 < 4 & a3 - 2 != 2) {
        return format!("missing 'i' suffix in input: '{}' (e.g Ki/Mi/Gi)", &vvar_15{reg 224});
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v1
    };
}
