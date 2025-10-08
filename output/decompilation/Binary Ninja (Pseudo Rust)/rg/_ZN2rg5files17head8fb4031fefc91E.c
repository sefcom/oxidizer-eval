
  fn rg::files::head8fb4031fefc91(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_439: i8 = *arg2.byte_offset(0x168);
    let mut var_180: *mut *mut c_void;
    let result: i64 = rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_180, arg2);
    let mut r14: *mut *mut c_void = var_180;
    let var_178: i64;
    
    if r14 == 2
    {
        *arg1.byte_offset(8) = var_178;
        *arg1 = 1;
        return result;
    }
    
    let mut var_398: i128;
    let mut var_170: ();
    memcpy(&var_398, &var_170, 0xc8);
    let mut var_3a8: *mut *mut c_void = r14;
    let var_3a0_1: i64 = var_178;
    let mut var_2d0: ();
    ignore::walk::WalkBuilder::build::he602309561c36e94(&var_2d0, &var_3a8);
    memcpy(&var_180, &var_2d0, 0x148);
    let var_38_1: *mut i8 = &var_439;
    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(&var_3a8);
    memcpy(&var_2d0, &var_180, 0x150);
    let mut rax_1: u64;
    let mut rdx_1: *mut i64;
    rax_1 = rg::flags::hiargs::HiArgs::sort::h98c61ac354693ef8(arg2, &var_2d0);
    rg::flags::hiargs::HiArgs::path_printer_builder::h89f24a04c32e915a(&var_3a8, arg2);
    let mut var_428: i32;
    rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_428, arg2);
    grep_printer::path::PathPrinterBuilder::build::he67013d7ee9839ab(&var_2d0, &var_3a8, &var_428);
    let mut rbp: i64;
    rbp = 1;
    core::ptr::drop_in_place$LT$grep_printer..path..PathPrinterBuilder$GT$::h1ff9a380ad59c6f7(
        &var_3a8);
    let rbp_1: i64 = rdx_1[3];
    let var_418: i128;
    let var_408: i128;
    let var_3f8: i128;
    let var_3e8: i128;
    let var_3d8: i128;
    let var_3c8: i128;
    let var_3b8: i64;
    
    if (*arg2.byte_offset(0x38b) & 1) != 0
    {
        rbp_1(&var_428, rax_1);
        
        if var_428 == 3
        {
            goto 'label_65b711;
        }
        
        let var_338_1: i64 = var_3b8;
        let var_348_1: i128 = var_3c8;
        let var_358_1: i128 = var_3d8;
        let var_368_1: i128 = var_3e8;
        let zmm0_1: i128 = var_428;
        let var_378_1: i128 = var_3f8;
        let var_388_1: i128 = var_408;
        var_398 = var_418;
        var_3a8 = zmm0_1;
        'label_65b7de:
        core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_3a8);
        r14 = 1;
        goto 'label_65b7f0;
    }
    
    rbp_1(&var_428, rax_1);
    
    if var_428 != 3
    {
        let var_338_2: i64 = var_3b8;
        let var_348_2: i128 = var_3c8;
        let var_358_2: i128 = var_3d8;
        let var_368_2: i128 = var_3e8;
        let zmm0_2: i128 = var_428;
        let var_378_2: i128 = var_3f8;
        let var_388_2: i128 = var_408;
        var_398 = var_418;
        var_3a8 = zmm0_2;
        let rax_6: *mut *mut c_void =
            grep_printer::path::PathPrinter$LT$W$GT$::write::ha37da784cca891cd(&var_2d0, 
            rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_3a8));
        r14 = rax_6;
        let mut var_430: *mut *mut c_void = rax_6;
        
        if rax_6 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_430);
            core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_3a8);
            
            loop
            {
                rbp_1(&var_428, rax_1);
                
                if var_428 == 3
                {
                    break;
                }
                
                let var_338_3: i64 = var_3b8;
                let var_348_3: i128 = var_3c8;
                let var_358_3: i128 = var_3d8;
                let var_368_3: i128 = var_3e8;
                let zmm0_3: i128 = var_428;
                let var_378_3: i128 = var_3f8;
                let var_388_3: i128 = var_408;
                var_398 = var_418;
                var_3a8 = zmm0_3;
                let rax_11: *mut *mut c_void =
                    grep_printer::path::PathPrinter$LT$W$GT$::write::ha37da784cca891cd(&var_2d0, 
                    rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_3a8));
                r14 = rax_11;
                var_430 = rax_11;
                
                if rax_11 != 0
                {
                    goto 'label_65b7b5;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_430);
                core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_3a8);
            }
            
            r14 = 1;
            goto 'label_65b7f0;
        }
        
        'label_65b7b5:
        let mut var_3b0: *mut *mut c_void = r14;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(r14) == 0xb
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_3b0);
            goto 'label_65b7de;
        }
        
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(r14);
        *arg1 = 1;
        core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_3a8);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h7c09de5d3363bbc9(rax_1, rdx_1);
    }
    else
    {
        'label_65b711:
        r14 = nullptr;
        'label_65b7f0:
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h7c09de5d3363bbc9(rax_1, rdx_1);
        arg1[1] = r14;
        *arg1 = 0;
    }
    
    core::ptr::drop_in_place$LT$grep_printer..path..PathPrinter$LT$grep_cli..wtr..StandardStream$GT$$GT$::hf111f960c5523e39(&var_2d0)
}
