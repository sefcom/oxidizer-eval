long long uu_split::ByteChunkWriter::new(struct_1 *a0, unsigned long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3[1][2];  // [bp-0xf8]
    unsigned long long v4[1][2];  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    char *v6;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v7;  // [bp-0xe0], Other Possible Types: unsigned int, unsigned long long
    void* v8;  // [bp-0xd8]
    int v9;  // [bp-0xd0]
    char v10;  // [bp-0xc0]
    char *v11;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    void* v14;  // [bp-0x90], Other Possible Types: char
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    char v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x68]
    char *v20;  // [bp-0x60]
    int v21;  // [bp-0x58]
    int v22;  // [bp-0x48]
    int v23;  // [bp-0x40]
    char v24;  // [bp-0x38]
    char v25;  // [bp-0x30]
    char *v27;  // xmm0
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rcx
    char *v30;  // rdx
    char *v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm2

    v3.new(a2->field_30, a2->field_38, &a2->padding_40);
    if (v4 == 9223372036854775809)
    {
        a0->field_8 = v19;
        a0->field_10 = v6;
        a0->field_0 = 0x8000000000000000;
        return v5;
    }
    v27 = *((int128_t *)&v7);
    memcpy(&v24, &v10, 16);
    v22 = v9;
    *((char **)&v21) = v27;
    *((unsigned long long [1][2])&v18) = v4;
    v19 = v5;
    v20 = v6;
    v11.next(&v18);
    if (v11 == 0x8000000000000000)
    {
        uucore::mods::locale::get_message(&v14, "split-error-output-file-suffixes-exhaustederrorsplit-error-cannot-read-from-inputsplit-error-input-output-errorsplit-error-multi-character-separatorsplit-error-multiple-separator-characterssplit-error-filter-with-kth-chunksplit-error-invalid-io-block-size", 42);
        v7 = 1;
        *((int128_t *)&v3[0]) = *((int128_t *)&v14);
        v6 = v16;
        *((double *)&a0->field_8) = v3.new();
        a0->field_10 = &g_5a6ef8;
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v28 = v12;
        v29 = v13;
        v0 = v11;
        v1 = v28;
        v2 = v29;
        if (a2->field_a0)
        {
            v14 = 0;
            v15 = v28;
            v16 = v29;
            v17 = 1;
            v11 = &v14;
            v12 = <os_display::Quoted as core::fmt::Display>::fmt;
            v4[0] = &g_5a6eb8;
            v5 = 2;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            std::io::stdio::_print(&v4);
            v28 = v1;
            v29 = v2;
        }
        v3.instantiate_current_writer(a2, v28, v29, 1);
        if (v4 != 0x8000000000000000)
        {
            v31 = *((int128_t *)&v6);
            a0->field_20 = *((int128_t *)&v8);
            a0->field_10 = v31;
            a0->field_70 = *((long long *)&v25);
            v32 = *((int128_t *)&v18);
            v33 = *((int128_t *)&v20);
            v34 = (int128_t)(&v21)[8];
            *((void*)&a0->field_60) = v23;
            *((void*)&a0->field_50) = v34;
            *((void*)&a0->field_40) = v33;
            *((void*)&a0->field_30) = v32;
            *((unsigned long long [1][2])&a0->field_0) = v4;
            a0->field_8 = v5;
            a0->field_78 = a2;
            a0->field_80 = a1;
            a0->field_88 = 0;
            a0->field_90 = a1;
            return (unsigned long long)::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v0);
        }
        a0->field_8 = v5.from();
        a0->field_10 = v30;
        a0->field_0 = 0x8000000000000000;
        ::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    return (unsigned long long)::0x4add20::core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v18);
}
