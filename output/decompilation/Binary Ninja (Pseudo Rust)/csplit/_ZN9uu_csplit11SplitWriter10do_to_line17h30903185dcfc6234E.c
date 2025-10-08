
  fn uu_csplit::SplitWriter::do_to_line::h30903185dcfc6234(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64, arg6: *mut i64) -> i64

{
    arg6[0xb] = 1;
    arg6[0xa] = 1;
    let mut var_a0: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&var_a0, arg3, arg4);
    let mut var_a8: i64 = 1;
    
    loop
    {
        let mut var_80: i64;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e28d1a528fdaefb(&var_80, arg6);
        let var_78: i64;
        
        if var_78 == -0x7fffffffffffffff
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_80);
            break;
        }
        
        let var_70: i64;
        let var_68: u64;
        
        if var_78 == -0x8000000000000000
        {
            *arg1 = 0xc;
            arg1[1] = var_70;
            arg1[2] = var_68;
        }
        else
        {
            let rdx_1: i64 = var_80;
            let mut var_c0: i64 = var_78;
            let var_b8_1: i64 = var_70;
            let c_1: bool = arg5 < rdx_1 + 1;
            let mut rcx_1: i64;
            rcx_1 = arg5 != rdx_1 + 1 && !c_1;
            let var_b0_1: u64 = var_68;
            rcx_1 = rcx_1 - 0;
            
            if rcx_1 != 1
            {
                let mut var_60: *mut *mut [i8; 0xcc];
                
                if rcx_1 != 0
                {
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(
                        &var_60, arg6, rdx_1, &var_c0);
                    let rbx_2: *mut *mut [i8; 0xcc] = var_60;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&var_60);
                    
                    if rbx_2 != -0x8000000000000000
                    {
                        'label_516a96:
                        var_60 = &data_641bf0;
                        let var_58: i64 = 1;
                        let var_50: i64 = 8;
                        let var_48: i128 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
                    var_a8 = 0xd;
                }
                else
                {
                    let rbp_1: i8 = *(arg2[4] + 0x63);
                    let mut rbx_1: *mut *mut [i8; 0xcc];
                    
                    if rbp_1 == 0
                    {
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(
                            &var_60, arg6, rdx_1, &var_c0);
                        rbx_1 = var_60;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&var_60);
                    }
                    
                    if rbp_1 == 0 && rbx_1 != -0x8000000000000000
                    {
                        goto 'label_516a96;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
                    var_a8 = 0xd;
                    
                    if rbp_1 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                            &var_c0);
                    }
                }
                break;
            }
            
            let rax_2: *mut *mut c_void =
                uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_70, var_68);
            
            if rax_2 != 0
            {
                *arg1 = 0;
                arg1[1] = rax_2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_c0);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_c0);
                continue;
            }
        }
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_a8);
    }
    
    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
    let result: i64;
    arg1[4] = result;
    let zmm0_2: i128 = var_a8;
    let var_98: i128;
    *arg1.byte_offset(0x10) = var_98;
    *arg1 = zmm0_2;
    result
}
