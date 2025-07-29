long long uu_sort::merge::FileMerger::write_all_to(uint128_t a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x70]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    unsigned long long v5;  // rax

    while (true)
    {
        v2.write_next(a0, a1, a2);
        v0.map_err_context(&v2);
        if (v0)
        {
            core::ptr::drop_in_place<uu_sort::merge::FileMerger>(a0);
            return v0;
        }
        else if (!(char)v1)
        {
            *((uint128_t *)&v2) = a0[2];
            core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v2);
            *((uint128_t *)&v3) = a0[1];
            *((uint128_t *)&v2) = a0[0];
            v0.join(&v2);
            v5 = v0.unwrap();
            ::0x5148d0::core::ptr::drop_in_place<binary_heap_plus::binary_heap::BinaryHeap<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(a0 + 1);
            core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(&a0[1 + 2]);
            return v5;
        }
    }
}
