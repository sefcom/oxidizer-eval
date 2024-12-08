long long uu_csplit::patterns::get_patterns::hce8e97da600d1c95(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [sp-0x68]
    unsigned long long v1;  // [sp-0x58]
    int v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    int v11;  // xmm0

    uu_csplit::patterns::extract_patterns::h11ffd47402b27e5d(&v4, a1, a2, a3, a4, a5);
    v9 = *((long long *)&v4);
    *((int128_t *)&v2) = *((int128_t *)&v5);
    v3 = *((long long *)&v6);
    if (v9 != 12)
    {
        v10 = *((long long *)&v7);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
        *((void*)&(&a0->field_0)[1]) = v2;
        a0->field_0 = v9;
        *((unsigned long long *)&a0->field_10) = v10;
        return a0;
    }
    v0 = v2;
    v1 = v3;
    uu_csplit::patterns::validate_line_numbers::h1f8c793f95cfe74c(&v4, (long long)(&v0)[8], v3);
    if (*((int *)&v4) == 12)
    {
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 12;
        return a0;
    }
    *((long long *)&a0->field_10) = *((long long *)&v7);
    v11 = *((int128_t *)&v4);
    a0->field_8 = *((int128_t *)&(&v5)[8]);
    *((void*)&a0->field_0) = v11;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h5a2ac99eeb5ee904(&v0);
    return a0;
}
