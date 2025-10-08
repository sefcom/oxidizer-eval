
  fn uu_tac::buffer_tac_regex::hd38e8f998c56a138(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: *mut c_void, arg5: i8) -> ssize_t

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_58: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_90: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb5da74aabfacf130(&var_90, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_58));
    let var_88: i64;
    let mut var_80: i64;
    let mut i_5: i64;
    let mut result: ssize_t;
    
    if arg2 == 0
    {
        i_5 = 0;
    }
    else
    {
        let mut i_2: i64 = arg2 - 1;
        let mut var_50: i64;
        
        if arg5 == 0
        {
            let mut i_4: i64 = arg2;
            let mut i_6: i64 = arg2;
            let mut i: i64;
            
            do
            {
                let mut rax_8: i64;
                let mut rdx_11: i64;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_4, arg1, arg2);
                regex::regex::bytes::Regex::find_at::ha500615bd3b0433b(&var_50, arg3, arg4, rax_8, 
                    rdx_11, i_2);
                
                if var_50 == 0
                {
                    i_5 = i_6;
                }
                else
                {
                    let var_40: i64;
                    let var_38: i64;
                    i_5 = var_38 - var_40 + i_2;
                    let mut rax_9: i64;
                    let mut rdx_14: u64;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(i_5, i_6, arg1, arg2);
                    
                    if rdx_14 >= var_90 - var_80
                    {
                        let result_2: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_90, rax_9, rdx_14);
                        result = result_2;
                        i_4 = i_2;
                        
                        if result_2 != 0
                        {
                            goto 'label_5125c0;
                        }
                    }
                    else
                    {
                        memcpy(var_88 + var_80, rax_9, rdx_14);
                        var_80 += rdx_14;
                        i_4 = i_2;
                    }
                }
                
                i_6 = i_5;
                i = i_2;
                i_2 -= 1;
            } while i >= 1;
        }
        else
        {
            let mut i_3: i64 = arg2;
            i_5 = arg2;
            let mut i_1: i64;
            
            do
            {
                let mut rax_2: i64;
                let mut rdx_2: i64;
                rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_3, arg1, arg2);
                regex::regex::bytes::Regex::find_at::ha500615bd3b0433b(&var_50, arg3, arg4, rax_2, 
                    rdx_2, i_2);
                
                if var_50 != 0
                {
                    let mut rax_3: i64;
                    let mut rdx_5: u64;
                    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(i_2, i_5, arg1, arg2);
                    
                    if rdx_5 < var_90 - var_80
                    {
                        memcpy(var_88 + var_80, rax_3, rdx_5);
                        var_80 += rdx_5;
                        i_5 = i_2;
                        i_3 = i_2;
                    }
                    else
                    {
                        let result_1: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_90, rax_3, rdx_5);
                        result = result_1;
                        i_5 = i_2;
                        i_3 = i_2;
                        
                        if result_1 != 0
                        {
                            goto 'label_5125c0;
                        }
                    }
                }
                
                i_1 = i_2;
                i_2 -= 1;
            } while i_1 >= 1;
        }
    }
    
    let mut rax_4: i64;
    let mut rdx_8: u64;
    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_5, arg1, arg2);
    
    if rdx_8 >= var_90 - var_80
    {
        let result_3: ssize_t =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(
            &var_90, rax_4, rdx_8);
        result = result_3;
        
        if result_3 == 0
        {
            result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_90);
        }
    }
    else
    {
        memcpy(var_88 + var_80, rax_4, rdx_8);
        let var_80_1: i64 = rdx_8 + var_80;
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_90);
    }
    
    'label_5125c0:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h906e82980bfe4b9c(&var_90);
    result
}
