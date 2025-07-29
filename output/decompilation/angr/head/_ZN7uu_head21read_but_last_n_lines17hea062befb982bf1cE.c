long long uu_head::read_but_last_n_lines(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14
    unsigned long long v6;  // rdx

    v1 = a0;
    v2 = std::io::stdio::stdout();
    v0 = v2.lock();
    if (a1)
    {
        if (!uu_head::take::copy_all_but_n_lines(a0, &v0, a1, a2))
        {
            v4 = v0.flush();
            if (!v4)
            {
                ::0x4ac170::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
                return 0;
            }
        }
        v4.call_once();
        v5 = 1;
    }
    else
    {
        v5 = v1.copy(&v0);
        if (v5)
            v6.call_once();
        else
            v5 = 0;
    }
    ::0x4ac170::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v5;
}
