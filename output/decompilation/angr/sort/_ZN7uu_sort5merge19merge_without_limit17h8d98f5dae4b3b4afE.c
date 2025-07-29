long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1[4], unsigned long long a2)
{
    char v0;  // [bp-0x2a9]
    int v1;  // [bp-0x2a8]
    unsigned long long v2;  // [bp-0x2a0]
    void* v3;  // [bp-0x298], Other Possible Types: unsigned long long
    int v4;  // [bp-0x298]
    void* v5;  // [bp-0x288], Other Possible Types: unsigned long long
    int v6;  // [bp-0x280]
    struct_0 *v7;  // [bp-0x270]
    int v8;  // [bp-0x260], Other Possible Types: char
    unsigned long long v9;  // [bp-0x250]
    unsigned long long v10;  // [bp-0x248]
    void* v11;  // [bp-0x240]
    unsigned long long v12;  // [bp-0x238]
    unsigned long long v13;  // [bp-0x230]
    void* v14;  // [bp-0x228]
    unsigned long long v15[4];  // [bp-0x220]
    int v16;  // [bp-0x218], Other Possible Types: char
    unsigned long long v17;  // [bp-0x208]
    char v18;  // [bp-0x200]
    unsigned long long v19;  // [bp-0x200]
    unsigned long long v20;  // [bp-0x1f8]
    int v21;  // [bp-0x1f0]
    unsigned long long v22;  // [bp-0x1c8]
    unsigned long long v23;  // [bp-0x1c0]
    unsigned long long v24;  // [bp-0x1b8]
    int v25;  // [bp-0x1b0]
    char v26;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x1a0]
    unsigned long long v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x1a0]
    int v30;  // [bp-0x1a0]
    unsigned long long v31;  // [bp-0x1a0]
    unsigned long long v32;  // [bp-0x198]
    char v33;  // [bp-0x190], Other Possible Types: unsigned long long
    int v34;  // [bp-0x190]
    unsigned long long v35;  // [bp-0x190]
    unsigned long long v36;  // [bp-0x190]
    void* v37;  // [bp-0x188], Other Possible Types: unsigned long long
    int v38;  // [bp-0x188]
    unsigned long long v39;  // [bp-0x180]
    unsigned long long v40;  // [bp-0x178]
    void* v41;  // [bp-0x170]
    unsigned long long v42;  // [bp-0x168]
    void* v43;  // [bp-0x160]
    void* v44;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v45;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v46;  // [bp-0xb8]
    char v47;  // [bp-0xb0]
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rcx
    int v51;  // xmm0
    unsigned long long v52;  // rcx
    void* v53;  // rbp
    unsigned long long v54;  // rbx
    unsigned long long v55;  // rax
    unsigned long long v56;  // rsi
    int v57;  // xmm2
    int v58;  // xmm2
    unsigned long long v59;  // [bp-0x2a8]
    unsigned long long v60;  // [bp-0x290]

    v15[0] = a1;
    std::sync::mpmc::channel(&v26);
    memcpy(&v8, &v26, 16);
    memcpy(&v16, &v33, 16);
    v26.size_hint(a1[1], a1[3]);
    v9 = v26.with_capacity_in(8, 72, &g_670fc0);
    v10 = v49;
    v11 = 0;
    v26.size_hint(a1[1], a1[3]);
    v0 = 1;
    v12 = v26.with_capacity_in(8, 16, &g_670fd8);
    v13 = v49;
    v14 = 0;
    v18.enumerate(a1);
    while (true)
    {
        v22.next(&v18);
        if (v23 == 9223372036854775809)
            break;
        memcpy(&v5, &v25, 16);
        *((int128_t *)&v4) = *((int128_t *)&v23);
        std::sync::mpmc::sync_channel(&v26, 2, a2, v50);
        *((int128_t *)&v1) = *((int128_t *)&v28);
        v12.push(v33, v37);
        v51 = (int128_t)(&v4)[8];
        if (v3 == 0x8000000000000000)
        {
            *((void*)&v7->field_8[0]) = v51;
            *((unsigned long long *)&v7->field_0) = 2;
            ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&(unsigned long long)v1);
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v18);
            core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v12);
            ::0x5148e0::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v9);
            ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v16);
            return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v8);
        }
        v52 = (long long)v6;
        *((int128_t *)&v27) = *((int128_t *)&(unsigned long long)v1);
        v33 = v3;
        v38 = v51;
        v40 = v52;
        v41 = 0;
        v42 = 1;
        v43 = 0;
        v9.push(&v26);
        v44.new(0x2000);
        v28 = v22;
        memcpy(&v32, &v44, 144);
        v44.send(&v8, &v28);
        v44.unwrap(&g_671068);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v18);
    if (v11)
    {
        v53 = 0;
        do
        {
            v54 = v53.forward_unchecked();
            v44.new(0x2000);
            v29 = v53;
            memcpy(&v32, &v44, 144);
            v44.send(&v8, &v29);
            v44.unwrap(&g_671020);
            v53 = v54;
        } while (v54 < v11);
    }
    v44.clone(a2);
    v30 = v16;
    *((int128_t *)&v34) = *((int128_t *)&v9);
    v39 = v11;
    memcpy(&v40, &v44, 160);
    v45 = 0x8000000000000000;
    v44 = 0;
    v47 = 0;
    v18.spawn_unchecked(&v44, &v26);
    v22.expect(&v18);
    v3 = 0;
    v60 = 8;
    v5 = 0;
    v44.into_iter(&v12);
    v46 = 0;
    v18.next(&v44);
    v55 = v20;
    if (v20 != 3)
    {
        do
        {
            v59 = v55;
            v2 = (long long)v21;
            v17 = v59.recv(v56, a2);
            if (v17)
            {
                v31 = 1;
                v32 = 1;
                v35 = v17;
                *((double *)&v36) = v31.new();
                v37 = 0;
                *((int128_t *)&v30) = *((int128_t *)&v59);
                v39 = v19;
                v3.push(&v31);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v17);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v59);
            }
            v18.next(&v44);
            v55 = v20;
        } while (v20 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v44);
    v45 = 0;
    memcpy(&v44, &v3, 16);
    v26.from_vec_cmp_raw(&v44, a2, 1);
    v57 = *((int128_t *)&v24);
    *((int128_t *)&v7->field_0) = *((int128_t *)&v22);
    *((void*)&v7->field_8[8]) = v57;
    v58 = (int128_t)v34;
    v7->field_30 = (int128_t)v30;
    *((void*)&v7->field_40) = v58;
    *((void*)&v7->field_20) = v8;
    v7->field_50 = 0;
    return a0;
}
