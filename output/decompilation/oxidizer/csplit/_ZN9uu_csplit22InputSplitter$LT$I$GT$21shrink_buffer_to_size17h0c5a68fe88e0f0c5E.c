fn uu_csplit::InputSplitter<I>::shrink_buffer_to_size(a0: &struct40, a1: &u64) -> u64 {
    return alloc::vec::Vec<T,A>::drain(a0, a1, (a1[6] <= a1[2] ? a1[2] - a1[6] : 0));
}
