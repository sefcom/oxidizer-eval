long long fish::reader::ReaderData::jump_to_matching_bracket(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x64]
    void* v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    struct_0 *v7;  // 4096
    struct_0 *v8;  // rbx
    void* v9;  // rbp
    void* v10;  // rax
    unsigned int v11;  // eax

    if (!a2)
        v7 = a0;
    else
        v7 = &a0[6].padding_0[32];
    v8 = v7;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    if (v8->field_30)
    {
        v0 = a1;
        v4 = a2;
        v9 = 0;
        do
        {
            if ((int)v8.at(v9) == a4)
            {
                v1.push(v9, &g_14e00d8);
            }
            else if ((int)v8.at(v9) == a5)
            {
                v10 = v3;
                if (v10)
                {
                    v3 = v10 - 1;
                    v1 = 0;
                    v9 = *((long long *)(8 + v10 * 8 - 8));
                    if (a3 == v9)
                    {
                        if (!(char)v0)
                        {
                            if (v9)
                                v9 -= 1;
                            else
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14e00c0); /* do not return */
                        }
                        v11 = a0.update_buff_pos((char)v4, 1, v9);
                        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
                        return v11;
                    }
                    else if (a3 == v9)
                    {
                        if ((char)v0)
                        {
                            v11 = a0.update_buff_pos((char)v4, 1, v9);
                            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
                            return v11;
                        }
                        else if ((char)_ccall(4, 24, v9 + 1, 0, (unsigned long long)(char)((char)v0 < 0)))
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14e00a8); /* do not return */
                        }
                        else
                        {
                            v11 = a0.update_buff_pos((char)v4, 1, v9 + 1);
                            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
                            return v11;
                        }
                    }
                }
            }
            v9 += 1;
        } while (v8->field_30 != v9);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    return 0;
}
