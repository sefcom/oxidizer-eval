long long uu_sort::merge::FileMerger::write_next::hf94a534d7d6527b5(struct_5 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x170]
    int v3;  // [sp-0x168]
    unsigned long long v4;  // [sp-0x158]
    struct_4 *v5;  // [sp-0x148], Other Possible Types: struct_2 *, unsigned long long
    int v6;  // [bp-0x140], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x138]
    int v8;  // [bp-0x130], Other Possible Types: unsigned long
    int v9;  // [sp-0x120]
    int v10;  // [sp-0x110]
    int v11;  // [sp-0x100]
    int v12;  // [sp-0xf0]
    int v13;  // [sp-0xe0]
    unsigned long long v14;  // [sp-0xd0]
    struct_4 *v15;  // [sp-0xc8]
    char v16;  // [sp-0xc0]
    char v17;  // [bp-0xb8]
    char v18;  // [bp-0xa8]
    char v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    int v24;  // [sp-0x48]
    struct_2 *v26;  // r14
    struct_0 *v27;  // r12
    void* v28;  // rax
    int v29;  // xmm1
    int v30;  // xmm0
    unsigned long long v31[6];  // rax
    struct_4 *v32;  // r15
    int v33;  // ymm0
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long *v39;  // r15
    int v41;  // xmm1
    int v42;  // xmm2
    int v43;  // xmm3
    unsigned long long v44;  // rcx

    if (!a0->field_20)
        return 0;
    v26 = a0->field_18;
    v27 = v26->field_10;
    alloc::rc::RcInnerPtr::inc_strong::heb22311a7383cac2(v27);
    v29 = *((int128_t *)&v26->field_18);
    v4 = *((long long *)((char *)&a0->field_50 + 8));
    v30 = *((int128_t *)&a0->field_48);
    v3 = v30;
    a0->field_48 = v27;
    v24 = v29;
    *((void*)&a0->field_50) = v24;
    v5 = v26;
    v6 = a1;
    v7 = &v3;
    v8 = a2;
    v31 = v27->field_10;
    uu_sort::merge::FileMerger::write_next::_$u7b$$u7b$closure$u7d$$u7d$::h9d2fda32526733bb(&v5, v31[4], v31[5]);
    v32 = &a0->padding_0[16];
    if (v27->field_10->field_28 != (unsigned long long)(v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) + 1)
    {
        if (!a0->field_20)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v5 = v32;
        v6 = 1;
        a0->field_18->field_18 = a0->field_18->field_18 + 1;
        v37 = core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h0abb4d75fc5f4e5f(&v5);
    }
    else
    {
        v36 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(v26, v34, v35);
        v0 = v36;
        if (!v36)
        {
            binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::hca51a8c833c27592(&v5, v32);
            v37 = core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..MergeableFile$GT$$GT$::h20c1e51503a43906(&v5, v34, v35);
            if (v0)
                v37 = ::0x525980::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::hbf4b30d52dff9bf7(&v0);
        }
        else
        {
            v1 = v36;
            if (!a0->field_20)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v15 = v32;
            v16 = 0;
            v5 = 1;
            v6 = 1;
            v7 = v36;
            v16 = 1;
            v39 = &a0->field_18->field_10;
            ::0x526320::core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$::he90a7b8b9ad5eacb(v39);
            *((double *)v39) = alloc::boxed::Box$LT$T$GT$::new::hef2d18b7f5ca45f3(&v5);
            v16 = 1;
            v15->field_8->field_18 = 0;
            v37 = core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h0abb4d75fc5f4e5f(&v15);
        }
    }
    if ((long long)v3)
    {
        v1 = alloc::rc::Rc$LT$T$C$A$GT$::try_unwrap::h69817be50bdfbf06((long long)v3);
        v2 = v35;
        if (v1)
        {
LABEL_53278d:
            v37 = core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h1169509deb482b9f(&v1);
        }
        else
        {
            uu_sort::chunks::Chunk::recycle::h0e011c1b3d3a5463(&v15, v35);
            v5 = v4;
            v41 = *((int128_t *)&v17);
            v42 = *((int128_t *)&v18);
            v43 = *((int128_t *)&v19);
            *((int128_t *)&v6) = *((int128_t *)&v15);
            v8 = v41;
            v9 = v42;
            v10 = v43;
            *((int128_t *)&v11) = *((int128_t *)&v20);
            *((int128_t *)&v12) = *((int128_t *)&v21);
            *((int128_t *)&v13) = *((int128_t *)&v22);
            v14 = *((long long *)&v23);
            std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v15, a0, &v5, v44);
            v37 = 0x8000000000000000;
            if ((&v15)[1] != 0x8000000000000000)
                v37 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$::h680e5f97d4893f91(&v15);
            if (!(!v1))
                goto LABEL_53278d;
        }
    }
    v28 = v37 | -0x100 | a0->field_20;
    return v28;
}
