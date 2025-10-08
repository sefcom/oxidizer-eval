long long uu_head::read_but_last_n_lines(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14

    v1 = a0;
    v2 = std::io::stdio::stdout();
    v0 = v2.lock();
    if (a1)
    {
        if (((char)uu_head::take::copy_all_but_n_lines(a0, &v0, a1, a2) & 1))
            goto LABEL_4674d3;
        v4 = v0.flush();
        if (v4)
            goto LABEL_4674d6;
        v5 = 0;
    }
    else
    {
        v5 = v1.copy(&v0);
        if (((char)v5 & 1))
        {
LABEL_4674d3:
LABEL_4674d6:
            uu_head::wrap_in_stdout_error(v4);
            v5 = 1;
        }
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v5;
}
