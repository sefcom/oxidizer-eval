
  fn uu_sort::Output::into_write::hce87a09f168f8bb5(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if 0 + -(*arg2)
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hca58dd348178465d(
            arg1, 
            alloc::boxed::Box$LT$T$GT$::new::h1185d4a14edca73c(
                &std::io::stdio::STDOUT::h411b213c5c9add46), 
            &data_58cc00);
    }
    
    let mut var_24: i32 = arg2[3];
    let mut var_20: i64 = std::fs::File::set_len::h8625c3bc8a96431d(&var_24, 0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hcd5997102e6004cd(&var_20);
    let rax_4: u64 = alloc::boxed::Box$LT$T$GT$::new::hc32893ff2db2a481(var_24);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(arg2);
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hca58dd348178465d(arg1, rax_4, 
        &data_58cc50)
}
