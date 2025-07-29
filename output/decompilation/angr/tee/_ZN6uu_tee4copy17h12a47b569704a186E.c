long long uu_tee::copy(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x2038]
    void* v1;  // [bp-0x2030]
    void* v2;  // [bp-0x1030]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v2 = 0;
    v1 = 0;
    v0 = v4;
    memset(&v1, 0, 0x2000);
    while (true)
    {
        if (!a0.read(&v1))
        {
            if (!v5)
                return 0;
            if (a1.write_all(v5.index(&v1), v5) || a1.flush())
                break;
        }
        else if ((char)v5.kind() == 35)
        {
            ::0x49da00::core::ptr::drop_in_place<std::io::error::Error>(v5);
        }
        else
        {
            return 1;
        }
    }
    return 1;
}
