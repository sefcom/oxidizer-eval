long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x270]
    unsigned long long v1;  // [bp-0x268]
    unsigned long long v2;  // [bp-0x260]
    unsigned long long v3;  // [bp-0x258]
    void* v4;  // [bp-0x250], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x248]
    void* v6;  // [bp-0x240]
    struct_0 *v7;  // [bp-0x238]
    int v8;  // [bp-0x228], Other Possible Types: char
    unsigned long long v9;  // [bp-0x218]
    unsigned long long v10;  // [bp-0x210]
    void* v11;  // [bp-0x208]
    unsigned long long v12;  // [bp-0x200]
    unsigned long long v13;  // [bp-0x1f8]
    unsigned long long v14;  // [bp-0x1f0]
    unsigned long long v15;  // [bp-0x1e8]
    void* v16;  // [bp-0x1e0]
    int v17;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v18;  // [bp-0x1c8]
    char v19;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v20;  // [bp-0x1c0]
    unsigned long long v21;  // [bp-0x1c0]
    unsigned long long v22;  // [bp-0x1c0]
    int v23;  // [bp-0x1c0]
    unsigned long long v24;  // [bp-0x1c0]
    unsigned long long v25;  // [bp-0x1b8]
    void* v26;  // [bp-0x1b0]
    int v27;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v28;  // [bp-0x1b0]
    unsigned long long v29;  // [bp-0x1b0]
    void* v30;  // [bp-0x1a8], Other Possible Types: unsigned long long
    void* v31;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x198]
    unsigned long long v33;  // [bp-0x190]
    int v34;  // [bp-0xf8], Other Possible Types: char
    int v35;  // [bp-0xe8]
    void* v36;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v37;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v38;  // [bp-0xb8]
    char v39;  // [bp-0xb0]
    unsigned long long v41;  // rdx
    void* v42;  // rbp
    unsigned long long v43;  // rbx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rsi
    int v46;  // xmm2

    std::sync::mpmc::channel(&v19);
    memcpy(&v8, &v19, 16);
    memcpy(&v17, &v27, 16);
    v19.size_hint(a1, a2);
    v9 = v19.with_capacity_in(8, 56, &g_670fc0);
    v10 = v41;
    v11 = 0;
    v19.size_hint(a1, a2);
    v14 = v19.with_capacity_in(8, 16, &g_670fd8);
    v15 = v41;
    v16 = 0;
    v34.enumerate(a1, a2);
    while (true)
    {
        v0.next(&v34);
        if ((int)v1 == 2)
            break;
        std::sync::mpmc::sync_channel(&v19, 2, a2, a3);
        memcpy(&v4, &v19, 16);
        v14.push(a1, a2);
        if (v1)
        {
            *((unsigned long long *)&v7->padding_1[7]) = v2;
            *((unsigned long long *)&v7->field_10) = v3;
            *((unsigned long long *)&v7->field_0) = 2;
            ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v4);
            core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v14);
            ::0x514ba0::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>>(&v9);
            ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v17);
            return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v8);
        }
        *((int128_t *)&v20) = *((int128_t *)&v4);
        v26 = 0;
        v30 = 1;
        v31 = 0;
        v32 = v2;
        v33 = v3;
        v9.push(&v19);
        v36.new(0x2000);
        v21 = v0;
        memcpy(&v25, &v36, 144);
        v36.send(&v8, &v21);
        v36.unwrap(&g_671068);
    }
    if (v11)
    {
        v42 = 0;
        do
        {
            v43 = v42.forward_unchecked();
            v36.new(0x2000);
            v22 = v42;
            memcpy(&v25, &v36, 144);
            v36.send(&v8, &v22);
            v36.unwrap(&g_671020);
            v42 = v43;
        } while (v43 < v11);
    }
    v36.clone(a3);
    v23 = v17;
    *((int128_t *)&v27) = *((int128_t *)&v9);
    v31 = v11;
    memcpy(&v32, &v36, 160);
    v37 = 0x8000000000000000;
    v36 = 0;
    v39 = 0;
    v0.spawn_unchecked(&v36, &v19);
    v34.expect(&v0);
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v36.into_iter(&v14);
    v38 = 0;
    v0.next(&v36);
    v44 = v1;
    if (v1 != 3)
    {
        do
        {
            v12 = v44;
            v13 = v2;
            v18 = v12.recv(v45, a2);
            if (v18)
            {
                v24 = 1;
                v25 = 1;
                v28 = v18;
                *((double *)&v29) = v24.new();
                v30 = 0;
                *((int128_t *)&v23) = *((int128_t *)&v12);
                v31 = v0;
                v4.push(&v24);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v18);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v12);
            }
            v0.next(&v36);
            v44 = v1;
        } while (v1 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v36);
    v37 = 0;
    memcpy(&v36, &v4, 16);
    v19.from_vec_cmp_raw(&v36, a3, 1);
    *((void*)&v7->field_0) = v34;
    *((void*)&v7->field_10) = v35;
    v46 = (int128_t)v27;
    v7->field_30 = (int128_t)v23;
    *((void*)&v7->field_40) = v46;
    *((void*)&v7->field_20) = v8;
    v7->field_50 = 0;
    return a0;
}
