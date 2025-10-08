
  fn uu_shuf::shuf_exec::h79873914e861185e(arg1: *mut c_void, arg2: *mut c_void, arg3: i64, arg4: *mut i64) -> u64

{
    let mut var_50: i64;
    let mut result: u64;
    
    if *arg2.byte_offset(0x38) == 0
    {
        let mut rax_1: i64;
        let mut rdx_2: i64;
        rax_1 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h91ee9b47206789be(arg1, arg3, *arg2.byte_offset(0x30));
        var_50 = rax_1;
        let var_48_1: i64 = rdx_2;
        let mut rax_2: i64;
        let mut rdx_3: u64;
        rax_2 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c84c8710fadeccf(&var_50);
        
        if rax_2 != 0
        {
            let rbp_1: i8 = *arg2.byte_offset(0x39);
            
            loop
            {
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hbddde4cc5dd3278e(rax_2, rdx_3, arg4));
                
                if result != 0
                {
                    return result;
                }
                
                let mut var_51: i8 = rbp_1;
                let rax_4: i64 = arg4[2];
                
                if *arg4 - rax_4 <= 1
                {
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he4940fa9f64cbddd(arg4, &var_51, 1));
                    
                    if result != 0
                    {
                        return result;
                    }
                }
                else
                {
                    arg4[1][rax_4] = rbp_1;
                    arg4[2] = rax_4 + 1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(0);
                    
                    if result != 0
                    {
                        return result;
                    }
                }
                
                rax_2 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c84c8710fadeccf(&var_50);
                
                if rax_2 == 0
                {
                    return 0;
                }
            }
        }
    }
    else
    {
        if _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h19d4f659a144dda5(*arg1.byte_offset(0x10)) != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07c2de588eccaa05(&var_50, "no lines to repeatwrite failed/h…", 0x12);
            let var_38_1: i32 = 1;
            return alloc::boxed::Box$LT$T$GT$::new::h27ff8fca799d73dd(&var_50);
        }
        
        let mut rbp_2: i64 = *arg2.byte_offset(0x30);
        
        if rbp_2 != 0
        {
            let r12_1: i8 = *arg2.byte_offset(0x39);
            
            loop
            {
                let mut rax_7: i64;
                let mut rdx_5: u64;
                rax_7 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h2eea63978d9ed536(arg1, arg3);
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hbddde4cc5dd3278e(rax_7, rdx_5, arg4));
                
                if result != 0
                {
                    break;
                }
                
                var_50 = r12_1;
                let rax_9: i64 = arg4[2];
                
                if *arg4 - rax_9 <= 1
                {
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he4940fa9f64cbddd(arg4, &var_50, 1));
                    
                    if result != 0
                    {
                        break;
                    }
                }
                else
                {
                    arg4[1][rax_9] = r12_1;
                    arg4[2] = rax_9 + 1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(0);
                    
                    if result != 0
                    {
                        break;
                    }
                }
                
                let temp0_1: i64 = rbp_2;
                rbp_2 -= 1;
                
                if temp0_1 == 1
                {
                    result = 0;
                    break;
                }
            }
            
            return result;
        }
    }
    0
}
