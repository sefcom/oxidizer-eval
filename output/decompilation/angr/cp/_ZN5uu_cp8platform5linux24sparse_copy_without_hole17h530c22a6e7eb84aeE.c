long long uu_cp::platform::linux::sparse_copy_without_hole(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x13c]
    unsigned int v1;  // [bp-0x138]
    unsigned int v2;  // [bp-0x134]
    void* v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    char v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    unsigned long long v7;  // [bp-0x110]
    struct struct_0 v9[16];  // [bp-0x108]
    int v10;  // [bp-0xf8]
    int v11;  // [bp-0xe8], Other Possible Types: char
    unsigned int v12;  // [bp-0xe4]
    unsigned long v13;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v14;  // [bp-0xd8]
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xd0]
    char v17;  // [bp-0x98]
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned int v21;  // ebp
    char *v22;  // r13
    unsigned int v23;  // ebp
    unsigned int v24;  // ebp
    unsigned long v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rbp

    (char)v11.open(a0, a1);
    if ((v11 & 1))
        return v13;
    v0 = v12;
    (char)v11.create(a2, a3);
    if ((v11 & 1))
    {
        v19 = v13;
    }
    else
    {
        v1 = v12;
        (char)v11.metadata(&v0);
        if (*((int *)&v11) == 2)
        {
            v19 = v13;
        }
        else
        {
            v20 = *((long long *)&v17);
            v20 >> 63.unwrap(&g_5fbd48);
            if (ftruncate(v1, v20) >= 0)
            {
                v21 = v0;
                v4 = core::cmp::min_by(v20);
                v5.from_elem(v4, &g_5fbd60);
                v3 = 0;
                v22 = &(char)v9;
                v2 = v21;
                v23 = v21;
                while (true)
                {
                    v24 = v23;
                    0.unwrap(&g_5fbd78);
                    v25 = lseek(v24, v3, 3);
                    0.unwrap(&g_5fbd90);
                    v26 = lseek(v24, v25, 4);
                    if (v25 == -1 || v26 == -1)
                    {
                        ::0x4eb060::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
                        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
                        return 0;
                    }
                    if (v25 >= -1 && v26 >= -1)
                    {
                        v3 = v26;
                        v27 = v26 - v25;
                        v22.new(v27, v4);
                        v14 = v10;
                        *((struct struct_0 [16])&v11) = v9;
                        v16 = v15;
                        v15 = 0;
                        if ((char)v11.spec_nth((!v16 ? (long long)v14 : 0)))
                        {
                            v29 = ::0x4eafa0::core::cmp::min_by(v27 - v28, v4).index_mut(v6, v7);
                            v30 = v28 + v25;
                            v19 = v0.read_exact_at(v29, a2, v30);
                            if (!(!v19))
                                goto LABEL_4eba29;
                            v19 = v1.write_all_at(v29, v28, v30);
                            goto LABEL_4eba29;
                        }
                        else
                        {
                            v22 = &(char)v9;
                            v23 = v2;
                        }
                    }
                    else
                    {
                        v19 = (unsigned int)std::sys::pal::unix::os::errno() * 0x100000000 | 2;
LABEL_4eba29:
                        ::0x4eb060::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                        break;
                    }
                }
            }
            else
            {
                v19 = (unsigned int)std::sys::pal::unix::os::errno() * 0x100000000 | 2;
            }
        }
        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
    }
    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
    return v19;
}
