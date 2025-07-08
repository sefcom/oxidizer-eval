
  fn uu_csplit::SplitWriter::do_to_line::h321143eb79b39c5d(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64, arg6: *mut i64) -> i64

{
    arg6[7] = 1;
    arg6[6] = 1;
    let mut var_a8: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&var_a8, arg3, 
        arg4);
    let mut var_b0: i64 = 1;
    
    loop
    {
        let mut var_50: i64;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_50, arg6);
        let var_48: i64;
        
        if var_48 == -0x7fffffffffffffff
        {
            break;
        }
        
        let var_40: i64;
        
        if var_48 == -0x8000000000000000
        {
            *arg1 = 0;
            arg1[1] = var_40;
        }
        else
        {
            let rdx_1: i64 = var_50;
            let mut var_e0: i64 = var_48;
            let var_d8_1: i64 = var_40;
            let mut rcx_1: bool = rdx_1 + 1 != arg5;
            
            if rdx_1 + 1 > arg5
            {
                rcx_1 = true;
            }
            
            let var_38: u64;
            
            if rcx_1 != 1
            {
                let mut var_c8: i64;
                let mut var_88: i128;
                
                if rcx_1 != 0
                {
                    let var_78_2: u64 = var_38;
                    var_88 = var_e0;
                    uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(
                        &var_c8, arg6, rdx_1, &var_88);
                    
                    if var_c8 != -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                        var_88 = &data_6deb50;
                        'label_55efe6:
                        *var_88[8] = 1;
                        let var_78_3: i64 = 8;
                        let var_70: i128 = {0};
                        core::panicking::panic_fmt::he12d0d7468628bb4(&var_88);
                        /* no return */
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
                    var_b0 = 0xc;
                }
                else
                {
                    let rbp_1: i8 = *(arg2[4] + 0x63);
                    
                    if rbp_1 == 0
                    {
                        let var_78_1: u64 = var_38;
                        var_88 = var_e0;
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hf666c82950bc0262(
                            &var_c8, arg6, rdx_1, &var_88);
                        
                        if var_c8 != -0x8000000000000000
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                            var_88 = &data_6deb50;
                            goto 'label_55efe6;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_c8);
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
                    var_b0 = 0xc;
                    
                    if rbp_1 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_e0);
                    }
                }
                break;
            }
            
            let rax_2: *mut *mut c_void =
                uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, var_40, var_38);
            
            if rax_2 != 0
            {
                *arg1 = 0;
                arg1[1] = rax_2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                continue;
            }
        }
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_b0);
    }
    
    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(arg2);
    let result: i64;
    arg1[4] = result;
    let zmm0_2: i128 = var_b0;
    let var_a0: i128;
    *arg1.byte_offset(0x10) = var_a0;
    *arg1 = zmm0_2;
    result
}
