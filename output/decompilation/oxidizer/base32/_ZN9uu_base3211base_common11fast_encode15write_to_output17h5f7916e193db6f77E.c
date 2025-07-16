fn uu_base32::base_common::fast_encode::write_to_output(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: struct8;  // rax
    let v4: u32;  // r9d
    let v5: struct8;  // rax

    v0 = v2;
    if *(a0 as &i64) == 0x8000000000000000 {
        v3 = uu_base32::base_common::fast_encode::write_without_line_breaks(a2, *((a3 + 56) as &i64), a4, a4);
        if !v3 {
            return 0;
        }
        return v3;
    } else {
        v5 = uu_base32::base_common::fast_encode::write_with_line_breaks(a1, a2, *((a3 + 56) as &i64), a4, v4);
        if !v5 {
            return 0;
        }
        return v5;
    }
}
