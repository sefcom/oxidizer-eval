
  int128_t* uu_fold::handle_obsolete::hddaf49443b83bcdb(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    int64_t var_58 = arg2 + arg3 * 0x18;
    int64_t var_50 = 0;
    int64_t rax_2;
    void* rdx;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he54a06542fd2e8b1(&var_60);
    int128_t* result;
    
    if (!rdx)
    {
        label_45b6e2:
        result = arg1;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0dedcd644dd186d3(result, arg2, arg3);
        *(result + 0x18) = -0x8000000000000000;
    }
    else
    {
        int64_t r13_1 = rax_2;
        void* r12_1 = rdx;
        
        while (true)
        {
            int64_t r14_1 = *(r12_1 + 8);
            int64_t r15_1 = *(r12_1 + 0x10);
            int32_t var_90 = 0;
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcf84e2f3ea96fe28(r14_1, 
                r15_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_90)))
            {
                int64_t rax_6 = *(r12_1 + 8);
                int64_t rcx_2 = *(r12_1 + 0x10) + rax_6;
                var_90 = rax_6;
                
                if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_90))
                {
                    char rax_8;
                    int32_t rdx_3;
                    rax_8 = core::str::validations::next_code_point::h22c36519b8a1e543(&var_90, 
                        &var_60);
                    
                    if (rax_8 & 1 && rdx_3 - 0x30 < 0xa)
                    {
                        int128_t var_48;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0dedcd644dd186d3(&var_48, arg2, arg3);
                        alloc::vec::Vec$LT$T$C$A$GT$::remove::h6933f29b75a2f879(&var_90, &var_48, 
                            r13_1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(
                            var_90, rcx_2);
                        char* r14_2 = *(r12_1 + 8);
                        int64_t rbx_2 = *(r12_1 + 0x10);
                        int64_t rax_9;
                        uint64_t rdx_7;
                        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_2, rbx_2);
                        
                        if (!rax_9)
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r14_2, rbx_2, 1, rbx_2);
                            /* no return */
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h600e44234b0f024a(&var_90, rax_9, rdx_7);
                        result = arg1;
                        int64_t var_80;
                        *(result + 0x28) = var_80;
                        *(result + 0x18) = var_90;
                        int64_t var_38;
                        result[1] = var_38;
                        *result = var_48;
                        break;
                    }
                }
            }
            
            int64_t rax_3;
            void* rdx_1;
            rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he54a06542fd2e8b1(&var_60);
            r13_1 = rax_3;
            r12_1 = rdx_1;
            
            if (!rdx_1)
                goto label_45b6e2;
        }
    }
    
    return result;
}
