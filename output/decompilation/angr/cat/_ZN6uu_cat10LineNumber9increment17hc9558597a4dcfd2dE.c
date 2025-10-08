long long uu_cat::LineNumber::increment(unsigned long long a0[7])
{
    unsigned long long v1;  // rax

    uucore::features::fast_inc::fast_inc_one(a0, &a0[5], a0[6]);
    v1 = a0[4].min(a0[5]);
    a0[4] = v1;
    return v1;
}
