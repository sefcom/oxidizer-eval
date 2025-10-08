
  fn just::subcommand::Subcommand::init::h51bb79e7c581e91d(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut r8: i64 = 0;
    
    if !(0 + -(*arg2.byte_offset(0x78)))
    {
        r8 = *arg2.byte_offset(0x80);
    }
    
    let mut var_b8: *mut *mut [i8; 0x6e];
    just::search::Search::init::haedd07c032121962(&var_b8, arg2.byte_offset(0x108), 
        *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), r8, *arg2.byte_offset(0x88));
    let rax: *mut *mut [i8; 0x6e] = var_b8;
    let mut var_b0: i128;
    let mut var_a0: i128;
    
    if -(rax) == -0x8000000000000000
    {
        *var_b8[7] = var_b0;
        *arg1 = 0x2a;
        *arg1.byte_offset(1) = var_b8;
        *arg1.byte_offset(0x11) = var_a0;
        let result: i64 = *var_a0[7];
        *arg1.byte_offset(0x20) = result;
        return result;
    }
    
    let mut var_70: i128 = var_a0;
    let mut var_88: *mut *mut [i8; 0x6e] = rax;
    let var_90: i64;
    let var_60: i64 = var_90;
    
    if std::path::Path::is_file::h6e28d87ff76ffc41(var_b0, *var_b0[8]) == 0
    {
        let rax_4: *mut *mut [i8; 0x6e] = std::fs::write::h66888f812240dce5(&var_88);
        var_b8 = rax_4;
        
        if rax_4 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::ha63f2216ca348766(&var_b8);
            
            if *arg2.byte_offset(0x1a7) != 0
            {
                let mut var_20: i128 = var_b0;
                let mut var_30: *mut i128 = &var_20;
                let var_28_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_b8 = &data_831158;
                var_b0 = 2;
                *var_a0[8] = 0;
                *var_b0[8] = &var_30;
                var_a0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
            }
            
            *arg1 = 0x38;
            return core::ptr::drop_in_place$LT$just..search..Search$GT$::h18f5d3903328307e(&var_88);
        }
        
        *arg1.byte_offset(0x20) = *var_b0[8];
        *arg1.byte_offset(0x10) = var_88;
        *arg1 = 0x37;
        *arg1.byte_offset(8) = rax_4;
    }
    else
    {
        *var_b0[0xf] = *var_b0[8];
        *var_b8[7] = var_88;
        *arg1 = 0x1c;
        *arg1.byte_offset(1) = var_b8;
        *arg1.byte_offset(0x10) = *var_b0[7];
        *arg1.byte_offset(0x18) = *var_b0[0xf];
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_70)
}
