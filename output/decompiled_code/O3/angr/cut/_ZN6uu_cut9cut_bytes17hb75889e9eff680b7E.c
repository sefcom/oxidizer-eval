long long uu_cut::cut_bytes::hb75889e9eff680b7(unsigned int a0, unsigned long a1, unsigned long a2, struct_0 *a3)
{
    char v0;  // [sp-0xb1]
    unsigned long v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v3;  // [sp-0x98]
    char *v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    unsigned int v6;  // [bp-0x80], Other Possible Types: unsigned long
    struct_0 *v7;  // [sp-0x78]
    char *v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v9 = a1;
    v10 = a2;
    v0 = a3->field_28;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4b66837b380ddfc6(&v13, 0x2000, a0);
    v1 = uu_cut::stdout_writer::h8d13c8405537874a();
    v15 = a3->field_0;
    v16 = (v15 ? 1 : a3->field_8);
    if (!v15)
        v15 = "\t";
    v3 = &v9;
    v4 = &v1;
    v5 = v15;
    v6 = v16;
    v7 = a3;
    v8 = &v0;
    v17 = bstr::io::BufReadExt::for_byte_record::hb9b9251e70f5cc08(&v13, v0, &v3);
    if (!v17)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v1, v18);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&v13);
        return 0;
    }
    v2 = v17;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&v11, &v2);
    v6 = 1;
    *((int128_t *)&v3) = *((int128_t *)&v11);
    v5 = *((long long *)&v12);
    ::0x4b4a70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(v2);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v1, v18);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&v13);
    return alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&v3);
}
