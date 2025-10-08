long long uu_split::LineChunkWriter::new(void* a0, unsigned long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98]
    int v4;  // [bp-0x88]
    int v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    char v8;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    int v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    char v14;  // [bp-0x30]
    int v16;  // xmm0
    unsigned long long v17;  // rdx
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm1
    int v21;  // xmm2

    v8.new(*((long long *)&a2->field_30), a2->field_38, a2 + 1);
    if (v8 == 9223372036854775809)
    {
        *((unsigned long *)&a0[8]) = v1;
        *((unsigned long long *)&a0[16]) = v10;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v9;
    }
    v16 = *((int128_t *)&v11);
    memcpy(&v6, &v14, 16);
    v4 = v13;
    v3 = v16;
    v0 = v8;
    v1 = v9;
    v2 = v10;
    v8.start_new_chunk(a2, &v0);
    if (v8 != 0x8000000000000000)
    {
        v18 = *((int128_t *)&v10);
        *((int128_t *)&a0[32]) = (int128_t)v12;
        a0[16] = v18;
        *((unsigned long *)&a0[112]) = v7;
        v19 = *((int128_t *)&v0);
        v20 = *((int128_t *)&v2);
        v21 = (int128_t)(&v3)[8];
        a0[96] = v5;
        a0[80] = v21;
        a0[64] = v20;
        a0[48] = v19;
        *((unsigned long long *)a0) = v8;
        *((unsigned long *)&a0[8]) = v9;
        *((struct_0 **)&a0[120]) = a2;
        *((unsigned long *)&a0[128]) = a1;
        *((unsigned long long *)&a0[136]) = 0;
        *((unsigned long *)&a0[144]) = a1;
        return v8;
    }
    *((long long *)&a0[8]) = v9.from();
    *((unsigned long long *)&a0[16]) = v17;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v0, v1);
}
