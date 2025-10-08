fn uu_csplit::InputSplitter<I>::shrink_buffer_to_size(a1: i64) -> : struct40 {
    let a0: u64;  // rdi
    let v1: void*;  // rax

    v1 = *((a1 + 16) as &i64) - *((a1 + 48) as &i64);
    alloc::vec::Vec<T,A>::drain(a0, a1, v1);
    return;
}
