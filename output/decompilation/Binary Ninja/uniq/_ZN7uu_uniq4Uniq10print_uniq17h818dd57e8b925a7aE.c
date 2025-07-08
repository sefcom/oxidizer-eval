
  int128_t* uu_uniq::Uniq::print_uniq::h818dd57e8b925a7a(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    void** const r13;
    void** const var_20 = r13;
    char rbp = 0xa;
    
    if (*(arg1 + 0x35))
        rbp = 0;
    
    int128_t var_68;
    std::io::BufRead::split::h55d0a47e7c3c4bc4(&var_68, arg2, arg3, rbp);
    int64_t var_c8;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98b1df7ad774e08e(&var_c8, &var_68);
    int64_t rax = var_c8;
    int128_t* result;
    
    if (rax == -0x7fffffffffffffff)
    {
        result = nullptr;
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_68, *var_68[8]);
    }
    else if (rax != -0x8000000000000000)
    {
        int64_t var_f8 = rax;
        uint64_t var_b8;
        uint64_t var_e8_1 = var_b8;
        int64_t var_58;
        int64_t var_78_1 = var_58;
        int128_t var_88 = var_68;
        char rax_3 = *(arg1 + 0x32);
        char rax_4 = arg1[6];
        char rax_5 = *(arg1 + 0x31);
        int64_t r12_1 = 1;
        char rbx_1 = 0;
        int64_t var_50_1 = -0x7fffffffffffffff;
        
        while (true)
        {
            int64_t var_48;
            _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98b1df7ad774e08e(&var_48, &var_88);
            int64_t rax_6 = var_48;
            char* var_c0;
            
            if (rax_6 == var_50_1)
            {
                core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_88, *var_88[8]);
                
                if (!(r12_1 == 1 & !rax_4) && !(r12_1 > 1 & !rax_5))
                {
                    uint32_t rax_15 = *(arg1 + 0x36);
                    
                    if (rax_15)
                    {
                        if (rax_15 != 3 || !(rbx_1 & 1))
                            goto label_4709bc;
                        
                        goto label_47097b;
                    }
                    
                    if (rbx_1 & 1)
                        goto label_47097b;
                    
                    goto label_4709bc;
                }
                
                int128_t* result_3 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1, arg4, arg5, 
                    var_c0, var_e8_1, r12_1, rbx_1 & 1);
                result = result_3;
                
                if (!result_3)
                {
                    uint32_t rax_18 = *(arg1 + 0x36);
                    
                    if (rax_18 && rax_18 != 3)
                    {
                        label_4709bc:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                        result = nullptr;
                        break;
                    }
                    
                    label_47097b:
                    var_c8 = rbp;
                    int128_t* result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1a47c8c078c37691(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(arg4, arg5, &var_c8, 1));
                    result = result_4;
                    
                    if (!result_4)
                        goto label_4709bc;
                }
            }
            else
            {
                if (rax_6 == -0x8000000000000000)
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                else
                {
                    int64_t var_a0 = rax_6;
                    int64_t var_40;
                    int64_t var_98_1 = var_40;
                    uint64_t var_38;
                    
                    if (uu_uniq::Uniq::cmp_keys::h242b77250fdb6028(arg1, var_c0, var_e8_1))
                    {
                        int128_t* result_1;
                        
                        if (r12_1 == 1 & !rax_4 || r12_1 > 1 & !rax_5)
                        {
                            result_1 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1, arg4, 
                                arg5, var_c0, var_e8_1, r12_1, rbx_1 & 1);
                            result = result_1;
                            rbx_1 = 1;
                        }
                        
                        if ((!(r12_1 == 1 & !rax_4) && !(r12_1 > 1 & !rax_5)) || !result_1)
                        {
                            var_c8 = var_a0;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                            var_e8_1 = var_38;
                            var_f8 = var_c8;
                            r12_1 = 1;
                            continue;
                        }
                    }
                    else if (!rax_3)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_a0);
                        r12_1 += 1;
                        continue;
                    }
                    else
                    {
                        int128_t* result_2 = uu_uniq::Uniq::print_line::h32e5970fdc1721c7(arg1, 
                            arg4, arg5, var_c0, var_e8_1, r12_1, rbx_1 & 1);
                        result = result_2;
                        
                        if (!result_2)
                        {
                            var_c8 = var_a0;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
                            var_e8_1 = var_38;
                            var_f8 = var_c8;
                            r12_1 += 1;
                            rbx_1 = 1;
                            continue;
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(
                        &var_a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_88, *var_88[8]);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&var_f8);
            break;
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hab86488a13dfdbdc(var_68, *var_68[8]);
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h2ae1655ce00f55b1(arg4, arg5);
    return result;
}
