long long uu_head::read_but_last_n_bytes(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14

    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    if (((char)uu_head::take::copy_all_but_n_bytes(a0, &v0, a1) & 1))
    {
LABEL_467407:
        uu_head::wrap_in_stdout_error(v3);
        v4 = 1;
    }
    else
    {
        v3 = v0.flush();
        if (v3)
            goto LABEL_467407;
        v4 = 0;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v4;
}
