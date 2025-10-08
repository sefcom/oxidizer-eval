
  fn uu_ls::dired::update_positions::hea3b08d96622b01c(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let rax: i64 = arg1[6];
    let result: *mut i64 =
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6ec75c56954cfbe3(arg1, arg2 + rax, arg3 + rax);
    arg1[6] = 0;
    result
}
