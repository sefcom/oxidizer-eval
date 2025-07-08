
  fn uu_tac::buffer_tac_regex::ha3032000df62e130(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: *mut c_void, arg5: i8) -> *mut *mut c_void

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_58: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_90: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&var_90, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_58));
    let mut result: *mut *mut c_void;
    let var_88: i64;
    let mut var_80: i64;
    let mut r13_1: i64;
    
    if arg2 == 0
    {
        r13_1 = 0;
        'label_59faab:
        let mut rax_5: i64;
        let mut rdx_7: u64;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r13_1, arg1, arg2);
        
        if rdx_7 < var_90 - var_80
        {
            memcpy(var_88 + var_80, rax_5, rdx_7);
            let var_80_1: i64 = rdx_7 + var_80;
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
            return nullptr;
        }
        
        let result_2: *mut *mut c_void =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(
            &var_90, rax_5, rdx_7);
        result = result_2;
        
        if result_2 == 0
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
            return nullptr;
        }
    }
    else
    {
        let mut var_50: i64;
        
        if arg5 == 0
        {
            let mut rbp_2: i64 = arg2;
            let mut r15_3: i64 = arg2;
            let mut rbx_2: i64 = arg2;
            
            loop
            {
                rbx_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(rbx_2);
                let mut rax_8: i64;
                let mut rdx_9: i64;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, rbp_2, arg1, arg2);
                regex::regex::bytes::Regex::find_at::h97f889983824a43e(&var_50, arg3, arg4, rax_8, 
                    rdx_9, rbx_2);
                
                if var_50 == 0
                {
                    r13_1 = r15_3;
                }
                else
                {
                    let var_40: i64;
                    let var_38: i64;
                    r13_1 = var_38 - var_40 + rbx_2;
                    let mut rax_9: i64;
                    let mut rdx_12: u64;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(r13_1, r15_3, arg1, arg2);
                    
                    if rdx_12 >= var_90 - var_80
                    {
                        let result_3: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_90, rax_9, rdx_12);
                        result = result_3;
                        rbp_2 = rbx_2;
                        
                        if result_3 != 0
                        {
                            break;
                        }
                    }
                    else
                    {
                        memcpy(var_88 + var_80, rax_9, rdx_12);
                        var_80 += rdx_12;
                        rbp_2 = rbx_2;
                    }
                }
                
                r15_3 = r13_1;
                
                if rbx_2 == 0
                {
                    goto 'label_59faab;
                }
            }
        }
        else
        {
            let mut r15_1: i64 = arg2;
            r13_1 = arg2;
            let mut rbp_1: i64 = arg2;
            
            loop
            {
                rbp_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(rbp_1);
                let mut rax_3: i64;
                let mut rdx_2: i64;
                rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r15_1, arg1, arg2);
                regex::regex::bytes::Regex::find_at::h97f889983824a43e(&var_50, arg3, arg4, rax_3, 
                    rdx_2, rbp_1);
                
                if var_50 != 0
                {
                    let mut rax_4: i64;
                    let mut rdx_5: u64;
                    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rbp_1, r13_1, arg1, arg2);
                    
                    if rdx_5 < var_90 - var_80
                    {
                        memcpy(var_88 + var_80, rax_4, rdx_5);
                        var_80 += rdx_5;
                        r13_1 = rbp_1;
                        r15_1 = rbp_1;
                    }
                    else
                    {
                        let result_1: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_90, rax_4, rdx_5);
                        result = result_1;
                        r13_1 = rbp_1;
                        r15_1 = rbp_1;
                        
                        if result_1 != 0
                        {
                            break;
                        }
                    }
                }
                
                if rbp_1 == 0
                {
                    goto 'label_59faab;
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
    result
}
