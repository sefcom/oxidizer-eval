double uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    int v4;  // ymm0

    v0 = v2;
    if (!(char)a0 || (unsigned int)a0 != 1)
        v3 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(a1, a2);
    else
        v3 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(a1, a2);
    return (unsigned long long)(v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3);
}
