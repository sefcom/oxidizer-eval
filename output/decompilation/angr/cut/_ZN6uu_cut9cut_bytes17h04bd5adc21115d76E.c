long long uu_cut::cut_bytes::h04bd5adc21115d76(unsigned long long a0, unsigned long a1, unsigned long a2, struct_0 *a3)
{
    char v0;  // [sp-0xb1]
    unsigned long v1;  // [sp-0xb0]
    unsigned long v2;  // [sp-0xa0]
    char *v3;  // [bp-0x98]
    char *v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    unsigned int v6;  // [bp-0x80], Other Possible Types: unsigned long
    struct_0 *v7;  // [sp-0x78]
    char *v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    v9 = a1;
    v10 = a2;
    v0 = a3->field_28;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4328c6376c0b9efb(&v11, 0x2000, a0);
    v1 = uu_cut::stdout_writer::h8d13c8405537874a();
    v16 = a3->field_0;
    if (!v16)
        v17 = 1;
    else
        v17 = a3->field_8;
    v3 = &v9;
    v4 = &v1;
    *((int *)&v5) = (v16 ? v16 : "\t");
    v6 = v17;
    v7 = a3;
    v8 = &v0;
    v19 = bstr::io::BufReadExt::for_byte_record::h9b427090c1d4a37e(&v11, v0, &v3);
    if (!v19)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v1, v20);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(*((long long *)&v11), *((long long *)&v12));
        return 0;
    }
    v2 = v19;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&v13, &v2);
    v6 = 1;
    *((int128_t *)&v3) = *((int128_t *)&v13);
    v5 = *((long long *)&v14);
    ::0x4b4a70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(v2);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v1, v20);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(*((long long *)&v11), *((long long *)&v12));
    return alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&v3);
}
