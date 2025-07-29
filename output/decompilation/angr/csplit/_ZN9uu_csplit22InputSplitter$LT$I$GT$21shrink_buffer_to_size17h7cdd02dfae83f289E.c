long long uu_csplit::InputSplitter<I>::shrink_buffer_to_size(unsigned long long a0, unsigned long long a1[7])
{
    void* v1;  // rax

    v1 = a1[2] - a1[6];
    if (a1[6] > a1[2])
        v1 = 0;
    return a0.drain(a1, v1);
}
