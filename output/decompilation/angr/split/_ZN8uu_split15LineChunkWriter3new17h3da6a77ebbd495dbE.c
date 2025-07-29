long long uu_split::LineChunkWriter::new(struct_0 *a0, unsigned long a1, unsigned long long a2[8])
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98]
    int v4;  // [bp-0x88]
    int v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    char v8;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    int v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    char v14;  // [bp-0x30]
    int v16;  // xmm0
    unsigned long v17;  // rdx
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm1
    int v21;  // xmm2

    v8.new(a2[6], a2[7], a2 + 1);
    if (v8 == 9223372036854775809)
    {
        a0->field_8 = v1;
        *((unsigned long long *)&a0->field_10) = v10;
        a0->field_0 = 0x8000000000000000;
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
        a0->field_20 = (int128_t)v12;
        *((void*)&a0->field_10) = v18;
        a0->field_70 = v7;
        v19 = *((int128_t *)&v0);
        v20 = *((int128_t *)&v2);
        v21 = (int128_t)(&v3)[8];
        *((void*)&a0->field_60) = v5;
        *((void*)&a0->field_50) = v21;
        *((void*)&a0->field_40) = v20;
        *((void*)&a0->field_30) = v19;
        a0->field_0 = v8;
        a0->field_8 = v9;
        a0->field_78 = &a2[0];
        a0->field_80 = a1;
        a0->field_88 = 0;
        a0->field_90 = a1;
        return v8;
    }
    a0->field_8 = v9.from();
    *((unsigned long *)&a0->field_10) = v17;
    a0->field_0 = 0x8000000000000000;
    return (unsigned long long)::0x4add20::core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v0);
}
