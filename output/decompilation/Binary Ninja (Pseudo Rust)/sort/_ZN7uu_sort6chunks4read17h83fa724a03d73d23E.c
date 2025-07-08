
  fn uu_sort::chunks::read::h83fa724a03d73d23(arg1: *mut i128, arg2: *mut i64, arg3: *mut i128, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut i32, arg8: i64) -> *mut i128

{
    let rcx: i64 = arg3[1];
    let mut var_158: i128 = *arg3;
    let rcx_1: i64 = *arg3.byte_offset(0x28);
    let mut var_138: i128 = *arg3.byte_offset(0x18);
    let rcx_2: i64 = arg3[4];
    let mut var_118: i128 = arg3[3];
    let rcx_3: i64 = *arg3.byte_offset(0x58);
    let mut var_f8: i128 = *arg3.byte_offset(0x48);
    let mut rdx: i64 = arg3[7];
    let var_168: i64 = rdx;
    let mut var_178: i128 = arg3[6];
    let rbp: i64 = arg6[2];
    
    if rdx < rbp
    {
        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(&var_178, rbp + 0x2800, 0);
        rdx = var_168;
    }
    
    let mut rax_1: i64;
    let mut rdx_1: u64;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h4242e70a6429aee1(rbp, *var_178[8], rdx);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::hd9ca431368e04b79(rax_1, rdx_1, 
        arg6[1], rbp);
    let mut var_c8: i64;
    uu_sort::chunks::read_to_buffer::h414114ae7ce8dff0(&var_c8, arg7, &var_178, arg4, arg5, 
        arg6[2], arg_18);
    let var_c0: i64;
    
    if var_c8 == 0
    {
        let mut var_b8: i8;
        let rbp_1: i8 = var_b8;
        let mut var_e0: i64 = var_c0;
        arg6[2] = 0;
        
        if var_c0 > var_168
        {
            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(var_c0, var_168);
            /* no return */
        }
        
        let rax_4: i64 = *var_178[8];
        let mut rax_5: i64;
        let mut rdx_4: u64;
        rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h57e6a10e070b3bc9(rax_4 + var_c0, 
            var_168 + rax_4);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h40580542cdab00bd(arg6, rax_5, rdx_4);
        
        if var_c0 == 0
        {
            *arg1.byte_offset(8) = rbp_1;
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
            let var_38_1: i64 = var_168;
            let mut var_48: i128 = var_178;
            var_b8 = rcx_1;
            var_c8 = var_138;
            let var_b0_1: i128 = var_158;
            let var_a0_1: i64 = rcx;
            let var_68_1: *mut i64 = &var_e0;
            let var_98_1: i128 = var_118;
            let var_88_1: i64 = rcx_2;
            let var_80_1: i128 = var_f8;
            let var_70_1: i64 = rcx_3;
            let var_60_1: *mut i32 = &arg_18;
            let var_58_1: i64 = arg8;
            let mut var_d8: i64;
            uu_sort::chunks::Chunk::try_new::h2230747af46820bf(&var_d8, &var_48, &var_c8);
            let rax_7: i64 = var_d8;
            
            if rax_7 == 0
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::hd1d5e6f7e0663c01(
                    std::sync::mpmc::Sender$LT$T$GT$::send::h6e2915accf477763(arg2));
                *arg1.byte_offset(8) = rbp_1;
                *arg1 = 0;
            }
            else
            {
                *arg1 = rax_7;
                let var_d0: i64;
                *arg1.byte_offset(8) = var_d0;
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
    arg1
}
