
  fn just::recipe_resolver::RecipeResolver::resolve_recipes::h470e1f461b9069ea(arg1: *mut i64, arg2: *mut *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: *mut i128) -> i64

{
    let mut var_3a0: *mut *mut c_void = arg2;
    let var_398: i64 = arg3;
    let var_390: i64 = arg4;
    let var_388: i64 = arg5;
    let var_380: i64 = 0;
    let var_370: i64 = 0;
    let mut var_368: i128 = *arg7;
    let var_358: i64 = arg7[1];
    
    loop
    {
        let mut var_308: u64;
        just::table::Table$LT$V$GT$::pop::hec14cdf4ac70782b(&var_308, &var_368);
        let mut var_448: i64;
        let mut var_440: i64;
        let mut var_408: i64;
        let mut var_3f0: i64;
        
        if 0 + -(var_308)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h01a3bc3cb30df394(&var_308);
            let mut rsi_4: i64 = var_380;
            
            if var_380 != 0
            {
                rsi_4 = var_370;
            }
            
            let mut rdx_1: i64;
            rdx_1 = var_380 != 0;
            var_3f0 = rdx_1;
            let var_3e8_1: i64 = 0;
            let var_3e0_1: i64 = var_380;
            let var_378: i64;
            let var_3d8_1: i64 = var_378;
            let var_3d0_1: i64 = rdx_1;
            let var_3c8_1: i64 = 0;
            let var_3c0_1: i64 = var_380;
            let var_3b8_1: i64 = var_378;
            let var_3b0_1: i64 = rsi_4;
            let mut rdi_7: *mut i64 = &var_3f0;
            let i_1: i8;
            let mut rax_8: i64;
            let mut i: i8;
            let mut rdx_2: *mut i64;
            let mut rdx_3: *mut i32;
            
            loop
            {
                let mut rax_4: i64;
                rax_4 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(rdi_7);
                
                if rax_4 == 0 || rdx_2 == 0
                {
                    arg1[2] = var_370;
                    *arg1 = var_380;
                    arg1[9] = 0x25;
                    return core::ptr::drop_in_place$LT$just..table..Table$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h4a7abc0528fca674(&var_368);
                }
                
                let rax_5: *mut c_void = *rdx_2;
                let rcx_3: i64 = *rax_5.byte_offset(0x60);
                let rax_7: i64 = *rax_5.byte_offset(0x68) * 0xd0 + rcx_3;
                var_408 = rcx_3;
                let var_400_1: i64 = rax_7;
                let var_3f8_1: i64 = 0;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67943448222f2e9b(&var_408);
                
                if rdx_3 != 0
                {
                    break;
                }
                
                'label_686ed0:
                let mut rax_21: *mut c_void = *rdx_2;
                let rcx_5: i64 = *rax_21.byte_offset(0x38);
                
                if rcx_5 != 0
                {
                    let mut rdx_7: *mut c_void = *rax_21.byte_offset(0x30);
                    let rcx_7: *mut c_void = (rcx_5 << 5) + rdx_7;
                    let mut rax_13: *mut c_void = rdx_7.byte_offset(0x20);
                    
                    do
                    {
                        let rdx_8: i64 = *rdx_7.byte_offset(0x10);
                        
                        if rdx_8 != 0
                        {
                            let mut rbx_2: i64 = *rdx_7.byte_offset(8);
                            let rdx_10: i64 = (rdx_8 << 7) + rbx_2;
                            let mut rax_14: i64 = rbx_2 + 0x80;
                            
                            do
                            {
                                let rsi_10: i64 = rbx_2;
                                rbx_2 = rax_14;
                                let mut var_338: i128;
                                just::expression::Expression::variables::h421cbbeec48818c6(
                                    &var_338, rsi_10);
                                let var_328: i64;
                                let var_438_3: i64 = var_328;
                                var_448 = var_338;
                                
                                loop
                                {
                                    let mut var_208: ();
                                    _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_208, &var_448);
                                    let var_1c8: i8;
                                    
                                    if var_1c8 == 0x25
                                    {
                                        break;
                                    }
                                    
                                    let rax_16: *mut c_void = *rdx_2;
                                    just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(&var_308, var_3a0, &var_208, *rax_16.byte_offset(0x60), 
                                        *rax_16.byte_offset(0x68));
                                    i = i_1;
                                    
                                    if i != 0x25
                                    {
                                        goto 'label_687139;
                                    }
                                }
                                
                                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                                let mut rax_17: i32;
                                rax_17 = rbx_2 != rdx_10;
                                rax_14 = (rax_17 << 7) + rbx_2;
                            } while rbx_2 != rdx_10;
                        }
                        
                        rdx_7 = rax_13;
                        let mut rax_19: i32;
                        rax_19 = rdx_7 != rcx_7;
                        rax_13 = (rax_19 << 5) + rdx_7;
                    } while rdx_7 != rcx_7;
                    
                    rax_21 = *rdx_2;
                }
                
                let rcx_11: i64 = *rax_21.byte_offset(0x20);
                rdi_7 = &var_3f0;
                
                if rcx_11 != 0
                {
                    let mut rbx_3: *mut c_void = *rax_21.byte_offset(0x18);
                    let rcx_13: *mut c_void = (rcx_11 << 5) + rbx_3;
                    let mut rax_22: *mut c_void = rbx_3.byte_offset(0x20);
                    
                    do
                    {
                        if (arg6 & just::line::Line::is_comment::h9a81c927aacfe8c9(
                            *rbx_3.byte_offset(8), *rbx_3.byte_offset(0x10))) == 0
                        {
                            let rcx_15: i64 = *rbx_3.byte_offset(0x10);
                            
                            if rcx_15 != 0
                            {
                                let mut rsi_15: *mut i32 = *rbx_3.byte_offset(8);
                                let rax_28: *mut c_void = &rsi_15[rcx_15 * 0x20];
                                let mut rax_29: *mut c_void = &rsi_15[0x20];
                                let mut rbx_4: *mut c_void;
                                
                                do
                                {
                                    rbx_4 = rax_29;
                                    
                                    if *rsi_15 != 0x12
                                    {
                                        let mut var_320: i128;
                                        just::expression::Expression::variables::h421cbbeec48818c6(
                                            &var_320, rsi_15);
                                        let var_310: i64;
                                        let var_438_4: i64 = var_310;
                                        var_448 = var_320;
                                        
                                        loop
                                        {
                                            let mut var_1c0: ();
                                            _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_1c0, &var_448);
                                            let var_180: i8;
                                            
                                            if var_180 == 0x25
                                            {
                                                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                                                break;
                                            }
                                            
                                            let rax_33: *mut c_void = *rdx_2;
                                            just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(&var_308, var_3a0, &var_1c0, *rax_33.byte_offset(0x60), 
                                                *rax_33.byte_offset(0x68));
                                            i = i_1;
                                            
                                            if i != 0x25
                                            {
                                                goto 'label_687139;
                                            }
                                        }
                                    }
                                    
                                    let mut rax_30: i32;
                                    rax_30 = rbx_4 != rax_28;
                                    rax_29 = (rax_30 << 7) + rbx_4;
                                    rsi_15 = rbx_4;
                                } while rbx_4 != rax_28;
                            }
                        }
                        
                        rbx_3 = rax_22;
                        let mut rax_23: i32;
                        rax_23 = rbx_3 != rcx_13;
                        rax_22 = (rax_23 << 5) + rbx_3;
                        rdi_7 = &var_3f0;
                    } while rbx_3 != rcx_13;
                }
            }
            
            let mut rbx_1: i64 = rax_8;
            
            loop
            {
                if *rdx_3 != 0x12
                {
                    let mut var_350: i128;
                    just::expression::Expression::variables::h421cbbeec48818c6(&var_350, rdx_3);
                    let var_340: i64;
                    let var_438_2: i64 = var_340;
                    var_448 = var_350;
                    
                    do
                    {
                        let mut var_178: ();
                        _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_178, &var_448);
                        let var_138: i8;
                        
                        if var_138 == 0x25
                        {
                            core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                            goto 'label_686e23;
                        }
                        
                        let rax_11: *mut c_void = *rdx_2;
                        let mut rax_12: i64;
                        let mut rdx_5: i64;
                        rax_12 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04f40b3a0c144874(rbx_1, *rax_11.byte_offset(0x60), *rax_11.byte_offset(0x68));
                        just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(
                            &var_308, var_3a0, &var_178, rax_12, rdx_5);
                        i = i_1;
                    } while i == 0x25;
                    
                    'label_687139:
                    let var_2c8: i64;
                    arg1[8] = var_2c8;
                    let zmm0_3: i128 = var_308;
                    let var_2d8: i128;
                    *arg1.byte_offset(0x30) = var_2d8;
                    let var_2e8: i128;
                    *arg1.byte_offset(0x20) = var_2e8;
                    let var_2f8: i128;
                    *arg1.byte_offset(0x10) = var_2f8;
                    *arg1 = zmm0_3;
                    let var_2bf: i32;
                    *arg1.byte_offset(0x49) = var_2bf;
                    *arg1.byte_offset(0x4c) = var_2bf;
                    arg1[9] = i;
                    core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                        var_448, var_440);
                    break;
                }
                
                'label_686e23:
                let mut rax_9: i64;
                rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67943448222f2e9b(&var_408);
                rbx_1 = rax_9;
                
                if rdx_3 == 0
                {
                    goto 'label_686ed0;
                }
            }
            
            return core::ptr::drop_in_place$LT$just..recipe_resolver..RecipeResolver$GT$::h5bca05341d6b75f4(&var_3a0);
        }
        
        let mut var_130: ();
        memcpy(&var_130, &var_308, 0x100);
        var_448 = 0;
        var_440 = 8;
        let var_438_1: i64 = 0;
        just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(&var_3f0, 
            &var_3a0, &var_448, &var_130);
        let rcx_1: i64 = var_3f0;
        let var_3a8: i8;
        
        if var_3a8 != 0x25
        {
            let var_3b8: i64;
            *arg1.byte_offset(0x38) = var_3b8;
            let var_3c8: i64;
            *arg1.byte_offset(0x28) = var_3c8;
            let var_3d8: i64;
            *arg1.byte_offset(0x18) = var_3d8;
            let var_3e8: i64;
            *arg1.byte_offset(8) = var_3e8;
            let var_3a7: i32;
            *arg1.byte_offset(0x49) = var_3a7;
            *arg1.byte_offset(0x4c) = var_3a7;
            *arg1 = rcx_1;
            arg1[9] = var_3a8;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_448, var_440);
            return core::ptr::drop_in_place$LT$just..recipe_resolver..RecipeResolver$GT$::h5bca05341d6b75f4(&var_3a0);
        }
        
        var_408 = rcx_1;
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$::h9bce064f28a479be(&var_408);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_448, var_440);
    }
}
