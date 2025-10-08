fn uu_base32::base_common::fast_encode::write_to_output(a0: i64, a1: u64, a2: u64, a3: void*, a4: u8, a5: u8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax

    v0 = v2;
    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        v3 = uu_base32::base_common::fast_encode::write_without_line_breaks(a1, a2, a3, a4, a5);
        if !v3 {
            return 0;
        }
        return v3;
    } else {
        v4 = uu_base32::base_common::fast_encode::write_with_line_breaks(a0, a1, a2, a3, a4);
        if !v4 {
            return 0;
        }
        return v4;
    }
}
