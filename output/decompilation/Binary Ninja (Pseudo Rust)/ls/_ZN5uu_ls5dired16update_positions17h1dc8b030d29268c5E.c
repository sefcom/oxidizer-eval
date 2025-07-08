
  fn uu_ls::dired::update_positions::h1dc8b030d29268c5(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let rax: i64 = arg1[6];
    let result: *mut i64 =
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0c7c203ff3f53050(arg1, arg2 + rax, arg3 + rax);
    arg1[6] = 0;
    result
}
