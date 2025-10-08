
  fn just::analyzer::Analyzer::justfile::hb3a8c691cc057ec6(arg1: *mut i64, arg2: u64, arg3: *mut i64, arg4: *mut i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64, arg9: *mut i128, arg10: *mut i64, arg11: i64, arg12: u64) -> i64

{
    let mut rbp: *mut c_void;
    let var_8: *mut c_void = rbp;
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    let var_978: i128 = data_82bd20;
    let mut var_988: i128 = *data_82bd10;
    let var_968: i64 = rax;
    let var_960: i64 = rdx;
    let mut var_908: i128;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h7747b82267ce9a18(&var_908);
    let mut var_8e8: i128;
    let var_5f8: i128 = var_8e8;
    let mut var_8f8: i128;
    let var_608: i128 = var_8f8;
    let mut var_618: i128 = var_908;
    let mut var_9c0: i64 = 0;
    let var_9b0: i64 = 0;
    let mut var_a58: i64 = 0;
    let var_a50: i64 = 8;
    let mut var_a48: i64 = 0;
    let mut rax_1: i32;
    rax_1 = 1;
    let var_b64: i32 = rax_1;
    let mut rax_2: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc0b8c4999793d41b(arg3, arg11, 
        arg12);
    let rsi_1: *mut c_void = rax_2.byte_offset(0x18);
    let cond:0: bool = rax_2 == 0;
    
    if rax_2 != 0
    {
        rax_2 = rsi_1;
    }
    
    if cond:0
    {
        'label_6553a2:
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h4588780f39a432ad(&var_a58, rsi_1);
    let mut r15_1: i64;
    
    loop
    {
        let rax_5: i64 = var_a48;
        let mut var_b38: i128;
        let mut var_b28: i128;
        let mut var_b18: i128;
        let mut var_b08: i128;
        let mut var_af8: i128;
        let mut var_aa8: i128;
        let mut var_a98: i64;
        let mut var_a88: i128;
        let mut var_a78: i128;
        let mut var_9e8: i128;
        let mut var_8d8: i128;
        let mut var_8c8: i64;
        let mut var_8c0: i8;
        let var_8bf: i32;
        let mut var_8b8: i128;
        let mut var_8a8: i64;
        
        if rax_5 == 0
        {
            var_8f8 = *(arg2 + 0xb8);
            var_908 = *(arg2 + 0xa8);
            let var_b64_1: i8 = 0;
            let mut var_4d8: ();
            just::settings::Settings::from_table::h1496d338ea96c3b9(&var_4d8);
            let mut var_a30: *mut c_void = nullptr;
            let var_a20_1: i64 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_9e8, arg2);
            
            loop
            {
                let rax_32: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf2679ae5faf03928(&var_9e8);
                
                if rax_32 == 0
                {
                    rbp = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_9e8);
                    just::assignment_resolver::AssignmentResolver::resolve_assignments::h326a32445f9866d5(&var_908, &var_a30);
                    
                    if var_8c0 == 0x25
                    {
                        let mut var_9a8: *mut c_void = nullptr;
                        let var_998_1: i64 = 0;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_aa8, arg2 + 0x18);
                        let rax_47: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_aa8);
                        
                        if rax_47 == 0
                        {
                            'label_65491f:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_aa8);
                            let rdx_23: i64 = *rax_2.byte_offset(0x20);
                            let rcx_17: i64 = *rax_2.byte_offset(0x28);
                            let var_a98_1: i64 = var_998_1;
                            var_aa8 = var_9a8;
                            let var_399: i8;
                            just::recipe_resolver::RecipeResolver::resolve_recipes::h470e1f461b9069ea(&var_908, &var_a30, rdx_23, rcx_17, arg2 + 0x90, var_399, &var_aa8);
                            
                            if var_8c0 != 0x25
                            {
                                var_af8 = var_8c8;
                                var_b38 = var_908;
                                *arg1.byte_offset(0x54) = var_8bf;
                                *arg1.byte_offset(0x51) = var_8bf;
                                arg1[9] = var_af8;
                                let zmm0_15: i128 = var_b38;
                                *arg1.byte_offset(0x38) = var_8d8;
                                *arg1.byte_offset(0x28) = var_8e8;
                                *arg1.byte_offset(0x18) = var_8f8;
                                *arg1.byte_offset(8) = zmm0_15;
                                arg1[0xa] = var_8c0;
                                *arg1 = -0x8000000000000000;
                                rbp = nullptr;
                            }
                            else
                            {
                                let rax_62: i64 = var_8f8;
                                let mut var_a18: i128 = var_908;
                                let mut var_950: i64 = 0;
                                let var_940_1: i64 = 0;
                                
                                loop
                                {
                                    let mut var_390: i64;
                                    just::table::Table$LT$V$GT$::pop::hf9d1776d483a5e0b(&var_390, 
                                        arg2 + 0x78);
                                    
                                    if var_390 == -0x8000000000000000
                                    {
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::h6dbbd892c527de2d(&var_390);
                                        let rbx_3: i64 = var_a18;
                                        let r15_3: i64 = *var_a18[8];
                                        let mut r13_4: i64 = rbx_3;
                                        
                                        if rbx_3 != 0
                                        {
                                            r13_4 = rax_62;
                                        }
                                        
                                        let mut r12_4: i64;
                                        r12_4 = rbx_3 != 0;
                                        var_908 = r12_4;
                                        *var_908[8] = 0;
                                        var_8f8 = rbx_3;
                                        *var_8f8[8] = r15_3;
                                        var_8e8 = r12_4;
                                        *var_8e8[8] = 0;
                                        var_8d8 = rbx_3;
                                        *var_8d8[8] = r15_3;
                                        let var_8c8_1: i64 = r13_4;
                                        
                                        loop
                                        {
                                            let mut rax_65: i64;
                                            let mut rdx_28: *mut i64;
                                            rax_65 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_908);
                                            
                                            if rax_65 == 0
                                            {
                                                break;
                                            }
                                            
                                            if rdx_28 == 0
                                            {
                                                break;
                                            }
                                            
                                            if just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03((*rdx_28).byte_offset(0xe8), 0x10) != 0
                                            {
                                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(&var_9c0, 2);
                                                break;
                                            }
                                        }
                                        
                                        let var_4a8: i64;
                                        
                                        if var_4a8 != -0x8000000000000000
                                        {
                                            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(&var_9c0, 3);
                                        }
                                        
                                        let mut var_938: i128;
                                        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_938, arg11, arg12);
                                        let rax_67: i64 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0847a9696ca724e8(arg10, arg11, arg12);
                                        
                                        if rax_67 == 0
                                        {
                                            core::option::unwrap_failed::h893f57cb7db71cb7();
                                            /* no return */
                                        }
                                        
                                        let mut var_910: i64 = rax_67 + 0x18;
                                        let mut var_b48: i64 = 0;
                                        var_aa8 = r12_4;
                                        *var_aa8[8] = 0;
                                        let var_a98_2: i64 = rbx_3;
                                        let var_a90_1: i64 = r15_3;
                                        var_a88 = r12_4;
                                        *var_a88[8] = 0;
                                        var_a78 = rbx_3;
                                        *var_a78[8] = r15_3;
                                        let var_a68_4: i64 = r13_4;
                                        
                                        loop
                                        {
                                            let mut rax_69: i64;
                                            let mut rdx_31: *mut i64;
                                            rax_69 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_aa8);
                                            
                                            if rax_69 == 0 || rdx_31 == 0
                                            {
                                                let rax_73: *mut i64 = core::option::Option$LT$T$GT$::or_else::h39fe196a0fee08ba(var_b48, &var_a18, &var_910);
                                                let var_5e8_1: i128 = var_950;
                                                let zmm0_17: i128 = var_a30;
                                                let mut var_5a8: i128;
                                                core::option::Option$LT$T$GT$::filter::h45f0602a68689dd2(&var_5a8, arg4);
                                                let mut var_590: i128;
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_590, arg5, arg6);
                                                let mut var_578: i128;
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h98dde29977f1dd5c(&var_578, arg7, arg8);
                                                let mut var_560: i128;
                                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_560, rax_2.byte_offset(0x18));
                                                let rax_74: i64 = *(arg2 + 0xa0);
                                                var_9e8 = *(arg2 + 0x90);
                                                let zmm1_13: i128 = *(arg2 + 0x58);
                                                let zmm2_13: i128 = *(arg2 + 0x68);
                                                var_b38 = *(arg2 + 0x48);
                                                var_aa8 = var_9c0;
                                                let r12_7: i64 = *(arg2 + 0x30);
                                                let r15_4: i64 = *(arg2 + 0x38);
                                                let rbx_4: i64 = *(arg2 + 0x40);
                                                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_908, *rax_2.byte_offset(0x50), 
                                                    *rax_2.byte_offset(0x58));
                                                arg1[0x11] = var_8f8;
                                                *arg1.byte_offset(0x78) = var_908;
                                                arg1[0x4f] = var_940_1;
                                                *arg1.byte_offset(0x268) = var_5e8_1;
                                                *arg1.byte_offset(0x280) = zmm0_17;
                                                arg1[0x52] = var_a20_1;
                                                *arg1.byte_offset(0x90) = var_5a8;
                                                let var_598: i64;
                                                arg1[0x14] = var_598;
                                                var_908 = var_590;
                                                let var_580: i64;
                                                var_8f8 = var_580;
                                                let var_568: i64;
                                                *var_8e8[8] = var_568;
                                                var_8f8 = var_578;
                                                let var_8d8_1: i128 = var_560;
                                                arg1[0x56] = rax_74;
                                                *arg1.byte_offset(0x2a0) = var_9e8;
                                                arg1[0x59] = rax_62;
                                                *arg1.byte_offset(0x2b8) = var_a18;
                                                memcpy(&arg1[0x15], &var_4d8, 0x148);
                                                let var_928: i64;
                                                *var_8b8[8] = var_928;
                                                var_8c0 = var_938;
                                                let mut zmm0_20: i128 = var_b38;
                                                *arg1.byte_offset(0x258) = zmm2_13;
                                                *arg1.byte_offset(0x248) = zmm1_13;
                                                *arg1.byte_offset(0x238) = zmm0_20;
                                                arg1[0x5c] = var_9b0;
                                                *arg1.byte_offset(0x2d0) = var_aa8;
                                                zmm0_20 = var_908;
                                                let var_550: i64;
                                                *arg1.byte_offset(0x40) = var_550;
                                                *arg1 = zmm0_20;
                                                *arg1.byte_offset(0x50) = var_8b8;
                                                *arg1.byte_offset(0x30) = var_8d8_1;
                                                *arg1.byte_offset(0x20) = var_8e8;
                                                *arg1.byte_offset(0x10) = var_8f8;
                                                arg1[0xc] = r12_7;
                                                arg1[0xd] = r15_4;
                                                arg1[0xe] = rbx_4;
                                                let zmm1_14: i128 = arg9[1];
                                                let zmm2_14: i128 = arg9[2];
                                                let zmm3_13: i128 = arg9[3];
                                                *arg1.byte_offset(0x1f0) = *arg9;
                                                *arg1.byte_offset(0x200) = zmm1_14;
                                                *arg1.byte_offset(0x210) = zmm2_14;
                                                *arg1.byte_offset(0x220) = zmm3_13;
                                                arg1[0x46] = arg9[4];
                                                arg1[0x53] = rax_73;
                                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_a58, var_a50);
                                                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$std..path..PathBuf$GT$$GT$::h33025ef45c80cace(var_618, *var_618[8]);
                                                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$$LP$$RF$str$C$just..name..Name$RP$$GT$$GT$::h8de0aae6b4af080d(var_988, *var_988[8]);
                                                return core::ptr::drop_in_place$LT$just..table..Table$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::hdbbe57351eab1e4e(arg2 + 0x78);
                                            }
                                            
                                            if just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03((*rdx_31).byte_offset(0xe8), 1) != 0
                                            {
                                                if var_b48 != 0
                                                {
                                                    let r14_3: *mut i128 = 0xa0 + *rdx_31;
                                                    let mut rax_92: *mut c_void;
                                                    let mut rdx_36: i64;
                                                    rax_92 = just::token::Token::lexeme::h66587cdf67f63270(r14_3);
                                                    *var_908[8] = rax_92;
                                                    var_8f8 = rdx_36;
                                                    var_908 = -0x7fffffffffffffe5;
                                                    just::token::Token::error::h986494da066a4455(
                                                        &var_b38, r14_3, &var_908);
                                                    *arg1.byte_offset(0x48) = var_af8;
                                                    let zmm0_21: i128 = var_b38;
                                                    *arg1.byte_offset(0x38) = var_b08;
                                                    *arg1.byte_offset(0x28) = var_b18;
                                                    *arg1.byte_offset(0x18) = var_b28;
                                                    *arg1.byte_offset(8) = zmm0_21;
                                                    *arg1 = -0x8000000000000000;
                                                    core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h52ab54184d85e79e(&var_b48);
                                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_938);
                                                    break;
                                                }
                                                
                                                let rax_71: *mut i64 = *rdx_31;
                                                let temp2_1: i64 = *rax_71;
                                                *rax_71 += 1;
                                                
                                                if temp2_1 <= -1
                                                {
                                                    trap(6);
                                                }
                                                
                                                let r12_6: i64 = *rdx_31;
                                                core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h52ab54184d85e79e(&var_b48);
                                                var_b48 = r12_6;
                                            }
                                        }
                                        
                                        break;
                                    }
                                    
                                    just::analyzer::Analyzer::resolve_alias::h86efbc0531b9ce74(
                                        &var_908, arg2 + 0x90, &var_a18, &var_390);
                                    let rax_63: i8 = var_8a8;
                                    
                                    if rax_63 == 0x25
                                    {
                                        let zmm0_16: i128 = var_8c8;
                                        let var_af8_1: i128 = zmm0_16;
                                        let zmm1_12: i128 = var_908;
                                        let var_b08_3: i128 = var_8d8;
                                        let var_b18_3: i128 = var_8e8;
                                        let var_b28_3: i128 = var_8f8;
                                        var_b38 = zmm1_12;
                                        *arg1.byte_offset(0x48) = zmm0_16;
                                        *arg1.byte_offset(0x38) = var_8d8;
                                        *arg1.byte_offset(0x28) = var_8e8;
                                        *arg1.byte_offset(0x18) = var_8f8;
                                        *arg1.byte_offset(8) = zmm1_12;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    let var_ae8_1: i128 = var_8b8;
                                    var_af8 = var_8c8;
                                    var_b08 = var_8d8;
                                    var_b18 = var_8e8;
                                    var_b28 = var_8f8;
                                    var_b38 = var_908;
                                    let var_4e4_1: i32 = *var_8a8[4];
                                    let var_4e7_1: i32 = *var_8a8[1];
                                    let mut var_548: i128 = var_b38;
                                    let var_538_1: i128 = var_b28;
                                    let var_528_1: i128 = var_b18;
                                    let var_518_1: i128 = var_b08;
                                    let var_508_1: i128 = var_af8;
                                    let var_4f8_1: i128 = var_ae8_1;
                                    let var_4e8_1: i8 = rax_63;
                                    just::table::Table$LT$V$GT$::insert::h80dbb213eb87758a(
                                        &var_950, &var_548);
                                }
                                
                                core::ptr::drop_in_place$LT$just..table..Table$LT$just..alias..Alias$GT$$GT$::h5472560cc17026cd(&var_950);
                                core::ptr::drop_in_place$LT$just..table..Table$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h842acc61caf9e142(&var_a18);
                                rbp = nullptr;
                            }
                        }
                        else
                        {
                            let mut r12_3: *mut c_void = rax_47;
                            
                            loop
                            {
                                var_af8 = *r12_3.byte_offset(0xd0);
                                var_b08 = *r12_3.byte_offset(0xc0);
                                var_b18 = *r12_3.byte_offset(0xb0);
                                var_b28 = *r12_3.byte_offset(0xa0);
                                var_b38 = *r12_3.byte_offset(0x90);
                                let var_3a0: i8;
                                just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, 
                                    &var_988, &var_b38, "recipeRecipesrc/argument_parser.…", 6, 
                                    var_3a0);
                                
                                if var_8c0 != 0x25
                                {
                                    arg1[9] = var_8c8;
                                    let zmm0_13: i128 = var_908;
                                    *arg1.byte_offset(0x38) = var_8d8;
                                    *arg1.byte_offset(0x28) = var_8e8;
                                    *arg1.byte_offset(0x18) = var_8f8;
                                    *arg1.byte_offset(8) = zmm0_13;
                                    *arg1.byte_offset(0x51) = var_8bf;
                                    *arg1.byte_offset(0x54) = var_8bf;
                                    arg1[0xa] = var_8c0;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_aa8);
                                    core::ptr::drop_in_place$LT$just..table..Table$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h4a7abc0528fca674(&var_9a8);
                                    break;
                                }
                                
                                let mut rax_51: *mut c_void;
                                let mut rdx_19: u64;
                                rax_51 = just::token::Token::lexeme::h66587cdf67f63270(r12_3.
                                    byte_offset(0x90));
                                let var_9a0: i64;
                                
                                if core::option::Option$LT$T$GT$::map_or::h3e93b705283870db(
                                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd6c31e18dfe74f8b(var_9a8, var_9a0, rax_51, rdx_19), 
                                    *r12_3.byte_offset(0xf8)) != 0
                                {
                                    _$LT$just..recipe..Recipe$LT$D$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2c5af075435dd13b(&var_908, r12_3);
                                    just::table::Table$LT$V$GT$::insert::h7e8edd8ce2ada04a(
                                        &var_9a8, &var_908);
                                }
                                
                                let rax_48: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_aa8);
                                r12_3 = rax_48;
                                
                                if rax_48 == 0
                                {
                                    goto 'label_65491f;
                                }
                            }
                            
                            rbp = nullptr;
                        }
                        
                        break;
                    }
                    
                    arg1[9] = var_8c8;
                    let zmm0_12: i128 = var_908;
                    *arg1.byte_offset(0x38) = var_8d8;
                    *arg1.byte_offset(0x28) = var_8e8;
                    *arg1.byte_offset(0x18) = var_8f8;
                    *arg1.byte_offset(8) = zmm0_12;
                    *arg1.byte_offset(0x51) = var_8bf;
                    *arg1.byte_offset(0x54) = var_8bf;
                    arg1[0xa] = var_8c0;
                    *arg1 = -0x8000000000000000;
                }
                else
                {
                    let mut rax_33: *mut c_void;
                    let mut rdx_13: u64;
                    rax_33 =
                        just::token::Token::lexeme::h66587cdf67f63270(rax_32.byte_offset(0x80));
                    let var_39f: i8;
                    let var_a28: i64;
                    
                    if (var_39f & 1) != 0
                    {
                        'label_65434c:
                        let rax_35: *mut c_void = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(var_a30, var_a28, rax_33, rdx_13);
                        let r14_1: i32 = *rax_32.byte_offset(0xc8);
                        
                        if core::option::Option$LT$T$GT$::map_or::hd1b1f979c5314c9d(rax_35, r14_1)
                            != 0
                        {
                            let r12_2: i8 = *rax_32.byte_offset(0xcc);
                            let r13_3: i8 = *rax_32.byte_offset(0xcd);
                            let rax_37: i64 = *rax_32.byte_offset(0xc0);
                            let zmm2_6: i128 = *rax_32.byte_offset(0xa0);
                            let zmm3_6: i128 = *rax_32.byte_offset(0xb0);
                            var_a98 = *rax_32.byte_offset(0x90);
                            var_aa8 = *rax_32.byte_offset(0x80);
                            let rbx_2: i8 = *rax_32.byte_offset(0xce);
                            _$LT$just..expression..Expression$u20$as$u20$core..clone..Clone$GT$::clone::h40fd9fa85428c074(&var_b38, rax_32);
                            let var_83c_1: i8 = r12_2;
                            let var_83b_1: i8 = r13_3;
                            let var_840_1: i32 = r14_1;
                            let var_848_1: i64 = rax_37;
                            let var_858_1: i128 = zmm3_6;
                            let var_868_1: i128 = zmm2_6;
                            let var_878_1: i128 = var_a98;
                            let var_888_2: i128 = var_aa8;
                            let var_83a_1: i8 = rbx_2;
                            var_908 = var_b38;
                            var_8f8 = var_b28;
                            var_8e8 = var_b18;
                            var_8d8 = var_b08;
                            var_8c8 = var_af8;
                            let var_ae8: i128;
                            var_8b8 = var_ae8;
                            let var_ad8: i128;
                            var_8a8 = var_ad8;
                            let var_ac8: i128;
                            let var_898_2: i128 = var_ac8;
                            just::table::Table$LT$V$GT$::insert::heb5088149d7beb1e(&var_a30, 
                                &var_908);
                        }
                        
                        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8b5a5ae6b210544e(arg2 + 0x48, rax_33, rdx_13) == 0
                        {
                            continue;
                        }
                        else
                        {
                            *var_908[8] = rax_33;
                            var_8f8 = rdx_13;
                            var_908 = -0x7fffffffffffffde;
                            just::token::Token::error::h986494da066a4455(&var_b38, 
                                rax_32.byte_offset(0x80), &var_908);
                        }
                    }
                    else
                    {
                        if alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(var_a30, var_a28, rax_33, rdx_13) == 0
                        {
                            goto 'label_65434c;
                        }
                        
                        *var_908[8] = rax_33;
                        var_8f8 = rdx_13;
                        var_908 = -0x7fffffffffffffe1;
                        just::token::Token::error::h986494da066a4455(&var_b38, 
                            rax_32.byte_offset(0x80), &var_908);
                    }
                    *arg1.byte_offset(0x48) = var_af8;
                    let zmm0_11: i128 = var_b38;
                    *arg1.byte_offset(0x38) = var_b08;
                    *arg1.byte_offset(0x28) = var_b18;
                    *arg1.byte_offset(0x18) = var_b28;
                    *arg1.byte_offset(8) = zmm0_11;
                    *arg1 = -0x8000000000000000;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_9e8);
                }
                
                rbp = 1;
                break;
            }
            
            core::ptr::drop_in_place$LT$just..table..Table$LT$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hd6144ab2bf228e98(&var_a30);
            core::ptr::drop_in_place$LT$just..settings..Settings$GT$::h9a427250142b22e5(&var_4d8);
            r15_1 = 0;
            break;
        }
        
        var_a48 = rax_5 - 1;
        let rbx_1: *mut c_void = *(var_a50 + (rax_5 << 3) - 8);
        _$LT$alloc..collections..btree..set..BTreeSet$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$RF$T$GT$$GT$::extend::hce3d8430e15f86bd(&var_9c0, rbx_1.byte_offset(0x60));
        let r13_1: i64 = *rbx_1.byte_offset(0x10);
        
        if r13_1 != 0
        {
            let r12_1: *mut i64 = *rbx_1.byte_offset(8);
            r15_1 = 0;
            
            loop
            {
                let mut rax_7: i64 = *r12_1.byte_offset(r15_1) ^ 0x8000000000000000;
                
                if rax_7 >= 8
                {
                    rax_7 = 5;
                }
                
                let mut rax_11: i8;
                let mut rax_29: *mut i64;
                let mut zmm0_7: i128;
                let mut zmm1_4: i128;
                let mut zmm2_4: i128;
                let mut zmm3_4: i128;
                
                match rax_7
                {
                    0 =>
                    {
                        var_af8 = *r12_1.byte_offset(r15_1).byte_offset(0x60);
                        var_b08 = *r12_1.byte_offset(r15_1).byte_offset(0x50);
                        var_b18 = *r12_1.byte_offset(r15_1).byte_offset(0x40);
                        var_b28 = *r12_1.byte_offset(r15_1).byte_offset(0x30);
                        var_b38 = *r12_1.byte_offset(r15_1).byte_offset(0x20);
                        just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, &var_988, 
                            &var_b38, "aliasmodulerecipeRecipesrc/argum…", 5, 0);
                        rax_11 = var_8c0;
                        
                        if rax_11 == 0x25
                        {
                            _$LT$just..alias..Alias$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h436d3442a6911b15(&var_908, r12_1.byte_offset(r15_1).byte_offset(8));
                            just::table::Table$LT$V$GT$::insert::ha73d91efe8f59421(arg2 + 0x78, 
                                &var_908);
                            goto 'label_653bf0;
                        }
                        
                        'label_65418b:
                        arg1[9] = var_8c8;
                        let zmm0_4: i128 = var_908;
                        *arg1.byte_offset(0x38) = var_8d8;
                        *arg1.byte_offset(0x28) = var_8e8;
                        *arg1.byte_offset(0x18) = var_8f8;
                        *arg1.byte_offset(8) = zmm0_4;
                        *arg1.byte_offset(0x51) = var_8bf;
                        *arg1.byte_offset(0x54) = var_8bf;
                        arg1[0xa] = rax_11;
                        *arg1 = -0x8000000000000000;
                        'label_654571:
                        r15_1 = 1;
                        rbp = 1;
                        break;
                    }
                    1 =>
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hd652c16a120df5f6(arg2, 
                            r12_1.byte_offset(r15_1).byte_offset(8));
                        'label_653bf0:
                        r15_1 += 0x100;
                        
                        if r13_1 << 8 == r15_1
                        {
                            goto 'label_653b79;
                        }
                        
                        continue;
                    }
                    2 =>
                    {
                        goto 'label_653bf0;
                    }
                    3 =>
                    {
                        if *r12_1.byte_offset(r15_1).byte_offset(0x38) != -0x8000000000000000 &&
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h46ebfaa3012d7b50(
                            &var_618, r12_1.byte_offset(r15_1).byte_offset(0x38)) == 0
                        {
                            let rax_14: i64 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h32fcef423693d73d(arg3, r12_1.byte_offset(r15_1).byte_offset(0x38));
                            
                            if rax_14 == 0
                            {
                                goto 'label_6553a2;
                            }
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h4588780f39a432ad(&var_a58, 
                                rax_14 + 0x18);
                        }
                        
                        goto 'label_653bf0;
                    }
                    4 =>
                    {
                        if *r12_1.byte_offset(r15_1).byte_offset(0x20) == -0x8000000000000000
                        {
                            goto 'label_653bf0;
                        }
                        
                        var_af8 = *r12_1.byte_offset(r15_1).byte_offset(0xc0);
                        let var_b08_1: i128 = *r12_1.byte_offset(r15_1).byte_offset(0xb0);
                        let var_b18_1: i128 = *r12_1.byte_offset(r15_1).byte_offset(0xa0);
                        let var_b28_1: i128 = *r12_1.byte_offset(r15_1).byte_offset(0x90);
                        var_b38 = *r12_1.byte_offset(r15_1).byte_offset(0x80);
                        just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, &var_988, 
                            &var_b38, "modulerecipeRecipesrc/argument_p…", 6, 0);
                        rax_11 = var_8c0;
                        
                        if rax_11 != 0x25
                        {
                            goto 'label_65418b;
                        }
                        
                        if *r12_1.byte_offset(r15_1).byte_offset(0x38) != -0x8000000000000000
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_aa8, r12_1.byte_offset(r15_1).byte_offset(0x38));
                            let var_9d8_1: i64 = var_a98;
                            var_9e8 = var_aa8;
                        }
                        else
                        {
                            var_9e8 = -0x8000000000000000;
                        }
                        
                        let rcx_8: i64 = *r12_1.byte_offset(r15_1).byte_offset(0x10);
                        let r8: i64 = *r12_1.byte_offset(r15_1).byte_offset(0x18);
                        let var_a68_2: i64 = *r12_1.byte_offset(r15_1).byte_offset(0xc0);
                        var_a78 = *r12_1.byte_offset(r15_1).byte_offset(0xb0);
                        var_a88 = *r12_1.byte_offset(r15_1).byte_offset(0xa0);
                        var_a98 = *r12_1.byte_offset(r15_1).byte_offset(0x90);
                        var_aa8 = *r12_1.byte_offset(r15_1).byte_offset(0x80);
                        just::analyzer::Analyzer::analyze::h647d89e635aa2068(&var_908, arg3, 
                            &var_9e8, rcx_8, r8, arg7, arg8, &var_aa8, arg10, 
                            *r12_1.byte_offset(r15_1).byte_offset(0x28), arg2);
                        rbp = var_908;
                        var_b38 = var_908;
                        var_b28 = var_8f8;
                        var_b18 = var_8e8;
                        var_b08 = var_8d8;
                        var_af8 = var_8c0;
                        
                        if rbp == -0x8000000000000000
                        {
                            rax_29 = arg1;
                            *rax_29.byte_offset(0x48) = var_af8;
                            zmm0_7 = var_b38;
                            zmm1_4 = var_b28;
                            zmm2_4 = var_b18;
                            zmm3_4 = var_b08;
                            goto 'label_654554;
                        }
                        
                        let mut var_2c0: ();
                        memcpy(&var_2c0, &*var_8b8[8], 0x290);
                        let mut var_318: *mut c_void = rbp;
                        let var_2d0_1: i128 = var_af8;
                        let var_2e0_1: i128 = var_b08;
                        let var_2f0_1: i128 = var_b18;
                        let var_300_1: i128 = var_b28;
                        let var_310_1: i128 = var_b38;
                        just::table::Table$LT$V$GT$::insert::h83a1c8dcfa277e76(arg2 + 0x90, 
                            &var_318);
                        goto 'label_653bf0;
                    }
                    5 =>
                    {
                        rbp = r12_1.byte_offset(r15_1);
                        
                        if just::recipe::Recipe$LT$D$GT$::enabled::h8a787b3e1a79d05f(rbp) == 0
                        {
                            goto 'label_653bf0;
                        }
                        
                        just::analyzer::Analyzer::analyze_recipe::h80a21d1680871f82(&var_908, rbp);
                        rax_11 = var_8c0;
                        
                        if rax_11 != 0x25
                        {
                            goto 'label_65418b;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h4afd8370baf6f0bb(arg2 + 0x18, rbp);
                        goto 'label_653bf0;
                    }
                    6 =>
                    {
                        just::analyzer::Analyzer::analyze_set::h5deef59ee96e96de(&var_908, 
                            *(arg2 + 0xa8), *(arg2 + 0xb0), 
                            r12_1.byte_offset(r15_1).byte_offset(8));
                        rax_11 = var_8c0;
                        
                        if rax_11 != 0x25
                        {
                            goto 'label_65418b;
                        }
                        
                        let rax_21: i64 = *r12_1.byte_offset(r15_1).byte_offset(0x98);
                        let zmm2_2: i128 = *r12_1.byte_offset(r15_1).byte_offset(0x78);
                        let zmm3_2: i128 = *r12_1.byte_offset(r15_1).byte_offset(0x88);
                        var_a98 = *r12_1.byte_offset(r15_1).byte_offset(0x68);
                        var_aa8 = *r12_1.byte_offset(r15_1).byte_offset(0x58);
                        _$LT$just..setting..Setting$u20$as$u20$core..clone..Clone$GT$::clone::ha7de84e269ad33a1(&var_b38, r12_1.byte_offset(r15_1).byte_offset(8));
                        let mut var_878: i128;
                        var_878 = rax_21;
                        let var_888_1: i128 = zmm3_2;
                        let var_898_1: i128 = zmm2_2;
                        var_8a8 = var_a98;
                        var_8b8 = var_aa8;
                        var_908 = var_b38;
                        var_8f8 = var_b28;
                        var_8e8 = var_b18;
                        var_8d8 = var_b08;
                        var_8c8 = var_af8;
                        just::table::Table$LT$V$GT$::insert::h3c988222b553a2aa(arg2 + 0xa8, 
                            &var_908);
                        goto 'label_653bf0;
                    }
                    7 =>
                    {
                        let mut rax_16: *mut c_void;
                        let mut rdx_6: u64;
                        rax_16 = just::token::Token::lexeme::h66587cdf67f63270(r12_1.
                            byte_offset(r15_1).byte_offset(8));
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_908, rax_16, rdx_6);
                        var_b28 = var_8f8;
                        var_b38 = var_908;
                        
                        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h3f4c64e00449f61e(
                            arg2 + 0x48, &var_b38) == 0
                        {
                            goto 'label_653bf0;
                        }
                        
                        let mut rax_28: *mut c_void;
                        let mut rdx_11: i64;
                        rax_28 = just::token::Token::lexeme::h66587cdf67f63270(r12_1.
                            byte_offset(r15_1).byte_offset(8));
                        *var_908[8] = rax_28;
                        var_8f8 = rdx_11;
                        var_908 = -0x7fffffffffffffe2;
                        just::token::Token::error::h986494da066a4455(&var_b38, 
                            r12_1.byte_offset(r15_1).byte_offset(8), &var_908);
                        rax_29 = arg1;
                        *rax_29.byte_offset(0x48) = var_af8;
                        zmm0_7 = var_b38;
                        zmm1_4 = var_b28;
                        zmm2_4 = var_b18;
                        zmm3_4 = var_b08;
                        'label_654554:
                        *rax_29.byte_offset(0x38) = zmm3_4;
                        *rax_29.byte_offset(0x28) = zmm2_4;
                        *rax_29.byte_offset(0x18) = zmm1_4;
                        *rax_29.byte_offset(8) = zmm0_7;
                        *rax_29 = -0x8000000000000000;
                        goto 'label_654571;
                    }
                }
            }
            
            break;
        }
        
        'label_653b79:
        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h605adacde89f0a7a(arg2 + 0x30, 
            *rbx_1.byte_offset(0x40));
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_a58, var_a50);
    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$just..unstable_feature..UnstableFeature$GT$$GT$::h9eaa1dd0bb003650(&var_9c0);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$std..path..PathBuf$GT$$GT$::h33025ef45c80cace(var_618, *var_618[8]);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$$LP$$RF$str$C$just..name..Name$RP$$GT$$GT$::h8de0aae6b4af080d(var_988, *var_988[8]);
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(arg4);
    core::ptr::drop_in_place$LT$just..table..Table$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::hdbbe57351eab1e4e(arg2 + 0x78);
    
    if r15_1 != 0
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(*arg2, *(arg2 + 8));
    }
    
    core::ptr::drop_in_place$LT$just..table..Table$LT$just..justfile..Justfile$GT$$GT$::h73c7e1147cdcae6a(arg2 + 0x90);
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(*(arg2 + 0x18), *(arg2 + 0x20));
    }
    
    if r15_1 != 0
    {
        core::ptr::drop_in_place$LT$just..table..Table$LT$just..set..Set$GT$$GT$::h2236ec451f2859ff(
            arg2 + 0xa8);
    }
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::hfb902d89700f9edf(arg2 + 0x48);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..warning..Warning$GT$$GT$::h908072e5e1668ca3(*(arg2 + 0x30), *(arg2 + 0x38))
}
