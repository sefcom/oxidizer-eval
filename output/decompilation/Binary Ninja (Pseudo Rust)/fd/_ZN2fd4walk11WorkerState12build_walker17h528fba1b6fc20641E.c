
  fn fd::walk::WorkerState::build_walker::h528fba1b6fc20641(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: i64) -> i64

{
    if arg4 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let mut var_1a8: i64;
    fd::walk::WorkerState::build_overrides::h07e07fdbe9066c9a(&var_1a8, *arg2.byte_offset(0x58), 
        arg2[6], arg3);
    let rcx_1: i64 = var_1a8;
    let result: i64;
    
    if -(rcx_1) == -0x8000000000000000
    {
        arg1[1] = result;
        *arg1 = 2;
        return result;
    }
    
    let mut var_158: i128;
    let var_1c0_1: i128 = var_158;
    let var_198: i128;
    let var_200_1: u64 = var_198;
    let result_1: i64 = result;
    ignore::walk::WalkBuilder::new::h2757c17276ab6607(&var_1a8, arg3);
    let var_110_1: i8 = *arg2.byte_offset(0x1da);
    let rbx_1: i8 = *arg2.byte_offset(0x1db);
    let var_10f_1: i8 = rbx_1;
    let mut rax_1: i8;
    
    if *arg2.byte_offset(0x1dc) != 1
    {
        rax_1 = 0;
    }
    else
    {
        rax_1 = 1;
        
        if rbx_1 == 0
        {
            rax_1 = *arg2.byte_offset(0x1dd);
        }
    }
    
    let var_10e_1: i8 = rax_1;
    let rax_2: i8 = *arg2.byte_offset(0x1dd);
    let var_10c_1: i8 = rax_2;
    let var_10d_1: i8 = rax_2;
    let var_10b_1: i8 = rax_2;
    let var_109_1: i8 = *arg2.byte_offset(0x1de);
    let var_148: i64;
    let var_298_1: i64 = var_148;
    let var_2a8_1: i128 = var_1c0_1;
    let var_168: i128;
    let var_2b8_1: i128 = var_168;
    let var_178: i128;
    let mut var_2c8_1: i128 = var_178;
    let var_188: i128;
    let var_2d8_1: i128 = var_188;
    let mut var_2f8: i128 = rcx_1;
    let rax_5: *mut i128 =
        ignore::walk::WalkBuilder::overrides::hf6b417a23fef1b56(&var_1a8, &var_2f8);
    rax_5[0xd] = arg2[0x1e];
    *rax_5.byte_offset(0xd1) = *arg2.byte_offset(0x1e1);
    *rax_5 = *arg2;
    
    if rbx_1 != 0
    {
        ignore::dir::IgnoreBuilder::add_custom_ignore_filename::h9e6eb0f85cf3b87e(&var_158);
    }
    
    let mut var_358: i128;
    let mut var_330: i64;
    let var_320: u64;
    let var_310: i128;
    let var_300: i64;
    let mut var_268: *mut *mut c_void;
    
    if *arg2.byte_offset(0x1df) != 0
    {
        let mut var_228: i64;
        etcetera::base_strategy::choose_base_strategy::hc1946d42805bd380(&var_228);
        
        if var_228 != -0x8000000000000000
        {
            let var_218: i64;
            let var_348_1: i64 = var_218;
            var_358 = var_228;
            _$LT$etcetera..base_strategy..xdg..Xdg$u20$as$u20$etcetera..base_strategy..BaseStrategy$GT$::config_dir::hc680a7b4b761bd51(&var_2f8, &var_358);
            let r13_1: i64 = *var_2f8[8];
            std::path::Path::join::h2e36849a222ee21c(&var_330, r13_1, var_200_1, 
                "fdignorefailed to spawn thread/r…");
            let var_328: i64;
            let mut var_280: i64;
            std::path::Path::join::h2e36849a222ee21c(&var_280, var_328, var_320, 
                "ignorefailed to spawn thread/rus…");
            core::mem::drop::h3eb21fab0c0d11e6(var_330, var_328);
            core::mem::drop::h3eb21fab0c0d11e6(var_2f8, r13_1);
            let var_278: *mut i8;
            let var_270: u64;
            
            if std::path::Path::is_file::h6e28d87ff76ffc41(var_278, var_270) == 0
            {
                core::mem::drop::h3eb21fab0c0d11e6(var_280, var_278);
            }
            else
            {
                let rdx_7: u64 = ignore::walk::WalkBuilder::add_ignore::h72842306988f4d4b(&var_330, 
                    &var_1a8, &var_280);
                let rbx_2: i64 = var_330;
                let mut rax_8: i64 = rbx_2;
                
                if rbx_2 != 9
                {
                    rax_8 = rbx_2;
                    
                    if rbx_2 != 0
                    {
                        var_2c8_1 = var_300;
                        let var_2d8_2: i128 = var_310;
                        let var_2e8_2: i128 = var_320;
                        var_2f8 = var_330;
                        let mut var_238: *mut i128 = &var_2f8;
                        let var_230_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he8ab982f851e8e54;
                        var_268 = &data_802648;
                        let var_260_1: i64 = 2;
                        let var_248_1: i64 = 0;
                        let var_258_1: *mut *mut i128 = &var_238;
                        let var_250_1: i64 = 1;
                        let mut var_d0: ();
                        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_d0, 0, 
                            rdx_7, &var_268);
                        fd::error::print_error::h653511955bf98e50(&var_d0);
                        core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_2f8);
                        rax_8 = var_330;
                    }
                }
                
                if rax_8 != 9 && (rbx_2 == 0 || rbx_2 == 9)
                {
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_330);
                }
            }
            
            core::ptr::drop_in_place$LT$fd..hyperlink..PathUrl$GT$::h2d976cf0ed371e6c(var_358, 
                *var_358[8]);
        }
    }
    
    let rax_10: i64 = *arg2.byte_offset(0x78);
    
    if rax_10 != 0
    {
        let mut rbp_2: *mut c_void = arg2[7];
        let mut i_2: i64 = rax_10 * 0x18;
        let mut i: i64;
        
        do
        {
            let rdx_9: u64 =
                ignore::walk::WalkBuilder::add_ignore::h661fe35ca4bb8eb0(&var_330, &var_1a8, rbp_2);
            let rbx_3: i64 = var_330;
            let mut rax_12: i64 = rbx_3;
            
            if rbx_3 != 9
            {
                rax_12 = rbx_3;
                
                if rbx_3 != 0
                {
                    var_2c8_1 = var_300;
                    let var_2d8_3: i128 = var_310;
                    let var_2e8_3: i128 = var_320;
                    var_2f8 = var_330;
                    var_358 = &var_2f8;
                    *var_358[8] = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he8ab982f851e8e54;
                    var_268 = &data_802668;
                    let var_260_2: i64 = 2;
                    let var_248_2: i64 = 0;
                    let var_258_2: *mut i128 = &var_358;
                    let var_250_2: i64 = 1;
                    let mut var_48: ();
                    core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, 
                        rdx_9, &var_268);
                    fd::error::print_error::h653511955bf98e50(&var_48);
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_2f8);
                    rax_12 = var_330;
                }
            }
            
            if rax_12 != 9 && (rbx_3 == 0 || rbx_3 == 9)
            {
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_330);
            }
            
            rbp_2 += 0x18;
            i = i_2;
            i_2 -= 0x18;
        } while i != 0x18;
    }
    
    let mut i_1: *mut c_void = arg4 * 0x18 + -0xffffffffffffffe8;
    let mut r15_1: *mut c_void = arg3.byte_offset(0x18);
    
    while i_1 != 0
    {
        i_1 -= 0x18;
        ignore::walk::WalkBuilder::add::ha4515dcd5f254dba(&var_1a8, r15_1);
        r15_1 += 0x18;
    }
    
    let var_f8_1: i64 = arg2[0x1a];
    let mut var_b8: i128;
    ignore::walk::WalkBuilder::build_parallel::hfc1000ec665f112a(&var_b8, &var_1a8);
    let var_58: i128;
    *arg1.byte_offset(0x60) = var_58;
    let var_68: i128;
    *arg1.byte_offset(0x50) = var_68;
    let var_78: i128;
    *arg1.byte_offset(0x40) = var_78;
    let zmm0_7: i128 = var_b8;
    let var_88: i128;
    *arg1.byte_offset(0x30) = var_88;
    let var_98: i128;
    *arg1.byte_offset(0x20) = var_98;
    let var_a8: i128;
    *arg1.byte_offset(0x10) = var_a8;
    *arg1 = zmm0_7;
    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::he1d9bb4ee46bd15e(&var_1a8)
}
