long long uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rsi

    do
    { } while ((char)uu_sort::merge::FileMerger::write_next::h35ee06c7bd511e22(a0, a1, v4));
    *((uint128_t *)&v0) = a0->field_0;
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v0, v5, v4);
    v1 = a0->field_40;
    *((uint128_t *)&v0) = a0->field_30;
    std::thread::JoinInner$LT$T$GT$::join::h890e6ba2e8eeef40(&v2, &v0);
    ::0x526020::core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..BinaryHeap$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h9b8a5eec72fe084c(&a0->padding_10, v5, v4);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h3d2f05869b47c702(a0 + 1);
    return core::result::Result$LT$T$C$E$GT$::unwrap::h7f1f86a34bdcaf75(&v2);
}
