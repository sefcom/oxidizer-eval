long long uu_wc::files0_iter_file::hf6a5dbd36a9e7a80(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned short v2;  // [sp-0x44]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x34]
    char v6;  // [bp-0x30]
    unsigned int v8;  // ebp
    unsigned long long v9;  // rax
    unsigned long long v10;  // r15
    unsigned long long v11;  // r12

    v0 = 0x1b600000000;
    v1 = 0;
    v2 = 0;
    v1 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v0, a1, a2);
    if (*((int *)&v4))
    {
        a0->field_0 = 9223372036854775809;
        *((double *)&a0->field_8) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb106b419441a58f1(*((long long *)&v6));
        a0->field_10 = &anon.8ae93ed5783cc3dfed1aac42e59f686c.53.llvm.7002947973987599328;
        return &anon.8ae93ed5783cc3dfed1aac42e59f686c.53.llvm.7002947973987599328;
    }
    v8 = *((int *)&v5);
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a1, a2);
    v10 = *((long long *)&v1);
    v11 = *((long long *)&v3);
    v9 = __rust_alloc(0x2000, 1);
    if (v9)
    {
        *((int128_t *)&(&a0->field_20)[1]) = 0;
        *((long long *)((char *)&a0->field_28 + 8)) = 0;
        a0->field_0 = v0;
        a0->field_8 = v10;
        a0->field_10 = v11;
        a0->field_18 = v9;
        a0->field_20 = 0x2000;
        *((unsigned int *)&a0->field_38) = v8;
        *((char *)&a0->field_40) = 0;
        return v9;
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
