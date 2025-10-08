
  fn alacritty_terminal::grid::storage::Storage$LT$T$GT$::with_capacity::h44ccd8fb6acb56a2(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_18: i64 = arg3;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg2, 8, 0x20);
    let mut var_30: i64 = rax;
    let var_28: i64 = rdx;
    let result: i64 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::resize_with::h6e7572d4385195e4(&var_30, arg2, &var_18);
    arg1[1] = result;
    *arg1 = var_30;
    *arg1.byte_offset(0x18) = 0;
    arg1[2] = arg2;
    *arg1.byte_offset(0x28) = arg2;
    result
}
