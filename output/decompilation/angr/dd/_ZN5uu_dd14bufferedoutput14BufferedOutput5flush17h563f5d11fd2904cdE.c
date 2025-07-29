long long uu_dd::bufferedoutput::BufferedOutput::flush(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    unsigned long long v7;  // r13

    v0.write_blocks(a1 + 1, a1[1], a1[2]);
    if ((v0 & 1))
    {
        a0->field_8 = v1;
        v7 = 1;
    }
    else
    {
        memcpy(&v5, &v4, 16);
        if (v3)
        {
            1.unwrap();
            [D] Unsupported jumpkind Ijk_NoDecode at address 5128365()
        }
        v7 = 0;
        0.unwrap();
        v0.drain(a1, 0, v2);
        ::0x4e2910::core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v0);
        a0->field_18 = 0;
        a0->field_10 = v2;
        a0->field_20 = *((int128_t *)&v5);
    }
    a0->field_0 = v7;
    return a0;
}
