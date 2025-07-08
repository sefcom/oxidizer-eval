
  fn uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(arg1: i64, arg2: u64, arg3: *mut i64) -> *mut *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let r12: i64 = arg3[2];
    let mut r12_1: i64;
    
    if *arg3 - r12 <= 1
    {
        let result: *mut *mut c_void =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            arg3, "\n   /home/34r7hm4n/.cargo/regis…", 1);
        
        if result != 0
        {
            return result;
        }
        
        r12_1 = arg3[2];
    }
    else
    {
        arg3[1][r12] = 0xa;
        r12_1 = r12 + 1;
        arg3[2] = r12_1;
    }
    
    if *arg3 - r12_1 <= arg2
    {
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            arg3, arg1, arg2);
    }
    
    memcpy(arg3[1] + r12_1, arg1, arg2);
    arg3[2] = r12_1 + arg2;
    nullptr
}
