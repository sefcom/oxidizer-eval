long long uu_more::Pager::page_down(unsigned long long a0[19])
{
    unsigned long long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned long long v3;  // rax

    v1 = a0[17] + a0[18];
    if ((char)amd64g_calculate_condition(3, 4, a0[17], a0[18], v2))
        v3 = v1;
    else
        v3 = 18446744073709551615;
    a0[17] = v3;
    return v1;
}
