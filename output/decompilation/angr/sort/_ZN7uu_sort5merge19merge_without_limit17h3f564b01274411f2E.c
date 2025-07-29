long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1[4], unsigned long long a2)
{
    char v0;  // [bp-0x299]
    int v1;  // [bp-0x298]
    unsigned long long v2;  // [bp-0x290]
    void* v3;  // [bp-0x288], Other Possible Types: unsigned long long
    int v4;  // [bp-0x288]
    void* v5;  // [bp-0x278], Other Possible Types: unsigned long long
    int v6;  // [bp-0x270]
    struct_0 *v7;  // [bp-0x260]
    int v8;  // [bp-0x250], Other Possible Types: char
    unsigned long long v9;  // [bp-0x240]
    unsigned long long v10;  // [bp-0x238]
    void* v11;  // [bp-0x230]
    unsigned long long v13;  // [bp-0x228]
    unsigned long long v14;  // [bp-0x220]
    unsigned long long v15;  // [bp-0x218]
    int v16;  // [bp-0x210]
    unsigned long long v17;  // [bp-0x200]
    unsigned long long v18;  // [bp-0x1f8]
    void* v19;  // [bp-0x1f0]
    unsigned long long v20[4];  // [bp-0x1e8]
    int v21;  // [bp-0x1e0], Other Possible Types: char
    unsigned long long v22;  // [bp-0x1d0]
    int v23;  // [bp-0x1c8], Other Possible Types: char
    char v24;  // [bp-0x1b8]
    char v25;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v26;  // [bp-0x1a0]
    unsigned long long v27;  // [bp-0x1a0]
    unsigned long long v28;  // [bp-0x1a0]
    int v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x1a0]
    unsigned long long v31;  // [bp-0x198]
    unsigned long long v32;  // [bp-0x190]
    int v33;  // [bp-0x190], Other Possible Types: char
    unsigned long long v34;  // [bp-0x190]
    unsigned long long v35;  // [bp-0x190]
    void* v36;  // [bp-0x188], Other Possible Types: unsigned long long
    int v37;  // [bp-0x188]
    unsigned long long v38;  // [bp-0x180]
    unsigned long long v39;  // [bp-0x178]
    void* v40;  // [bp-0x170]
    unsigned long long v41;  // [bp-0x168]
    void* v42;  // [bp-0x160]
    void* v43;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v44;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v45;  // [bp-0xb8]
    char v46;  // [bp-0xb0]
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rcx
    int v50;  // xmm0
    unsigned long long v51;  // rcx
    void* v52;  // rbp
    unsigned long long v53;  // rbx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rsi
    int v56;  // xmm2
    int v57;  // xmm2
    unsigned long long v58;  // [bp-0x298]
    unsigned long long v59;  // [bp-0x280]

    v20[0] = a1;
    std::sync::mpmc::channel(&v25);
    memcpy(&v8, &v25, 16);
    memcpy(&v21, &v33, 16);
    v25.size_hint(a1[1], a1[3]);
    v9 = v25.with_capacity_in(8, 72, &g_670fc0);
    v10 = v48;
    v11 = 0;
    v25.size_hint(a1[1], a1[3]);
    v0 = 1;
    v17 = v25.with_capacity_in(8, 16, &g_670fd8);
    v18 = v48;
    v19 = 0;
    v23.enumerate(a1);
    (char)v13.next(&v23);
    if (v14 != 9223372036854775809)
    {
        do
        {
            memcpy(&v5, &v16, 16);
            *((int128_t *)&v4) = *((int128_t *)&v14);
            std::sync::mpmc::sync_channel(&v25, 2, a2, v49);
            *((int128_t *)&v1) = *((int128_t *)&v27);
            v17.push(v32, v36);
            v50 = (int128_t)(&v4)[8];
            if (v3 == 0x8000000000000000)
            {
                *((void*)&v7->field_8[0]) = v50;
                *((unsigned long long *)&v7->field_0) = 2;
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&(unsigned long long)v1);
                core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v23);
                core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v17);
                ::0x5148e0::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v9);
                ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v21);
                return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v8);
            }
            v51 = (long long)v6;
            *((int128_t *)&v26) = *((int128_t *)&(unsigned long long)v1);
            v32 = v3;
            v37 = v50;
            v39 = v51;
            v40 = 0;
            v41 = 1;
            v42 = 0;
            v9.push(&v25);
            v43.new(0x2000);
            v27 = v13;
            memcpy(&v31, &v43, 144);
            v43.send(&v8, &v27);
            v43.unwrap(&g_671068);
            (char)v13.next(&v23);
        } while (v14 != 9223372036854775809);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v23);
    if (v11)
    {
        v52 = 0;
        do
        {
            v53 = v52.forward_unchecked();
            v43.new(0x2000);
            v28 = v52;
            memcpy(&v31, &v43, 144);
            v43.send(&v8, &v28);
            v43.unwrap(&g_671020);
            v52 = v53;
        } while (v53 < v11);
    }
    v43.clone(a2);
    v29 = v21;
    *((int128_t *)&v33) = *((int128_t *)&v9);
    v38 = v11;
    memcpy(&v39, &v43, 160);
    v44 = 0x8000000000000000;
    v43 = 0;
    v46 = 0;
    (char)v13.spawn_unchecked(&v43, &v25);
    v23.expect(&(char)v13);
    v3 = 0;
    v59 = 8;
    v5 = 0;
    v43.into_iter(&v17);
    v45 = 0;
    (char)v13.next(&v43);
    v54 = v14;
    if (v14 != 3)
    {
        do
        {
            v58 = v54;
            v2 = v15;
            v22 = v58.recv(v55, a2);
            if (v22)
            {
                v30 = 1;
                v31 = 1;
                v34 = v22;
                *((double *)&v35) = v30.new();
                v36 = 0;
                *((int128_t *)&v29) = *((int128_t *)&v58);
                v38 = v13;
                v3.push(&v30);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v22);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v58);
            }
            (char)v13.next(&v43);
            v54 = v14;
        } while (v14 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v43);
    v44 = 0;
    memcpy(&v43, &v3, 16);
    v25.from_vec_cmp_raw(&v43, a2, 1);
    v56 = *((int128_t *)&v24);
    *((void*)&v7->field_0) = v23;
    *((void*)&v7->field_8[8]) = v56;
    v57 = (int128_t)v33;
    v7->field_30 = (int128_t)v29;
    *((void*)&v7->field_40) = v57;
    *((void*)&v7->field_20) = v8;
    v7->field_50 = 0;
    return a0;
}
