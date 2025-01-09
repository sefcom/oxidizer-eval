fn uu_csplit::InputSplitter<I>::shrink_buffer_to_size(a0: &struct40, a1: &u64) -> u64 {
    let v1: u64;  // rax
    let v2: void*;  // rax

    v1 = a1[2];
    v2 = v1 - a1[6];
    if a1[6] > v1 {
        v2 = 0;
    }
    return alloc::vec::Vec<T,A>::drain(a0, a1, v2);
}
