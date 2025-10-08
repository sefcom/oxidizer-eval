
  fn rg::search::search_reader::h1373a3ec018458d5(arg1: *mut *mut *mut c_void, arg2: i64, arg3: *mut i32, arg4: *mut i64, arg5: i64) -> i64

{
    let mut var_1d0: i64 = arg2;
    let rdx: i64 = *arg4;
    let mut rax: i64 = 0;
    
    if rdx >= 1
    {
        rax = rdx - 1;
    }
    
    let mut var_150: ();
    let var_a8: i128;
    let var_88: i128;
    let var_78: i64;
    
    if rax == 0
    {
        grep_printer::standard::Standard$LT$W$GT$::sink_with_path::h8152d58051ad7157(&var_150, 
            arg4, &var_1d0, arg5);
        let mut rax_2: *mut *mut c_void;
        let mut rdx_7: i32;
        rax_2 = grep_searcher::searcher::Searcher::search_reader::ha689e981d947947a(arg3, &var_1d0, 
            &arg_8, &var_150);
        
        if rax_2 == 0
        {
            let mut var_1c8: i128;
            let mut var_1b8: i128;
            let mut var_1a8: i128;
            let mut var_198: i64;
            let var_70: i32;
            
            if var_70 != 0x3b9aca00
            {
                var_198 = var_78;
                var_1a8 = var_88;
                let var_98: i128;
                var_1b8 = var_98;
                var_1c8 = var_a8;
                let var_6c: i32;
                rdx_7 = var_6c;
            }
            
            arg1[6] = var_198;
            *arg1.byte_offset(0x20) = var_1a8;
            *arg1.byte_offset(0x10) = var_1b8;
            *arg1 = var_1c8;
            arg1[7] = var_70;
            *arg1.byte_offset(0x3c) = rdx_7;
            let var_30: i64;
            arg1[8] = var_30 != 0;
        }
        else
        {
            *arg1 = rax_2;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..standard..StandardSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hbaea639639eab715(&var_150);
    }
    
    let rdi: *mut i64 = &var_150;
    let rdx_2: *mut i64 = &var_1d0;
    let var_d8: i128;
    let var_c8: i128;
    let var_b8: i128;
    
    if rax != 1
    {
        grep_printer::json::JSON$LT$W$GT$::sink_with_path::hb29925006a44c88f(rdi, &arg4[1], rdx_2, 
            arg5);
        let rax_3: *mut *mut c_void =
            grep_searcher::searcher::Searcher::search_reader::hee1d89112413402e(arg3, &var_1d0, 
            &arg_8, &var_150);
        
        if rax_3 == 0
        {
            *arg1.byte_offset(0x30) = var_a8;
            *arg1.byte_offset(0x20) = var_b8;
            *arg1.byte_offset(0x10) = var_c8;
            *arg1 = var_d8;
            arg1[8] = var_78 != 0;
        }
        else
        {
            *arg1 = rax_3;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..json..JSONSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hb4dc6679c7e10724(&var_150);
    }
    
    grep_printer::summary::Summary$LT$W$GT$::sink_with_path::hfb849d1c20c4f3d2(rdi, &arg4[1], 
        rdx_2, arg5);
    let mut rax_1: *mut *mut c_void;
    let mut rdx_4: i32;
    rax_1 = grep_searcher::searcher::Searcher::search_reader::h70421e5c5e1d7301(arg3, &var_1d0, 
        &arg_8, &var_150);
    
    if rax_1 == 0
    {
        let mut rax_5: u32 = *var_b8.byte_offset(0x72);
        let mut var_188: i128;
        let mut var_178: i128;
        let mut var_168: i128;
        let mut var_158: i64;
        let mut rcx_6: i32;
        
        if rax_5 == 3 || rax_5 == 5
        {
            rax_5 = var_88 == 0;
            rcx_6 = var_c8;
            
            if rcx_6 != 0x3b9aca00
            {
                'label_658737:
                var_158 = *var_d8[8];
                let var_e0: i128;
                var_168 = var_e0;
                let var_f0: i128;
                var_178 = var_f0;
                let var_100: i128;
                var_188 = var_100;
                rdx_4 = *var_c8[4];
            }
        }
        else
        {
            rax_5 = var_88 != 0;
            rcx_6 = var_c8;
            
            if rcx_6 != 0x3b9aca00
            {
                goto 'label_658737;
            }
        }
        
        arg1[6] = var_158;
        *arg1.byte_offset(0x20) = var_168;
        *arg1.byte_offset(0x10) = var_178;
        *arg1 = var_188;
        arg1[7] = rcx_6;
        *arg1.byte_offset(0x3c) = rdx_4;
        arg1[8] = rax_5;
    }
    else
    {
        *arg1 = rax_1;
        arg1[7] = 0x3b9aca01;
    }
    
    core::ptr::drop_in_place$LT$grep_printer..summary..SummarySink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::h43ababb217c3d4a6(&var_150)
}
