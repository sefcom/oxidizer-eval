long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1[4], unsigned long long a2)
{
    void* v0;  // [bp-0x280], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x278]
    void* v2;  // [bp-0x270]
    char v3;  // [bp-0x268]
    unsigned long long v4;  // [bp-0x268]
    char v5;  // [bp-0x260]
    unsigned long long v6;  // [bp-0x260]
    unsigned long long v7;  // [bp-0x258]
    unsigned long long v8;  // [bp-0x250]
    struct_0 *v9;  // [bp-0x248]
    int v10;  // [bp-0x238], Other Possible Types: char
    unsigned long long v11;  // [bp-0x228]
    unsigned long long v12;  // [bp-0x220]
    void* v13;  // [bp-0x218]
    char v14;  // [bp-0x210]
    unsigned long long v15;  // [bp-0x210]
    unsigned long long v16;  // [bp-0x208]
    int v17;  // [bp-0x200]
    unsigned long long v18;  // [bp-0x1e8]
    unsigned long long v19;  // [bp-0x1e0]
    unsigned long long v20;  // [bp-0x1d8]
    unsigned long long v21;  // [bp-0x1d0]
    void* v22;  // [bp-0x1c8]
    unsigned long long v23[4];  // [bp-0x1c0]
    int v24;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v25;  // [bp-0x1a8]
    char v26;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x1a0]
    unsigned long long v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x1a0]
    int v30;  // [bp-0x1a0]
    unsigned long long v31;  // [bp-0x1a0]
    unsigned long long v32;  // [bp-0x198]
    void* v33;  // [bp-0x190]
    int v34;  // [bp-0x190], Other Possible Types: char
    unsigned long long v35;  // [bp-0x190]
    unsigned long long v36;  // [bp-0x190]
    void* v37;  // [bp-0x188], Other Possible Types: unsigned long long
    void* v38;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x178]
    unsigned long long v40;  // [bp-0x170]
    void* v41;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v42;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v43;  // [bp-0xb8]
    char v44;  // [bp-0xb0]
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    void* v49;  // rbp
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rsi
    int v53;  // xmm2
    int v54;  // xmm2

    v23[0] = a1;
    std::sync::mpmc::channel(&v26);
    memcpy(&v10, &v26, 16);
    memcpy(&v24, &v34, 16);
    v26.size_hint(a1[1], a1[3]);
    v11 = v26.with_capacity_in(8, 56, &g_670fc0);
    v12 = v46;
    v13 = 0;
    v26.size_hint(a1[1], a1[3]);
    v20 = v26.with_capacity_in(8, 16, &g_670fd8);
    v21 = v46;
    v22 = 0;
    v14.enumerate(a1);
    v3.next(&v14);
    if (*((int *)&v5) != 2)
    {
        do
        {
            std::sync::mpmc::sync_channel(&v26, 2, v47, v48);
            memcpy(&v0, &v26, 16);
            v20.push(a1, a2);
            if (v6)
            {
                *((unsigned long long *)&v9->padding_1[7]) = v7;
                *((unsigned long long *)&v9->field_10) = v8;
                *((unsigned long long *)&v9->field_0) = 2;
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v0);
                core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v14);
                core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v20);
                ::0x514ba0::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>>(&v11);
                ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v24);
                return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v10);
            }
            *((int128_t *)&v27) = *((int128_t *)&v0);
            v33 = 0;
            v37 = 1;
            v38 = 0;
            v39 = v7;
            v40 = v8;
            v11.push(&v26);
            v41.new(0x2000);
            v28 = v4;
            memcpy(&v32, &v41, 144);
            v41.send(&v10, &v28);
            v41.unwrap(&g_671068);
            v3.next(&v14);
        } while (*((int *)&v5) != 2);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v14);
    if (v13)
    {
        v49 = 0;
        do
        {
            v50 = v49.forward_unchecked();
            v41.new(0x2000);
            v29 = v49;
            memcpy(&v32, &v41, 144);
            v41.send(&v10, &v29);
            v41.unwrap(&g_671020);
            v49 = v50;
        } while (v50 < v13);
    }
    v41.clone(a2);
    v30 = v24;
    *((int128_t *)&v34) = *((int128_t *)&v11);
    v38 = v13;
    memcpy(&v39, &v41, 160);
    v42 = 0x8000000000000000;
    v41 = 0;
    v44 = 0;
    v14.spawn_unchecked(&v41, &v26);
    v3.expect(&v14);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v41.into_iter(&v20);
    v43 = 0;
    v14.next(&v41);
    v51 = v16;
    if (v16 != 3)
    {
        do
        {
            v18 = v51;
            v19 = (long long)v17;
            v25 = v18.recv(v52, a2);
            if (v25)
            {
                v31 = 1;
                v32 = 1;
                v35 = v25;
                *((double *)&v36) = v31.new();
                v37 = 0;
                *((int128_t *)&v30) = *((int128_t *)&v18);
                v38 = v15;
                v0.push(&v31);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v25);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v18);
            }
            v14.next(&v41);
            v51 = v16;
        } while (v16 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v41);
    v42 = 0;
    memcpy(&v41, &v0, 16);
    v26.from_vec_cmp_raw(&v41, a2, 1);
    v53 = *((int128_t *)&v7);
    *((int128_t *)&v9->field_0) = *((int128_t *)&v4);
    *((void*)&v9->field_10) = v53;
    v54 = (int128_t)v34;
    v9->field_30 = (int128_t)v30;
    *((void*)&v9->field_40) = v54;
    *((void*)&v9->field_20) = v10;
    v9->field_50 = 0;
    return a0;
}
