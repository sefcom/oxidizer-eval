long long uu_env::split_iterator::SplitIterator::push_word_to_words(struct_0 *a0)
{
    int v0;  // [bp-0x18]
    void* v1;  // [bp-0x8]

    v1 = a0->field_10;
    *((int128_t *)&v0) = *((int128_t *)&a0->field_0);
    *((unsigned long long *)&a0->field_0) = 0;
    *((unsigned long long *)&a0->padding_1[7]) = 1;
    a0->field_10 = 0;
    return a0[2].field_10.push(&v0);
}
