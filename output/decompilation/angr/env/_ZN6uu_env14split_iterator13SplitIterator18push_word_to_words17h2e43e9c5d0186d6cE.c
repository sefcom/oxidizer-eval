long long uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(unsigned long long a0[3])
{
    int v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x8]

    v1 = a0[2];
    *((int128_t *)&v0) = *((int128_t *)&a0[0]);
    a0[0] = 0;
    a0[1] = 1;
    a0[2] = 0;
    return alloc::vec::Vec$LT$T$C$A$GT$::push::hb06191b2410fa606(&a0[2 + 2], &v0);
}
