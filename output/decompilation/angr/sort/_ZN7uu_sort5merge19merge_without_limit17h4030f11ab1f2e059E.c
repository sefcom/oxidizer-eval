long long uu_sort::merge::merge_without_limit(unsigned long a0, unsigned long long a1[4], unsigned long long a2)
{
    char v0;  // [bp-0x301]
    int v1;  // [bp-0x300]
    unsigned long long v2;  // [bp-0x2f8]
    struct_0 *v3;  // [bp-0x2f0]
    int v4;  // [bp-0x2e0], Other Possible Types: char
    unsigned long long v5;  // [bp-0x2d0]
    unsigned long long v6;  // [bp-0x2c8]
    void* v7;  // [bp-0x2c0]
    void* v8;  // [bp-0x2b8], Other Possible Types: char
    unsigned long long v9;  // [bp-0x2b0]
    void* v10;  // [bp-0x2a8]
    unsigned long long v11;  // [bp-0x290]
    unsigned long long v12;  // [bp-0x288]
    void* v13;  // [bp-0x280]
    unsigned long long v14[4];  // [bp-0x278]
    unsigned long long v15;  // [bp-0x270]
    int v16;  // [bp-0x268], Other Possible Types: char
    unsigned long long v17;  // [bp-0x258]
    char v18;  // [bp-0x250], Other Possible Types: unsigned long long
    int v19;  // [bp-0x250]
    unsigned long long v20;  // [bp-0x250]
    unsigned long long v21;  // [bp-0x250]
    int v22;  // [bp-0x250]
    unsigned long long v23;  // [bp-0x250]
    unsigned long long v24;  // [bp-0x248]
    unsigned long long v25;  // [bp-0x240]
    int v26;  // [bp-0x240], Other Possible Types: char
    unsigned long long v27;  // [bp-0x240]
    unsigned long long v28;  // [bp-0x240]
    void* v29;  // [bp-0x238], Other Possible Types: unsigned long long
    int v30;  // [bp-0x238]
    unsigned long long v31;  // [bp-0x230]
    int v32;  // [bp-0x228], Other Possible Types: char
    int v33;  // [bp-0x218]
    char v34;  // [bp-0x208]
    unsigned long long v35;  // [bp-0x1f8]
    void* v36;  // [bp-0x1f0]
    unsigned long long v37;  // [bp-0x1e8]
    void* v38;  // [bp-0x1e0]
    int v39;  // [bp-0x188]
    int v40;  // [bp-0x178]
    int v41;  // [bp-0x168]
    int v42;  // [bp-0x160]
    char v43;  // [bp-0x150]
    int v44;  // [bp-0x148]
    unsigned long long v46;  // [bp-0x130]
    unsigned long long v47;  // [bp-0x128]
    int v49;  // [bp-0x118]
    int v50;  // [bp-0x108]
    int v51;  // [bp-0xf8]
    int v52;  // [bp-0xe8]
    void* v53;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v54;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v55;  // [bp-0xb8]
    char v56;  // [bp-0xb0]
    unsigned long long v58;  // rdx
    int v59;  // xmm0
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rax
    int v62;  // xmm0
    void* v63;  // rbp
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rsi
    int v67;  // xmm2
    int v68;  // xmm2
    unsigned long long v69;  // [bp-0x300]
    unsigned long long v72;  // [bp-0x120]

    v14[0] = a1;
    std::sync::mpmc::channel(&v18);
    memcpy(&v4, &v18, 16);
    memcpy(&v16, &v26, 16);
    v18.size_hint(a1[1], a1[3]);
    v5 = v18.with_capacity_in(8, 120, &g_670fc0);
    v6 = v58;
    v7 = 0;
    v18.size_hint(a1[1], a1[3]);
    v0 = 1;
    v11 = v18.with_capacity_in(8, 16, &g_670fd8);
    v12 = v58;
    v13 = 0;
    v8.enumerate(a1);
    (char)v46.next(&v8);
    v15 = 9223372036854775809;
    if (v47 != 9223372036854775809)
    {
        do
        {
            v44 = v52;
            v59 = *((int128_t *)&v47);
            memcpy(&(char)v42, &v51, 16);
            v41 = v50;
            v40 = v49;
            v39 = v59;
            std::sync::mpmc::sync_channel(&v18, 2, a2, v60);
            *((int128_t *)&v1) = *((int128_t *)&v20);
            v11.push(v25, v29);
            v61 = (long long)v39;
            v62 = (int128_t)(&v39)[8];
            if (v61 == 0x8000000000000000)
            {
                *((void*)&v3->field_8[0]) = v62;
                *((unsigned long long *)&v3->field_0) = 2;
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v69);
                core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v8);
                core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v11);
                ::0x514930::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v5);
                ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v16);
                return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v4);
            }
            v35 = (long long)(&v44)[8];
            memcpy(&v34, &v43, 16);
            v33 = v42;
            memcpy(&v32, &v40, 16);
            *((int128_t *)&v19) = *((int128_t *)&v69);
            v25 = v61;
            v30 = v62;
            v36 = 0;
            v37 = 1;
            v38 = 0;
            v5.push(&v18);
            v53.new(0x2000);
            v20 = v46;
            memcpy(&v24, &v53, 144);
            v53.send(&v4, &v20);
            v53.unwrap(&g_671068);
            (char)v46.next(&v8);
        } while (v47 != 9223372036854775809);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v8);
    if (v7)
    {
        v63 = 0;
        do
        {
            v64 = v63.forward_unchecked();
            v53.new(0x2000);
            v21 = v63;
            memcpy(&v24, &v53, 144);
            v53.send(&v4, &v21);
            v53.unwrap(&g_671020);
            v63 = v64;
        } while (v64 < v7);
    }
    v53.clone(a2);
    v22 = v16;
    *((int128_t *)&v26) = *((int128_t *)&v5);
    v31 = v7;
    memcpy(&v32, &v53, 160);
    v54 = 0x8000000000000000;
    v53 = 0;
    v56 = 0;
    (char)v46.spawn_unchecked(&v53, &v18);
    (char)v39.expect(&(char)v46);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v53.into_iter(&v11);
    v55 = 0;
    (char)v46.next(&v53);
    v65 = v47;
    if (v47 != 3)
    {
        do
        {
            v69 = v65;
            v2 = v72;
            v17 = v69.recv(v66, a2);
            if (v17)
            {
                v23 = 1;
                v24 = 1;
                v27 = v17;
                *((double *)&v28) = v23.new();
                v29 = 0;
                *((int128_t *)&v22) = *((int128_t *)&v69);
                v31 = v46;
                v8.push(&v23);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v17);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v69);
            }
            (char)v46.next(&v53);
            v65 = v47;
        } while (v47 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v53);
    v54 = 0;
    memcpy(&v53, &v8, 16);
    v18.from_vec_cmp_raw(&v53, a2, 1);
    v67 = (int128_t)v40;
    *((int128_t *)&v3->field_0) = (int128_t)v39;
    *((void*)&v3->field_8[8]) = v67;
    v68 = (int128_t)v26;
    v3->field_30 = (int128_t)v22;
    *((void*)&v3->field_40) = v68;
    *((void*)&v3->field_20) = v4;
    v3->field_50 = 0;
    return a0;
}
