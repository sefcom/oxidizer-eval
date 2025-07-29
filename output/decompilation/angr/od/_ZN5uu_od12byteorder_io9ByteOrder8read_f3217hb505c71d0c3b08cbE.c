long long uu_od::byteorder_io::ByteOrder::read_f32(char a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v1;  // rax

    if (a0 && a0 == 1)
    {
        a1.read_u32(a2);
        return v1;
    }
    a1.read_u32(a2);
    return v1;
}
