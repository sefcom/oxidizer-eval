long long uu_ls::calculate_padding_collection(unsigned long long a0[9], void* a1, unsigned long a2, struct_2 *a3, unsigned long long a4)
{
    char v0;  // [bp-0xe4]
    char v1;  // [bp-0xe3]
    char v2;  // [bp-0xe2]
    char v3;  // [bp-0xe1]
    unsigned long long v4;  // [bp-0xe0]
    unsigned int v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    unsigned long v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x40]
    void* v26;  // rbp
    unsigned long long v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // r13
    unsigned long long v30;  // rbx
    unsigned long long v31;  // r10
    void* v32;  // rbp
    struct_0 *v33;  // rax
    unsigned int v34[25];  // rax
    void* v36;  // rdi
    void* v37;  // rdi
    struct_1 *v38;  // rax
    unsigned int v39[25];  // rax
    void* v41;  // rdi
    struct_3 *v42;  // rax

    v26 = a1;
    v27 = a2 * 304 + a1;
    v0 = a3->field_f1;
    v12 = a3->field_d8;
    if (a3->field_100 == 1)
    {
        v3 = a3->field_f2;
        v1 = a3->field_f9;
        v2 = a3->field_f3;
        v28 = 1;
        v4 = 1;
        v29 = 1;
        v30 = 1;
        v9 = 1;
        v5 = 1;
        v11 = 1;
        v10 = 1;
        v7 = 1;
        while (true)
        {
            v31 = v30;
            v7 = v29;
            v14 = v28;
            v13 = v31;
            if ((v0 & 1))
            {
                do
                {
                    v32 = a1;
                    if (v32 == v27)
                    {
                        v13 = v13;
                        v14 = v14;
                        a0[0] = v7;
                        a0[1] = v10;
                        a0[2] = v11;
                        a0[3] = v5;
                        a0[4] = v9;
                        a0[5] = v14;
                        a0[6] = v13;
                        a0[7] = v7;
                        a0[8] = v4;
                        return v4;
                    }
                    a1 = v32 + 304;
                    v33 = v32.get_metadata(a4);
                    a1 = a1;
                } while (!v33);
                uu_ls::display_inode(&v15, v33->field_28);
                core::ptr::drop_in_place<alloc::string::String>(&v15);
                v7 = v17.max(v7);
                a1 -= 304;
                v24 = v7;
                if (!(v3 & 1))
                    goto LABEL_59f658;
            }
            else
            {
                if (a1 == v27)
                {
                    v13 = v31;
                    v14 = v28;
                    a0[0] = v7;
                    a0[1] = v10;
                    a0[2] = v11;
                    a0[3] = v5;
                    a0[4] = v9;
                    a0[5] = v14;
                    a0[6] = v13;
                    a0[7] = v7;
                    a0[8] = v4;
                    return v4;
                }
                a1 += 304;
                v24 = v7;
                if (!(v3 & 1))
                    goto LABEL_59f658;
            }
            v34 = a1.get_metadata(a4);
            if (v34)
            {
                uu_ls::display_size(&v15, uu_ls::get_block_size(v34[14], *((long long *)&v34[24]), v12, v1), v1);
                core::ptr::drop_in_place<alloc::string::String>(&v15);
                v4 = v17.max(v4);
            }
LABEL_59f658:
            uu_ls::display_dir_entry_size(&v15, a1, a3, a4);
            v23 = v18;
            v21 = v19;
            v22 = v20;
            v10 = v15.max(v10);
            v11 = v16.max(v11);
            v5 = v17.max(v5);
            if ((v2 & 1))
                v9 = (long long)a1[64].max(v9);
            v29 = 0;
            v30 = 0;
            v28 = 0;
            if (a2 != 1)
            {
                v30 = v21.max(v13);
                v29 = v22.max(v24);
                v28 = v23.max(v14).max(v30);
            }
        }
    }
    else if ((a3->field_f2 & 1))
    {
        v4 = 1;
        v5 = v1;
        v7 = 1;
        while (true)
        {
            do
            {
                v36 = v26;
                if ((v0 & 1))
                {
                    do
                    {
                        v37 = v36;
                        if (v37 == v27)
                        {
                            a0[0] = v7;
                            a0[1] = 1;
                            a0[2] = 1;
                            a0[3] = 1;
                            a0[4] = 1;
                            a0[5] = 1;
                            a0[6] = 1;
                            a0[7] = 1;
                            a0[8] = v4;
                            return v4;
                        }
                        v26 = v37 + 304;
                        v38 = v37.get_metadata(a4);
                        v36 = v26;
                    } while (!v38);
                    uu_ls::display_inode(&v15, v38->field_28);
                    core::ptr::drop_in_place<alloc::string::String>(&v15);
                    v7 = v17.max(v7);
                    v36 = v26 - 304;
                }
                else if (v36 != v27)
                {
                    v26 = v36 + 304;
                }
                else
                {
                    a0[0] = v7;
                    a0[1] = 1;
                    a0[2] = 1;
                    a0[3] = 1;
                    a0[4] = 1;
                    a0[5] = 1;
                    a0[6] = 1;
                    a0[7] = 1;
                    a0[8] = v4;
                    return v4;
                }
                v39 = v36.get_metadata(a4);
                v26 = v26;
            } while (!v39);
            uu_ls::display_size(&v15, uu_ls::get_block_size(v39[14], *((long long *)&v39[24]), v12, v6), v6);
            core::ptr::drop_in_place<alloc::string::String>(&v15);
            v4 = v17.max(v4);
        }
    }
    else
    {
        v7 = 1;
        if (!(v0 & 1))
        {
            a0[0] = 1;
            a0[1] = 1;
            a0[2] = 1;
            a0[3] = 1;
            a0[4] = 1;
            a0[5] = 1;
            a0[6] = 1;
            a0[7] = 1;
            a0[8] = 1;
            return 1;
        }
        while (true)
        {
            do
            {
                v41 = v26;
                if (v41 == v27)
                {
                    a0[0] = v7;
                    a0[1] = 1;
                    a0[2] = 1;
                    a0[3] = 1;
                    a0[4] = 1;
                    a0[5] = 1;
                    a0[6] = 1;
                    a0[7] = 1;
                    a0[8] = 1;
                    return 1;
                }
                v26 = v41 + 304;
                v42 = v41.get_metadata(a4);
                v26 = v26;
            } while (!v42);
            uu_ls::display_inode(&v15, v42->field_28);
            core::ptr::drop_in_place<alloc::string::String>(&v15);
            v7 = v17.max(v7);
        }
    }
}
