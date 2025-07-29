long long uu_head::take::TakeAllBuffer::fill_buffer(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    a0.resize(0x10000, 0);
    a0->field_18 = 0;
    while (true)
    {
        v3 = a1.read(a0->field_8, a0->field_10);
        if (!v3)
        {
            a0.truncate(v4);
            return v3;
        }
        else if ((char)v4.kind() == 35)
        {
            ::0x4b0890::core::ptr::drop_in_place<std::io::error::Error>(v4);
        }
        else
        {
            return v3;
        }
    }
}
