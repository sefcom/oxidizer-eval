
  fn uu_sort::chunks::read::h58a9f38ae3d2e00d(arg1: *mut i128, arg2: i64, arg3: *mut i64, arg4: *mut i128, arg5: i8, arg6: i64, arg7: *mut i64, arg8: *mut i64, arg9: *mut i64, arg10: i64) -> i64

{
    let rax: i64 = *arg4.byte_offset(0x28);
    let mut var_168: i128 = *arg4.byte_offset(0x18);
    let rax_1: i64 = arg4[4];
    let mut var_148: i128 = arg4[3];
    let rax_2: i64 = *arg4.byte_offset(0x58);
    let mut var_128: i128 = *arg4.byte_offset(0x48);
    let rax_3: i64 = arg4[6];
    let rax_4: i64 = *arg4.byte_offset(0x68);
    let rax_5: i64 = arg4[7];
    let mut rdx: i64 = *arg4.byte_offset(0x88);
    let var_178: i64 = rdx;
    let mut var_188: i128 = *arg4.byte_offset(0x78);
    let r13: i64 = arg7[2];
    
    if rdx < r13
    {
        alloc::vec::Vec$LT$T$C$A$GT$::resize::hd0b7699f012edafb(&var_188, r13 + 0x2800);
        rdx = var_178;
    }
    
    let mut rax_6: i64;
    let mut rdx_1: u64;
    rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1c97f681984dd1fe(r13, *var_188[8], rdx);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h4cb53a267c2007e7(rax_6, rdx_1, 
        arg7[1], r13);
    let mut var_d8: i32;
    uu_sort::chunks::read_to_buffer::ha9325b7e544409bc(&var_d8, arg8, arg9, &var_188, arg5, arg6, 
        arg7[2], arg_20);
    let var_d0: i64;
    
    if var_d8 != 1
    {
        let mut var_c8: i8;
        let rbp_1: i8 = var_c8;
        let mut var_f0: i64 = var_d0;
        arg7[2] = 0;
        
        if var_d0 > var_178
        {
            core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(var_d0, var_178);
            /* no return */
        }
        
        let rax_8: i64 = *var_188[8];
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2155a296ae1fa540(arg7, rax_8 + var_d0, var_178 + rax_8);
        
        if var_d0 != 0
        {
            let var_38_1: i64 = var_178;
            let mut var_48: i128 = var_188;
            var_c8 = rax;
            var_d8 = var_168;
            let var_c0_1: i128 = *arg4;
            let var_b0_1: i64 = arg4[1];
            let var_60_1: *mut i64 = &var_f0;
            let var_a8_1: i128 = var_148;
            let var_98_1: i64 = rax_1;
            let var_90_1: i128 = var_128;
            let var_80_1: i64 = rax_2;
            let var_78_1: i64 = rax_3;
            let var_70_1: i64 = rax_4;
            let var_68_1: i64 = rax_5;
            let var_58_1: *mut i32 = &arg_20;
            let var_50_1: i64 = arg10;
            let mut result_1: i64;
            uu_sort::chunks::Chunk::try_new::h11865afbebe6af3d(&result_1, &var_48, &var_d8);
            let mut result: i64 = result_1;
            let var_e0: i64;
            
            if result == 0
            {
                result =
                    std::sync::mpmc::Sender$LT$T$GT$::send::h35b630fd0acd1b39(arg2, arg3, var_e0);
                core::result::Result$LT$T$C$E$GT$::unwrap::h16399e104acae490(result);
                *arg1.byte_offset(8) = rbp_1;
                *arg1 = 0;
            }
            else
            {
                *arg1 = result;
                *arg1.byte_offset(8) = var_e0;
            }
            return result;
        }
        
        *arg1.byte_offset(8) = rbp_1;
        *arg1 = 0;
    }
    else
    {
        *arg1 = var_d0;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(&var_188);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpmc..array..Slot$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd036655fcae2cd02(rax_3, rax_4);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_128);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_148);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9e04263d6b1dcdf4(&var_168);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..Line$GT$$GT$::hc3c59c200dc6ee06(arg4)
}
