long long uu_sort::check::check(unsigned long long a0, unsigned long long a1, struct_2 *a2)
{
    void* v0;  // [bp-0x298], Other Possible Types: struct_0 *
    unsigned long long v1;  // [bp-0x288]
    unsigned long long v2;  // [bp-0x280]
    int v3;  // [bp-0x278], Other Possible Types: char
    unsigned long long v4;  // [bp-0x268]
    unsigned long long v5;  // [bp-0x258]
    unsigned long long v6;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x238]
    unsigned long long v8;  // [bp-0x230]
    unsigned long long v9;  // [bp-0x228]
    struct_0 *v10;  // [bp-0x220]
    struct_0 *v11;  // [bp-0x218]
    unsigned long long v12;  // [bp-0x208]
    unsigned long long v13;  // [bp-0x200]
    unsigned long long v14;  // [bp-0x1f8]
    unsigned long long v15;  // [bp-0x1f0]
    unsigned long long v16;  // [bp-0x1f0]
    unsigned long long v17;  // [bp-0x1e8]
    struct_0 *v18;  // [bp-0x1e0]
    char v19;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v20;  // [bp-0x1d8]
    int v21;  // [bp-0x1d8]
    unsigned long long v22;  // [bp-0x1d0]
    unsigned long long v23;  // [bp-0x1c8]
    int v24;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v25;  // [bp-0x1b8]
    unsigned long long v26;  // [bp-0x1b0]
    void* v27;  // [bp-0x1a8]
    char v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x118]
    unsigned long long v30;  // [bp-0x110]
    unsigned long long v31;  // [bp-0x100]
    unsigned long long v32;  // [bp-0xf8]
    unsigned long long v33;  // [bp-0xf0]
    unsigned long long v34;  // [bp-0xe8]
    unsigned long long v35;  // [bp-0xe0]
    unsigned long long v36;  // [bp-0xd8]
    unsigned long long v37[2];  // [bp-0xd0], Other Possible Types: char
    unsigned long long v38;  // [bp-0xc8]
    unsigned long long v39;  // [bp-0xc0]
    char v40;  // [bp-0xa8]
    char v42;  // r12b
    unsigned long long v43;  // rbx
    struct_0 *v44;  // rbx
    void* v45;  // r15
    struct_0 *v48;  // rbx
    struct_0 *v49;  // r14
    unsigned long long v50;  // rdi
    unsigned long long v51[2];  // rbp
    unsigned long long v52;  // rax
    unsigned long long v53[2];  // rdx
    char v54;  // al
    void* v55;  // rbx
    char v56;  // al

    v42 = -(a2->field_84);
    uu_sort::open(&v19, a0, a1);
    if ((v19 & 1))
        return v6;
    v6 = v22;
    v7 = v23;
    std::sync::mpmc::sync_channel(&v19);
    v2 = v19;
    v13 = v2;
    v1 = v22;
    v14 = v1;
    v31 = v23;
    v32 = v24;
    std::sync::mpmc::sync_channel(&v19, 2, a2, v1);
    v33 = v19;
    v34 = v22;
    v9 = v23;
    v35 = v9;
    v8 = v24;
    v36 = v8;
    v37.clone(a2);
    v29 = v6;
    v30 = v7;
    v19 = v31;
    v22 = v32;
    v23 = v33;
    v24 = v34;
    memcpy(&v25, &v37, 160);
    v39 = 0x8000000000000000;
    v37[0] = 0;
    v40 = 0;
    v3.spawn_unchecked(&v37, &v19);
    v37.expect(&v3);
    core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v37);
    v43 = (a2->field_68 < 0x19000 ? a2->field_68 : 0x19000);
    v19.new(v43);
    v37.send(v2, v1, &v19);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v37);
    v19.new(v43);
    v37.send(v2, v1, &v19);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v37);
    v0 = 0;
    v15 = v9;
    v17 = v8;
    v44 = 0;
    v5 = &g_58c3f8;
    v45 = 0;
    v16 = v15;
    while (true)
    {
LABEL_4c0b99:
        v48 = v44;
        v49 = v16.next(v17);
        if (!v49)
        {
            core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&v15);
            core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v13);
            v55 = 0;
            break;
        }
        v10 = v49;
        v45 += 1;
        v18 = v48;
        v0 = 0;
        if (v48)
        {
            v11 = v48;
            if (v48->field_28)
            {
                v50 = 24 * v48->field_28 + (char *)v48->field_20;
                if (v50 != 24)
                {
                    if (v49->field_28)
                    {
                        v51 = v49->field_20;
                        if ((char)uu_sort::compare_by(v50 - 24, v51, a2, v48 + 1, v49 + 1) <= v42)
                        {
                            v19.recycle(v48);
                            v37.send(v2, v1, &v19);
                            core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v37);
                            goto LABEL_4c0c6d;
                        }
                        else
                        {
                            v19.to_vec(a0, a1);
                            v4 = v23;
                            memcpy(&v3, &v19, 16);
                            v37.to_vec(v51[0], v51[1]);
                            v26 = v39;
                            *((int128_t *)&v24) = *((int128_t *)&v37);
                            v56 = a2->field_86;
                            v23 = v4;
                            v21 = v3;
                            v27 = v45;
                            v28 = v56;
                            v55 = v19.new();
                            core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v11);
LABEL_4c0d9b:
                            core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v10);
                            core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&v15);
                            core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
                            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v13);
                            break;
                        }
                    }
                    else
                    {
                        v5 = &g_58c410;
                    }
                }
            }
            core::option::unwrap_failed(v5); /* do not return */
        }
        core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v18);
LABEL_4c0c6d:
        v37[0] = v49->field_20;
        v38 = (char *)v49->field_20 + 24 * v49->field_28;
        v39 = 0;
        do
        {
            if (!v37.next())
            {
                core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
                v0 = v49;
                v44 = v49;
                v16 = v9;
                v17 = v8;
                goto LABEL_4c0b99;
            }
            v45 += 1;
        } while ((char)uu_sort::compare_by(v52, v53, a2, v49 + 1, v49 + 1) <= v42);
        v19.to_vec(a0, a1);
        v12 = v23;
        memcpy(&v11, &v19, 16);
        v3.to_vec(v53[0], v53[1]);
        v26 = v4;
        v24 = v3;
        v54 = a2->field_86;
        v23 = v12;
        *((int128_t *)&v20) = *((int128_t *)&v11);
        v27 = v45;
        v28 = v54;
        v55 = v19.new();
        goto LABEL_4c0d9b;
    }
    return v55;
}
