double uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    int v4;  // ymm0

    v0 = v2;
    if (!(char)a0 || (unsigned int)a0 != 1)
        v3 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(a1, a2);
    else
        v3 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(a1, a2);
    return (unsigned long long)(v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3);
}
