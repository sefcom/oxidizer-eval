long long uu_head::head_backwards_without_seek_file::h4751660dfab5d25f(unsigned long long a0, struct_0 *a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax
    void* v4;  // rax

    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h816b305eecca846e(&v0, 0x10000, a0);
    v3 = a1->field_0;
    if (v3 == 1)
    {
        v4 = uu_head::read_but_last_n_lines::hcb4641e9ed99690d(&v0, a1->field_8, a1->field_2b);
    }
    else
    {
        if ((unsigned int)v3 != 3)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v4 = uu_head::read_but_last_n_bytes::hc87fad5ade7f1d54(&v0, a1->field_8);
    }
    if (!v4)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::hf5714c45d841b5ad(*((long long *)&v0), *((long long *)&v1));
        return 0;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::hf5714c45d841b5ad(*((long long *)&v0), *((long long *)&v1));
    return v4;
}
