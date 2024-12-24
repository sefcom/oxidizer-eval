long long uu_sort::merge::FileMerger::write_all_to::hf158219bdc55613c(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rsi

    do
    { } while ((char)uu_sort::merge::FileMerger::write_next::h141bb7310988705d(a0, a1, v4));
    *((uint128_t *)&v0) = a0->field_0;
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h429e0745cb0b4f56(&v0, v5, v4);
    v1 = a0->field_40;
    *((uint128_t *)&v0) = a0->field_30;
    std::thread::JoinInner$LT$T$GT$::join::h4e4f1d676fa07ddc(&v2, &v0);
    ::0x525090::core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..BinaryHeap$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h12acd7bb23d08179(&a0->padding_10, v5, v4);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h19206453777c9b03(a0 + 1);
    return core::result::Result$LT$T$C$E$GT$::unwrap::haa13959651ab3e7c(&v2);
}
