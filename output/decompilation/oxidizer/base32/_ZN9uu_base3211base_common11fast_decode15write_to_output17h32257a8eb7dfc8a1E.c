fn uu_base32::base_common::fast_decode::write_to_output(a0: i64, a1: i64, a2: i64) -> void {
    if !*((a2 + 56) as &i64)(a1, *((a0 + 8) as &i64), *((a0 + 16) as &i64), a1) as i64 {
        *((a0 + 16) as &i64) = 0;
    }
    return;
}
