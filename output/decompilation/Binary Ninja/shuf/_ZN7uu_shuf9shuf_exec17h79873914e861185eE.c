
  uint64_t uu_shuf::shuf_exec::h79873914e861185e(void* arg1, void* arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_50;
    uint64_t result;
    
    if (!*(arg2 + 0x38))
    {
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h91ee9b47206789be(arg1, arg3, *(arg2 + 0x30));
        var_50 = rax_1;
        int64_t var_48_1 = rdx_2;
        int64_t rax_2;
        uint64_t rdx_3;
        rax_2 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c84c8710fadeccf(&var_50);
        
        if (rax_2)
        {
            char rbp_1 = *(arg2 + 0x39);
            
            while (true)
            {
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hbddde4cc5dd3278e(rax_2, rdx_3, arg4));
                
                if (result)
                    return result;
                
                char var_51 = rbp_1;
                int64_t rax_4 = arg4[2];
                
                if (*arg4 - rax_4 <= 1)
                {
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he4940fa9f64cbddd(arg4, &var_51, 1));
                    
                    if (result)
                        return result;
                }
                else
                {
                    arg4[1][rax_4] = rbp_1;
                    arg4[2] = rax_4 + 1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(0);
                    
                    if (result)
                        return result;
                }
                
                rax_2 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c84c8710fadeccf(&var_50);
                
                if (!rax_2)
                    return 0;
            }
        }
    }
    else
    {
        if (_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h19d4f659a144dda5(*(arg1 + 0x10)))
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07c2de588eccaa05(&var_50, "no lines to repeatwrite failed/h…", 0x12);
            int32_t var_38_1 = 1;
            return alloc::boxed::Box$LT$T$GT$::new::h27ff8fca799d73dd(&var_50);
        }
        
        int64_t rbp_2 = *(arg2 + 0x30);
        
        if (rbp_2)
        {
            char r12_1 = *(arg2 + 0x39);
            
            while (true)
            {
                int64_t rax_7;
                uint64_t rdx_5;
                rax_7 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h2eea63978d9ed536(arg1, arg3);
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hbddde4cc5dd3278e(rax_7, rdx_5, arg4));
                
                if (result)
                    break;
                
                var_50 = r12_1;
                int64_t rax_9 = arg4[2];
                
                if (*arg4 - rax_9 <= 1)
                {
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he4940fa9f64cbddd(arg4, &var_50, 1));
                    
                    if (result)
                        break;
                }
                else
                {
                    arg4[1][rax_9] = r12_1;
                    arg4[2] = rax_9 + 1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4cbb07e8145d0e9f(0);
                    
                    if (result)
                        break;
                }
                
                int64_t temp0_1 = rbp_2;
                rbp_2 -= 1;
                
                if (temp0_1 == 1)
                {
                    result = 0;
                    break;
                }
            }
            
            return result;
        }
    }
    return 0;
}
