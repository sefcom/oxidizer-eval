long long uu_cat::LineNumber::increment(unsigned long long a0[7])
{
    unsigned long long v1;  // rax

    uucore::features::fast_inc::fast_inc_one(a0, &a0[5], a0[6]);
    v1 = core::cmp::min_by(a0[4], a0[5]);
    a0[4] = v1;
    return v1;
}
