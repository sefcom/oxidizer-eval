
  fn uu_fmt::linebreak::break_simple::h99fb810256b9c0af(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_28: i64 = arg1;
    let var_20: i64 = arg2;
    let mut result: i64;
    core::iter::traits::iterator::Iterator::try_fold::h73fbe5cd754a894b(&result, &var_28, arg3[4], 
        arg3);
    let var_10: i8;
    
    if var_10 == 2
    {
        return result;
    }
    
    let rdi_1: *mut i64 = arg3[3];
    let rax_1: i64 = rdi_1[2];
    
    if *rdi_1 - rax_1 <= 1
    {
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            rdi_1, "\n   /home/34r7hm4n/.cargo/regis…", 1);
    }
    
    rdi_1[1][rax_1] = 0xa;
    rdi_1[2] = rax_1 + 1;
    0
}
