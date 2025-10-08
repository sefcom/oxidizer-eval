long long fish::fork_exec::flog_safe::flog_impl_async_safe(unsigned int a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long v3;  // rdx
    unsigned long v4;  // rax

    v0 = a1;
    if (a0 < 0)
        return v4;
    return write(a0, v0.to_flog_str_async_safe(&v1), v3);
}
