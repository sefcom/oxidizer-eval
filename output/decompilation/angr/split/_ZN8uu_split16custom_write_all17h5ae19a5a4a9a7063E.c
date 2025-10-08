long long uu_split::custom_write_all(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r15
    unsigned long long v4;  // rax

    v2 = a3.write_all(a1, a2);
    if (!v2)
    {
        *((unsigned short *)a0) = 0x100;
        return v2;
    }
    v3 = v2;
    v4 = uu_split::ignorable_io_error(v2, a4);
    if (!(char)v4)
    {
        *((unsigned long long *)&a0[8]) = v3;
        *((char *)a0) = 1;
        return v4;
    }
    v0 = v3;
    *((unsigned short *)a0) = 0;
    return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v0);
}
