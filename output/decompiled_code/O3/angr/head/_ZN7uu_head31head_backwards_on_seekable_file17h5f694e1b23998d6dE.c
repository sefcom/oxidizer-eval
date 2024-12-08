long long uu_head::head_backwards_on_seekable_file::h5f694e1b23998d6d(unsigned long long a0, struct_0 *a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0x78]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned int v8;  // rdx
    unsigned int v9;  // rdx

    v4 = a1->field_0;
    if (v4 == 1)
    {
        if (uu_head::find_nth_line_from_end::h8a549a046930a13b(a0, a1->field_8, a1->field_2b))
            return v6;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h0a75255947104c18(&v0, 0x10000, a0);
        v6 = uu_head::read_n_bytes::h5ef495b621399802(&v0, v6, v8);
    }
    else
    {
        if ((unsigned int)v4 != 3)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v5 = a1->field_8;
        std::fs::File::metadata::he899a18112e6f19e(&v0, a0);
        if (*((int *)&v0) == 2)
        {
            v6 = *((long long *)&v1);
            return v6;
        }
        v7 = *((long long *)&v2);
        if (v7 <= v5)
            return 0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h0a75255947104c18(&v0, 0x10000, a0);
        v6 = uu_head::read_n_bytes::h5ef495b621399802(&v0, v7 - v5, v9);
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h87a6859d69ebde12(*((long long *)&v0), *((long long *)&v1));
    return v6;
}
