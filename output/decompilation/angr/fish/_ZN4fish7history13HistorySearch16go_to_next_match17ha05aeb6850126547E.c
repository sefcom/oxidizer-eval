long long fish::history::HistorySearch::go_to_next_match(void* a0, unsigned long a1)
{
    int v0;  // [bp-0xf8]
    int v1;  // [bp-0xf8]
    int v2;  // [bp-0xe8]
    int v3;  // [bp-0xd8]
    int v4;  // [bp-0xc8]
    int v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xa0]
    int v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    int v9;  // [bp-0x88]
    int v10;  // [bp-0x78]
    int v11;  // [bp-0x68]
    int v12;  // [bp-0x58]
    int v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // r15
    unsigned long long v17;  // r14
    char v18;  // bpl
    unsigned long long v19;  // cc_ndep
    unsigned long v20;  // cc_dep1
    unsigned long long v21;  // rax

    v16 = -(a1 & 4294967295);
    if ((long long)a0[184] == v16)
        return 0;
    v18 = a1;
    v6 = a0 + 136;
    while (true)
    {
        v20 = v18;
        if (v18)
        {
            v19 = _ccall(17, v20, 0, v19);
            v17 += 1;
            if ((char)_ccall(4, 24, v17 + 1, 0, _ccall(17, v20, 0, v19)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14da0f0); /* do not return */
            if ((long long)a0[184] == v16)
                break;
        }
        else
        {
            if (!v17)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14da0d8); /* do not return */
            v19 = _ccall(20, v17, 0, v19);
            v17 -= 1;
            if ((long long)a0[184] == v16)
                break;
        }
        v1.item_at_index((long long)a0[128] + 16, v17);
        if ((long long)v1 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(&v1);
            *((int *)&a0[184]) = (!v18 ? 0 : (long long)a0[128] + 16.size() + 1);
            core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(a0 + 48);
            *((unsigned long long *)&a0[48]) = 0x8000000000000000;
            break;
        }
        v12 = v5;
        v11 = v4;
        v10 = v3;
        v9 = v2;
        v7 = v1;
        if ((char)(char)v7.matches_search((long long)a0[32], (long long)a0[40], (int)a0[196], !((char)a0[192] & 1)))
        {
            if (!((char)a0[192] & 2))
            {
                v1.to_vec(v8, (long long)v9);
                v14 = (long long)v2;
                v13 = v1;
                if (!(char)v6.insert(&v13))
                    goto LABEL_13c4649;
            }
            else
            {
LABEL_13c4649:
                v5 = v12;
                memcpy(&v4, &v11, 16);
                v3 = v10;
                v2 = v9;
                memcpy(&v1, &v7, 16);
                v21 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::history::HistoryItem>>(a0 + 48);
                a0[112] = v5;
                a0[96] = v4;
                a0[80] = v3;
                a0[64] = v2;
                a0[48] = v0;
                *((unsigned long long *)&a0[184]) = v17;
                return v21 & 0xffffffffffffff00 | 1;
            }
        }
        core::ptr::drop_in_place<fish::history::HistoryItem>(&(char)v7);
    }
    return 0;
}
