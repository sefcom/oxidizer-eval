
  fn uu_du::read_block_size::h76babfb70e66ee44(arg1: *mut *mut i128, arg2: *mut c_void, arg3: u64) -> *mut *mut i128

{
    let mut var_c8: i32;
    let var_c0: *mut *mut c_void;
    let mut var_a8: *const i8;
    
    if arg2 == 0
    {
        var_a8 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
        let var_a0_1: i64 = 0xd;
        let var_98_1: *const i8 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRE…";
        let var_90_1: i64 = 0xa;
        let var_88_1: *const i8 = "BLOCKSIZEPOSIXLY_CORRECTblock-si…";
        let var_80_1: i64 = 9;
        let var_78_1: i64 = 0;
        let var_70_1: i64 = 3;
        
        loop
        {
            let rax_2: i64 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca94120cebd2fbbe(&var_a8);
            
            if rax_2 == 0
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                std::env::var::h8742b1567e161603(&var_a8, "POSIXLY_CORRECTblock-size ignore…");
                let r15_2: *const i8 = var_a8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_a8);
                
                if r15_2 == 0
                {
                    arg1[1] = 0x200;
                    *arg1 = nullptr;
                }
                else
                {
                    arg1[1] = 0x400;
                    *arg1 = nullptr;
                }
                
                break;
            }
            
            let mut var_50: i64;
            std::env::var::h8742b1567e161603(&var_50, rax_2);
            
            if var_50 == 0
            {
                let var_38: u64;
                let var_58_1: u64 = var_38;
                let var_48: i128;
                let mut var_68: i128 = var_48;
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_c8, *var_68[8], 
                    var_38);
                
                if var_c8 == 3
                {
                    arg1[1] = var_c0;
                    *arg1 = nullptr;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(
                        &var_68);
                    
                    if var_50 != 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_50);
                    }
                    
                    core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&var_c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_68);
                
                if var_50 == 0
                {
                    continue;
                }
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_50);
        }
    }
    else
    {
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_c8, arg2, arg3);
        let mut rax_1: *mut i128;
        let mut rcx_1: *mut *mut c_void;
        
        if var_c8 != 3
        {
            let var_b8: i128;
            let mut var_98: i64;
            var_98 = var_b8;
            var_a8 = var_c8;
            rax_1 = uu_du::read_block_size::_$u7b$$u7b$closure$u7d$$u7d$::hbe6839e34197ed94(arg2, 
                arg3, &var_a8);
            rcx_1 = &data_584310;
        }
        else
        {
            rcx_1 = var_c0;
            rax_1 = nullptr;
        }
        
        arg1[1] = rcx_1;
        *arg1 = rax_1;
    }
    arg1
}
