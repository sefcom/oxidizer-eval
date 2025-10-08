
  fn fd::cli::Opts::strip_cwd_prefix::had143ea50fae4eb8(arg1: *mut c_void, arg2: i8, arg3: i8) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if *arg1.byte_offset(0xb0) == 0 && *arg1.byte_offset(0xc8) == 0
    {
        let rax_1: i8 =
            core::option::Option$LT$T$GT$::map_or::h0f3e669136a2a298(*arg1.byte_offset(0x1f7));
        
        if rax_1 == 0
        {
            /* tailcall */
            return fd::construct_config::_$u7b$$u7b$closure$u7d$$u7d$::hc0c2af0721adc740(arg2, 
                arg3);
        }
        
        if rax_1 == 1
        {
            return 1;
        }
    }
    
    0
}
