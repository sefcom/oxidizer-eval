long long uu_comm::LineReader::read_line(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long v4;  // r12
    unsigned int v5;  // ebp
    unsigned long long v6;  // rax
    char v7;  // dl

    v4 = a0->field_30;
    v5 = (unsigned int)v4 & 255;
    if (a0->field_0)
    {
        v6 = std::io::read_until(a0, v5, a1);
    }
    else
    {
        v0 = a0->padding_8.lock();
        v2 = v7 & 1;
        v6 = v0.read_until(v5, a1);
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v2));
    }
    v1 = v4;
    if ((char)core::slice::<impl [T]>::ends_with(a1[1], a1[2], &v1))
        return v6;
    a1.push(v5);
    return v6;
}
