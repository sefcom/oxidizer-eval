long long uu_cut::cut_fields_explicit_out_delim::h5c816d4033f8d8fe(unsigned int a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5, unsigned long a6, unsigned long a7)
{
    char v0;  // [sp-0xc2]
    char v1;  // [bp-0xc1]
    unsigned long v2;  // [sp-0xc0]
    unsigned long v3;  // [sp-0xb0]
    int v4;  // [bp-0xa8], Other Possible Types: unsigned long
    char *v5;  // [sp-0xa0]
    char *v6;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x90], Other Possible Types: unsigned long
    char *v8;  // [sp-0x88]
    unsigned long long v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x78]
    unsigned long v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v11 = a2;
    v12 = a3;
    v0 = a4;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4b66837b380ddfc6(&v15, 0x2000, a0);
    v2 = uu_cut::stdout_writer::h8d13c8405537874a();
    v4 = a1;
    v5 = &v0;
    v6 = &v2;
    v7 = &v1;
    v8 = &v11;
    v9 = a6;
    v10 = a7;
    v16 = bstr::io::BufReadExt::for_byte_record_with_terminator::h870687f4a8b6b18d(&v15, a5, &v4);
    if (!v16)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v2, v17);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&v15);
        return 0;
    }
    v3 = v16;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&v13, &v3);
    v7 = 1;
    *((int128_t *)&v4) = *((int128_t *)&v13);
    v6 = *((long long *)&v14);
    ::0x4b4a70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(v3);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(v2, v17);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&v15);
    return alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&v4);
}
