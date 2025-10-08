
  fn uu_who::platform::unix::Who::print_boottime::h50688022477eb7c7(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_20: ();
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_20, arg2);
    let var_30: i64 = 0;
    let var_40: i64 = 0;
    let var_50: i64 = 0;
    let var_60: i64 = 0;
    let var_18: i128;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, 
        "system boot  ?()failed to canoni…", var_18, 1, 1, 1, 1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_20)
}
