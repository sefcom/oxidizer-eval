
  fn uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(arg1: *mut i32) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let rax: i64;
    let var_4038: i64 = rax;
    let rbp: i32 = *arg1;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_4030, rbp);
    let mut result: i64;
    let mut result_3: i64;
    
    if var_4030 == 0
    {
        result_3 = 0;
        let var_4010: i32;
        
        if rbp <= 0 || var_4010 >= 0
        {
            'label_4b8834:
            
            if (var_4010 & 0x1000) == 0
            {
                goto 'label_4b8722;
            }
            
            let mut rax_19: i64;
            let mut result_2: i64;
            rax_19 = uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(arg1);
            result_3 = result_2;
            result = result_2;
            
            if rax_19 != 0
            {
                goto 'label_4b8722;
            }
        }
        else
        {
            let result_1: i64;
            result = result_1;
            
            if result <= 0
            {
                goto 'label_4b8834;
            }
            
            let rax_3: i64 = sysconf(0x1e);
            
            if rax_3 == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            if (rax_3 | result) >> 0x20 == 0
            {
                if COMBINE(0, result) % rax_3 == 0
                {
                    'label_4b87e7:
                    let var_3ff0: i64;
                    
                    if var_3ff0 == -1
                    {
                        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                        /* no return */
                    }
                    
                    let mut rdx_5: u64;
                    
                    if (result | (var_3ff0 + 1)) >> 0x20 == 0
                    {
                        rdx_5 = COMBINE(0, result) % (var_3ff0 + 1);
                    }
                    else
                    {
                        rdx_5 = result % (var_3ff0 + 1);
                    }
                    
                    result_3 = 0;
                    let mut rax_18: i64;
                    let mut result_4: i64;
                    rax_18 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        arg1, 0, result - rdx_5);
                    
                    if rax_18 == 0
                    {
                        result_3 = result_4;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::ha0f27aa6f0fdbae0(rax_18, result_4);
                    goto 'label_4b8834;
                }
            }
            else if COMBINE(0, result) % rax_3 == 0
            {
                goto 'label_4b87e7;
            }
        }
    }
    else
    {
        result_3 = 0;
        'label_4b8722:
        memset(&var_4030, 0, 0x4000);
        let mut i: i64;
        
        do
        {
            result = result_3;
            
            loop
            {
                let mut rax_1: i64;
                rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(
                    arg1, &var_4030, 0x4000);
                
                if rax_1 == 0
                {
                    break;
                }
                
                if std::io::error::Error::kind::hb2ff5fa058639b3d(i) != 0x23
                {
                    return result;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(i);
            }
            
            result_3 = result + i;
        } while i != 0;
    }
    result
}
