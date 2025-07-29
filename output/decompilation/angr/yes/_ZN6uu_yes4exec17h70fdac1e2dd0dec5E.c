long long uu_yes::exec(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    v5 = uucore::features::signals::enable_pipe_errors(a0, a1, v3, v4);
    if ((unsigned int)v5 == 134)
    {
        do
        {
            v6 = v0.write_all(a0, a1);
        } while (!v6);
    }
    else
    {
        v6 = v5 * 0x100000000 | 2;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v6;
}
