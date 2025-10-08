
  fn bat::vscreen::join::h55e6457a6c5afd34(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_38: i64 = arg3;
    let var_30: *mut c_void = &data_aced18;
    let mut var_20: ();
    core::iter::traits::iterator::Iterator::collect::h12a8e2223d4ec978(&var_20, &var_38);
    let var_18: i64;
    let var_10: i64;
    alloc::str::join_generic_copy::he2689895b12556fd(&var_38, var_18, var_10, ";\x1b]8;;\x1b\");
    arg1[1] = arg2;
    *arg1 = var_38;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(
        &var_20)
}
