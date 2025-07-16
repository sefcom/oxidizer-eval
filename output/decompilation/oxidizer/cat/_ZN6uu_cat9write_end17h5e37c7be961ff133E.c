fn uu_cat::write_end(a0: i64, a1: i64, a2: i64, a3: i8, a4: i8) -> long long {
    let v1: &u8;  // rcx
    let v2: u64;  // r8

    if a4 {
        return uu_cat::write_nonprint_to_end(a1, a2, a0, v1, v2);
    }
    return uu_cat::write_tab_to_end(a1, a2, a0);
}
