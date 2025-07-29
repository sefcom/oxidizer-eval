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
    unsigned long long v12;  // [bp-0x228]
    unsigned long long v13;  // [bp-0x220]
    unsigned long long v14;  // [bp-0x218]
    int v15;  // [bp-0x210]
    unsigned long long v16;  // [bp-0x200]
    unsigned long long v17;  // [bp-0x1f8]
    void* v18;  // [bp-0x1f0]
    unsigned long long v19[4];  // [bp-0x1e8]
    int v20;  // [bp-0x1e0], Other Possible Types: char
    unsigned long long v21;  // [bp-0x1d0]
    int v22;  // [bp-0x1c8], Other Possible Types: char
    char v23;  // [bp-0x1b8]
    char v24;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v25;  // [bp-0x1a0]
    unsigned long long v26;  // [bp-0x1a0]
    unsigned long long v27;  // [bp-0x1a0]
    int v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x198]
    char v31;  // [bp-0x190], Other Possible Types: unsigned long long
    int v32;  // [bp-0x190]
    unsigned long long v33;  // [bp-0x190]
    unsigned long long v34;  // [bp-0x190]
    void* v35;  // [bp-0x188], Other Possible Types: unsigned long long
    int v36;  // [bp-0x188]
    unsigned long long v37;  // [bp-0x180]
    unsigned long long v38;  // [bp-0x178]
    void* v39;  // [bp-0x170]
    unsigned long long v40;  // [bp-0x168]
    void* v41;  // [bp-0x160]
    void* v42;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v43;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v44;  // [bp-0xb8]
    char v45;  // [bp-0xb0]
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    int v49;  // xmm0
    unsigned long long v50;  // rcx
    void* v51;  // rbp
    unsigned long long v52;  // rbx
    unsigned long long v53;  // rax
    unsigned long long v54;  // rsi
    int v55;  // xmm2
    int v56;  // xmm2
    unsigned long long v57;  // [bp-0x298]
    unsigned long long v58;  // [bp-0x280]

    v19[0] = a1;
    std::sync::mpmc::channel(&v24);
    memcpy(&v8, &v24, 16);
    memcpy(&v20, &v31, 16);
    v24.size_hint(a1[1], a1[3]);
    v9 = v24.with_capacity_in(8, 72, &g_670fc0);
    v10 = v47;
    v11 = 0;
    v24.size_hint(a1[1], a1[3]);
    v0 = 1;
    v16 = v24.with_capacity_in(8, 16, &g_670fd8);
    v17 = v47;
    v18 = 0;
    v22.enumerate(a1);
    while (true)
    {
        v12.next(&v22);
        if (v13 == 9223372036854775809)
            break;
        memcpy(&v5, &v15, 16);
        *((int128_t *)&v4) = *((int128_t *)&v13);
        std::sync::mpmc::sync_channel(&v24, 2, a2, v48);
        *((int128_t *)&v1) = *((int128_t *)&v26);
        v16.push(v31, v35);
        v49 = (int128_t)(&v4)[8];
        if (v3 == 0x8000000000000000)
        {
            *((void*)&v7->field_8[0]) = v49;
            *((unsigned long long *)&v7->field_0) = 2;
            ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&(unsigned long long)v1);
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(&v22);
            core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v16);
            ::0x5148e0::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v9);
            ::0x514750::core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v20);
            return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v8);
        }
        v50 = (long long)v6;
        *((int128_t *)&v25) = *((int128_t *)&(unsigned long long)v1);
        v31 = v3;
        v36 = v49;
        v38 = v50;
        v39 = 0;
        v40 = 1;
        v41 = 0;
        v9.push(&v24);
        v42.new(0x2000);
        v26 = v12;
        memcpy(&v30, &v42, 144);
        v42.send(&v8, &v26);
        v42.unwrap(&g_671068);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(&v22);
    if (v11)
    {
        v51 = 0;
        do
        {
            v52 = v51.forward_unchecked();
            v42.new(0x2000);
            v27 = v51;
            memcpy(&v30, &v42, 144);
            v42.send(&v8, &v27);
            v42.unwrap(&g_671020);
            v51 = v52;
        } while (v52 < v11);
    }
    v42.clone(a2);
    v28 = v20;
    *((int128_t *)&v32) = *((int128_t *)&v9);
    v37 = v11;
    memcpy(&v38, &v42, 160);
    v43 = 0x8000000000000000;
    v42 = 0;
    v45 = 0;
    v12.spawn_unchecked(&v42, &v24);
    v22.expect(&v12);
    v3 = 0;
    v58 = 8;
    v5 = 0;
    v42.into_iter(&v16);
    v44 = 0;
    v12.next(&v42);
    v53 = v13;
    if (v13 != 3)
    {
        do
        {
            v57 = v53;
            v2 = v14;
            v21 = v57.recv(v54, a2);
            if (v21)
            {
                v29 = 1;
                v30 = 1;
                v33 = v21;
                *((double *)&v34) = v29.new();
                v35 = 0;
                *((int128_t *)&v28) = *((int128_t *)&v57);
                v37 = v12;
                v3.push(&v29);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v21);
                ::0x515820::core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v57);
            }
            v12.next(&v42);
            v53 = v13;
        } while (v13 != 3);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(&v42);
    v43 = 0;
    memcpy(&v42, &v3, 16);
    v24.from_vec_cmp_raw(&v42, a2, 1);
    v55 = *((int128_t *)&v23);
    *((void*)&v7->field_0) = v22;
    *((void*)&v7->field_8[8]) = v55;
    v56 = (int128_t)v32;
    v7->field_30 = (int128_t)v28;
    *((void*)&v7->field_40) = v56;
    *((void*)&v7->field_20) = v8;
    v7->field_50 = 0;
    return a0;
}
