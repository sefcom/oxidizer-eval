
  fn forc_fmt::format_workspace_at_dir::h57c190d59c7609d7(arg1: i8, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: i32) -> u64

{
    let mut var_348: *mut *mut c_void;
    swayfmt::formatter::Formatter::from_dir::h2e7272f170636a28(&var_348, arg3, arg4, arg5);
    let rbx: *mut *mut c_void = var_348;
    let mut var_340: i128;
    let mut var_438: i128 = var_340;
    let mut var_310: i128;
    let var_408: i128 = var_310;
    let mut var_300: i128;
    let var_3f8: i128 = var_300;
    let mut var_330: i128;
    let mut var_320: i128;
    let var_2f0: i128;
    
    if rbx == 2
    {
        var_300 = var_2f0;
        var_310 = var_3f8;
        let zmm1: i128 = var_330;
        let zmm2: i128 = var_320;
        var_320 = var_408;
        var_330 = zmm2;
        var_340 = zmm1;
        var_348 = var_438;
        return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h2e7d7e3a9cfa8b6c(&var_348);
    }
    
    let mut var_2e0: ();
    let mut var_180: ();
    memcpy(&var_180, &var_2e0, 0xa8);
    let var_1e0_1: i128 = var_438;
    let var_1d0_1: i128 = var_330;
    let var_1c0_1: i128 = var_320;
    let var_1b0_1: i128 = var_408;
    let var_1a0_1: i128 = var_3f8;
    let var_190_1: i128 = var_2f0;
    let mut var_1e8: *mut *mut c_void = rbx;
    let mut var_3d8: i64 = 0;
    let var_3d0_1: i64 = 8;
    let var_3c8_1: i64 = 0;
    let rax: i64 = *arg2.byte_offset(0x30);
    
    if rax != 0
    {
        let mut rbx_1: *mut c_void = *arg2.byte_offset(0x28);
        let r14_1: i64 = *arg2.byte_offset(0x60);
        *arg2.byte_offset(0x68);
        let mut i_1: i64 = rax * 0x18;
        let mut i: i64;
        
        do
        {
            let mut rax_2: *mut i8;
            let mut rdx_1: u64;
            rax_2 = forc_pkg::manifest::GenericManifestFile::dir::h639bc68ab3c86f9d(r14_1);
            std::path::Path::join::h6ae27313af12a534(&var_348, rax_2, rdx_1, rbx_1);
            let rax_3: *mut *mut c_void = var_348;
            var_438 = var_340;
            
            if rax_3 == -0x8000000000000000
            {
                break;
            }
            
            let mut var_218: *mut *mut c_void = rax_3;
            let var_210_1: i128 = var_438;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3b0815cfe83d17a1(&var_3d8, &var_218);
            rbx_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
    }
    
    let mut var_488: i64;
    std::fs::read_dir::h94c6f7337ccdc1ce(&var_488, arg3);
    let rcx_2: u32 = arg1;
    let var_480: i8;
    let mut result: u64;
    let mut var_468: i64;
    let mut var_460: i8;
    
    if var_480 == 2
    {
        'label_7d4697:
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_488);
        'label_7d46ae:
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_348, arg3, 
            arg4);
        forc_fmt::get_sway_dirs::h0903804508cd19d8(&var_468, &var_348);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3bf6c9e6ad652326(&var_438, &var_468);
        let mut var_3c0: i64;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h128b359458db2cd2(&var_3c0, &var_438);
        
        if var_3c0 == -0x8000000000000000
        {
            'label_7d48f1:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hacad36253799282a(&var_438);
            let mut var_200: ();
            std::path::Path::join::hc5b6364c54a49269(&var_200, arg3, arg4, 
                "Forc.tomlmissing field `workspac…");
            forc_fmt::format_manifest::hcc9f299bdf5e80ef(&var_348, rcx_2, &var_200);
            
            if var_348 == 0
            {
                if (arg1 & 1) == 0 || (*var_348[1] & 1) == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h19296ef7f0436d93(&var_3d8);
                    core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_1e8);
                    return 0;
                }
                
                var_348 = &data_c0a3e0;
                var_340 = 1;
                *var_340[8] = 8;
                let var_330_1: i128 = {0};
                result = anyhow::__private::format_err::h09b344f6a077676a(&var_348);
            }
            else
            {
                result = var_340;
            }
        }
        else
        {
            loop
            {
                let var_3b0: u64;
                let var_478_1: u64 = var_3b0;
                var_488 = var_3c0;
                let r15_2: i64 = var_480;
                std::path::Path::join::hc5b6364c54a49269(&var_468, r15_2, var_3b0, 
                    "Forc.tomlmissing field `workspac…");
                std::fs::metadata::h97dab4a00eb77849(&var_348, var_460);
                let r13_1: i32 = var_348;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8cfd35c98471ce16(&var_348);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_468);
                
                if r13_1 == 2
                {
                    goto 'label_7d48a6;
                }
                
                swayfmt::formatter::Formatter::from_dir::h2e7272f170636a28(&var_348, r15_2, 
                    var_3b0, arg5);
                let r13_2: *mut *mut c_void = var_348;
                let var_378_1: i128 = var_310;
                let var_368_1: i128 = var_300;
                
                if r13_2 == 2
                {
                    var_300 = var_2f0;
                    var_310 = var_368_1;
                    let zmm0_5: i128 = var_340;
                    let zmm1_3: i128 = var_330;
                    let zmm2_2: i128 = var_320;
                    var_320 = var_378_1;
                    var_330 = zmm2_2;
                    var_340 = zmm1_3;
                    var_348 = zmm0_5;
                    result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h2e7d7e3a9cfa8b6c(&var_348);
                }
                else
                {
                    let mut var_d8: ();
                    memcpy(&var_d8, &var_2e0, 0xa8);
                    core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_1e8);
                    var_1e8 = r13_2;
                    let var_190_2: i128 = var_2f0;
                    let var_1a0_2: i128 = var_368_1;
                    let var_1b0_2: i128 = var_378_1;
                    let var_1c0_2: i128 = var_320;
                    let var_1d0_2: i128 = var_330;
                    let var_1e0_2: i128 = var_340;
                    memcpy(&var_180, &var_d8, 0xa8);
                    'label_7d48a6:
                    let result_1: u64 = forc_fmt::format_pkg_at_dir::h8cf58775fa0cc2a4(rcx_2, 
                        r15_2, var_3b0, &var_1e8);
                    result = result_1;
                    
                    if result_1 == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(
                            &var_3c0);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h128b359458db2cd2(&var_3c0, &var_438);
                        
                        if var_3c0 == -0x8000000000000000
                        {
                            goto 'label_7d48f1;
                        }
                        
                        continue;
                    }
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_3c0);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hacad36253799282a(&var_438);
                break;
            }
        }
    }
    else
    {
        var_468 = var_488;
        var_460 = var_480;
        
        loop
        {
            core::iter::traits::iterator::Iterator::try_fold::h7f3722e40557a69d(&var_348, &var_468);
            let rax_5: *mut *mut c_void = var_348;
            
            if rax_5 == 0
            {
                core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$std..fs..DirEntry$GT$$GT$::hd74c6e31ced06899(&var_348);
                core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$forc_fmt..get_sway_dirs..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h936e97883cb7423e(&var_468);
                
                if var_480 != 2
                {
                    goto 'label_7d46ae;
                }
                
                goto 'label_7d4697;
            }
            
            let var_428: i128 = var_330;
            var_438 = var_340;
            var_438 = rax_5;
            let mut var_230: ();
            std::fs::DirEntry::path::hc95af67dccb42f03(&var_230, &var_438);
            let var_228: i64;
            let var_220: i64;
            
            if sway_utils::helpers::is_sway_file::hba6cb499f5e692c0(var_228, var_220) == 0
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_230);
            }
            else
            {
                forc_fmt::format_file::haa7995617547e0cf(&var_348, rcx_2, &var_230, &var_1e8);
                
                if var_348 == 1
                {
                    result = var_340;
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h514fcfad11dd4245(&var_438);
                    core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$forc_fmt..get_sway_dirs..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h936e97883cb7423e(&var_468);
                    
                    if var_480 == 2
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_488);
                    }
                    
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h514fcfad11dd4245(&var_438);
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h19296ef7f0436d93(
        &var_3d8);
    core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_1e8);
    result
}
