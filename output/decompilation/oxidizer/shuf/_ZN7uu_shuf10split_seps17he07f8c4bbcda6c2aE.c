fn uu_shuf::split_seps(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: struct25;  // [bp-0x28]
    let v5: u64;  // rax

    v3 = struct25 {
        field_0: a1
        field_8: a2
        field_16: &vvar_20{reg 24}
        field_24: 0
    };
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    if v2 {
        v5 = v2 - 1;
        if !*((v1 + v5 * 16 + 8) as &i64) {
            v2 = v5;
        }
    }
    return struct24 {
        field_0: *(&v0 as &i128)
        field_16: v2
    };
}
