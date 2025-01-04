long long uu_yes::exec::h637ae1cf8fadb89a(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned int v1;  // [sp-0x2c]
    unsigned long v2;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v2 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v2, v4, v5);
    v6 = uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c();
    if ((unsigned int)v6 != 134)
    {
        v7 = v6 * 0x100000000 | 2;
    }
    else
    {
        v1 = 1;
        v7 = uu_yes::splice::splice_data::h72ae45c2ba61e376(a0, a1, &v1);
        if (!v7)
        {
            do
            {
                v7 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, a0, a1);
            } while (!v7);
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h4e60d91f978d58ff(v0);
    return v7;
}
