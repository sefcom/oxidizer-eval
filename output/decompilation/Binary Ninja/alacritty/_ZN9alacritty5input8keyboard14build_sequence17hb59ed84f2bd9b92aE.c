
  int64_t alacritty::input::keyboard::build_sequence::hb59ed84f2bd9b92a(int64_t* arg1, int16_t* arg2, int32_t arg3, int32_t arg4)

{
    char rax;
    int64_t rsi;
    rax = _$LT$alacritty..input..keyboard..SequenceModifiers$u20$as$u20$core..convert..From$LT$winit..keyboard..ModifiersState$GT$$GT$::from::he292cff72cbb6297(arg3);
    char var_141 = rax;
    uint64_t r13;
    
    if (arg4 & 0x80000)
    {
        r13 = 1;
        
        if (!*(arg2 + 0x79))
            r13 = arg2[0x3c];
    }
    else
        r13 = 0;
    
    int32_t temp0 = arg4 & 0x2c0000;
    bool cond:0 = temp0;
    uint64_t rbx;
    rbx = temp0;
    int32_t var_140 = arg4;
    uint8_t var_13a = arg4 >> 0x15 & 1;
    char var_139 = r13;
    char var_13c = rax;
    char* rdi_1;
    
    if (arg2[0x20] != 0x1a)
    {
        char* rax_1;
        int64_t rdx;
        rax_1 = smol_str::Repr::as_str::ha71f0b13e811ba13(&arg2[0x20]);
        rdi_1 = rax_1;
        rsi = rdx;
        rbx = cond:0;
    }
    else
        rdi_1 = nullptr;
    
    char* rax_2;
    void* rdx_2;
    rax_2 =
        core::option::Option$LT$T$GT$::filter::h7841377b2933d1f6(rdi_1, rsi, arg4, *(arg2 + 0x78));
    char* var_68 = rax_2;
    int32_t* var_138;
    alacritty::input::keyboard::SequenceBuilder::try_build_numpad::hceb5670c509cfdd8(&var_138, rbx, 
        arg2);
    int128_t var_90;
    core::option::Option$LT$T$GT$::or_else::ha114689a17d5f54e(&var_90, &var_138, cond:0, *arg2, 
        arg2[1]);
    int32_t* var_b0 = &var_140;
    int16_t* var_a8 = arg2;
    char** var_a0 = &var_68;
    core::option::Option$LT$T$GT$::or_else::h218f8de80763ada6(&var_138, &var_90, &var_b0);
    var_b0 = &var_140;
    int16_t* var_a8_1 = arg2;
    char* var_a0_1 = &var_141;
    int16_t* r12_1 = arg2;
    core::option::Option$LT$T$GT$::or_else::hd24e5a11f86d1056(&var_90, &var_138, &var_b0);
    var_138 = &var_140;
    int16_t* var_130 = r12_1;
    char** var_128 = &var_68;
    uint64_t rdx_8 =
        core::option::Option$LT$T$GT$::or_else::hf85bdbc6a8b4ad87(&var_b0, &var_90, &var_138);
    
    if (var_b0 != -0x7fffffffffffffff)
    {
        char* var_38_1 = var_a0_1;
        int128_t var_48 = var_b0;
        int32_t var_98;
        uint64_t rbx_1 = var_98;
        int128_t* var_f8 = &var_48;
        int64_t (* var_f0_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
        var_138 = &data_c82c60;
        int64_t var_130_1 = 1;
        int64_t var_118_1 = 0;
        int128_t** var_128_1 = &var_f8;
        int64_t var_120_1 = 1;
        uint64_t rdx_9 = core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, 
            rdx_8, &var_138);
        var_f8 = var_90;
        char rax_7 = var_141;
        char* var_e0;
        char var_c8;
        int64_t var_80;
        
        if (r13 || rax_7 || var_68)
        {
            var_c8 = rax_7 + 1;
            var_e0 = &var_c8;
            uint64_t (* var_d8_1)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
            var_138 = &data_c82c70;
            int64_t var_130_2 = 1;
            int64_t var_118_2 = 0;
            char** var_128_2 = &var_e0;
            int64_t var_120_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, rdx_9, 
                &var_138);
            var_138 = var_90;
            int64_t var_128_3 = var_80;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_2, var_80 + var_130_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138);
            
            if (r13)
            {
                label_85733e:
                alloc::string::String::push::h0ede46164189e411(&var_f8, 0x3a);
                int32_t rsi_7 = 0x32;
                
                if (!*(r12_1 + 0x79))
                    rsi_7 = r12_1[0x3c] * 2 + 0x31;
                
                alloc::string::String::push::h0ede46164189e411(&var_f8, rsi_7);
            }
        }
        else if (r13)
            goto label_85733e;
        
        char* rax_10 = var_68;
        
        if (rax_10)
        {
            char* var_58 = rax_10;
            void* var_50_1 = rdx_2 + rax_10;
            char rax_11;
            uint64_t rdx_12;
            rax_11 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, rbx_1);
            
            if (rax_11 & rdx_12 != 0x110000)
            {
                var_c8 = rdx_12;
                var_e0 = &var_c8;
                uint64_t (* var_d8_2)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_138 = &data_c82c70;
                int64_t var_130_3 = 1;
                int64_t var_118_3 = 0;
                char** var_128_4 = &var_e0;
                int64_t var_120_3 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, rdx_12, 
                    &var_138);
                var_138 = var_90;
                int64_t var_128_5 = var_80;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_3, var_80 + var_130_3);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138);
            }
            
            int32_t var_d0_1 = rbx_1;
            var_c8 = var_58;
            char rax_12;
            uint64_t rdx_15;
            rax_12 = core::str::validations::next_code_point::h6519aaf344192553(&var_c8, rbx_1);
            
            if ((rdx_15 != 0x110000 & rax_12) == 1)
            {
                do
                {
                    int32_t var_cc = rdx_15;
                    var_e0 = &var_cc;
                    uint64_t (* var_d8_3)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                    var_138 = &data_c82c80;
                    int64_t var_130_4 = 1;
                    int64_t var_118_4 = 0;
                    char** var_128_6 = &var_e0;
                    int64_t var_120_4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_90, 0, 
                        rdx_15, &var_138);
                    var_138 = var_90;
                    int64_t var_128_7 = var_80;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_f8, var_130_4, var_80 + var_130_4);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_138);
                    char rax_13;
                    rax_13 = core::str::validations::next_code_point::h6519aaf344192553(&var_c8, 
                        &var_e0);
                    
                    if (!(rax_13 & 1))
                        break;
                } while (rdx_15 != 0x110000);
            }
            
            r12_1 = arg2;
            rbx_1 = var_d0_1;
        }
        
        int32_t rsi_10 = 0x75;
        
        if (rbx_1 != 0x110000)
            rsi_10 = rbx_1;
        
        alloc::string::String::push::h0ede46164189e411(&var_f8, rsi_10);
        arg1[2] = var_80;
        *arg1 = var_f8;
        core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_48);
    }
    else
    {
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..input..keyboard..SequenceBase$GT$$GT$::h0e106573572e9a53(&var_b0);
    }
    
    return core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(r12_1);
}
