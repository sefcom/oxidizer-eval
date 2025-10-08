fn uu_paste::DelimiterState::remove_trailing_delimiter(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x38]
    let v1: void*;  // [bp-0x30]
    let v3: u64;  // rax

    if (!a1 | !a0) == 1 {
        return v3 & -0x100 | !a0;
    }
    v0 = *((a2 + 16) as &i64);
    if v0 >= a1 {
        *((a2 + 16) as &u64) = v0 - a1;
        return v0;
    } else if !v0 {
        return v0;
    } else {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, &g_417480, &v1, "src/uu/paste/src/paste.rs"); /* do not return */
    }
}
