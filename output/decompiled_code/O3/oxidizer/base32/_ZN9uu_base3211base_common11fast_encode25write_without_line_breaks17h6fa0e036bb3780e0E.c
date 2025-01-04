fn uu_base32::base_common::fast_encode::write_without_line_breaks(a0: &u64, a1: i64, a2: &&struct_0, a3: u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: void*;  // rax

    v0 = v2;
    alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a0);
    v3 = a2();
    if v3 {
        return v3;
    }
    if !a3 {
        alloc::collections::vec_deque::VecDeque<T,A>::truncate(a0, 0);
        a0[2] = 0;
        return 0;
    }
    goto a2;
}
