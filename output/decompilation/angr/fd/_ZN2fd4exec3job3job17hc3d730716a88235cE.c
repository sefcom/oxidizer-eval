long long fd::exec::job::job(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    void* v0;  // [bp-0x380]
    unsigned int v1;  // [bp-0x374]
    unsigned long v2;  // [bp-0x370]
    unsigned long v3;  // [bp-0x368]
    int v4;  // [bp-0x348]
    int v5;  // [bp-0x338]
    int v6;  // [bp-0x328]
    unsigned long long v7;  // [bp-0x318]
    char v8;  // [bp-0x308]
    int v9;  // [bp-0x2b8]
    unsigned long long v10;  // [bp-0x2a0]
    int v11;  // [bp-0x298]
    int v12;  // [bp-0x288]
    int v13;  // [bp-0x278]
    unsigned long long v14;  // [bp-0x268]
    int v15;  // [bp-0x260]
    unsigned long long v16;  // [bp-0x168]
    int v17;  // [bp-0x160]
    int v18;  // [bp-0x150]
    int v19;  // [bp-0x140]
    unsigned long long v20;  // [bp-0x130]
    char v21;  // [bp-0x128]
    unsigned int v23;  // ebp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v3 = a4->field_1a0;
    v8.into_iter(a0);
    v0 = 0;
    if (!((char)(((0 ^ a4->field_168) & (0 ^ -(a4->field_168))) >> 63)))
        v0 = a4->field_170;
    v2 = a4->field_178;
    v23 = vvar_70{reg 56} & 0xffffff00 | 2;
    if ((a4->field_1e6 & 1))
    {
        v1 = a4->field_1e7;
        while (true)
        {
            v16.next(&v8);
            if (v16 == 5)
                break;
            if ((unsigned int)v16 == 4)
            {
                v7 = v20;
                v6 = v19;
                v5 = v18;
                v4 = v17;
                v9.spec_to_string(&v4);
                fd::error::print_error(&v9);
                core::ptr::drop_in_place<ignore::Error>(&v4);
            }
            else
            {
                v10 = v16;
                v14 = v20;
                v13 = v19;
                v12 = v18;
                v11 = v17;
                ::libc.so.0::memcpy(&v15, &v21, 248);
                v24 = v10.stripped_path(v1);
                v23 = fd::exit_codes::merge_exitcodes(2 | a1.execute(a2, v24, v25, v0, v2, a3, 2 <= v3) * 0x100);
                core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v10);
            }
        }
    }
    else
    {
        while (true)
        {
            v16.next(&v8);
            if (v16 == 5)
                break;
            if ((unsigned int)v16 == 4)
            {
                v7 = v20;
                v6 = v19;
                v5 = v18;
                v4 = v17;
                core::ptr::drop_in_place<ignore::Error>(&v4);
            }
            else
            {
                v10 = v16;
                v14 = v20;
                v13 = v19;
                v12 = v18;
                v11 = v17;
                ::libc.so.0::memcpy(&v15, &v21, 248);
                v26 = v10.stripped_path(v1);
                v23 = fd::exit_codes::merge_exitcodes(2 | a1.execute(a2, v26, v27, v0, v2, a3, 2 <= v3) * 0x100);
                core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v10);
            }
        }
    }
    core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>(&v8);
    return v23;
}
