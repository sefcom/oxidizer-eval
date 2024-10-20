long long _ZN6uu_seq11numberparse19is_minus_zero_float17h9c975407bde38417E.llvm.11928066015573170657(char *a0, unsigned long a1, struct_0 *a2)
{
    int v0;  // [sp-0x68]
    int v1;  // [sp-0x58]
    void* v2;  // [sp-0x48]
    struct_0 *v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    char v5;  // [sp-0x28]
    unsigned long v6;  // [sp-0x20], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x18]
    char v8;  // [sp-0x10]
    unsigned int v10;  // eax

    if (!(a1 && *(a0) == 45))
        return 0;
    *((int128_t *)&v1) = 0x10000000000000000;
    *((int128_t *)&v0) = 0x80000000000000000;
    v2 = 0;
    v5 = a2->field_18;
    v3 = a2;
    v4 = a2->field_20;
    v8 = 1;
    v6 = &v0;
    v7 = 0;
    v10 = bigdecimal::impl_cmp::check_equality_bigdecimal_ref::hab00001fd516d84f(&v3, &v6);
    if ((long long)v0)
    {
        __rust_dealloc((long long)(&v0)[8]);
        return v10;
    }
    return v10;
}
