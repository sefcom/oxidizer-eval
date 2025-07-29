long long uu_split::custom_write_all(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    v1 = a3.write_all(a1, a2);
    if (!v1)
    {
        *((unsigned short *)&a0->field_0) = 0x100;
        return 0;
    }
    v2 = uu_split::ignorable_io_error(v1, a4);
    if (!(char)v2)
    {
        a0->field_8 = v1;
        a0->field_0 = 1;
        return v2;
    }
    *((unsigned short *)&a0->field_0) = 0;
    return (unsigned long long)::0x4ad8d0::core::ptr::drop_in_place<std::io::error::Error>(v1);
}
