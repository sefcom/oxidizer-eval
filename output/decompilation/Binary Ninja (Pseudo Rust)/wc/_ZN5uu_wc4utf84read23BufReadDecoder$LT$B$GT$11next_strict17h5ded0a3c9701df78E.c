
  fn uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h5ded0a3c9701df78(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut result: *mut i64;
    
    loop
    {
        let rsi: i64 = arg2[6];
        
        if rsi != 0
        {
            _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::consume::ha95fa77ba2de7100(arg2, rsi);
            arg2[6] = 0;
        }
        
        let mut var_48: *mut i8;
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::h3e97b555acf3b590(&var_48, arg2);
        let mut rbp_1: *mut i8 = var_48;
        let result_1: *mut i64;
        
        if rbp_1 != 0
        {
            let mut result_2: *mut i64 = result_1;
            let mut rdx_4: i64;
            
            if *arg2.byte_offset(0x3c) == 0
            {
                if result_2 == 0
                {
                    result = arg1;
                    *result = 2;
                    break;
                }
                
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rbp_1, result_2);
                
                if var_48 != 1
                {
                    rbp_1 = nullptr;
                }
                else
                {
                    let var_38: i8;
                    
                    if result_1 != 0
                    {
                        result_2 = result_1;
                    }
                    else
                    {
                        let result_3: i8;
                        
                        if (var_38 & 1) != 0
                        {
                            result_2 = result_3;
                        }
                        else
                        {
                            arg2[6] = result_2;
                            let rax_3: i64 =
                                uu_wc::utf8::Incomplete::new::hec8ef2d4187e9f87(rbp_1, result_2);
                            arg2[7] = rax_3;
                            *arg2.byte_offset(0x3c) = rax_3 >> 0x20;
                            continue;
                        }
                    }
                    rbp_1 = result_1 == 0;
                }
                
                arg2[6] = result_2;
                _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::h3e97b555acf3b590(&var_48, arg2);
                let rdx_5: *mut i8 = var_48;
                
                if rdx_5 != 0
                {
                    result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result_2, rdx_5, result_1);
                    
                    if (rbp_1 & 1) == 0
                    {
                        goto 'label_464962;
                    }
                    
                    goto 'label_4649ce;
                }
            }
            else
            {
                let mut rcx_2: *mut i64;
                
                if result_2 == 0
                {
                    result = uu_wc::utf8::Incomplete::take_buffer::h1aa814b698a895ee(&arg2[7]);
                    'label_4649ce:
                    rcx_2 = arg1;
                    *rcx_2 = 1;
                    'label_4649da:
                    rcx_2[1] = result;
                    rcx_2[2] = rdx_4;
                    break;
                }
                
                let mut rax_1: u64;
                let mut rdx_2: i8;
                rax_1 = uu_wc::utf8::Incomplete::try_complete_offsets::h473bfdae9ee1fad0(&arg2[7], 
                    rbp_1, result_2);
                arg2[6] = rax_1;
                
                if rdx_2 == 2
                {
                    continue;
                }
                
                result = uu_wc::utf8::Incomplete::take_buffer::h1aa814b698a895ee(&arg2[7]);
                
                if (rdx_2 & 1) != 0
                {
                    goto 'label_4649ce;
                }
                
                'label_464962:
                rcx_2 = arg1;
                *rcx_2 = 0;
                goto 'label_4649da;
            }
        }
        
        result = result_1;
        *arg1 = 1;
        arg1[1] = 0;
        arg1[2] = result;
        break;
    }
    
    result
}
