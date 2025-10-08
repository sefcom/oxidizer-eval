long long uu_sort::merge::FileMerger::write_next(struct_0 *a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    int v2;  // [bp-0x178]
    unsigned long v3;  // [bp-0x168]
    void* v4;  // [sp-0x160], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [bp-0x158]
    char *v6;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0xc8]
    char v9;  // [bp-0xc0]
    void* v11;  // r13
    struct_1 *v12;  // rax
    int v13;  // xmm0
    unsigned long long v14;  // rax
    unsigned long v15;  // r15
    unsigned long long v16;  // rax
    struct_3 *v17;  // rax
    unsigned long v18;  // r13
    unsigned long long v19;  // rdx
    void* v20;  // rax

    if ((long long)a1[32])
    {
        v11 = (long long)a1[24];
        (long long)v11[16].inc_strong();
        v12 = (long long)v11[16];
        v13 = (int128_t)v11[24];
        v3 = (long long)a1[88];
        *((int128_t *)&v2) = (int128_t)a1[72];
        *((struct_1 **)&a1[72]) = v12;
        a1[80] = v13;
        v4 = v11;
        v5 = a2;
        v6 = &v2;
        v7 = a3;
        v14 = uu_sort::merge::FileMerger::write_next::{{closure}}(&v4, v12->field_10->field_20, v12->field_10->field_28);
        if (v14)
        {
            a0->field_8 = v14;
            a0->field_0 = 1;
            return core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(&v2);
        }
        v15 = a1 + 16;
        if (*((long long *)(*((long long *)((long long)v11[16] + 16)) + 40)) == (long long)v11[24] + 1)
        {
            v16 = *((long long *)v11).recv((long long)v11[8]);
            v0 = v16;
            if (v16)
            {
                v8 = v16;
                if (!(long long)a1[32])
                    core::option::unwrap_failed(&g_58c9d0); /* do not return */
                v4 = 1;
                v5 = 1;
                v6 = v16;
                v17 = v4.new();
                v18 = (long long)a1[24] + 16;
                core::ptr::drop_in_place<alloc::rc::Rc<uu_sort::chunks::Chunk>>(v18);
                *((struct_3 **)v18) = v17;
                *((unsigned long long *)((long long)a1[24] + 24)) = 0;
                core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(v15, 1);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v0);
                v4.pop(v15);
                core::ptr::drop_in_place<core::option::Option<uu_sort::merge::MergeableFile>>(&v4);
            }
        }
        else if ((long long)a1[32])
        {
            *((long long *)((long long)a1[24] + 24)) = *((long long *)((long long)a1[24] + 24)) + 1;
            core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(v15, 1);
        }
        else
        {
            core::option::unwrap_failed(&g_58c9b8); /* do not return */
        }
        if ((long long)v2)
        {
            v0 = (long long)v2.try_unwrap();
            v1 = v19;
            if (!((char)v0 & 1))
            {
                v5.recycle(v19);
                v4 = v3;
                v8.send(*((long long *)a1), (long long)a1[8], &v4);
                if (!((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63)))
                    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(usize,uu_sort::chunks::RecycledChunk)>>>(&v8);
                if (!((char)v0 & 1))
                    goto LABEL_4cdceb;
            }
            core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>(&v0);
        }
LABEL_4cdceb:
        v20 = (long long)a1[32];
    }
    else
    {
        v20 = 0;
    }
    a0->field_1 = v20;
    a0->field_0 = 0;
    return v20;
}
