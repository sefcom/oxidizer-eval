long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1[4], unsigned long long a2)
{
    char v0;  // [bp-0x2f1]
    unsigned long long v1;  // [bp-0x2f0]
    unsigned long long v2;  // [bp-0x2e8]
    unsigned long long v3;  // [bp-0x2e0]
    unsigned long v4;  // [bp-0x2d8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x2d0]
    unsigned long long v6;  // [bp-0x2b8]
    unsigned long long v7;  // [bp-0x2b0]
    void* v8;  // [bp-0x2a8]
    unsigned long long v9;  // [bp-0x2a0]
    unsigned long long v10;  // [bp-0x298]
    void* v11;  // [bp-0x290]
    unsigned long long v12;  // [bp-0x288]
    unsigned long long v13;  // [bp-0x280]
    unsigned long long v14;  // [bp-0x278]
    unsigned long long v15;  // [bp-0x270]
    unsigned long long v16;  // [bp-0x268]
    unsigned long long v17;  // [bp-0x260]
    unsigned long long v18;  // [bp-0x258]
    unsigned long long v19;  // [bp-0x250]
    void* v20;  // [bp-0x248]
    unsigned long long v21;  // [bp-0x240]
    void* v22;  // [bp-0x238]
    unsigned long long v23;  // [bp-0x230]
    void* v24;  // [bp-0x228], Other Possible Types: char, unsigned long long
    unsigned long long v25;  // [bp-0x220]
    unsigned long long v26;  // [bp-0x218]
    void* v27;  // [bp-0x210], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x208], Other Possible Types: unsigned long long
    int v29;  // [bp-0x200]
    int v30;  // [bp-0x1f0]
    int v31;  // [bp-0x1e0]
    unsigned long long v32;  // [bp-0x1d0]
    void* v33;  // [bp-0x1c8]
    unsigned long long v34;  // [bp-0x1c0]
    void* v35;  // [bp-0x1b8]
    unsigned long long v36;  // [bp-0x160]
    unsigned long long v37;  // [bp-0x158]
    unsigned long long v38;  // [bp-0x158]
    unsigned long long v39;  // [bp-0x150]
    unsigned long long v40;  // [bp-0x148]
    int v41;  // [bp-0x140]
    int v42;  // [bp-0x130]
    int v43;  // [bp-0x120]
    unsigned long long v44;  // [bp-0x110]
    int v45;  // [bp-0x108], Other Possible Types: char
    char v46;  // [bp-0xf8]
    void* v47;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v48;  // [bp-0xc0]
    void* v49;  // [bp-0xb0]
    char v50;  // [bp-0xa8]
    unsigned long long v52;  // rdx
    char *v53;  // r14
    char *v54;  // r13
    unsigned long long v55;  // rcx
    void* v56;  // rbp
    unsigned long long v57;  // rbx
    unsigned long long v58;  // r14
    int v59;  // xmm1

    std::sync::mpmc::channel(&v24);
    v2 = v24;
    v16 = v2;
    v1 = v25;
    v17 = v1;
    v13 = v26;
    v18 = v13;
    v12 = v27;
    v19 = v12;
    v24.size_hint(a1[1], a1[3]);
    v6 = v24.with_capacity_in(8, 120, &g_58c8c8);
    v7 = v52;
    v8 = 0;
    v24.size_hint(a1[1], a1[3]);
    v0 = 1;
    v9 = v24.with_capacity_in(8, 16, &g_58c8e0);
    v10 = v52;
    v11 = 0;
    v45.enumerate(a1);
    v14 = 9223372036854775809;
    v53 = &v24;
    while (true)
    {
        v36.next(&v45);
        if (v37 == 9223372036854775809)
            break;
        v15 = v36;
        v54 = v53;
        std::sync::mpmc::sync_channel(v53, 2, a2, v55);
        v3 = v24;
        v4 = v25;
        v9.push(v26, v27);
        if (v37 == 0x8000000000000000)
        {
            *((unsigned long long *)&v5[8]) = v39;
            *((unsigned long long *)&v5[16]) = v40;
            *((unsigned long long *)v5) = 3;
            core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v3);
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v45);
            core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v9);
            core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v6);
            core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v18);
            return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v16);
        }
        v32 = v44;
        v31 = v43;
        v30 = v42;
        v29 = v41;
        v24 = v3;
        v25 = v4;
        v26 = v37;
        v27 = v39;
        v28 = v40;
        v33 = 0;
        v34 = 1;
        v35 = 0;
        v53 = v54;
        v6.push(v54);
        v47.new(0x2000);
        v24 = v15;
        memcpy(&v25, &v47, 144);
        v47.send(v2, v1, v53);
        v47.unwrap(&g_58c958);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v45);
    if (v8)
    {
        v56 = 0;
        do
        {
            v47.new(0x2000);
            v24 = v56;
            memcpy(&v25, &v47, 144);
            v47.send(v2, v1, &v24);
            v47.unwrap(&g_58c910);
            v56 += 1;
        } while (v8 != v56);
    }
    v47.clone(a2);
    v24 = v13;
    v25 = v12;
    memcpy(&v26, &v6, 16);
    v28 = v8;
    memcpy(&v29, &v47, 160);
    v48 = 0x8000000000000000;
    v47 = 0;
    v50 = 0;
    v36.spawn_unchecked(&v47, &v24);
    v45.expect(&v36);
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v47.into_iter(&v9);
    v49 = 0;
    v36.next(&v47);
    if (v37 != 3)
    {
        v38 = v37;
        do
        {
            v57 = v38;
            v58 = v39;
            v3 = v57;
            v4 = v58;
            v23 = v57.recv(v58);
            if (v23)
            {
                v24 = 1;
                v25 = 1;
                v26 = v23;
                *((double *)&v26) = v24.new();
                v27 = 0;
                v24 = v57;
                v25 = v58;
                v28 = v36;
                v20.push(&v24);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v23);
                core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v3);
            }
            v36.next(&v47);
            v38 = v37;
        } while (v38 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v47);
    v24.from_vec_cmp_raw(&v20, a2);
    *((long long *)&v5[64]) = *((long long *)&v46);
    v5[48] = v45;
    v59 = *((int128_t *)&v26);
    *((int128_t *)&v5[16]) = *((int128_t *)&v24);
    v5[32] = v59;
    *((unsigned long long *)v5) = v2;
    *((unsigned long long *)&v5[8]) = v1;
    *((unsigned long long *)&v5[72]) = 0;
    return v1;
}
