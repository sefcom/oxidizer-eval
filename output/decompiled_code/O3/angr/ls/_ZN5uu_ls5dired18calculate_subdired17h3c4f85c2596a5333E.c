long long uu_ls::dired::calculate_subdired::h3c4f85c2596a5333(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v5;  // r15
    unsigned long long v6;  // rax
    unsigned long long *v7;  // rcx
    unsigned long long *v8;  // rdx

    v0 = v2;
    v3 = a0->field_10;
    v5 = a0->field_28;
    if (v5 == a0->field_18)
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8b514c726a3ac53f(&a0->field_18);
    v6 = (!v3 ? 2 : *((long long *)(v3 * 16 + a0->field_8 - 8)) + 3) + (-0x100 | v5) * 2;
    v7 = a0->field_20;
    v8 = v5 * 16;
    *((unsigned long long *)(v7 + v8)) = v6;
    *((unsigned long long *)(v7 + v8 + 8)) = a1 + v6;
    a0->field_28 = (char *)v5 + 1;
    return v6;
}
