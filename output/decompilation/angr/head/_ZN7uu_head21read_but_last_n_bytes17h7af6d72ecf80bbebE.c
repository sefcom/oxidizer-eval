long long uu_head::read_but_last_n_bytes(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v1 = a0;
    v2 = std::io::stdio::stdout();
    v0 = v2.lock();
    if (!uu_head::take::copy_all_but_n_bytes(&v1, &v0, a1))
    {
        v4 = v0.flush();
        if (!v4)
        {
            ::0x4ac170::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
            return 0;
        }
    }
    v4.call_once();
    ::0x4ac170::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return 1;
}
