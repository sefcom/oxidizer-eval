long long uu_env::split_iterator::SplitIterator::push_word_to_words(void* a0)
{
    int v0;  // [bp-0x18]
    void* v1;  // [bp-0x8]

    v1 = (long long)a0[16];
    *((int128_t *)&v0) = *((int128_t *)a0);
    *((unsigned long long *)a0) = 0;
    *((unsigned long long *)&a0[8]) = 1;
    *((unsigned long long *)&a0[16]) = 0;
    return a0 + 64.push(&v0);
}
