void uu_cp::copydir::skip_last(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v3;  // rdx

    v0 = a1;
    a0.scan(v0, a2, v0.next(), v3);
    return;
}
