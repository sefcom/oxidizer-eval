long long uu_sort::tmp_dir::TmpDirWrapper::next_file(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa0]
    int v2;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x94]
    unsigned int v4;  // [bp-0x90]
    unsigned int v5;  // [bp-0x8c]
    unsigned long long v6;  // [bp-0x88]
    char v7;  // [bp-0x54]
    char v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    int v11;  // [bp-0x38], Other Possible Types: char
    char v12;  // [bp-0x28]
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned int v19;  // eax
    char v20;  // dl

    if (a1->field_28 == 2)
    {
        v14 = a1.init_tmp_dir();
        if (v14)
        {
            *((unsigned long long *)&a0->padding_5[11]) = v14;
            a0->field_18 = v15;
            *((unsigned long long *)&a0->padding_5[3]) = 0x8000000000000000;
            return a0;
        }
    }
    (char)v2.lock(a1->field_30 + 16);
    v16 = (char)v2.unwrap(&g_6729d8);
    v11.spec_to_string(&a1->field_38);
    a1->field_38 = a1->field_38 + 1;
    if (a1->field_28 == 2)
        core::option::unwrap_failed(&g_6729f0); /* do not return */
    v17 = a1->field_18;
    v18 = a1->field_20;
    v6 = *((long long *)&v12);
    v2 = v11;
    v0.join(v17, v18, &(char)v2);
    (char)v2.create(&v0);
    if (((char)v2 & 1))
    {
        v19 = (long long)(&v2)[8];
        v2 = 9223372036854775811;
        v4 = v19;
        v5 = 0;
        *((double *)&a0->padding_5[11]) = (char)v2.new();
        a0->field_18 = &g_672878;
        *((unsigned long long *)&a0->padding_5[3]) = 0x8000000000000000;
        ::0x536d90::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    else
    {
        memcpy(&v8, &v0, 16);
        v10 = v1;
        a0->field_0 = v3;
        *((int128_t *)&a0->field_4) = *((int128_t *)&v7);
        *((unsigned long *)&a0->padding_5[11]) = v9;
        a0->field_18 = v10;
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<()>>(v16, v20 & 1);
    return a0;
}
