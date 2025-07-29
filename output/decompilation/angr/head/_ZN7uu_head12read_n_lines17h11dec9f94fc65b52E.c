long long uu_head::read_n_lines(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    unsigned long long v7;  // rax

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v0 = std::io::stdio::stdout();
    v4.with_capacity(0x10000, v0.lock());
    if (!v1.copy(&v4))
    {
        v7 = v4.flush();
        if (!v7)
        {
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v4);
            return 0;
        }
    }
    v7.call_once();
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v4);
    return 1;
}
