fn uu_paste::DelimiterState::remove_trailing_delimiter(a0: u32, a1: u32, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    if !a0 {
        return v3;
    } else if !a1 {
        return v3;
    } else {
        v2 = a2->field_10;
        v3 = v2 - a1;
        if v2 >= a1 {
            return alloc::vec::Vec<T,A>::truncate(a2, v3);
        } else if v2 {
            v0 = v3;
            core::panicking::panic("assertion failed: output_len == 0", "src/uu/paste/src/paste.rs"); /* do not return */
        } else {
            return v3;
        }
    }
}
