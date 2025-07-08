
  fn uu_ls::calculate_padding_collection::h885b95310ac7cc45(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 * 0x130 + arg2;
    let rax_2: i8 = *arg4.byte_offset(0xe9);
    let rax_3: i8 = *arg4.byte_offset(0xea);
    let rax_4: i64 = *arg4.byte_offset(0xd8);
    let rax_5: i8 = *arg4.byte_offset(0xf1);
    let rax_6: i8 = *arg4.byte_offset(0xf8);
    let rax_7: i8 = *arg4.byte_offset(0xeb);
    let mut var_e0_1: i64;
    __builtin_memcpy(&var_e0_1, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x38);
    let mut rbx: i64 = 1;
    let mut r15: i64 = 1;
    let mut var_d8_1: i64;
    let mut var_d0_1: i64;
    let mut var_c8_1: i64;
    let var_c0: i64;
    let var_b8: i64;
    let result: i64;
    
    loop
    {
        let mut var_70: i64;
        let var_60: i64;
        let mut r12_2: *mut c_void;
        
        if rax_2 == 0
        {
            let rax_10: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_40);
            
            if rax_10 == 0
            {
                break;
            }
            
            r12_2 = rax_10;
            
            if rax_3 != 0
            {
                'label_52d175:
                let rax_11: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(r12_2);
                
                if rax_11 != 0
                {
                    uu_ls::display_size::hba9b1cbdd7c6b199(&var_70, 
                        uu_ls::get_block_size::h2a7c975a8304f17e(rax_11[0xe], 
                            *rax_11.byte_offset(0x60), rax_4, rax_5), 
                        rax_5);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_70);
                    r15 = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, r15);
                }
            }
        }
        else
        {
            let mut i: *mut i32;
            
            do
            {
                let rax_8: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_40);
                
                if rax_8 == 0
                {
                    goto 'label_52d2fa;
                }
                
                r12_2 = rax_8;
                i = uu_ls::PathData::get_metadata::hc7a96a0547653f90(rax_8);
            } while i == 0;
            
            uu_ls::display_inode::h3361fe679ac3feaa(&var_70, *i.byte_offset(0x28));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_70);
            rbx = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, rbx);
            
            if rax_3 != 0
            {
                goto 'label_52d175;
            }
        }
        
        if rax_6 == 1
        {
            let rax_14: i64 = *r12_2.byte_offset(0x40);
            uu_ls::display_dir_entry_size::hb89143fe2890521f(&var_70, r12_2, arg4);
            var_d8_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_70, var_d8_1);
            let var_68: i64;
            var_d0_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_68, var_d0_1);
            var_c8_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, var_c8_1);
            
            if rax_7 != 0
            {
                var_e0_1 = core::cmp::max_by::h7ee1a79e2ed707c0(rax_14, var_e0_1);
            }
            
            if arg3 != 1
            {
                let var_50: i64;
                let rax_22: i64 = core::cmp::max_by::h7ee1a79e2ed707c0(var_50, var_c0);
                let var_48: i64;
                core::cmp::max_by::h7ee1a79e2ed707c0(var_48, result);
                let var_58: i64;
                core::cmp::max_by::h7ee1a79e2ed707c0(
                    core::cmp::max_by::h7ee1a79e2ed707c0(var_58, var_b8), rax_22);
            }
        }
    }
    
    'label_52d2fa:
    *arg1 = rbx;
    arg1[1] = var_d8_1;
    arg1[2] = var_d0_1;
    arg1[3] = var_c8_1;
    arg1[4] = var_e0_1;
    arg1[5] = var_b8;
    arg1[6] = var_c0;
    arg1[7] = result;
    arg1[8] = r15;
    result
}
