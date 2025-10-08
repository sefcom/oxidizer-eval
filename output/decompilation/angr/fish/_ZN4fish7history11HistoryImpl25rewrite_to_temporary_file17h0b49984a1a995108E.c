long long fish::history::HistoryImpl::rewrite_to_temporary_file(struct_1 *a0, unsigned long a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x210]
    unsigned long long v1[1][2];  // [bp-0x208]
    unsigned long long v2[1][2];  // [bp-0x208]
    unsigned long v3;  // [bp-0x200], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x1f8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x1e0]
    void* v7;  // [bp-0x1d8]
    unsigned long v8;  // [bp-0x1d0]
    void* v9;  // [bp-0x1c8], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x1b8]
    unsigned long v11;  // [bp-0x1a8]
    int v12;  // [bp-0x198]
    int v13;  // [bp-0x188]
    int v14;  // [bp-0x178]
    int v15;  // [bp-0x168]
    int v16;  // [bp-0x158]
    void* v17;  // [bp-0x148]
    char v18;  // [bp-0x140]
    unsigned long long v19;  // [bp-0x138]
    unsigned long long v20;  // [bp-0x130]
    int v21;  // [bp-0x128]
    unsigned long long v22;  // [bp-0x120]
    int v23;  // [bp-0x118]
    int v24;  // [bp-0x108]
    int v25;  // [bp-0xf8]
    int v26;  // [bp-0xe8]
    int v27;  // [bp-0xd8], Other Possible Types: char
    int v28;  // [bp-0xc8]
    int v29;  // [bp-0xb8]
    char v30;  // [bp-0xa8]
    char v31;  // [bp-0x98]
    char v32;  // [bp-0x80]
    struct_1 *v34;  // rax
    unsigned long v35;  // r14
    unsigned int v36;  // r13d
    char v37;  // cl
    unsigned long long v38;  // rdx
    struct_2 *v39;  // rax
    struct_1 *v40;  // rdx
    void* v41;  // rsi
    struct_0 *v42;  // rsi
    unsigned long v43;  // r14
    unsigned long v44;  // r15

    v27.new();
    v1.create();
    if (v1)
    {
        core::ptr::drop_in_place<core::result::Result<fish::history::file::HistoryFileContents,std::io::error::Error>>(&v1);
    }
    else
    {
        v17 = 0;
        v5 = v3;
        v6 = v4;
        v9 = 0;
        v34 = a0;
        v35 = v34->field_70;
        v36 = v34->field_78;
        v11 = &v34->padding_7c[4];
        while (((char)v5.offset_of_next_item(v6, &v9, v37, 0x3b9aca00) & 1))
        {
            v12.decode_item(v5, v6, v38);
            if ((long long)v12 == 0x8000000000000000)
                core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(&v12);
            v26 = v16;
            v25 = v15;
            v24 = v14;
            v23 = v13;
            v21 = v12;
            if (((long long)v25 == v35 ? v36 < (int)(&v25)[8] : v35 < (long long)v25))
            {
                if (!(long long)v23 || v11.get_inner(v22, (long long)v23))
                    goto LABEL_13c03d0;
                goto LABEL_13c03b2;
            }
            else if ((long long)v23)
            {
                v39 = v11.get_inner(v22, (long long)v23);
                if (v39 && !v39->field_18)
                    goto LABEL_13c03d0;
LABEL_13c03b2:
                v27.add_item(&(char)v21);
            }
            else
            {
LABEL_13c03d0:
                core::ptr::drop_in_place<fish::history::HistoryItem>(&(char)v21);
            }
        }
        core::ptr::drop_in_place<fish::history::file::HistoryFileContents>(&v5);
    }
    v40 = a0;
    v41 = v40->field_b0;
    v2[0] = v40->field_48;
    v3 = 80 * v40->field_50 + (char *)v40->field_48;
    v4 = v40->field_b0;
    while (true)
    {
        if (!v41)
        {
            v42 = v2;
            if (v42 == v3)
                break;
            v2[0] = &v42[1].padding_0[7];
        }
        else
        {
            v4 = 0;
            v42 = v2.nth(v41);
            if (!v42)
                break;
        }
        if (!v42->field_48)
        {
            v12.clone(v42);
            v27.add_item(&v12);
        }
        v41 = v4;
    }
    memcpy(&v15, &v30, 16);
    v14 = v29;
    v13 = v28;
    v12 = v27;
    v18.collect(&v12);
    alloc::slice::<impl [T]>::sort_by_key(v19, v20);
    v0 = 0;
    v9 = 65664.with_capacity_in(1, 1, &g_14d9dd8);
    v10 = 0;
    v12.into_iter(&v18);
    v32.next(&v12);
    if (*((long long *)&v32) != 0x8000000000000000)
    {
        do
        {
            fish::history::file::append_history_item_to_buffer(&v32, &v9);
            v43 = fish::history::flush_to_file(&v9, a2, 0x10000);
            v2[0] = v43;
            if (v43)
            {
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
                v0 = v43;
                core::ptr::drop_in_place<fish::history::HistoryItem>(&v32);
                goto LABEL_13c060a;
            }
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v2);
            core::ptr::drop_in_place<fish::history::HistoryItem>(&v32);
            v32.next(&v12);
        } while (*((long long *)&v32) != 0x8000000000000000);
        goto LABEL_13c060a;
    }
    v43 = 0;
LABEL_13c060a:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::history::HistoryItem>>(&v12);
    if (!v43)
    {
        v44 = fish::history::flush_to_file(&v9, a2, 0);
        if (v44)
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
            v0 = v44;
            v43 = v44;
            goto LABEL_13c064b;
        }
        else
        {
            v43 = 0;
        }
    }
    else
    {
LABEL_13c064b:
        v8 = v43;
        if ((char)core::sync::atomic::atomic_load(&g_15a9890, 0))
        {
            v5 = 0;
            v6 = 1;
            v7 = 0;
            v2.to_flog_str(&g_15a9880);
            v12.into_iter(&v2);
            v5.spec_extend(&v12);
            v5.push(58, &g_14d9df0);
            v5.push(32, &g_14d9df0);
            v31.to_vec("Error writing to temporary history file:Saving %lu items via rewriteSaving %lu items via appendingassertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion f", 40);
            v12.into_iter(&v31);
            v5.spec_extend(&v12);
            v5.push(32, &g_14d9df0);
            v12.spec_to_string(&v8);
            v4 = (long long)v13;
            *((void*)&v1[0]) = v12;
            v12.into_iter(&v2);
            v5.spec_extend(&v12);
            v5.push(10, &g_14d9df0);
            fish::flog::flog_impl(v6, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
            v43 = v8;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v38);
    return v43;
}
