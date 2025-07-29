long long uu_fmt::linebreak::build_best_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long *v5;  // rax
    void* v6;  // rax

    v0 = a3;
    v1 = a3 + a4 * 8;
    v2 = a1;
    v3 = a2;
    v5 = v0.reduce();
    if (v5)
    {
        uu_fmt::linebreak::build_best_path::{{closure}}(&v0, a1, a2, *(v5));
        v6 = v0;
        *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
    }
    else
    {
        *((unsigned long long *)&a0->field_8) = 8;
        *((unsigned long long *)((char *)&a0[1].field_0 + 7)) = 0;
        v6 = 0;
    }
    a0->field_0 = v6;
    return v6;
}
