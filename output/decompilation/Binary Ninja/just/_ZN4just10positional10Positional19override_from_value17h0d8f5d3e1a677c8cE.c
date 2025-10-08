
  int64_t just::positional::Positional::override_from_value::h0d8f5d3e1a677c8c(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t result;
    int64_t rdx;
    result = core::str::_$LT$impl$u20$str$GT$::find::h77d5b5a2072a0d64(arg2, arg3, 0x3d);
    
    if (!(result & 1))
        *arg1 = -0x8000000000000000;
    else
    {
        int64_t var_98;
        core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(&var_98, arg2, arg3, 
            rdx);
        int64_t r14_1 = var_98;
        
        if (!r14_1)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, rdx);
            /* no return */
        }
        
        char* var_88;
        int64_t result_1;
        void* rax;
        uint64_t rdx_3;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, var_88, result_1);
        
        if (!rax)
        {
            core::str::slice_error_fail::h1a2885084e28d077(var_88, result_1, 1, result_1);
            /* no return */
        }
        
        uint64_t var_90;
        result = just::lexer::Lexer::is_identifier::h7647ec4ff2f9f03d(r14_1, var_90);
        
        if (!result)
            *arg1 = -0x8000000000000000;
        else
        {
            int128_t var_60;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_60, r14_1, var_90);
            int128_t var_48;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, rax, rdx_3);
            result_1 = var_48;
            int128_t zmm0_1 = var_60;
            var_98 = zmm0_1;
            int64_t var_78;
            arg1[2] = var_78;
            int64_t var_38;
            *(arg1 + 0x28) = var_38;
            int64_t var_50;
            arg1[1] = var_50;
            result = result_1;
            *(arg1 + 0x18) = result;
            *arg1 = zmm0_1;
        }
    }
    
    return result;
}
