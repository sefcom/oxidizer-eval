char fish::wchar::decode_byte_from_char(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((a0 & 0x1fff00) == 0xf600)
        0.unwrap(&g_14e45d0);
    return (a0 & 0x1fff00) == 0xf600;
}
