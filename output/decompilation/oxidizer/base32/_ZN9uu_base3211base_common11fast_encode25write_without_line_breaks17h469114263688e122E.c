fn uu_base32::base_common::fast_encode::write_without_line_breaks(a0: i64, a1: u64, a2: i64, a3: u8, a4: u8) -> long long {
    let v1: u64;  // rax

    v1 = a2(a1, alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a0)) as i64;
    if v1 {
        return v1;
    }
    if a3 {
        return 0;
    }
    alloc::collections::vec_deque::VecDeque<T,A>::truncate(a0);
    *((a0 + 16) as &i64) = 0;
    return 0;
}
