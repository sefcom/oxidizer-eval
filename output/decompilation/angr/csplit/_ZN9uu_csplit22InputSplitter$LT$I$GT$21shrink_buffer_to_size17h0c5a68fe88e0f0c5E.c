long long uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h0c5a68fe88e0f0c5(unsigned long long a0, unsigned long long a1[7])
{
    unsigned long long v1;  // rax
    void* v2;  // rax

    v1 = a1[2];
    v2 = v1 - a1[6];
    if (a1[6] > v1)
        v2 = 0;
    return alloc::vec::Vec$LT$T$C$A$GT$::drain::h58787e57b634cf4d(a0, a1, v2);
}
