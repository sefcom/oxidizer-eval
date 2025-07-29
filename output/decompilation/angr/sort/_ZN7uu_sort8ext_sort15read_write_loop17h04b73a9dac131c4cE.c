char uu_sort::ext_sort::read_write_loop(struct_0 *a0, unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9], unsigned long long a6, unsigned int a7)
{
    unsigned long long v0;  // [bp-0x248]
    unsigned long v1;  // [bp-0x238]
    unsigned long long v2;  // [bp-0x230]
    unsigned long long v3;  // [bp-0x228]
    int v4;  // [bp-0x220], Other Possible Types: unsigned long long
    int v5;  // [bp-0x220]
    void* v6;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x208]
    void* v8;  // [bp-0x200]
    unsigned long long v9;  // [bp-0x1f8]
    unsigned long long v10;  // [bp-0x1f0]
    int v11;  // [bp-0x1e8], Other Possible Types: char
    void* v12;  // [bp-0x1d8]
    unsigned long long v13;  // [bp-0x1d0]
    void* v14;  // [bp-0x1c8]
    unsigned long v15;  // [bp-0x1c0]
    unsigned long v16;  // [bp-0x1c0]
    unsigned long long v17;  // [bp-0x1b0]
    unsigned long long v18;  // [bp-0x1a8]
    char v19;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x198]
    char v21;  // [bp-0x190]
    int v22;  // [bp-0x180], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v23;  // [bp-0x178]
    void* v24;  // [bp-0x170]
    char v25;  // [bp-0x168]
    unsigned long long v26;  // [bp-0xf0]
    unsigned long long v27;  // [bp-0xe8]
    unsigned long long v28;  // [bp-0xe0]
    char v29;  // [bp-0xd8]
    unsigned long long v30;  // [bp-0xc0]
    unsigned long long v31;  // [bp-0xc0]
    unsigned long long v32;  // [bp-0xb8]
    int v33;  // [bp-0xb0]
    unsigned long long v34;  // 4096
    unsigned long long v36;  // rbp
    unsigned int v37;  // ebx
    struct_1 *v38;  // r12
    struct_1 *v39;  // r13
    char *v40;  // rbx
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rsi
    char v43;  // bpl
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx
    char v46;  // al

    v10 = a1;
    memcpy(&v11, &a7, 16);
    v22.next(a1);
    switch (v22)
    {
    case 2:
        core::option::unwrap_failed(&g_6737e0); /* do not return */
    case 0:
        v2 = v23;
        v3 = v24;
        v12 = 0;
        v13 = 1;
        v14 = 0;
        if (a4 < 8000)
            v34 = a4;
        else
            v34 = 8000;
        v36 = v34;
        v37 = 0;
        v1 = a3;
        do
        {
            v37 = v37.forward_unchecked();
            v22.new(v36);
            uu_sort::chunks::read(&v30, &v11, &v22, 1, a4, &v12, &v2, &v10, v1, a5);
            if (v30)
            {
                a0->field_8 = v30;
                *((unsigned long long *)&a0[1].field_0) = v32;
                *((unsigned long long *)&a0->field_0) = 9223372036854775811;
                v43 = 1;
                goto LABEL_550c31;
            }
            if (!(char)v32)
            {
                v22 = v11;
                ::0x54ed60::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v22);
                v6 = a6.recv(a1, a2);
                if (v6)
                {
                    v31 = v6;
                    v44 = a6.recv(a1, a2);
                    v22 = v44;
                    if (v22)
                    {
                        v45 = 9223372036854775810;
                    }
                    else
                    {
                        v44 = (unsigned long long)::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v22);
                        v45 = 9223372036854775809;
                    }
                }
                else
                {
                    v44 = (unsigned long long)::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v6);
                    v45 = 0x8000000000000000;
                }
                *((unsigned long long *)&a0->field_0) = v45;
                a0->field_8 = v31;
                *((unsigned long long *)&a0[1].field_0) = v44;
                goto LABEL_550c2f;
            }
        } while (v37 < 2);
        v4 = v11;
        v6 = 0;
        v7 = 8;
        v8 = 0;
        *((int *)&v9) = (a5[6] == 0x8000000000000000 ? 0 : a5[7]);
        v38 = &v25;
        v39 = &v29;
        v40 = &v19;
        v15 = a5[8];
        v16 = v15;
        while (true)
        {
            v22 = a6.recv(v42, v41);
            if (!v22)
            {
                ::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v22);
                *((unsigned long long *)&a0[1].field_0) = 0;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v6);
                break;
            }
            v0 = v22;
            v30.next_file(a2);
            if (v32 != 0x8000000000000000)
            {
                v19 = v30;
                v20 = v32;
                memcpy(&v21, &v33, 16);
                uu_sort::ext_sort::write(&v22, v0, v40, v9, v16, v1);
                if (v22 != 0x8000000000000000)
                {
                    v39->field_10 = v38->field_10;
                    v39->field_0 = v38->field_0;
                    v26 = v22;
                    v27 = v23;
                    v28 = v24;
                    v6.push(&v26);
                    v30.recycle(v0);
                    if ((int)v4 == 3)
                        ::0x54e8a0::core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v30);
                    memcpy(&v22, &v30, 144);
                    uu_sort::chunks::read(&v17, &v4, &v22, 0, a4, &v12, &v2, &v10, v1, a5);
                    if (!v17)
                    {
                        v16 = v15;
                        if (!((char)v18 & 1))
                        {
                            core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v4);
                            v4 = 3;
                            v4 = v5;
                            v16 = v15;
                        }
                    }
                    else
                    {
                        a0->field_8 = v17;
                        *((unsigned long long *)&a0[1].field_0) = v18;
                        *((unsigned long long *)&a0->field_0) = 9223372036854775811;
LABEL_550bf3:
                        ::0x54ee30::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v6);
                        break;
                    }
                }
                else
                {
                    a0->field_8 = v23;
                    *((void* *)&a0[1].field_0) = v24;
                    *((unsigned long long *)&a0->field_0) = 9223372036854775811;
LABEL_550be9:
                    ::0x54e7e0::core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v0);
                    goto LABEL_550bf3;
                }
            }
            else
            {
                *((int128_t *)&a0->field_8) = (int128_t)v33;
                *((unsigned long long *)&a0->field_0) = 9223372036854775811;
                goto LABEL_550be9;
            }
        }
        core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v4);
LABEL_550c2f:
LABEL_550c31:
        ::0x54e7f0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
        v46 = (char)::0x54e6b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v2, v3);
        if (!v43)
            return v46;
        break;
    default:
        a0->field_8 = v23;
        *((void* *)&a0[1].field_0) = v24;
        *((unsigned long long *)&a0->field_0) = 9223372036854775811;
        break;
    }
    return ::0x54ed60::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v11);
}
