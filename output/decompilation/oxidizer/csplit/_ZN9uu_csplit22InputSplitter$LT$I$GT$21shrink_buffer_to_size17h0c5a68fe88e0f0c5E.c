fn uu_csplit::InputSplitter<I>::shrink_buffer_to_size(a1: i64) -> : struct40 {
    let a0: i64;  // rsi
    let v1: void*;  // rax
    let v2: u64;  // rdi

    v1 = *((a0 + 16) as &i64) - *((a0 + 48) as &i64);
    alloc::vec::Vec<T,A>::drain(v2, a0, v1);
    return;
}
