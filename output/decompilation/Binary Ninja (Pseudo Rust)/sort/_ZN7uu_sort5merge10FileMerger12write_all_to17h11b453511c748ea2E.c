
  fn uu_sort::merge::FileMerger::write_all_to::h11b453511c748ea2(arg1: *mut i64) -> i64

{
    let mut i: i8;
    
    do
    {
        i = uu_sort::merge::FileMerger::write_next::he2ac8a6be71eabc9(arg1);
    } while i != 0;
    let mut var_58: i128 = *arg1;
    let mut rbp: i64;
    rbp = 1;
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_58);
    let var_48: i64 = arg1[8];
    var_58 = *arg1.byte_offset(0x30);
    let mut var_38: ();
    std::thread::JoinInner$LT$T$GT$::join::h890e6ba2e8eeef40(&var_38, &var_58);
    let mut result: i64;
    let mut rdx: i64;
    result = core::result::Result$LT$T$C$E$GT$::unwrap::h7f1f86a34bdcaf75(&var_38);
    core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..BinaryHeap$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h9b8a5eec72fe084c(&arg1[2]);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h3d2f05869b47c702(&arg1[9]);
    result
}
