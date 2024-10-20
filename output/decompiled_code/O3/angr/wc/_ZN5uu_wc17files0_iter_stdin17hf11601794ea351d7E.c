long long uu_wc::files0_iter_stdin::hf11601794ea351d7(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // rax
    char v10;  // dl

    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v1, "-", 1);
    v6 = *((long long *)&v1);
    v7 = *((long long *)&v2);
    v8 = *((long long *)&v3);
    v9 = __rust_alloc(0x2000, 1);
    if (v9)
    {
        *((int128_t *)&(&a0->field_20)[1]) = 0;
        *((long long *)((char *)&a0->field_28 + 8)) = 0;
        a0->field_0 = v6;
        a0->field_8 = v7;
        a0->field_10 = v8;
        a0->field_18 = v9;
        a0->field_20 = 0x2000;
        a0->field_38 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0);
        *((char *)&a0->field_40) = v10 & 1;
        a0->field_48 = 0;
        return v9;
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
