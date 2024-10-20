long long uu_ptx::format_tex_field::h2ceb27aed3046f70(struct_1 *a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r14
    struct_0 *v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v11;  // rax

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5332851c330d1221(&v0, a1, a2 + a1);
    v6 = *((long long *)&v1);
    v7 = *((long long *)&v2);
    alloc::str::join_generic_copy::h5c915432f5b7f1cb(&v3, v6, v7, 1, 0);
    a0->field_10 = *((long long *)&v4);
    a0->field_0 = *((int128_t *)&v3);
    if (v7)
    {
        v8 = v6 + 8;
        do
        {
            v9 = v7;
            if (v8->field_0)
                __rust_dealloc(v8->field_-8);
        } while ((v8 += 24, v7 = v9 - 1, v9 != 1));
    }
    v11 = *((long long *)&v0);
    if (v11)
        return __rust_dealloc(v6);
    return v11;
}
