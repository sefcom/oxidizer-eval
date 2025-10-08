
  fn uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(arg1: i64, arg2: i64, arg3: *mut i8) -> *mut i128

{
    let mut var_30: i64 = arg1;
    let var_28: i64 = arg2;
    let mut var_80: i64;
    let result: *mut i128 =
        uu_numfmt::format::format_and_print::h5bf849f061ae056f(&var_80, arg1, arg2, arg3);
    
    if 0 + -(var_80)
    {
        return result;
    }
    
    let var_70: i64;
    let var_38_1: i64 = var_70;
    let mut var_48: i128 = var_80;
    let mut rbp: i64;
    rbp = 1;
    let mut var_d0: *mut c_void;
    let mut var_c8: i128;
    let mut var_a0: *mut i64;
    let mut var_68: *mut *mut i64;
    
    match jump_table_41a43c[arg3[0xc9]]
    {
        0x51db5 =>
        {
            let var_b8_1: i64 = var_70;
            let var_c8_1: i128 = var_80;
            var_d0 = 2;
            alloc::boxed::Box$LT$T$GT$::new::h9fc007057db03ec8(&var_d0)
        }
        0x51de1 =>
        {
            let var_50_1: i64 = var_70;
            let var_60_1: i128 = var_80;
            var_68 = 2;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(2);
            let mut rax_6: i64;
            let mut rdx_1: i64;
            rax_6 = uucore::util_name::h074417a1e6395129();
            let mut var_20: i64 = rax_6;
            let var_18_1: i64 = rdx_1;
            var_a0 = &var_20;
            let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            let var_90_1: *mut *mut *mut i64 = &var_68;
            let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_numfmt..errors..NumfmtError$u20$as$u20$core..fmt..Display$GT$::fmt::h88668725e89ac501;
            var_d0 = &data_502708;
            var_c8 = 3;
            let var_b0_1: i64 = 0;
            *var_c8[8] = &var_a0;
            let var_b8_2: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$uu_numfmt..errors..NumfmtError$GT$::h84537972f923e6b2(
                &var_68);
            rbp = 0;
            'label_46c394:
            var_a0 = &var_30;
            let var_98_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            var_d0 = &data_502758;
            var_c8 = 2;
            let var_b0_4: i64 = 0;
            *var_c8[8] = &var_a0;
            let var_b8_5: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
            
            if rbp != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_48);
            }
            
            nullptr
        }
        0x51e9e =>
        {
            let mut rax_7: *mut i64;
            let mut rdx_2: i64;
            rax_7 = uucore::util_name::h074417a1e6395129();
            var_a0 = rax_7;
            let var_98_2: i64 = rdx_2;
            var_68 = &var_a0;
            let mut var_60: i128;
            var_60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
            var_d0 = &data_502738;
            var_c8 = 2;
            let var_b0_2: i64 = 0;
            *var_c8[8] = &var_68;
            let var_b8_3: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            var_a0 = &var_48;
            let var_98_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_502758;
            var_c8 = 2;
            let var_b0_3: i64 = 0;
            *var_c8[8] = &var_a0;
            let var_b8_4: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            goto 'label_46c394;
        }
        0x51f50 =>
        {
            goto 'label_46c394;
        }
    }
}
