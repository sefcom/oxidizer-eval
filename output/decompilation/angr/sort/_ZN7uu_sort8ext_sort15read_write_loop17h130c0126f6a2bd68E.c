char uu_sort::ext_sort::read_write_loop(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9], unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9)
{
    unsigned long long v0;  // [bp-0x228]
    unsigned long long v1;  // [bp-0x220]
    char v2;  // [bp-0x218], Other Possible Types: unsigned long long
    char v3;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x208]
    unsigned long long v5;  // [bp-0x200]
    unsigned long long v6;  // [bp-0x1f8]
    void* v7;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x1e8]
    void* v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d8]
    unsigned long long v11;  // [bp-0x1d0]
    unsigned long long v12;  // [bp-0x1c8]
    void* v13;  // [bp-0x1c0]
    unsigned long long v14;  // [bp-0x1b8]
    void* v15;  // [bp-0x1b0]
    unsigned long v16;  // [bp-0x1a8]
    unsigned long long v17;  // [bp-0x198]
    unsigned long long v18;  // [bp-0x190]
    unsigned long long v19;  // [bp-0x188]
    unsigned long long v20;  // [bp-0x180]
    unsigned long long v21;  // [bp-0x178]
    char v22;  // [bp-0x170], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v23;  // [bp-0x168]
    char v24;  // [bp-0x160]
    unsigned long long v25;  // [bp-0xe0]
    unsigned long long v26;  // [bp-0xd8]
    char v27;  // [bp-0xd0]
    int v28;  // [bp-0xc0]
    unsigned long long v29;  // 4096
    unsigned long long v31;  // r15
    char v32;  // r15b
    unsigned long long v33;  // rax
    unsigned long long v34;  // r15
    char v35;  // al

    v17 = a8;
    v18 = a9;
    v22.next(a1);
    if (v22 == 2)
        core::option::unwrap_failed(&g_58c700); /* do not return */
    if (((char)v22 & 1))
    {
        *((unsigned long long *)&a0[8]) = v23;
        *((unsigned long long *)&a0[16]) = v1;
        *((unsigned long long *)a0) = 9223372036854775811;
    }
    else
    {
        v0 = v23;
        v1 = *((long long *)&v24);
        v13 = 0;
        v14 = 1;
        v15 = 0;
        if (a4 < 8000)
            v29 = a4;
        else
            v29 = 8000;
        v31 = v29;
        v22.new(v31);
        uu_sort::chunks::read(&v2, a8, a9, &v22, 1, a4, &v13, &v0, a1, a3, a5);
        if (v2)
        {
LABEL_4c42fe:
            *((unsigned long long *)&a0[8]) = v2;
            *((unsigned long long *)&a0[16]) = v3;
            *((unsigned long long *)a0) = 9223372036854775811;
            v32 = 1;
        }
        else if (v3)
        {
            v22.new(v31);
            uu_sort::chunks::read(&v2, a8, a9, &v22, 1, a4, &v13, &v0, a1, a3, a5);
            if (v2)
                goto LABEL_4c42fe;
            if (v3 != 1)
                goto LABEL_4c43f2;
            v5 = a8;
            v6 = a9;
            v7 = 0;
            v8 = 8;
            v9 = 0;
            v11 = 0x8000000000000000;
            *((int *)&v10) = (a5[6] == 0x8000000000000000 ? 0 : a5[7]);
            v16 = a5[8];
            while (true)
            {
                v22 = a6.recv(a7);
                if (!v22)
                {
                    core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v22);
                    *((unsigned long long *)&a0[16]) = 0;
                    *((int128_t *)a0) = *((int128_t *)&v7);
                    break;
                }
                v12 = v22;
                v22.next_file(a2);
                if (v23 != v11)
                {
                    v25 = v22;
                    v26 = v23;
                    memcpy(&v27, &v24, 16);
                    uu_sort::ext_sort::write(&v2, v12, &v25, v10, v16, a3);
                    if (v2 != v11)
                    {
                        v19 = v2;
                        v20 = v3;
                        v21 = v4;
                        v7.push(&v19, &g_58c718);
                        v28.recycle(v12);
                        if (a8 == 3)
                        {
                            core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v28);
                        }
                        else
                        {
                            uu_sort::chunks::read(&v22, a8, a9, &v28, 0, a5, &v13, &v0, a1, a3, a5);
                            if (!v22)
                            {
                                if (((char)v23 & 1))
                                    continue;
                                core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v5);
                                v5 = 3;
                            }
                            else
                            {
                                *((unsigned long long *)&a0[8]) = v22;
                                *((unsigned long long *)&a0[16]) = v23;
                                *((unsigned long long *)a0) = 9223372036854775811;
LABEL_4c46d7:
                                core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v7);
                                break;
                            }
                        }
                        a8 = 3;
                    }
                    else
                    {
                        *((unsigned long long *)&a0[8]) = v3;
                        *((unsigned long long *)&a0[16]) = v4;
LABEL_4c46c0:
                        *((unsigned long long *)a0) = 9223372036854775811;
                        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v12);
                        goto LABEL_4c46d7;
                    }
                }
                else
                {
                    *((int128_t *)&a0[8]) = *((int128_t *)&v24);
                    goto LABEL_4c46c0;
                }
            }
            core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v5);
        }
        else
        {
LABEL_4c43f2:
            v22 = a8;
            v23 = a9;
            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v22);
            v7 = a6.recv(a7);
            if (v7)
            {
                v2 = v7;
                v33 = a6.recv(a7);
                v22 = v33;
                if (v22)
                {
                    v34 = 9223372036854775810;
                }
                else
                {
                    v33 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v22);
                    v34 = 9223372036854775809;
                }
            }
            else
            {
                v33 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v7);
                v34 = 0x8000000000000000;
            }
            *((unsigned long long *)a0) = v34;
            *((unsigned long long *)&a0[8]) = v2;
            *((unsigned long long *)&a0[16]) = v33;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
        v35 = (char)core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v1);
        if (!v32)
            return v35;
    }
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v17);
}
