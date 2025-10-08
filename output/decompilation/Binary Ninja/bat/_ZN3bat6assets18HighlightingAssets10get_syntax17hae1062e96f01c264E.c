
  uint64_t bat::assets::HighlightingAssets::get_syntax::hae1062e96f01c264(char* arg1, int64_t* arg2, char* arg3, uint64_t arg4, void* arg5, void* arg6)

{
    uint64_t result;
    char result_1;
    int32_t var_e7;
    void* result_2;
    int128_t var_d8;
    int128_t var_c8;
    int128_t var_b8;
    int128_t var_a8;
    char var_98;
    int128_t var_97;
    
    if (arg3)
    {
        bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
        result = result_1;
        
        if (result != 0xd)
        {
            *(arg1 + 4) = var_e7;
            *(arg1 + 1) = var_e7;
            *(arg1 + 0x20) = var_c8;
            *(arg1 + 0x30) = var_b8;
            *(arg1 + 0x40) = var_a8;
            *(arg1 + 0x10) = var_d8;
            *arg1 = result;
            *(arg1 + 8) = result_2;
        }
        else
        {
            result =
                syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token::hd2ebbb585b2e3395(
                result_2, arg3, arg4);
            
            if (!result)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_98, arg3, arg4);
                *var_d8[7] = *var_97[0xf];
                int128_t var_e1_1 = var_98;
                *arg1 = 8;
                result = result_2;
                *(arg1 + 1) = result_1;
                *(arg1 + 0x10) = result;
                *(arg1 + 0x18) = *var_d8[7];
            }
            else
            {
                *(arg1 + 8) = result;
                *(arg1 + 0x10) = result_2;
                *arg1 = 0xd;
            }
        }
    }
    else
    {
        int128_t var_48;
        void* rbp_1;
        void* r12_2;
        int64_t* r14_1;
        void* r15_2;
        
        if (!(0 + -(*(arg5 + 0x10))))
        {
            r15_2 = arg6;
            r14_1 = arg2;
            rbp_1 = arg5;
            r12_2 = arg5 + 0x10;
            label_835f39:
            path_abs::abs::PathAbs::new::hf633db794d4335f6(&result_1, r12_2);
            core::result::Result$LT$T$C$E$GT$::map_or_else::h4d7d3b5126eadf34(&var_48, &result_1, 
                *(r12_2 + 8), *(r12_2 + 0x10));
            result = bat::assets::HighlightingAssets::get_syntax_for_path::h81a93406f6b01928(
                &var_98, r14_1, &var_48, r15_2);
            
            if (var_98 == 7)
                goto label_83605f;
            
            int128_t var_58;
            *(arg1 + 0x40) = var_58;
            int128_t zmm0_2 = var_98;
            int128_t zmm1_1 = var_97;
            int128_t var_68;
            *(arg1 + 0x30) = var_68;
            int128_t var_78;
            *(arg1 + 0x20) = var_78;
            *(arg1 + 0x10) = zmm1_1;
            *arg1 = zmm0_2;
        }
        else
        {
            if (*(arg5 + 0xb8) > -0x7fffffffffffffff)
            {
                r15_2 = arg6;
                r14_1 = arg2;
                rbp_1 = arg5;
                r12_2 = arg5 + 0xb8;
                goto label_835f39;
            }
            
            rbp_1 = arg5;
            r14_1 = arg2;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_48, "[unknow", 9);
            int64_t var_38;
            *var_d8[7] = var_38;
            int128_t var_e1_2 = var_48;
            var_98 = 7;
            var_97 = result_1;
            *var_97[0xf] = result_2;
            int64_t var_80 = *var_d8[7];
            label_83605f:
            bat::assets::HighlightingAssets::get_first_line_syntax::h6c56271b9f5531af(&result_1, 
                r14_1, *(rbp_1 + 0x30), *(rbp_1 + 0x38));
            char result_3 = result_1;
            
            if (result_3 != 0xd)
            {
                *(arg1 + 4) = var_e7;
                *(arg1 + 1) = var_e7;
                *(arg1 + 0x18) = var_d8;
                *(arg1 + 0x28) = var_c8;
                *(arg1 + 0x38) = var_b8;
                *(arg1 + 0x48) = *var_a8[8];
                *arg1 = result_3;
                *(arg1 + 8) = result_2;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                    &*var_97[7]);
            }
            
            void* result_4 = result_2;
            int64_t rcx_6 = var_d8;
            *var_d8[8] = var_80;
            result_2 = var_97;
            result_1 = 7;
            
            if (result_4)
            {
                *(arg1 + 8) = result_4;
                *(arg1 + 0x10) = rcx_6;
                *arg1 = 0xd;
                return core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(
                    &result_1);
            }
            
            *(arg1 + 0x40) = var_a8;
            result = result_1;
            *(arg1 + 0x30) = var_b8;
            *(arg1 + 0x20) = var_c8;
            *(arg1 + 0x10) = var_d8;
            *(arg1 + 0x18) = *var_d8[8];
            *arg1 = result;
            *(arg1 + 1) = var_e7;
            *(arg1 + 9) = *result_2[1];
            *(arg1 + 0xd) = *result_2[5];
            arg1[0xf] = *result_2[7];
        }
    }
    return result;
}
