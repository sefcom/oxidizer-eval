long long uu_sort::merge::FileMerger::write_next(struct_4 *a0, struct_3 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x190]
    struct_1 *v2;  // [bp-0x188]
    unsigned long v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x168]
    struct_2 *v5;  // [bp-0x160], Other Possible Types: unsigned long long, unsigned long
    char v6;  // [bp-0x158], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x148]
    unsigned long v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    struct_2 *v12;  // r12
    struct_1 *v13;  // rdi
    int v14;  // xmm0
    unsigned long long v15;  // rax
    unsigned long v16;  // r15
    unsigned long long v17;  // rax
    struct_1 *v18;  // rax
    unsigned long v19;  // r12
    unsigned long long v20;  // rdx
    void* v21;  // rax

    if (a1->field_40)
    {
        v12 = a1->field_38;
        v12->field_10.inc_strong();
        v13 = v12->field_10;
        v14 = *((int128_t *)&v12->field_18);
        v3 = a1->field_58[1];
        *((int128_t *)&v2) = *((int128_t *)&a1->field_50);
        a1->field_50 = v13;
        *((void*)&a1->field_58[0]) = v14;
        v5 = v12;
        v6 = a2;
        v7 = &v2;
        v8 = a3;
        v15 = v13->field_10.with_dependent(&v5);
        if (v15)
        {
            a0->field_8 = v15;
            a0->field_0 = 1;
            return core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(&v2);
        }
        v16 = &a1->padding_0[48];
        if (v12->field_10->field_10->field_28 == *((long long *)&v12->field_18) + 1)
        {
            v17 = v12.recv(a1, a2);
            v4 = v17;
            if (v17)
            {
                v0 = v17;
                if (!a1->field_40)
                    core::option::unwrap_failed(&g_6710e0); /* do not return */
                v9 = v16;
                v10 = 0;
                v5 = 1;
                v6 = 1;
                v7 = v17;
                v18 = v5.new();
                v10 = 1;
                v19 = &a1->field_38->field_10;
                ::0x5154b0::core::ptr::drop_in_place<alloc::rc::Rc<uu_sort::chunks::Chunk>>(v19);
                *((struct_1 **)v19) = v18;
                v10 = 1;
                *((unsigned long long *)(*((long long *)(v9 + 8)) + 24)) = 0;
                core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(&v9);
            }
            else
            {
                ::0x514730::core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v4);
                v5.pop(v16);
                core::ptr::drop_in_place<core::option::Option<uu_sort::merge::MergeableFile>>(&v5);
            }
        }
        else if (a1->field_40)
        {
            v5 = v16;
            v6 = 1;
            *((long long *)&a1->field_38->field_18) = *((long long *)&a1->field_38->field_18) + 1;
            core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(&v5);
        }
        else
        {
            core::option::unwrap_failed(&g_6710c8); /* do not return */
        }
        if (v2)
        {
            v0 = v2.try_unwrap();
            v1 = v20;
            if (v0)
            {
                core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>(&v0);
            }
            else
            {
                v9.recycle(v20);
                v5 = v3;
                memcpy(&v6, &v9, 144);
                v9.send(&a1->padding_0[32], &v5);
                if (!((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63)))
                    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(usize,uu_sort::chunks::RecycledChunk)>>>(&v9);
                if (((char)v0 & 1))
                    core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>(&v0);
            }
        }
        v21 = a1->field_40;
    }
    else
    {
        v21 = 0;
    }
    a0->field_1 = v21;
    a0->field_0 = 0;
    return v21;
}
