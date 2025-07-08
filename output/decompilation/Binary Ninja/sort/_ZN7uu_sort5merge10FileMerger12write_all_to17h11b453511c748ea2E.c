
  int64_t uu_sort::merge::FileMerger::write_all_to::h11b453511c748ea2(int64_t* arg1)

{
    char i;
    
    do
        i = uu_sort::merge::FileMerger::write_next::he2ac8a6be71eabc9(arg1);
     while (i);
    int128_t var_58 = *arg1;
    int64_t rbp;
    rbp = 1;
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_58);
    int64_t var_48 = arg1[8];
    var_58 = *(arg1 + 0x30);
    void var_38;
    std::thread::JoinInner$LT$T$GT$::join::h890e6ba2e8eeef40(&var_38, &var_58);
    int64_t result;
    int64_t rdx;
    result = core::result::Result$LT$T$C$E$GT$::unwrap::h7f1f86a34bdcaf75(&var_38);
    core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..BinaryHeap$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h9b8a5eec72fe084c(&arg1[2]);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h3d2f05869b47c702(&arg1[9]);
    return result;
}
