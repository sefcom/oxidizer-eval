long long uu_cut::cut_fields_implicit_out_delim::hc1fc3b9aa7195642(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    char v0;  // [sp-0xb2]
    char v1;  // [bp-0xb1]
    unsigned long v2;  // [sp-0xb0]
    unsigned long v3;  // [sp-0xa0]
    int v4;  // [bp-0x98], Other Possible Types: unsigned long
    char *v5;  // [sp-0x90]
    char *v6;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x80], Other Possible Types: unsigned long
    char *v8;  // [sp-0x78]
    unsigned long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v9 = a2;
    v10 = a3;
    v0 = a4;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4328c6376c0b9efb(&v11, 0x2000, a0);
    v2 = uu_cut::stdout_writer::h8d13c8405537874a();
    v4 = a1;
    v5 = &v0;
    v6 = &v2;
    v7 = &v1;
    v8 = &v9;
    v16 = bstr::io::BufReadExt::for_byte_record_with_terminator::he41badc75985900e(&v11, a5, &v4);
    if (!v16)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v2, v17);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(*((long long *)&v11), *((long long *)&v12));
        return 0;
    }
    v3 = v16;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&v13, &v3);
    v7 = 1;
    *((int128_t *)&v4) = *((int128_t *)&v13);
    v6 = *((long long *)&v14);
    ::0x4b4a70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(v3);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v2, v17);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(*((long long *)&v11), *((long long *)&v12));
    return alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&v4);
}
