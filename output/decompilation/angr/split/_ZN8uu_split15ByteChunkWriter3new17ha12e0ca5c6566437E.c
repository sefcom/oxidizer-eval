long long uu_split::ByteChunkWriter::new(struct_2 *a0, unsigned long a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x110]
    int v1;  // [bp-0x108], Other Possible Types: char
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    char *v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v5;  // [bp-0xf0], Other Possible Types: unsigned int, unsigned long long
    void* v6;  // [bp-0xe8]
    int v7;  // [bp-0xe0]
    char v8;  // [bp-0xd0]
    unsigned long v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0], Other Possible Types: unsigned long long
    char *v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    void* v14;  // [bp-0x98], Other Possible Types: char
    unsigned long long v15;  // [bp-0x90]
    unsigned long long v16;  // [bp-0x88]
    char v17;  // [bp-0x80]
    unsigned long long v18;  // [bp-0x78]
    unsigned long v19;  // [bp-0x70]
    char *v20;  // [bp-0x68]
    int v21;  // [bp-0x60]
    int v22;  // [bp-0x50]
    int v23;  // [bp-0x48]
    char v24;  // [bp-0x40]
    char v25;  // [bp-0x38]
    int v27;  // xmm0
    unsigned long long v28;  // rdx
    char *v29;  // rdx
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2

    v1.new(*((long long *)&a2->field_30), a2->field_38, &a2->padding_40);
    if (v2 == 9223372036854775809)
    {
        a0->field_8 = v19;
        a0->field_10 = v4;
        a0->field_0 = 0x8000000000000000;
        return v3;
    }
    v27 = *((int128_t *)&v5);
    memcpy(&v24, &v8, 16);
    v22 = v7;
    v21 = v27;
    v18 = v2;
    v19 = v3;
    v20 = v4;
    v10.next(&v18);
    if (v10 == 0x8000000000000000)
    {
        v14.to_vec("output file suffixes exhaustedcreating file at file descriptor limit, but no file descriptor left to close. Closed  writers before.\n: cannot read from input : ", 30);
        v4 = v16;
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v5 = 1;
        *((double *)&a0->field_8) = v1.new();
        a0->field_10 = &g_50ab40;
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v28 = v12;
        v0 = v28;
        if (a2->field_a0)
        {
            v14 = 0;
            v15 = v28;
            v16 = v13;
            v17 = 1;
            v11 = &v14;
            v12 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = &g_50af08;
            v3 = 2;
            v6 = 0;
            v4 = &v11;
            v5 = 1;
            std::io::stdio::_print(&v2);
            v28 = v0;
        }
        v1.instantiate_current_writer(a2, v28, v13, 1);
        if (v2 != 0x8000000000000000)
        {
            v30 = *((int128_t *)&v4);
            a0->field_20 = *((int128_t *)&v6);
            *((void*)&a0->field_10) = v30;
            a0->field_70 = *((long long *)&v25);
            v31 = *((int128_t *)&v18);
            v32 = *((int128_t *)&v20);
            v33 = (int128_t)(&v21)[8];
            *((void*)&a0->field_60) = v23;
            *((void*)&a0->field_50) = v33;
            *((void*)&a0->field_40) = v32;
            *((void*)&a0->field_30) = v31;
            a0->field_0 = v2;
            a0->field_8 = v3;
            a0->field_78 = a2;
            a0->field_80 = v9;
            a0->field_88 = 0;
            a0->field_90 = v9;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v10, v0);
        }
        a0->field_8 = v3.from();
        a0->field_10 = v29;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(v10, v0);
    }
    return (unsigned long long)core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v18, v19);
}
