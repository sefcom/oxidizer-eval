
  fn uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut result: *mut i64;
    
    loop
    {
        let rsi: i64 = arg2[2];
        
        if rsi != 0
        {
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::consume::h5ee28ccd51983a15(arg2, rsi);
            arg2[2] = 0;
        }
        
        let mut var_48: u64;
        _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(
            &var_48, arg2);
        let mut rbp_1: u64 = var_48;
        let var_40: u64;
        
        if rbp_1 != 0
        {
            let mut r13_1: u64 = var_40;
            let mut rax_5: i64;
            let mut rdx_4: i64;
            
            if *arg2.byte_offset(0x1c) != 0
            {
                if r13_1 == 0
                {
                    rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[3]);
                    result = arg1;
                    'label_4c2d1e:
                    *result = 1;
                    'label_4c2d25:
                    result[1] = rax_5;
                    result[2] = rdx_4;
                    break;
                }
                
                let mut rax_1: u64;
                let mut rdx_2: i32;
                rax_1 = uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(&arg2[3], 
                    rbp_1, r13_1);
                arg2[2] = rax_1;
                
                if rdx_2 == 2
                {
                    continue;
                }
                else
                {
                    rbp_1 = rdx_2;
                    rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[3]);
                }
                
                goto 'label_4c2ceb;
            }
            
            if r13_1 == 0
            {
                result = arg1;
                *result = 2;
                break;
            }
            
            core::str::converts::from_utf8::ha1effb4cca6d9901(&var_48, rbp_1, r13_1);
            
            if var_48 == 0
            {
                rbp_1 = 0;
            }
            else
            {
                let var_38: i8;
                
                if var_40 != 0
                {
                    r13_1 = var_40;
                }
                else
                {
                    let var_37: i8;
                    
                    if (var_38 & 1) != 0
                    {
                        r13_1 = var_37;
                    }
                    else
                    {
                        arg2[2] = r13_1;
                        let rax_3: i64 =
                            uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(rbp_1, r13_1);
                        arg2[3] = rax_3;
                        *arg2.byte_offset(0x1c) = rax_3 >> 0x20;
                        continue;
                    }
                }
                rbp_1 = var_40 == 0;
            }
            
            arg2[2] = r13_1;
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&var_48, arg2);
            let rsi_6: u64 = var_48;
            
            if rsi_6 != 0
            {
                rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(r13_1, rsi_6, var_40);
                'label_4c2ceb:
                result = arg1;
                
                if (rbp_1 & 1) != 0
                {
                    goto 'label_4c2d1e;
                }
                
                *result = 0;
                goto 'label_4c2d25;
            }
        }
        
        result = arg1;
        *result = 1;
        result[1] = 0;
        result[2] = var_40;
        break;
    }
    
    result
}
