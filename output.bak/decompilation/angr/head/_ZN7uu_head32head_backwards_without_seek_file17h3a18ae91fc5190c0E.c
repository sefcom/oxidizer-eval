long long uu_head::head_backwards_without_seek_file::h3a18ae91fc5190c0(unsigned long long a0, struct_0 *a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // rax

    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he287ccdf4304b65d(&v0, 0x10000, a0);
    v2 = a1->field_0;
    if (v2 == 1)
    {
        v3 = uu_head::read_but_last_n_lines::h8782837729f811d6(&v0, a1->field_8, a1->field_2b);
    }
    else
    {
        if ((unsigned int)v2 != 3)
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_52cef0); /* do not return */
        v3 = uu_head::read_but_last_n_bytes::hcec7d62dae3b0b23(&v0, a1->field_8);
    }
    if (!v3)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c();
        return 0;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$::h7791d2e1a0ff900c();
    return v3;
}
