
  fn alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32, arg5: i8, arg6: i8) -> i64

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut rax_1: i64;
    let mut rdx_2: i32;
    rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(rax, rdx, arg3, arg4);
    let mut var_138: i64 = rax_1;
    let var_130: i32 = rdx_2;
    let mut var_128: ();
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h6161f52003526c91(&var_128, 
        arg1.byte_offset(0x20));
    let var_140: i64 = 0;
    let mut rax_2: i8;
    let mut rdx_3: i64;
    rax_2 = _$LT$alloc..collections..vec_deque..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h119dbd4628219e7c(&var_128, &var_138);
    let mut r14: i64;
    
    if (rax_2 & 1) == 0
    {
        r14 = *arg1.byte_offset(0x38);
    }
    else
    {
        r14 = rdx_3;
    }
    
    let mut r13_1: i32 = 0x3b9aca00;
    
    if arg5 != 0
    {
        r13_1 = arg4;
    }
    
    let var_68: i64 = rax_1;
    let var_60: i32 = rdx_2;
    memcpy(&var_128, arg2, 0xc0);
    let r9: i64;
    let var_48: i64 = r9;
    let var_40: i8 = arg6;
    let var_58: i64 = arg3;
    let var_50: i32 = r13_1;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::insert::h4a2214b1eb0a2d0f(
        arg1.byte_offset(0x20), r14, &var_128)
}
