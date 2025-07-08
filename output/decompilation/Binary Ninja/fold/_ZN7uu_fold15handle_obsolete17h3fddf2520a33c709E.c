
  int128_t* uu_fold::handle_obsolete::h3fddf2520a33c709(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    int64_t var_58 = arg2 + arg3 * 0x18;
    int64_t var_50 = 0;
    int64_t rax_2;
    void* rdx;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf9924e752afe9ea8(&var_60);
    int128_t* result;
    
    if (!rdx)
    {
        label_4b1648:
        result = arg1;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he916bedbab5d2ee8(result, 
            arg2, arg3);
        *(result + 0x18) = -0x8000000000000000;
    }
    else
    {
        int64_t rbp_1 = rax_2;
        
        while (true)
        {
            char* r13_1 = *(rdx + 8);
            void* r12_1 = *(rdx + 0x10);
            int32_t var_90 = 0;
            int64_t rax_5;
            uint64_t rdx_1;
            rax_5 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_90);
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha42463a172f186c2(r13_1, 
                r12_1, rax_5, rdx_1))
            {
                var_90 = r13_1;
                void* var_88_1 = r12_1 + r13_1;
                int32_t rdi_4 = 0x110000;
                
                if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_90))
                {
                    int32_t rax_9;
                    int32_t rdx_3;
                    rax_9 = core::str::validations::next_code_point::haf22137f2b8c1872(&var_90, 
                        &var_90);
                    rdi_4 = rdx_3;
                    
                    if (!rax_9)
                        rdi_4 = 0x110000;
                }
                
                if (core::option::Option$LT$T$GT$::map_or::ha537ee4bf15b2378(rdi_4))
                {
                    int128_t var_48;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he916bedbab5d2ee8(
                        &var_48, arg2, arg3);
                    alloc::vec::Vec$LT$T$C$A$GT$::remove::hf33a108cd057c4a0(&var_90, &var_48, 
                        rbp_1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(
                        &var_90);
                    int128_t zmm0_1 = var_48;
                    int64_t rax_11;
                    uint64_t rdx_7;
                    rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r13_1, r12_1);
                    
                    if (!rax_11)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r13_1, r12_1, 1, r12_1);
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdd06eddfecb757f4(
                        &var_90, rax_11, rdx_7);
                    result = arg1;
                    int64_t var_80;
                    *(result + 0x28) = var_80;
                    *(result + 0x18) = var_90;
                    int64_t var_38;
                    result[1] = var_38;
                    *result = zmm0_1;
                    break;
                }
            }
            
            int64_t rax_4;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf9924e752afe9ea8(&var_60);
            rbp_1 = rax_4;
            
            if (!rdx)
                goto label_4b1648;
        }
    }
    
    return result;
}
