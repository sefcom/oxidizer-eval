long long uu_head::take::TakeAllBuffer::fill_buffer(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // r15

    v0 = v2;
    a0.resize();
    a0->field_18 = 0;
    v4 = v3;
    if (((char)a1.read(a0->field_8, a0->field_10) & 1))
    {
        do
        {
            if ((char)v4.kind() != 35)
                return 1;
            v0 = v4;
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            v4 = v3;
        } while (((char)a1.read(a0->field_8, a0->field_10) & 1));
    }
    if (a0->field_10 >= v4)
        a0->field_10 = v4;
    return 0;
}
