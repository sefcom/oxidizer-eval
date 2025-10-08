
  fn fd::cli::Opts::gen_completions::ha22721d6f5bedfac(arg1: *mut i8, arg2: i8)

{
    if arg2 != 6
    {
        let mut var_18: i8;
        fd::cli::Opts::gen_completions::_$u7b$$u7b$closure$u7d$$u7d$::h4f5f0f8e2e59eb17(&var_18, 
            arg2);
        
        if (var_18 & 1) != 0
        {
            let var_10: i64;
            *arg1.byte_offset(8) = var_10;
            let mut rax_1: i64;
            rax_1 = 1;
            *arg1 = 1;
            return;
        }
        
        let var_17: i8;
        arg1[1] = var_17;
    }
    else
    {
        arg1[1] = 5;
    }
    
    *arg1 = 0;
}
