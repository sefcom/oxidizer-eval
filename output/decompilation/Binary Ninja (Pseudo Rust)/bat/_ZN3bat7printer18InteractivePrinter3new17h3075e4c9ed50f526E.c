
  fn bat::printer::InteractivePrinter::new::h3075e4c9ed50f526(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: *mut i64) -> *mut i128

{
    let rax_1: *mut c_void = bat::assets::HighlightingAssets::get_theme::h5c1f06a82dc91560(arg3, 
        *arg2.byte_offset(0x18), *arg2.byte_offset(0x20));
    let rcx: i32 = *rax_1.byte_offset(0x87);
    let rcx_1: i8 = *rax_1.byte_offset(0x8b);
    let rcx_2: i8 = *arg2.byte_offset(0x124);
    let mut var_440: i64;
    let mut var_433: i32;
    let mut var_422: i32;
    let mut var_411: i32;
    let mut var_404: i64;
    let mut var_3f3: i64;
    let mut var_3e2: i64;
    let mut var_3d1: i64;
    
    if rcx_2 == 0
    {
        let var_438_1: i8 = 0;
        var_440 = 0;
        let var_437_1: i32 = 0x15;
        var_433 = 0x15;
        let var_42f_1: i64 = 0;
        let var_427_1: i8 = 0;
        let var_426_1: i32 = 0x15;
        var_422 = 0x15;
        let var_41e_1: i64 = 0;
        let var_416_1: i8 = 0;
        let var_415_1: i32 = 0x15;
        var_411 = 0x15;
        let var_40d_1: i64 = 0;
        let var_405_1: i8 = 0;
        var_404 = 0x1500000015;
        let var_3f4_1: i8 = 0;
        let var_3fc_1: i64 = 0;
        var_3f3 = 0x1500000015;
        let var_3e3_1: i8 = 0;
        let var_3eb_1: i64 = 0;
        var_3e2 = 0x1500000015;
        let var_3d2_1: i8 = 0;
        let var_3da_1: i64 = 0;
        var_3d1 = 0x1500000015;
    }
    else
    {
        bat::printer::Colors::colored::hac989d8705686777(&var_440, *rax_1.byte_offset(0xc3), 
            *rax_1.byte_offset(0xc4), *arg2.byte_offset(0x125));
    }
    
    let mut var_480: i64 = 0;
    let var_478: *mut c_void = 8;
    let mut var_470: u64 = 0;
    let mut var_378: i8;
    
    if bat::style::StyleComponents::numbers::hd95db025221482f6(arg2.byte_offset(0xc0)) != 0
    {
        bat::decorations::LineNumberDecoration::new::h91e05e55b8444121(&var_378, &var_440);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h3ec16cff95f86bb3(&var_480, 
            alloc::boxed::Box$LT$T$GT$::new::h404e1e55b959629d(&var_378), &data_ace9a8);
    }
    
    if bat::style::StyleComponents::changes::h3017c14c66493a5a(arg2.byte_offset(0xc0)) != 0
        && *arg5 != 0 && arg5[3] != 0
    {
        bat::decorations::LineChangesDecoration::new::h2e041c340bcaeec9(&var_378, &var_440);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h3ec16cff95f86bb3(&var_480, 
            alloc::boxed::Box$LT$T$GT$::new::h809e75c5c2ec5fc4(&var_378), &data_ace9e8);
    }
    
    let mut rbp: *mut c_void = var_478;
    let rax_8: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hc045af51393dd037(rbp, (var_470 << 4) + rbp);
    let mut r12_1: u64 = var_470;
    
    if (var_470 != 0 & bat::style::StyleComponents::grid::h47e585e5c9942068(arg2.byte_offset(0xc0)))
        != 0
    {
        bat::decorations::GridBorderDecoration::new::he0ecf464758163b8(&var_378, &var_440);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h3ec16cff95f86bb3(&var_480, 
            alloc::boxed::Box$LT$T$GT$::new::h909a6225a6060f20(&var_378), &data_acea28);
        rbp = var_478;
        r12_1 = var_470;
    }
    
    let mut var_468_1: i64;
    
    if *arg2.byte_offset(0x100) < _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hc045af51393dd037(rbp, (r12_1 << 4) + rbp) + r12_1 + 5
    {
        var_470 = 0;
        core::ptr::drop_in_place$LT$$u5b$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnOnce$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Send$GT$$u5d$$GT$::he936ba3f695f725e(rbp, r12_1);
        var_468_1 = 0;
        
        if *arg4.byte_offset(0x50) != 0 || *arg2.byte_offset(0x120) != 0
            || *arg2.byte_offset(0x122) != 0
        {
            goto 'label_83eab9;
        }
        
        goto 'label_83ecff;
    }
    
    var_468_1 = rax_8 + var_470;
    let mut var_2a0: ();
    let mut r13_1: i64;
    
    if *arg4.byte_offset(0x50) != 0 || *arg2.byte_offset(0x120) != 0
        || *arg2.byte_offset(0x122) != 0
    {
        'label_83eab9:
        
        if rcx_2 == 0
        {
            r12_1 = 1;
            r13_1 = -0x8000000000000000;
        }
        
        if rcx_2 == 0 && *arg2.byte_offset(0x12b) != 2
        {
            goto 'label_83ed28;
        }
        
        let mut var_3c8: i8;
        bat::assets::HighlightingAssets::get_syntax::hae1062e96f01c264(&var_3c8, arg3, 
            *arg2.byte_offset(0xf0), *arg2.byte_offset(0xf8), arg4, arg2.byte_offset(0x28));
        let rax_16: u32 = var_3c8;
        let mut var_370: i128;
        
        if rax_16 == 7
        {
            bat::assets::HighlightingAssets::find_syntax_by_name::h9f91e66c04b2ba0b(&var_378, arg3);
            let rax_18: i8 = var_378;
            
            if rax_18 == 0xd
            {
                let rsi_20: *mut c_void = var_370;
                let mut var_100: ();
                
                if rsi_20 != 0
                {
                    bat::printer::HighlighterFromSet::new::h24cc5523206a1ef3(&var_378, rsi_20, 
                        *var_370[8], rax_1);
                    r13_1 = var_378;
                    memcpy(&var_100, &var_370, 0xd0);
                }
                
                if rsi_20 == 0 || r13_1 == -0x8000000000000000
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "A plain text syntax is available…");
                    /* no return */
                }
                
                memcpy(&var_2a0, &var_100, 0xd0);
                core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(&var_3c8);
                r12_1 = 0;
                goto 'label_83ed28;
            }
            
            let var_377: i32;
            *arg1.byte_offset(0xc) = var_377;
            *arg1.byte_offset(9) = var_377;
            let var_360: i128;
            arg1[2] = var_360;
            let var_350: i128;
            arg1[3] = var_350;
            let var_340: i128;
            arg1[4] = var_340;
            let var_330: i64;
            arg1[5] = var_330;
            let zmm0_1: i128 = var_370;
            *arg1.byte_offset(8) = rax_18;
            arg1[1] = zmm0_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(&var_3c8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$dyn$u20$bat..decorations..Decoration$GT$$GT$$GT$::h5821c9215c5ad6e2(&var_480);
        }
        else
        {
            let var_3b8: i128;
            
            if rax_16 == 0xd
            {
                let var_3c0: *mut c_void;
                r12_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(*var_3c0.byte_offset(8), *var_3c0.byte_offset(0x10), "Plain Te", 0xa);
                bat::printer::HighlighterFromSet::new::h24cc5523206a1ef3(&var_378, var_3c0, 
                    var_3b8, rax_1);
                r13_1 = var_378;
                memcpy(&var_2a0, &var_370, 0xd0);
                r12_1 ^= 1;
                goto 'label_83ed28;
            }
            
            let var_388: i128;
            *arg1.byte_offset(0x48) = var_388;
            let zmm0: i128 = var_3c8;
            let var_398: i128;
            *arg1.byte_offset(0x38) = var_398;
            let var_3a8: i128;
            *arg1.byte_offset(0x28) = var_3a8;
            *arg1.byte_offset(0x18) = var_3b8;
            *arg1.byte_offset(8) = zmm0;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$dyn$u20$bat..decorations..Decoration$GT$$GT$$GT$::h5821c9215c5ad6e2(&var_480);
        }
    }
    else
    {
        'label_83ecff:
        r12_1 = 1;
        r13_1 = -0x8000000000000000;
        'label_83ed28:
        let mut var_1d0: ();
        memcpy(&var_1d0, &var_2a0, 0xd0);
        let rax_19: i8 = *arg2.byte_offset(0x12b);
        let mut rcx_15: i8 = r12_1;
        
        if rax_19 < 2
        {
            rcx_15 = rax_19;
        }
        
        let mut r12_2: i8 = 0;
        
        if *arg2.byte_offset(0x120) == 0
        {
            r12_2 = rcx_15;
        }
        
        *arg1.byte_offset(0x28f) = var_3d1;
        arg1[0x28] = *var_3e2[2];
        arg1[0x27] = *var_3f3[3];
        arg1[0x26] = *var_404[4];
        let zmm0_2: i128 = var_440;
        arg1[0x25] = *var_411[1];
        arg1[0x24] = *var_422[2];
        arg1[0x23] = *var_433[3];
        arg1[0x22] = zmm0_2;
        *arg1 = var_480;
        arg1[1] = var_470;
        let r14_2: i8 = *arg4.byte_offset(0x50);
        memcpy(&arg1[0x13], &var_1d0, 0xd0);
        *arg1.byte_offset(0x297) = rcx;
        *arg1.byte_offset(0x29b) = rcx_1;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
        *arg1.byte_offset(0x128) = r13_1;
        arg1[0x20] = arg2;
        *arg1.byte_offset(0x208) = arg5;
        arg1[0x21] = var_468_1;
        *arg1.byte_offset(0x218) = 0;
        *arg1.byte_offset(0x29c) = r12_2;
        *arg1.byte_offset(0x29d) = r14_2;
    }
    arg1
}
