long long uu_head::read_n_lines(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // r14

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v0 = std::io::stdio::stdout();
    v4.with_capacity(v0.lock());
    if (((char)v1.copy(&v4) & 1))
    {
LABEL_467363:
        uu_head::wrap_in_stdout_error(v7);
        v8 = 1;
    }
    else
    {
        v7 = v4.flush();
        if (v7)
            goto LABEL_467363;
        v8 = 0;
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v4);
    return v8;
}
