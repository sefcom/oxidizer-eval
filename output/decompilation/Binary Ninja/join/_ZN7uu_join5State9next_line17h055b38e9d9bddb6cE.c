
  uint64_t uu_join::State::next_line::h055b38e9d9bddb6c(int64_t* arg1, void* arg2, char* arg3)

{
    int64_t* var_148;
    uu_join::State::read_line::hf8e7df99ad1c7990(&var_148, arg2, &arg3[2]);
    int64_t* rcx = var_148;
    uint64_t result_1;
    uint64_t result = result_1;
    
    if (rcx != -0x7fffffffffffffff)
    {
        int64_t* var_e0 = rcx;
        
        if (rcx != -0x8000000000000000)
        {
            int128_t var_128;
            int128_t var_f8_1 = var_128;
            int128_t var_138;
            int128_t var_108_1 = var_138;
            int64_t* var_118 = var_e0;
            uint64_t result_2 = result;
            result = arg3[1];
            char var_169_1 = result;
            int128_t zmm0_1;
            int128_t zmm1_1;
            int128_t zmm2_1;
            
            if (result != 1)
            {
                int64_t rax_1;
                uint64_t rdx_1;
                rax_1 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg2);
                int64_t rax_2;
                uint64_t rdx_2;
                rax_2 = uu_join::Line::get_field::h5172ba7928bd7492(&var_118, *(arg2 + 0x40));
                result = uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(*arg3, rax_1, rdx_1, 
                    rax_2, rdx_2);
                
                if (result == 1)
                {
                    if (var_169_1 == 2)
                    {
                        label_4647cf:
                        zmm0_1 = *(arg2 + 0x18);
                        int64_t var_68 = 0;
                        int128_t var_60_1 = zmm0_1;
                        char var_50_1 = 0;
                        int64_t var_80;
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_80, 
                            var_f8_1, *var_f8_1[8]);
                        var_148 = &var_68;
                        int64_t (* var_140)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_138 = arg2 + 0x50;
                        *var_138[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_128 = &var_80;
                        *var_128[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf2e26b2378c77421;
                        void* const var_b0 = &data_4fd400;
                        int64_t var_a8_1 = 3;
                        int64_t var_90_1 = 0;
                        int64_t** var_a0_1 = &var_148;
                        int64_t var_98_1 = 3;
                        int128_t var_48;
                        core::option::Option$LT$T$GT$::map_or_else::h377ad8e84433d07c(&var_48, 
                            &var_b0);
                        int64_t var_78;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5a6ac6c78e48f63b(var_80, var_78);
                        int128_t var_168 = var_48;
                        
                        if (var_169_1 == 2)
                        {
                            int64_t var_38;
                            arg1[3] = var_38;
                            *(arg1 + 8) = var_168;
                            *arg1 = -0x7fffffffffffffff;
                            return core::ptr::drop_in_place$LT$uu_join..Line$GT$::h024107907e0f7a9f(
                                &var_118);
                        }
                        
                        int64_t rax_6;
                        int64_t rdx_5;
                        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
                        var_68 = rax_6;
                        var_60_1 = rdx_5;
                        var_b0 = &var_68;
                        int64_t (* var_a8_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h76c68e868af0404d;
                        int128_t* var_a0_2 = &var_168;
                        int64_t (* var_98_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_148 = &data_4fd430;
                        int64_t var_140_1 = 3;
                        var_128 = 0;
                        var_138 = &var_b0;
                        *var_138[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                        *(arg2 + 0x5a) = 1;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::he74323e6cadbe242(var_168, *var_168[8]);
                    }
                    else if (*(arg2 + 0x5b) && !*(arg2 + 0x5a))
                        goto label_4647cf;
                }
                
                zmm0_1 = var_118;
                zmm1_1 = var_108_1;
                zmm2_1 = var_f8_1;
            }
            else
            {
                zmm0_1 = var_e0;
                zmm1_1 = var_138;
                zmm2_1 = var_128;
            }
            
            *(arg1 + 0x20) = zmm2_1;
            *(arg1 + 0x10) = zmm1_1;
            *arg1 = zmm0_1;
        }
        else
        {
            result = core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_e0);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        arg1[1] = -0x8000000000000000;
        arg1[2] = result;
        *arg1 = -0x7fffffffffffffff;
    }
    
    return result;
}
