long long uu_sort::tmp_dir::TmpDirWrapper::next_file(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0xa0]
    char v2;  // [bp-0x94]
    char v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    char v6;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x74]
    char v8;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x6c]
    char v10;  // [bp-0x68]
    char v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v18;  // rdx
    unsigned int v19;  // eax

    if (a1->field_28 == 2)
    {
        v14 = a1.init_tmp_dir();
        if (v14)
        {
            *((unsigned long long *)&a0->field_4[12]) = v14;
            a0->field_8 = v15;
            *((unsigned long long *)&a0->field_4[4]) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    (char)v6.lock(a1->field_30 + 16);
    v16 = (char)v6.unwrap(&g_58cb88);
    (char)v6.to_vec(core::fmt::num::imp::<impl u64>::_fmt(a1->field_38, &v2, 20), v18);
    v12 = *((long long *)&v10);
    a1->field_38 = a1->field_38 + 1;
    memcpy(&v11, &v6, 16);
    if (a1->field_28 == 2)
        core::option::unwrap_failed(&g_58cba0); /* do not return */
    v0.join(a1->field_18, a1->field_20, &v11);
    (char)v6.create(&v0);
    if (*((int *)&v6) == 1)
    {
        v19 = *((long long *)&v8);
        v6 = 9223372036854775811;
        v8 = v19;
        v9 = 0;
        *((double *)&a0->field_4[12]) = (char)v6.new();
        a0->field_8 = &g_58c448;
        *((unsigned long long *)&a0->field_4[4]) = 0x8000000000000000;
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    else
    {
        memcpy(&v3, &v0, 16);
        v5 = *((long long *)&v1);
        a0->field_0 = v7;
        *((int128_t *)&a0->field_4[0]) = *((int128_t *)&v2);
        *((unsigned long long *)&a0->field_4[12]) = v4;
        a0->field_8 = v5;
    }
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>>>(v16, (char)v18 & 1);
}
