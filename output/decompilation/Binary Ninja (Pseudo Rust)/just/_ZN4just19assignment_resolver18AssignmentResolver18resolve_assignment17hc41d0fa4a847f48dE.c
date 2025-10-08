
  fn just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i128

{
    let mut var_138: i64 = arg3;
    let var_130: u64 = arg4;
    let mut result: *mut i128 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(arg2[4], 
        arg2[5], arg3, arg4);
    
    if result == 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, arg3, arg4);
        let rax: *mut i64 = arg2[3];
        let mut rax_1: i64;
        let mut rdx_2: u64;
        rax_1 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(
            *rax, rax[1], arg3, arg4);
        let mut var_1a8: *mut i64;
        let mut var_190: *mut *mut c_void;
        let mut var_128: i64;
        let mut var_120: i128;
        
        if rax_1 == 0
        {
            var_1a8 = &var_138;
            let var_1a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_190 = &data_82db70;
            let var_188_1: i64 = 2;
            let var_170_1: i64 = 0;
            let var_180_1: *mut i64 = &var_1a8;
            let var_178_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_120, 0, rdx_2, 
                &var_190);
            let var_80_1: i8 = 0x23;
            let mut var_c0: i64 = 1;
            let var_b8_1: i64 = 0;
            let var_b0_1: i64 = 1;
            let mut s: i128;
            __builtin_memset(&s, 0, 0x28);
            var_128 = -0x7fffffffffffffd8;
            return just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_c0, 
                &var_128);
        }
        
        just::expression::Expression::variables::h421cbbeec48818c6(&var_1a8, rax_1);
        
        loop
        {
            let mut var_78: ();
            _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_78, &var_1a8);
            let var_1a0: i64;
            let var_38: i8;
            
            if var_38 == 0x25
            {
                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                    var_1a8, var_1a0);
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h229911f973c84f56(&arg2[4], arg3, arg4);
                let rax_10: i64 = arg2[2];
                
                if rax_10 != 0
                {
                    arg2[2] = rax_10 - 1;
                }
                
                result = arg1;
                *result.byte_offset(0x48) = 0x25;
                break;
            }
            
            let mut rax_2: *mut c_void;
            let mut rdx_3: u64;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
            let mut var_1c0: *mut c_void = rax_2;
            
            if alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(
                arg2[4], arg2[5], rax_2, rdx_3) == 0 &&
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h10d5bbd0b5ef08d9(
                just::constants::constants::h3594f93ebbf36f97(), var_1c0, rdx_3) == 0
            {
                let var_180: i64;
                let var_170: i64;
                let var_160: i128;
                let var_150: i128;
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(&var_1c0, arg2[1], arg2[2]) != 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, var_1c0, rdx_3);
                    let rax_12: *mut *mut c_void = arg2[3];
                    let rax_13: i64 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_12, rax_12[1], var_1c0, rdx_3);
                    
                    if rax_13 == 0
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "no entry found for keyattempted …");
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc8878f0d281318f9(&var_190, arg2[1], arg2[2]);
                    let var_108_1: i128 = var_1c0;
                    var_120 = var_190;
                    let var_110_1: i64 = var_180;
                    var_128 = -0x7fffffffffffffe8;
                    just::token::Token::error::h986494da066a4455(&var_190, rax_13 + 0x80, &var_128);
                    arg1[4] = var_150;
                    let zmm0_4: i128 = var_190;
                    arg1[3] = var_160;
                    arg1[2] = var_170;
                    arg1[1] = var_180;
                    *arg1 = zmm0_4;
                }
                else
                {
                    let rax_7: *mut *mut c_void = arg2[3];
                    let mut rax_9: *mut i128;
                    let mut zmm0_2: i128;
                    let mut zmm1_1: i128;
                    let mut zmm2_1: i128;
                    let mut zmm3_1: i128;
                    
                    if alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_7, rax_7[1], var_1c0, rdx_3) == 0
                    {
                        var_120 = var_1c0;
                        var_128 = -0x7fffffffffffffcc;
                        just::token::Token::error::h986494da066a4455(&var_190, &var_78, &var_128);
                        rax_9 = arg1;
                        rax_9[4] = var_150;
                        zmm0_2 = var_190;
                        zmm1_1 = var_180;
                        zmm2_1 = var_170;
                        zmm3_1 = var_160;
                    }
                    else
                    {
                        just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(&var_128, arg2, var_1c0, rdx_3);
                        let var_e0: i8;
                        
                        if var_e0 == 0x25
                        {
                            continue;
                        }
                        else
                        {
                            rax_9 = arg1;
                            let var_e8: i128;
                            rax_9[4] = var_e8;
                            zmm0_2 = var_128;
                            zmm1_1 = var_120;
                            let var_108: i128;
                            zmm2_1 = var_108;
                            let var_f8: i128;
                            zmm3_1 = var_f8;
                        }
                    }
                    
                    rax_9[3] = zmm3_1;
                    rax_9[2] = zmm2_1;
                    rax_9[1] = zmm1_1;
                    *rax_9 = zmm0_2;
                }
                return 
                    core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                    var_1a8, var_1a0);
            }
        }
    }
    else
    {
        *arg1.byte_offset(0x48) = 0x25;
    }
    
    result
}
