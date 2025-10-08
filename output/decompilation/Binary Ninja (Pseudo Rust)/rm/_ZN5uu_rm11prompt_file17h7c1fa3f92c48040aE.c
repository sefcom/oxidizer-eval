
  fn uu_rm::prompt_file::h7c1fa3f92c48040a(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> u64

{
    let r13: u32 = arg4;
    let mut rbp: u64;
    rbp = 1;
    
    if r13 == 2
    {
        let mut var_e0: *mut c_void;
        std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, arg1);
        let rax_1: *mut c_void = var_e0;
        let mut rdi_1: *mut c_void = 2;
        
        if rax_1 == 2
        {
            goto 'label_45dc51;
        }
        
        let var_a8: i32;
        let mut var_148: *mut *mut i64;
        let mut var_118: *mut i64;
        let var_d8: i64;
        
        if (0xf000 & var_a8) != 0xa000
        {
            rdi_1 = rax_1;
            'label_45dc51:
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rdi_1, var_d8);
            'label_45dc61:
            std::fs::metadata::h578d377c5d8d0272(&var_e0, arg1);
            let rdi_12: *mut c_void = var_e0;
            
            if rdi_12 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rdi_12, var_d8);
                let mut rax_9: u8;
                
                if arg4 == 2
                {
                    rax_9 = uu_rm::is_writable::h35835a5ca0912bec(arg1);
                }
                
                if arg4 != 2 || rax_9 == 0
                {
                    /* tailcall */
                    return uu_rm::prompt_file_permission_readonly::h22905ffc5cf8659c(arg1, arg2, 
                        arg3, r13);
                }
                
                let var_90: i64;
                let mut var_130: i64;
                
                if var_90 == 0
                {
                    let mut rax_15: *mut *mut i64;
                    let mut rdx_8: i64;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_15;
                    let var_140_8: i64 = rdx_8;
                    var_118 = &var_148;
                    let var_110_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    var_e0 = &data_4ea4a0;
                    let var_d8_5: i64 = 2;
                    let var_c0_4: i64 = 0;
                    let var_d0_5: *mut *mut i64 = &var_118;
                    let var_c8_4: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_148 = 1;
                    let var_140_9: i64 = arg1;
                    let var_138_7: i64 = arg2;
                    var_130 = 1;
                    var_118 = &var_148;
                    let var_110_8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_4ea670;
                    let var_d8_6: i64 = 2;
                    let var_c0_5: i64 = 0;
                    let var_d0_6: *mut *mut i64 = &var_118;
                    let mut var_c8_5: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &data_4ea630;
                    let var_d8_7: i64 = 1;
                    let var_d0_7: i64 = 8;
                    var_c8_5 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&var_e0);
                }
                else
                {
                    let mut rax_10: *mut *mut i64;
                    let mut rdx_4: i64;
                    rax_10 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_10;
                    let var_140_5: i64 = rdx_4;
                    var_118 = &var_148;
                    let var_110_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    var_e0 = &data_4ea4a0;
                    let var_d8_1: i64 = 2;
                    let var_c0_1: i64 = 0;
                    let var_d0_1: *mut *mut i64 = &var_118;
                    let var_c8_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_148 = 1;
                    let var_140_6: i64 = arg1;
                    let var_138_5: i64 = arg2;
                    var_130 = 1;
                    var_118 = &var_148;
                    let var_110_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_4ea690;
                    let var_d8_2: i64 = 2;
                    let var_c0_2: i64 = 0;
                    let var_d0_2: *mut *mut i64 = &var_118;
                    let mut var_c8_2: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &data_4ea630;
                    let var_d8_3: i64 = 1;
                    let var_d0_3: i64 = 8;
                    var_c8_2 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&var_e0);
                }
                rbp = uucore::read_yes::h67cb9532536454c0();
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(2, var_d8);
            }
        }
        else
        {
            let mut rax_3: *mut i64;
            let mut rdx_1: i64;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_3;
            let var_110_1: i64 = rdx_1;
            let mut var_158: u64 = &var_118;
            let var_150_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_148 = &data_4ea4a0;
            let var_140_1: i64 = 2;
            let var_128_1: i64 = 0;
            let var_138_1: *mut u64 = &var_158;
            let var_130_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_118 = 1;
            let var_110_2: i64 = arg1;
            let var_108_1: i64 = arg2;
            let var_100_1: i8 = 1;
            var_158 = &var_118;
            let var_150_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_148 = &data_4ea610;
            let var_140_2: i64 = 2;
            let var_128_2: i64 = 0;
            let var_138_2: *mut u64 = &var_158;
            let mut var_130_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_148 = &data_4ea630;
            let var_140_3: i64 = 1;
            let var_138_3: i64 = 8;
            var_130_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_148 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_148);
            rbp = uucore::read_yes::h67cb9532536454c0();
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rax_1, var_d8);
        }
    }
    else if r13 != 0
    {
        goto 'label_45dc61;
    }
    
    rbp
}
