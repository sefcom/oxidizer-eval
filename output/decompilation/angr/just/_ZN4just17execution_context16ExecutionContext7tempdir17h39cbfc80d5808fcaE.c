long long just::execution_context::ExecutionContext::tempdir(struct_0 *a0, struct_3 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v5;  // [bp-0xd8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    unsigned int v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    unsigned short v14;  // [bp-0x90]
    char v15;  // [bp-0x88]
    char v16;  // [bp-0x87]
    unsigned long v17;  // [bp-0x78]
    int v18;  // [bp-0x77]
    int v19;  // [bp-0x67]
    int v20;  // [bp-0x57]
    int v21;  // [bp-0x47]
    char v22;  // [bp-0x37]
    char v23;  // [bp-0x28]
    unsigned long long v25;  // rax
    char v26;  // al
    unsigned long v27;  // rcx

    v13 = 6;
    v11 = 1;
    v12 = 0;
    v14 = 0;
    v8 = 0;
    v9 = "just-cmdcmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ";
    v10 = 5;
    if ((char)(((0 ^ a1->field_0->field_f0) & (0 ^ -(a1->field_0->field_f0))) >> 63))
    {
        if (a1->field_10->field_168 == 0x8000000000000000)
        {
            dirs::runtime_dir(&v5);
            if (v5 == 0x8000000000000000)
            {
                v0.tempdir(&v8);
                if (v1 != 2)
                {
                    *((unsigned long long *)&a0->field_8[0]) = v1;
                    *((void*)&a0->field_1[7]) = v0;
                    a0->field_0 = 56;
                    return v1;
                }
            }
            else
            {
                v2.join(v6, v7, "just", 4);
                v25 = std::fs::create_dir_all(&v2);
                if (v25)
                {
                    just::execution_context::ExecutionContext::tempdir::{{closure}}(&v15, v3, v4, v25);
                    v26 = v15;
                    *((long long *)&a0->field_31) = *((long long *)&v23);
                    *((int128_t *)((char *)&a0->field_21 + 1)) = *((int128_t *)&v22);
                    *((void*)((char *)&a0->field_18 + 1)) = v21;
                    *((void*)&a0->field_11[0]) = v20;
                    *((void*)&a0->field_8[9]) = v19;
                    *((void*)&a0->field_1[16]) = v18;
                    *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v16);
                    a0->field_0 = v26;
                    core::ptr::drop_in_place<std::path::PathBuf>(&v2);
                    return core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                }
                v17 = v4;
                *((int128_t *)&v15) = *((int128_t *)&v2);
                v0.tempdir_in(&v8, &v15);
                core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                if (v1 != 2)
                {
                    *((unsigned long long *)&a0->field_8[0]) = v1;
                    *((void*)&a0->field_1[7]) = v0;
                    a0->field_0 = 56;
                    return v1;
                }
            }
        }
        else
        {
            v27 = &a1->field_10->field_168;
LABEL_6675e2:
            v15.join(a1->field_18->field_20, a1->field_18->field_28, v27);
            v0.tempdir_in(&v8, &v15);
            if (v1 != 2)
            {
                *((unsigned long long *)&a0->field_8[0]) = v1;
                *((void*)&a0->field_1[7]) = v0;
                a0->field_0 = 56;
                return v1;
            }
        }
        return just::execution_context::ExecutionContext::tempdir::{{closure}}(a0, a2, *((long long *)&v0));
    }
    v27 = &a1->field_0->field_f0;
    goto LABEL_6675e2;
}
