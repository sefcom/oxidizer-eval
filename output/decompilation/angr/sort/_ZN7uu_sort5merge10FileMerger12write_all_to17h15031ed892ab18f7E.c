long long uu_sort::merge::FileMerger::write_all_to(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x48]
    int v3;  // [bp-0x40]
    unsigned long long v5;  // rax

    while (true)
    {
        v0.write_next(a0, a1, a2);
        v2.map_err_context(&v0);
        if (v2)
        {
            core::ptr::drop_in_place<uu_sort::merge::FileMerger>(a0);
            return v2;
        }
        else if (!(char)v3)
        {
            *((uint128_t *)&v0) = a0->field_0;
            core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v0);
            v1 = a0->field_40;
            *((uint128_t *)&v0) = a0->field_30;
            v2.join(&v0);
            v5 = v2.unwrap();
            core::ptr::drop_in_place<binary_heap_plus::binary_heap::BinaryHeap<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(&a0->padding_10);
            core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(a0 + 1);
            return v5;
        }
    }
}
