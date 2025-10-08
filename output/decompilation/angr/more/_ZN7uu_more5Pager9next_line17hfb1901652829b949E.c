long long uu_more::Pager::next_line(unsigned long long a0[15])
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx

    v1 = a0[10];
    v2 = a0[14] - 1;
    if (1 > a0[14])
        v2 = 0;
    if (v1 < v2)
    {
        v1 += 1;
        a0[10] = v1;
    }
    return v1;
}
