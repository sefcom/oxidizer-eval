long long uu_head::read_n_bytes(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14

    v2.take(a0, a1);
    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    if (((char)v2.copy(&v0) & 1))
    {
LABEL_4672bc:
        uu_head::wrap_in_stdout_error(v4);
        v5 = 1;
    }
    else
    {
        v4 = v0.flush();
        if (v4)
            goto LABEL_4672bc;
        v5 = 0;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v5;
}
