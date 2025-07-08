
  fn uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let rax: i64 = arg1[2];
    let mut rdi: *mut i64 = nullptr;
    
    if rax >= 1
    {
        rdi = ((rax - 1) << 4) + arg1[1];
    }
    
    let rax_1: i64 = core::option::Option$LT$T$GT$::map_or::h6db8c3714c85d15c(rdi);
    /* tailcall */
    uu_ls::dired::update_positions::h1dc8b030d29268c5(arg1, arg2 + rax_1 + 2, 
        arg3 + arg2 + rax_1 + 2)
}
