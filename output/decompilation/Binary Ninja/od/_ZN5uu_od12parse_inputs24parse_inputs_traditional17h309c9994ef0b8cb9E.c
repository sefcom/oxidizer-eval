
  int128_t* uu_od::parse_inputs::parse_inputs_traditional::h309c9994ef0b8cb9(int128_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t* r14 = arg2;
    int128_t* result;
    int128_t* result_2;
    void* var_a8;
    void** const var_90;
    void** const rax_3;
    
    if (arg3 > 3)
    {
        var_a8 = &r14[6];
        int64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
        rax_3 = &data_502728;
        label_46a9c8:
        var_90 = rax_3;
        int64_t var_88_1 = 1;
        int64_t var_70_1 = 0;
        void** var_80 = &var_a8;
        int64_t var_78_1 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_90);
        arg1[2] = 3;
    }
    else
        switch (arg3)
        {
            case 0:
            {
                int128_t* rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if (!rax_1)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_90, "-traditionaladdress-radixread-by…", 1);
                result = result_2;
                int128_t* result_1 = result;
                int128_t zmm0_1 = var_90;
                var_a8 = zmm0_1;
                rax_1[1] = result;
                *rax_1 = zmm0_1;
                *arg1 = 1;
                *(arg1 + 8) = rax_1;
                arg1[1] = 1;
                arg1[2] = 2;
                break;
            }
            case 1:
            {
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_a8, *r14, r14[1]);
                
                if (!var_a8)
                {
                    int64_t* var_a0;
                    r14 = var_a0;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_90, "-traditionaladdress-radixread-by…", 1);
                    result = nullptr;
                }
                else
                {
                    core::iter::traits::iterator::Iterator::collect::h449e225e68ca9fd4(&var_90, 
                        r14);
                    result = 2;
                }
                
                arg1[1] = result_2;
                *arg1 = var_90;
                *(arg1 + 0x18) = r14;
                arg1[2] = result;
                break;
            }
            case 2:
            {
                char* r15_1 = *r14;
                uint64_t r12_1 = r14[1];
                int64_t var_50;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_50, r15_1, r12_1);
                int64_t var_60;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_60, r14[2], 
                    r14[3]);
                int64_t rax_2 = var_60;
                int64_t var_58;
                
                if (var_50 | rax_2)
                {
                    if (rax_2)
                        goto label_46a9b1;
                    
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, r15_1, r12_1);
                    *(arg1 + 0x18) = var_58;
                    arg1[2] = 0;
                }
                else
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, "-traditionaladdress-radixread-by…", 1);
                    int64_t var_48;
                    *(arg1 + 0x18) = var_48;
                    arg1[2] = 1;
                    *(arg1 + 0x28) = var_58;
                }
                break;
            }
            case 3:
            {
                int64_t var_40;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_40, r14[2], 
                    r14[3]);
                int64_t var_30;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_30, r14[4], 
                    r14[5]);
                
                if (var_40)
                {
                    label_46a9b1:
                    var_a8 = &r14[2];
                    int64_t (* var_a0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    rax_3 = &data_502708;
                    goto label_46a9c8;
                }
                
                if (var_30)
                {
                    var_a8 = &r14[4];
                    int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    rax_3 = &data_502718;
                    goto label_46a9c8;
                }
                
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, *r14, r14[1]);
                int64_t var_38;
                *(arg1 + 0x18) = var_38;
                arg1[2] = 1;
                int64_t var_28;
                *(arg1 + 0x28) = var_28;
                break;
            }
        }
    return result;
}
