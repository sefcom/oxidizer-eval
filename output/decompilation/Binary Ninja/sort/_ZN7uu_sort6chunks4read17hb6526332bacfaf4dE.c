
  int128_t* uu_sort::chunks::read::hb6526332bacfaf4d(int128_t* arg1, int64_t* arg2, int128_t* arg3, int64_t arg4, int64_t arg5, int64_t* arg6, int32_t* arg7, int64_t arg8)

{
    int64_t rcx = arg3[1];
    int128_t var_158 = *arg3;
    int64_t rcx_1 = *(arg3 + 0x28);
    int128_t var_138 = *(arg3 + 0x18);
    int64_t rcx_2 = arg3[4];
    int128_t var_118 = arg3[3];
    int64_t rcx_3 = *(arg3 + 0x58);
    int128_t var_f8 = *(arg3 + 0x48);
    int64_t rdx = arg3[7];
    int64_t var_168 = rdx;
    int128_t var_178 = arg3[6];
    int64_t rbp = arg6[2];
    
    if (rdx < rbp)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(&var_178, rbp + 0x2800, 0);
        rdx = var_168;
    }
    
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h4242e70a6429aee1(rbp, *var_178[8], rdx);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::hd9ca431368e04b79(rax_1, rdx_1, 
        arg6[1], rbp);
    int64_t var_c8;
    uu_sort::chunks::read_to_buffer::h9fbf6c8e152af272(&var_c8, arg7, &var_178, arg4, arg5, 
        arg6[2], arg_18);
    int64_t var_c0;
    
    if (!var_c8)
    {
        char var_b8;
        char rbp_1 = var_b8;
        int64_t var_e0 = var_c0;
        arg6[2] = 0;
        
        if (var_c0 > var_168)
        {
            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(var_c0, var_168);
            /* no return */
        }
        
        int64_t rax_4 = *var_178[8];
        int64_t rax_5;
        uint64_t rdx_4;
        rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h57e6a10e070b3bc9(rax_4 + var_c0, 
            var_168 + rax_4);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h40580542cdab00bd(arg6, rax_5, rdx_4);
        
        if (!var_c0)
        {
            *(arg1 + 8) = rbp_1;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_178);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..GeneralF64ParseResult$GT$$GT$::h9d2c36f5ae56d73c(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..numeric_str_cmp..NumInfo$GT$$GT$::h4b358fb61bffb9d2(&var_118);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf2277ef471272728(
                &var_138);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..Line$GT$$GT$::hc95d742df86ef0ea(
                &var_158);
        }
        else
        {
            int64_t var_38_1 = var_168;
            int128_t var_48 = var_178;
            var_b8 = rcx_1;
            var_c8 = var_138;
            int128_t var_b0_1 = var_158;
            int64_t var_a0_1 = rcx;
            int64_t* var_68_1 = &var_e0;
            int128_t var_98_1 = var_118;
            int64_t var_88_1 = rcx_2;
            int128_t var_80_1 = var_f8;
            int64_t var_70_1 = rcx_3;
            int32_t* var_60_1 = &arg_18;
            int64_t var_58_1 = arg8;
            int64_t var_d8;
            uu_sort::chunks::Chunk::try_new::h067ba70e68dafea3(&var_d8, &var_48, &var_c8);
            int64_t rax_7 = var_d8;
            
            if (!rax_7)
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::hd1d5e6f7e0663c01(
                    std::sync::mpmc::Sender$LT$T$GT$::send::h6e2915accf477763(arg2));
                *(arg1 + 8) = rbp_1;
                *arg1 = 0;
            }
            else
            {
                *arg1 = rax_7;
                int64_t var_d0;
                *(arg1 + 8) = var_d0;
            }
        }
    }
    else
    {
        *arg1 = var_c0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_178);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..GeneralF64ParseResult$GT$$GT$::h9d2c36f5ae56d73c(&var_f8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..numeric_str_cmp..NumInfo$GT$$GT$::h4b358fb61bffb9d2(&var_118);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf2277ef471272728(&var_138);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..Line$GT$$GT$::hc95d742df86ef0ea(
            &var_158);
    }
    return arg1;
}
