long long uu_ls::calculate_padding_collection(unsigned long long a0[9], unsigned long long a1, unsigned long a2, struct_1 *a3, unsigned long long a4)
{
    char v0;  // [bp-0xf4]
    char v1;  // [bp-0xf3]
    char v2;  // [bp-0xf2]
    char v3;  // [bp-0xf1]
    unsigned long long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    unsigned int v10;  // [bp-0xbc]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    unsigned long v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    unsigned long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x40]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v27;  // r12
    unsigned long long v28;  // r13
    unsigned long long v29;  // rax
    struct_0 *v30;  // rax
    struct_0 *v31;  // r13
    struct_2 *v32;  // rax
    struct_0 *v33;  // rax
    unsigned int v34[25];  // rax

    v24 = a1;
    v25 = a2 * 304 + a1;
    v3 = a3->field_f1;
    v2 = a3->field_f2;
    v17 = a3->field_d8;
    v1 = a3->field_100;
    v0 = a3->field_f3;
    v8 = 1;
    v10 = a3->field_f9;
    v27 = 1;
    v28 = 1;
    v29 = 1;
    v4 = 1;
    v7 = 1;
    v6 = 1;
    v5 = 1;
    v9 = 1;
    while (true)
    {
        do
        {
            v13 = v29;
            v11 = v28;
            v12 = v27;
            do
            {
                if ((v3 & 1))
                {
                    do
                    {
                        v30 = v24.next();
                        if (!v30)
                            goto LABEL_530ec3;
                        v31 = v30;
                        v32 = v30.get_metadata(a4);
                    } while (!v32);
                    uu_ls::display_inode(&v18, v32->field_28);
                    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v18);
                    v9 = ::0x51bc80::core::cmp::max_by(v20, v9);
                    if (!(v2 & 1))
                        continue;
                }
                else
                {
                    v33 = v24.next();
                    if (!v33)
                    {
LABEL_530ec3:
                        a0[0] = v9;
                        a0[1] = v5;
                        a0[2] = v6;
                        a0[3] = v7;
                        a0[4] = v4;
                        a0[5] = v13;
                        a0[6] = v11;
                        a0[7] = v12;
                        a0[8] = v8;
                        return v8;
                    }
                    v31 = v33;
                    if (!(v2 & 1))
                        continue;
                }
                v34 = v31.get_metadata(a4);
                if (v34)
                {
                    uu_ls::display_size(&v18, uu_ls::get_block_size(v34[14], *((long long *)&v34[24]), v17, v10), v10);
                    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v18);
                    v8 = ::0x51bc80::core::cmp::max_by(v20, v8);
                }
            } while (v1 != 1);
            v14 = v31->field_40;
            uu_ls::display_dir_entry_size(&v18, v31, a3, a4);
            v15 = v22;
            v16 = v23;
            v5 = ::0x51bc80::core::cmp::max_by(v18, v5);
            v6 = ::0x51bc80::core::cmp::max_by(v19, v6);
            v7 = ::0x51bc80::core::cmp::max_by(v20, v7);
            if ((v0 & 1))
                v4 = ::0x51bc80::core::cmp::max_by(v14, v4);
            v27 = 0;
            v28 = 0;
            v29 = 0;
        } while (a2 == 1);
        v28 = ::0x51bc80::core::cmp::max_by(v15, v11);
        v27 = ::0x51bc80::core::cmp::max_by(v16, v12);
        v29 = ::0x51bc80::core::cmp::max_by(::0x51bc80::core::cmp::max_by(v21, v13), v28);
    }
}
