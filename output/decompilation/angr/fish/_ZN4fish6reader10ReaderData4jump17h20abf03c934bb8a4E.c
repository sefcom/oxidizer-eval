long long fish::reader::ReaderData::jump(unsigned long long a0[16], unsigned int a1, char a2, unsigned int a3, unsigned long long a4[3], char a5)
{
    unsigned long long v0[3];  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned int v2;  // [sp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v9[16];  // 4096
    unsigned long long v10;  // cc_ndep
    unsigned long long v11[16];  // r12
    unsigned long v12;  // cc_dep1
    unsigned long v13;  // rax
    unsigned long v14;  // rsi
    unsigned long v15;  // rax
    unsigned long long v16;  // rdi
    unsigned long long v19;  // cc_ndep
    unsigned long v20;  // rax
    unsigned long long v21;  // rsi
    unsigned long v22;  // rdi
    unsigned long long v23;  // cc_ndep
    char v24;  // al
    unsigned long v25;  // rcx
    unsigned long v26;  // cc_dep1
    char v31;  // dil

    if (!a3)
        v9 = a0;
    else
        v9 = &a0[2 + 14];
    v11 = v9;
    v12 = a1;
    if (a1)
    {
        v13 = v11[15];
        v14 = a5 & (a2 ^ 1) & v13;
        v15 = v13 - v14;
        if (v13 == v14)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return 0;
        }
        v3 = a2;
        v2 = a3;
        while (true)
        {
            v15 -= 1;
            v5 = a4[1];
            v6 = a4[2] * 4 + a4[1];
            if (v5.any(v11, &v15))
                break;
            if (!v15)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
                return 0;
            }
        }
        if ((char)v3)
        {
            a0.update_buff_pos((char)v2, 1, v15);
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return (unsigned int)v6 & 0xffffff00 | 1;
        }
        v16 = v11[6];
        if (v16 < 1)
        {
            core::panicking::panic_const::panic_const_sub_overflow(v31); /* do not return */
        }
        else if (!((char)_ccall(4, 24, v15 + 1, 0, (unsigned long long)(char)(v16 < 1))))
        {
            v15 = v16 - 1.min(v15 + 1);
            a0.update_buff_pos((char)v2, 1, v15);
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return (unsigned int)v6 & 0xffffff00 | 1;
        }
        else
        {
            v4 = &g_14e0168;
            core::panicking::panic_const::panic_const_add_overflow(0x14e00f0); /* do not return */
        }
    }
    else
    {
        v19 = _ccall(19, v12, 0, v10);
        v20 = v11[15] + 1;
        if ((char)_ccall(4, 24, v11[15] + 1, 0, _ccall(19, v12, 0, v10)))
        {
            v0[0] = a4;
            v4 = 21889264;
            core::panicking::panic_const::panic_const_add_overflow(0x14e00f0); /* do not return */
        }
        v1 = v20;
        v21 = v11[6];
        if (a5 == 1 && !a2)
        {
            if (v21)
            {
                v22 = v21 - 1;
                if (v20 < v22)
                {
                    v19 = v20 < v22;
                    v20 += 1;
                    v1 = v20;
                }
            }
            else
            {
                v0[0] = a4;
                core::panicking::panic_const::panic_const_sub_overflow(v31); /* do not return */
            }
        }
        if (v20 >= v21)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return 0;
        }
        v3 = a2;
        v2 = a3;
        v4 = &g_14e0120;
        while (true)
        {
            v23 = v19;
            v5 = a4[1];
            v6 = a4[1] + a4[2] * 4;
            v24 = v5.any(v11, &v1);
            v25 = v1;
            v26 = v24;
            if (v24)
                break;
            if ((char)_ccall(4, 24, v25 + 1, 0, _ccall(17, v26, 0, v23)))
            {
                v4 = &g_14e0120;
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0120); /* do not return */
            }
            v1 = v25 + 1;
            v19 = _ccall(17, v26, 0, v23);
            if (v1 >= v11[6])
            {
                core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
                return 0;
            }
        }
        if ((char)v3)
        {
            a0.update_buff_pos((char)v2, 1, v25);
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return (unsigned int)v6 & 0xffffff00 | 1;
        }
        else if (v25)
        {
            v25 -= 1;
            v1 = v25;
            a0.update_buff_pos((char)v2, 1, v25);
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(a4[0], a4[1]);
            return (unsigned int)v6 & 0xffffff00 | 1;
        }
        else
        {
            core::panicking::panic_const::panic_const_sub_overflow(v31); /* do not return */
        }
    }
}
