fn uu_env::split_iterator::SplitIterator::push_word_to_words() -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x18]

    v0 = struct24 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i64)
    };
    *(a0 as &i64) = 0;
    *((a0 + 8) as &i64) = 1;
    *((a0 + 16) as &i64) = 0;
    return alloc::vec::Vec<T,A>::push(a0 + 64, &v0);
}
