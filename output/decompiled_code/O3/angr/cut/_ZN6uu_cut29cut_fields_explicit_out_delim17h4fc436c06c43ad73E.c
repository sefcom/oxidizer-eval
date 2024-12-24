long long uu_cut::cut_fields_explicit_out_delim::h4fc436c06c43ad73(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    char v0;  // [sp-0xc2]
    char v1;  // [bp-0xc1]
    unsigned long v2;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v4;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0xa0]
    unsigned long long v6;  // [sp-0x98]
    unsigned int v7;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x88]
    unsigned long long v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x78]
    unsigned long v11;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    char v15;  // [bp-0x28]
    char v16;  // [bp-0x18]
    unsigned long v17;  // [bp+0x8]
    char v18;  // [bp+0x10]
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx

    v11 = a2;
    v12 = a3;
    v0 = a4;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd38c856caaf3b7ff(&v13, 0x2000, a0);
    v19 = *((long long *)&v18);
    v20 = v17;
    v2 = uu_cut::stdout_writer::hbef1dd452a015c52();
    v4 = a1;
    v5 = &v0;
    v6 = &v2;
    v7 = &v1;
    v8 = &v11;
    v9 = v20;
    v10 = v19;
    v21 = bstr::io::BufReadExt::for_byte_record_with_terminator::h3f64364bd1fd6639(&v13, a5, &v4);
    if (!v21)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h232031eac17a0b4b(v2, v22);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hfd8755f6170b6591(*((long long *)&v13), *((long long *)&v14));
        return 0;
    }
    v3 = v21;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h54af4051450d829a(&v15, &v3);
    v7 = 1;
    *((int128_t *)&v4) = *((int128_t *)&v15);
    v6 = *((long long *)&v16);
    ::0x4b4e40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he35bd8dd8f4f289e(v3);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h232031eac17a0b4b(v2, v22);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hfd8755f6170b6591(*((long long *)&v13), *((long long *)&v14));
    return alloc::boxed::Box$LT$T$GT$::new::hde45d57a0a790447(&v4);
}
