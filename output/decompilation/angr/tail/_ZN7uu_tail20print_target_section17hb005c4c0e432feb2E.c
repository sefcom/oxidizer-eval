long long uu_tail::print_target_section(unsigned long long a0, char a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v6;  // rdx
    unsigned long long v8;  // rdx

    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    if ((a1 & 1))
    {
        v2 = a0;
        v3 = a2;
        v2.copy(&v0).unwrap(v6, &g_636670);
    }
    else
    {
        a0.copy(&v0).unwrap(v8, &g_636688);
    }
    return ::0x4f2950::core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
}
