long long fish::reader_history_search::ReaderHistorySearch::append_matches_from_search(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x148]
    int v1;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x120]
    int v5;  // [bp-0x114]
    char v6;  // [bp-0x103]
    unsigned short v7;  // [bp-0x102]
    void* v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    void* v10;  // [bp-0xf0]
    unsigned long v11;  // [bp-0xe8]
    int v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd0]
    void* v14;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v15;  // [sp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    void* v17;  // [bp-0xa8]
    char v18;  // [bp-0xa0]
    void* v19;  // [bp-0x98]
    unsigned short v20;  // [bp-0x90]
    unsigned int v21;  // [bp-0x8e]
    unsigned long long v22[1][3];  // [bp-0x80]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v26;  // bpl
    unsigned long long v27;  // r13
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rsi
    unsigned long long v31;  // r14
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax

    v26 = *((int *)(a0.search() + 192));
    v11 = a0->field_10;
    v27 = a0.search().current_string();
    v0 = a0.search_string();
    if (a0->field_120 - 1 < 2)
    {
        v28 = v27;
        v30 = v29;
        if (!(v26 & 1))
        {
            if (((char)v28.find(v30, v0, v29) & 1))
                goto LABEL_140a050;
        }
        else
        {
            if (((char)fish::wcstringutil::ifind(v28, v30, v0, v29, 0) & 1))
            {
LABEL_140a050:
                v23.to_vec(v27, v29);
                v15 = *((long long *)&v24);
                memcpy(&v14, &v23, 16);
                v16 = v31;
                a0.add_if_new(&v14);
            }
        }
    }
    else if (a0->field_120 - 3 < 2)
    {
        v19 = 0;
        v15 = v27;
        v16 = v29;
        v20 = 257;
        v17 = 0;
        v18 = 1;
        v14 = 0;
        v21 = 0;
        v8 = 0;
        v9 = 8;
        v10 = 0;
        if (!(v26 & 1))
        {
            while (true)
            {
                v5.next(&v14);
                if ((char)v7 == 2)
                    break;
                if (v6 != 1)
                    continue;
                v33 = v14.text_of(&v5);
                if (!((char)v33.find(v32, v0, v29) & 1))
                    continue;
                v12.to_vec(v33, v32);
                v1 = v12;
                v3 = v13;
                v4 = v32;
                v8.push(&v1, &g_14e1470);
            }
        }
        else
        {
            while (true)
            {
                v5.next(&v14);
                if ((char)v7 == 2)
                    break;
                if (v6 != 1)
                    continue;
                v34 = v14.text_of(&v5);
                if (!((char)fish::wcstringutil::ifind(v34, v32, v0, v29, 0) & 1))
                    continue;
                v12.to_vec(v34, v32);
                v1 = v12;
                v3 = v13;
                v4 = v32;
                v8.push(&v1, &g_14e1470);
            }
        }
        v1.into_iter(&v8);
        v22.next_back(&v1);
        if (!((char)(((0 ^ v22[0]) & (0 ^ -(v22[0]))) >> 63)))
        {
            while (true)
            {
                a0.add_if_new(&v22);
                if (a0->field_120 == 4)
                    break;
                v22.next_back(&v1);
                if (v22[0] == 0x8000000000000000)
                    break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<fish::reader_history_search::SearchMatch>>>(&v1);
    }
    return v11 & 0xffffffffffffff00 | a0->field_10 > v11;
}
