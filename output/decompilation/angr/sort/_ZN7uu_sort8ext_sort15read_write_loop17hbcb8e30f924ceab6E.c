char uu_sort::ext_sort::read_write_loop(struct_0 *a0, unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9], unsigned long long a6, unsigned int a7)
{
    unsigned long long v0;  // [bp-0x228]
    unsigned long v1;  // [bp-0x220]
    unsigned long long v2;  // [bp-0x218]
    unsigned long long v3;  // [bp-0x210]
    int v4;  // [bp-0x208], Other Possible Types: unsigned long long
    int v5;  // [bp-0x208]
    void* v6;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x1f0]
    void* v8;  // [bp-0x1e8]
    unsigned long long v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d8]
    int v11;  // [bp-0x1d0], Other Possible Types: char
    void* v12;  // [bp-0x1c0]
    unsigned long long v13;  // [bp-0x1b8]
    void* v14;  // [bp-0x1b0]
    unsigned long v15;  // [bp-0x1a8]
    unsigned long long v16;  // [bp-0x198]
    unsigned long long v17;  // [bp-0x190]
    unsigned long long v18;  // [bp-0x188]
    unsigned long long v19;  // [bp-0x180]
    unsigned long long v20;  // [bp-0x178]
    unsigned long long v21;  // [bp-0x170]
    unsigned long long v22;  // [bp-0x168]
    char v23;  // [bp-0x160]
    int v24;  // [bp-0x150], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v25;  // [bp-0x148]
    char v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0xc0]
    unsigned long long v28;  // [bp-0xc0]
    unsigned long long v29;  // [bp-0xb8]
    int v30;  // [bp-0xb0]
    unsigned long long v31;  // 4096
    unsigned long long v33;  // rbp
    unsigned int v34;  // ebx
    unsigned long v35;  // r13
    char *v36;  // r12
    unsigned long v37;  // r13
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rsi
    char v41;  // bpl
    unsigned long long v42;  // rax
    unsigned long long v43;  // rcx
    char v44;  // al

    v10 = a1;
    memcpy(&v11, &a7, 16);
    v24.next(a1);
    switch (v24)
    {
    case 2:
        core::option::unwrap_failed(&g_6737e0); /* do not return */
    case 0:
        v2 = v25;
        v3 = *((long long *)&v26);
        v12 = 0;
        v13 = 1;
        v14 = 0;
        if (a4 < 8000)
            v31 = a4;
        else
            v31 = 8000;
        v33 = v31;
        v34 = 0;
        v1 = a3;
        do
        {
            v34 = v34.forward_unchecked();
            v24.new(v33);
            uu_sort::chunks::read(&v27, &v11, &v24, 1, a4, &v12, &v2, &v10, v1, a5);
            if (v27)
            {
                a0->field_8 = v27;
                *((unsigned long long *)&a0[1].field_0) = v29;
                *((unsigned long long *)&a0->field_0) = 9223372036854775811;
                v41 = 1;
                goto LABEL_551201;
            }
            if (!(char)v29)
            {
                v24 = v11;
                ::0x54ed60::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v24);
                v6 = a6.recv(a1, a2);
                if (v6)
                {
                    v28 = v6;
                    v42 = a6.recv(a1, a2);
                    v24 = v42;
                    if (v24)
                    {
                        v43 = 9223372036854775810;
                    }
                    else
                    {
                        v42 = (unsigned long long)::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v24);
                        v43 = 9223372036854775809;
                    }
                }
                else
                {
                    v42 = (unsigned long long)::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v6);
                    v43 = 0x8000000000000000;
                }
                *((unsigned long long *)&a0->field_0) = v43;
                a0->field_8 = v28;
                *((unsigned long long *)&a0[1].field_0) = v42;
                goto LABEL_5511ff;
            }
        } while (v34 < 2);
        v4 = v11;
        v6 = 0;
        v7 = 8;
        v8 = 0;
        *((int *)&v9) = (a5[6] == 0x8000000000000000 ? 0 : a5[7]);
        v35 = a5[8];
        v36 = &v6;
        v15 = a5[8];
        v37 = v35;
        while (true)
        {
            v24 = a6.recv(v39, v38);
            if (!v24)
            {
                ::0x54e670::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v24);
                *((unsigned long long *)&a0[1].field_0) = 0;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v6);
                break;
            }
            v0 = v24;
            v24.next_file(a2);
            if (v25 != 0x8000000000000000)
            {
                v21 = v24;
                v22 = v25;
                memcpy(&v23, &v26, 16);
                uu_sort::ext_sort::write(&v27, v0, &v21, v9, v37, v1);
                if (v27 != 0x8000000000000000)
                {
                    v18 = v27;
                    v19 = v29;
                    v20 = (long long)v30;
                    v36.push(&v18);
                    v27.recycle(v0);
                    if ((int)v4 == 3)
                        ::0x54e8a0::core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v27);
                    memcpy(&v24, &v27, 144);
                    uu_sort::chunks::read(&v16, &v4, &v24, 0, a4, &v12, &v2, &v10, v1, a5);
                    if (!v16)
                    {
                        v37 = v15;
                        if (!((char)v17 & 1))
                        {
                            core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v4);
                            v4 = 3;
                            v4 = v5;
                            v37 = v15;
                        }
                    }
                    else
                    {
                        a0->field_8 = v16;
                        *((unsigned long long *)&a0[1].field_0) = v17;
                        *((unsigned long long *)&a0->field_0) = 9223372036854775811;
LABEL_5511c3:
                        ::0x54ed20::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v6);
                        break;
                    }
                }
                else
                {
                    a0->field_8 = v29;
                    *((unsigned long long *)&a0[1].field_0) = v20;
                    *((unsigned long long *)&a0->field_0) = 9223372036854775811;
LABEL_5511b9:
                    ::0x54e7e0::core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v0);
                    goto LABEL_5511c3;
                }
            }
            else
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v26);
                *((unsigned long long *)&a0->field_0) = 9223372036854775811;
                goto LABEL_5511b9;
            }
        }
        core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v4);
LABEL_5511ff:
LABEL_551201:
        ::0x54e7f0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
        v44 = (char)::0x54e6b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v2, v3);
        if (!v41)
            return v44;
        break;
    default:
        a0->field_8 = v25;
        *((unsigned long long *)&a0[1].field_0) = v3;
        *((unsigned long long *)&a0->field_0) = 9223372036854775811;
        break;
    }
    return ::0x54ed60::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v11);
}
