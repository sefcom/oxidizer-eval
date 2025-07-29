long long uu_sort::check::check(unsigned long long a0, unsigned long long a1, struct_2 *a2)
{
    void* v0;  // [bp-0x288], Other Possible Types: struct_0 *
    struct_0 *v1;  // [bp-0x278]
    unsigned long long v2;  // [bp-0x270]
    struct_0 *v3;  // [bp-0x268]
    unsigned long long v4;  // [bp-0x258]
    unsigned long long v5;  // [bp-0x238]
    unsigned long long v6;  // [bp-0x230]
    char v7;  // [bp-0x228]
    unsigned long long v8;  // [bp-0x218]
    unsigned long long v9;  // [bp-0x210]
    int v10;  // [bp-0x208], Other Possible Types: char
    unsigned long long v11;  // [bp-0x1f8]
    unsigned long long v12;  // [bp-0x1e8]
    struct_0 *v13;  // [bp-0x1e0]
    char v14;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v15;  // [bp-0x1d8]
    int v16;  // [bp-0x1d8]
    unsigned long long v17;  // [bp-0x1d0]
    unsigned long long v18;  // [bp-0x1c8]
    int v19;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v20;  // [bp-0x1b8]
    unsigned long long v21;  // [bp-0x1b0]
    unsigned long long v22;  // [bp-0x1a8]
    char v23;  // [bp-0x1a0]
    unsigned long long v24;  // [bp-0x118]
    unsigned long long v25;  // [bp-0x110]
    unsigned long long v26;  // [bp-0x100]
    unsigned long long v27;  // [bp-0xf8]
    unsigned long long v28;  // [bp-0xf0]
    unsigned long long v29;  // [bp-0xe8]
    unsigned long long v30;  // [bp-0xe0]
    unsigned long long v31;  // [bp-0xd8]
    unsigned long long v32[2];  // [bp-0xd0], Other Possible Types: char
    unsigned long long v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xc0]
    char v35;  // [bp-0xa8]
    char v37;  // r15b
    unsigned long long v38;  // rcx
    unsigned int v39;  // ebp
    void* v40;  // r13
    char *v41;  // rdi
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdx
    struct_0 *v44;  // rax
    struct_0 *v45;  // rcx
    unsigned long long v46;  // rdi
    unsigned long long v47[2];  // r12
    unsigned long long v48[3];  // rax
    unsigned long long v49[2];  // rdx
    char v50;  // al
    unsigned long long v51;  // rbx
    char v52;  // al

    v37 = -(a2->field_84);
    uu_sort::open(&v14, a0, a1);
    if ((v14 & 1))
        return v17;
    v5 = v17;
    v6 = v18;
    std::sync::mpmc::sync_channel(&v14, 2, v18, v38);
    memcpy(&v7, &v14, 16);
    v26 = v18;
    v27 = v19;
    std::sync::mpmc::sync_channel(&v14, 2, a2, v38);
    v28 = v14;
    v29 = v17;
    v2 = v18;
    v30 = v2;
    v12 = v19;
    v31 = v12;
    v32.clone(a2);
    v24 = v5;
    v25 = v6;
    v14 = v26;
    v17 = v27;
    v18 = v28;
    v19 = v29;
    memcpy(&v20, &v32, 160);
    v34 = 0x8000000000000000;
    v32[0] = 0;
    v35 = 0;
    v10.spawn_unchecked(&v32, &v14);
    v32.expect(&v10);
    v39 = 0;
    ::0x527e50::core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v32);
    do
    {
        v39 = v39.forward_unchecked();
        v14.new((a2->field_68 < 0x19000 ? a2->field_68 : 0x19000));
        v32.send(&v7, &v14);
        core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v32);
    } while (v39 < 2);
    v0 = 0;
    v8 = v2;
    v9 = v12;
    v40 = 0;
    v41 = &v8;
    v2 = &g_671688;
    while (true)
    {
LABEL_529a4a:
        v44 = v41.next(v42, v43);
        if (!v44)
        {
            core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&v8);
            core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v0);
            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v7);
            return 0;
        }
        v1 = v44;
        v40 += 1;
        v45 = v0;
        v13 = v45;
        v0 = 0;
        if (v45)
        {
            v3 = v45;
            if (v45->field_28)
            {
                v46 = 24 * v45->field_28 + (char *)v45->field_20;
                if (v46 != 24)
                {
                    if (v44->field_28)
                    {
                        v47 = v44->field_20;
                        if ((char)uu_sort::compare_by(v46 - 24, v47, a2, v45 + 1, v44 + 1) <= v37)
                        {
                            v14.recycle(v3);
                            v32.send(&v7, &v14);
                            core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v32);
                            goto LABEL_529b1d;
                        }
                        else
                        {
                            v14.to_owned(a0, a1);
                            v11 = v18;
                            memcpy(&v10, &v14, 16);
                            v32.to_vec(v47[0], v47[1]);
                            v21 = v34;
                            *((int128_t *)&v19) = *((int128_t *)&v32);
                            v52 = a2->field_86;
                            v18 = v11;
                            v16 = v10;
                            v22 = v40;
                            v23 = v52;
                            v51 = v14.new();
                            ::0x5280e0::core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v3);
LABEL_529c55:
                            ::0x5280e0::core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v1);
                            core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&v8);
                            core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v0);
                            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v7);
                            break;
                        }
                    }
                    else
                    {
                        v2 = &g_6716a0;
                    }
                }
            }
            core::option::unwrap_failed(v2); /* do not return */
        }
        core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v13);
LABEL_529b1d:
        v32[0] = v1->field_20;
        v33 = (char *)v1->field_20 + 24 * v1->field_28;
        v34 = 0;
        do
        {
            if (!v32.next())
            {
                core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v0);
                v0 = v1;
                goto LABEL_529a4a;
            }
            v40 += 1;
        } while ((char)uu_sort::compare_by(v48, v49, a2, v1 + 1, v1 + 1) <= v37);
        v14.to_owned(a0, a1);
        v4 = v18;
        memcpy(&v3, &v14, 16);
        v10.to_vec(v49[0], v49[1]);
        v21 = v11;
        v19 = v10;
        v50 = a2->field_86;
        v18 = v4;
        *((int128_t *)&v15) = *((int128_t *)&v3);
        v22 = v40;
        v23 = v50;
        v51 = v14.new();
        goto LABEL_529c55;
    }
    return v51;
}
