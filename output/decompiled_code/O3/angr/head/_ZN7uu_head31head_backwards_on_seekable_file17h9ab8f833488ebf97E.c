long long uu_head::head_backwards_on_seekable_file::h9ab8f833488ebf97(unsigned long long a0, struct_0 *a1)
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
        if (uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf(a0, a1->field_8, a1->field_2b))
            return v6;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(&v0, 0x10000, a0);
        v6 = uu_head::read_n_bytes::hf3a515e6e6370f94(&v0, v6, v8);
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
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5b1434c6071ed7d0(&v0, 0x10000, a0);
        v6 = uu_head::read_n_bytes::hf3a515e6e6370f94(&v0, v7 - v5, v9);
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::h29a0ad3ae49a85fc(*((long long *)&v0), *((long long *)&v1));
    return v6;
}
