
  fn rg::search::search_path::hcddb9f8857d0e766(arg1: *mut *mut *mut c_void, arg2: i64, arg3: *mut i64, arg4: *mut i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_1e0: i64 = arg2;
    let rdx: i64 = *arg4;
    let mut rax: i64 = 0;
    
    if rdx >= 1
    {
        rax = rdx - 1;
    }
    
    let mut var_160: ();
    let var_b8: i128;
    let var_98: i128;
    let var_88: i64;
    
    if rax == 0
    {
        grep_printer::standard::Standard$LT$W$GT$::sink_with_path::h5d522d78077ff9a9(&var_160, 
            arg4, &var_1e0, arg5);
        let mut rax_2: *mut *mut c_void;
        let mut rdx_7: i32;
        rax_2 = grep_searcher::searcher::Searcher::search_path::ha6aa29b536717390(arg3, &var_1e0, 
            arg5, arg6, &var_160);
        
        if rax_2 == 0
        {
            let mut var_1d8: i128;
            let mut var_1c8: i128;
            let mut var_1b8: i128;
            let mut var_1a8: i64;
            let var_80: i32;
            
            if var_80 != 0x3b9aca00
            {
                var_1a8 = var_88;
                var_1b8 = var_98;
                let var_a8: i128;
                var_1c8 = var_a8;
                var_1d8 = var_b8;
                let var_7c: i32;
                rdx_7 = var_7c;
            }
            
            arg1[6] = var_1a8;
            *arg1.byte_offset(0x20) = var_1b8;
            *arg1.byte_offset(0x10) = var_1c8;
            *arg1 = var_1d8;
            arg1[7] = var_80;
            *arg1.byte_offset(0x3c) = rdx_7;
            let var_40: i64;
            arg1[8] = var_40 != 0;
        }
        else
        {
            *arg1 = rax_2;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..standard..StandardSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hbaea639639eab715(&var_160);
    }
    
    let rdi: *mut i64 = &var_160;
    let rdx_2: *mut i64 = &var_1e0;
    let var_e8: i128;
    let var_d8: i128;
    let var_c8: i128;
    
    if rax != 1
    {
        grep_printer::json::JSON$LT$W$GT$::sink_with_path::ha46c69d78c81d5a3(rdi, &arg4[1], rdx_2, 
            arg5);
        let rax_3: *mut *mut c_void =
            grep_searcher::searcher::Searcher::search_path::h2befddfdef6aaf11(arg3, &var_1e0, arg5, 
            arg6, &var_160);
        
        if rax_3 == 0
        {
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = var_e8;
            arg1[8] = var_88 != 0;
        }
        else
        {
            *arg1 = rax_3;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..json..JSONSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hb4dc6679c7e10724(&var_160);
    }
    
    grep_printer::summary::Summary$LT$W$GT$::sink_with_path::he035225173f768fe(rdi, &arg4[1], 
        rdx_2, arg5);
    let mut rax_1: *mut *mut c_void;
    let mut rdx_4: i32;
    rax_1 = grep_searcher::searcher::Searcher::search_path::hdcdeda6dd20cf06b(arg3, &var_1e0, arg5, 
        arg6, &var_160);
    
    if rax_1 == 0
    {
        let mut rax_5: u32 = *var_c8.byte_offset(0x72);
        let mut var_198: i128;
        let mut var_188: i128;
        let mut var_178: i128;
        let mut var_168: i64;
        let mut rcx_6: i32;
        
        if rax_5 == 3 || rax_5 == 5
        {
            rax_5 = var_98 == 0;
            rcx_6 = var_d8;
            
            if rcx_6 != 0x3b9aca00
            {
                'label_658116:
                var_168 = *var_e8[8];
                let var_f0: i128;
                var_178 = var_f0;
                let var_100: i128;
                var_188 = var_100;
                let var_110: i128;
                var_198 = var_110;
                rdx_4 = *var_d8[4];
            }
        }
        else
        {
            rax_5 = var_98 != 0;
            rcx_6 = var_d8;
            
            if rcx_6 != 0x3b9aca00
            {
                goto 'label_658116;
            }
        }
        
        arg1[6] = var_168;
        *arg1.byte_offset(0x20) = var_178;
        *arg1.byte_offset(0x10) = var_188;
        *arg1 = var_198;
        arg1[7] = rcx_6;
        *arg1.byte_offset(0x3c) = rdx_4;
        arg1[8] = rax_5;
    }
    else
    {
        *arg1 = rax_1;
        arg1[7] = 0x3b9aca01;
    }
    
    core::ptr::drop_in_place$LT$grep_printer..summary..SummarySink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::h43ababb217c3d4a6(&var_160)
}
