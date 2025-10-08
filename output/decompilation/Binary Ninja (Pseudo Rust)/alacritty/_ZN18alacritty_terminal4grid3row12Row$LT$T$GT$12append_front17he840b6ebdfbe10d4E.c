
  fn alacritty_terminal::grid::row::Row$LT$T$GT$::append_front::he840b6ebdfbe10d4(arg1: *mut i64, arg2: *mut i64) -> i64

{
    arg1[3] += arg2[2];
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3cb2cc92e418e783(arg2, arg1[1], arg1[2]);
    arg1[2] = 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::h3a26ff64830026d7(arg1);
    let result: i64 = arg2[2];
    arg1[2] = result;
    *arg1 = *arg2;
    result
}
