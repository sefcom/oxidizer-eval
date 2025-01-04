fn uu_env::split_iterator::SplitIterator::push_word_to_words(a0: &u64, a1: i64, a2: u64) -> u64 {
    let v0: u128;  // [sp-0x18]
    let v1: u64;  // [sp-0x8]

    v1 = a0[2];
    v0 = *(&a0 as &i128);
    *(a0) = 0;
    a0[1] = 1;
    a0[2] = 0;
    return alloc::vec::Vec<T,A>::push(a0 + 8, &v0, a2);
}
