long long uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h832b58eb491f4e5e(unsigned long long a0, unsigned long long a1[11])
{
    unsigned long long v1;  // rax
    void* v2;  // rax

    v1 = a1[2];
    v2 = v1 - a1[10];
    if (a1[10] > v1)
        v2 = 0;
    return alloc::vec::Vec$LT$T$C$A$GT$::drain::he134e104448a4c72(a0, a1, v2);
}
