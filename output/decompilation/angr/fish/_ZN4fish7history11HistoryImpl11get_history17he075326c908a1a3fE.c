void fish::history::HistoryImpl::get_history(unsigned long a0, void* a1)
{
    unsigned long v0;  // [bp-0x158]
    int v1;  // [bp-0x158]
    int v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x148]
    void* v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x130]
    void* v7;  // [bp-0x128]
    struct_0 *v8;  // [bp-0x120]
    unsigned long v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    int v12;  // [bp-0x108]
    int v13;  // [bp-0xf8]
    int v14;  // [bp-0xe8]
    int v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    int v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xb0]
    int v19;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0xa8]
    int v21;  // [bp-0x98]
    int v22;  // [bp-0x88]
    int v23;  // [bp-0x78]
    int v24;  // [bp-0x68]
    int v25;  // [bp-0x58]
    int v26;  // [bp-0x48]
    unsigned long long v28[3];  // rax
    unsigned long long v29[3];  // rbp
    unsigned long long *v30;  // rax
    unsigned long v31;  // r15
    unsigned long long v32;  // r14

    v5 = 0;
    v6 = 8;
    v7 = 0;
    (char)v12.default();
    v26 = v14;
    v25 = v13;
    v24 = v12;
    v0 = (long long)a1[72];
    v3 = (long long)a1[80] * 80 + (long long)a1[72];
    v28 = v0.next_back();
    if (v28)
    {
        if ((char)a1[252])
        {
            v28 = v0.next_back();
            if (!v28)
                goto LABEL_13c25ac;
        }
        v29 = v28;
        do
        {
            (char)v12.to_vec(v29[1], v29[2]);
            v19 = (long long)v13;
            v17 = v12;
            if (!(char)v24.insert(&(char)v17))
            {
                (char)v12.to_vec(v29[1], v29[2]);
                v19 = (long long)v13;
                v17 = v12;
                v5.push(&(char)v17, &g_14d9fd0);
            }
            v29 = v0.next_back();
        } while (v29);
    }
LABEL_13c25ac:
    a1.load_old_if_needed();
    v9 = (long long)a1[96];
    v10 = (long long)a1[96] + (long long)a1[104] * 8;
    if (v9.next_back())
    {
        if (*((int *)a1) == 1)
        {
            v31 = (long long)a1[8];
            v32 = (long long)a1[16];
            while (true)
            {
                (char)v12.decode_item(v31, v32, *(v30));
                if ((char)(((0 ^ (long long)v12) & (0 ^ -((long long)v12))) >> 63))
                {
                    core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(&(char)v12);
                    v30 = v9.next_back();
                    if (!v30)
                        break;
                }
                else
                {
                    v23 = v16;
                    v22 = v15;
                    v21 = v14;
                    v19 = v13;
                    v17 = v12;
                    (char)v12.to_vec(v18, v20);
                    v4 = (long long)v13;
                    v1 = v12;
                    if (!(char)v24.insert(&(unsigned long long)v1))
                    {
                        (char)v12.to_vec(v18, v20);
                        v4 = (long long)v13;
                        v2 = v12;
                        v5.push(&(unsigned long long)v1, &g_14d9fb8);
                    }
                    core::ptr::drop_in_place<fish::history::HistoryItem>(&(char)v17);
                    v30 = v9.next_back();
                    if (!v30)
                        break;
                }
            }
        }
        else
        {
            core::option::unwrap_failed(&g_14d9fa0); /* do not return */
        }
    }
    v8->field_10 = 0;
    v8->field_0 = *((int128_t *)&v5);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<widestring::utfstring::Utf32String>>(&v24);
    return;
}
