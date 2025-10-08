
  int64_t uu_sort::chunks::read::h58a9f38ae3d2e00d(int128_t* arg1, int64_t arg2, int64_t* arg3, int128_t* arg4, char arg5, int64_t arg6, int64_t* arg7, int64_t* arg8, int64_t* arg9, int64_t arg10)

{
    int64_t rax = *(arg4 + 0x28);
    int128_t var_168 = *(arg4 + 0x18);
    int64_t rax_1 = arg4[4];
    int128_t var_148 = arg4[3];
    int64_t rax_2 = *(arg4 + 0x58);
    int128_t var_128 = *(arg4 + 0x48);
    int64_t rax_3 = arg4[6];
    int64_t rax_4 = *(arg4 + 0x68);
    int64_t rax_5 = arg4[7];
    int64_t rdx = *(arg4 + 0x88);
    int64_t var_178 = rdx;
    int128_t var_188 = *(arg4 + 0x78);
    int64_t r13 = arg7[2];
    
    if (rdx < r13)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::resize::hd0b7699f012edafb(&var_188, r13 + 0x2800);
        rdx = var_178;
    }
    
    int64_t rax_6;
    uint64_t rdx_1;
    rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1c97f681984dd1fe(r13, *var_188[8], rdx);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h4cb53a267c2007e7(rax_6, rdx_1, 
        arg7[1], r13);
    int32_t var_d8;
    uu_sort::chunks::read_to_buffer::ha9325b7e544409bc(&var_d8, arg8, arg9, &var_188, arg5, arg6, 
        arg7[2], arg_20);
    int64_t var_d0;
    
    if (var_d8 != 1)
    {
        char var_c8;
        char rbp_1 = var_c8;
        int64_t var_f0 = var_d0;
        arg7[2] = 0;
        
        if (var_d0 > var_178)
        {
            core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(var_d0, var_178);
            /* no return */
        }
        
        int64_t rax_8 = *var_188[8];
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2155a296ae1fa540(arg7, rax_8 + var_d0, var_178 + rax_8);
        
        if (var_d0)
        {
            int64_t var_38_1 = var_178;
            int128_t var_48 = var_188;
            var_c8 = rax;
            var_d8 = var_168;
            int128_t var_c0_1 = *arg4;
            int64_t var_b0_1 = arg4[1];
            int64_t* var_60_1 = &var_f0;
            int128_t var_a8_1 = var_148;
            int64_t var_98_1 = rax_1;
            int128_t var_90_1 = var_128;
            int64_t var_80_1 = rax_2;
            int64_t var_78_1 = rax_3;
            int64_t var_70_1 = rax_4;
            int64_t var_68_1 = rax_5;
            int32_t* var_58_1 = &arg_20;
            int64_t var_50_1 = arg10;
            int64_t result_1;
            uu_sort::chunks::Chunk::try_new::h11865afbebe6af3d(&result_1, &var_48, &var_d8);
            int64_t result = result_1;
            int64_t var_e0;
            
            if (!result)
            {
                result =
                    std::sync::mpmc::Sender$LT$T$GT$::send::h35b630fd0acd1b39(arg2, arg3, var_e0);
                core::result::Result$LT$T$C$E$GT$::unwrap::h16399e104acae490(result);
                *(arg1 + 8) = rbp_1;
                *arg1 = 0;
            }
            else
            {
                *arg1 = result;
                *(arg1 + 8) = var_e0;
            }
            return result;
        }
        
        *(arg1 + 8) = rbp_1;
        *arg1 = 0;
    }
    else
        *arg1 = var_d0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(&var_188);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(rax_3, rax_4);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_128);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_148);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_168);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..Line$GT$$GT$::hc3c59c200dc6ee06(
        arg4);
}
