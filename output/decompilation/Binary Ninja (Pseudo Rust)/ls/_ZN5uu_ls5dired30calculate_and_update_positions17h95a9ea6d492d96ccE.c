
  fn uu_ls::dired::calculate_and_update_positions::h95a9ea6d492d96cc(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let rcx: *mut i64 = arg1[2];
    let mut rdi: *mut i64 = arg1[1] + (rcx << 4) - 0x10;
    
    if rcx == 0
    {
        rdi = rcx;
    }
    
    let rax_1: i64 = core::option::Option$LT$T$GT$::map_or::h9541ece648ea5431(rdi);
    /* tailcall */
    uu_ls::dired::update_positions::hea3b08d96622b01c(arg1, arg2 + rax_1 + 2, 
        arg3 + arg2 + rax_1 + 2)
}
