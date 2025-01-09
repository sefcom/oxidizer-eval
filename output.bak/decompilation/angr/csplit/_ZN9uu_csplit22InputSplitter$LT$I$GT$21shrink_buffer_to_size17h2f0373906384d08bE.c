long long uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2f0373906384d08b(unsigned long long a0, unsigned long long a1[11])
{
    unsigned long long v1;  // rax
    void* v2;  // rax

    v1 = a1[2];
    v2 = v1 - a1[10];
    if (a1[10] > v1)
        v2 = 0;
    return alloc::vec::Vec$LT$T$C$A$GT$::drain::h58787e57b634cf4d(a0, a1, v2);
}
