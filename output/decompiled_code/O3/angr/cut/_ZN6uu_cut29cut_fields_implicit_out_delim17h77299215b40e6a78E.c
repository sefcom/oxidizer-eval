long long uu_cut::cut_fields_implicit_out_delim::h77299215b40e6a78(unsigned int a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    char v0;  // [sp-0xb2]
    char v1;  // [bp-0xb1]
    unsigned long v2;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0xa0], Other Possible Types: unsigned long long
    int v4;  // [sp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x90]
    unsigned long long v6;  // [sp-0x88]
    unsigned int v7;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x78]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v9 = a2;
    v10 = a3;
    v0 = a4;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3ba4e567804c1530(&v13, 0x2000, a0);
    v2 = uu_cut::stdout_writer::hbef1dd452a015c52();
    v4 = a1;
    v5 = &v0;
    v6 = &v2;
    v7 = &v1;
    v8 = &v9;
    v15 = bstr::io::BufReadExt::for_byte_record_with_terminator::h7c47179d98de3756(&v13, a5, &v4);
    if (!v15)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h232031eac17a0b4b(v2, v16);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h861f3d8834e4d61b(&v13);
        return 0;
    }
    v3 = v15;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h54af4051450d829a(&v11, &v3);
    v7 = 1;
    *((int128_t *)&v4) = *((int128_t *)&v11);
    v6 = *((long long *)&v12);
    ::0x4b4e40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he35bd8dd8f4f289e(v3);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h232031eac17a0b4b(v2, v16);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h861f3d8834e4d61b(&v13);
    return alloc::boxed::Box$LT$T$GT$::new::hde45d57a0a790447(&v4);
}
