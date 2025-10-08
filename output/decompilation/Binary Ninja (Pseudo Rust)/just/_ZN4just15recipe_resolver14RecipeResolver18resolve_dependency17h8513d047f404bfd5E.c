
  fn just::recipe_resolver::RecipeResolver::resolve_dependency::h8513d047f404bfd5(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut i64) -> i64

{
    let r14: i64 = *arg3.byte_offset(0x20);
    let rbp: i64 = *arg3.byte_offset(0x28);
    let mut rax_1: *mut c_void;
    let mut rdx: u64;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(
        just::namepath::Namepath::last::hd204dfab89d26ff3(r14, rbp));
    let mut var_290: *mut c_void = rax_1;
    let var_288: u64 = rdx;
    let mut result: i64;
    
    if rbp <= 1
    {
        let rax_2: *mut i64 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), rax_1, rdx);
        
        if rax_2 == 0
        {
            let rsi_3: *mut i64 = arg5[1];
            let rdx_3: i64 = arg5[2];
            let mut result_1: i64;
            let mut var_230: i64;
            
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(&var_290, rsi_3, rdx_3) != 0
            {
                if rdx_3 == 0
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg5, *rsi_3, rsi_3[1]);
                let rax_5: *mut i128 = just::namepath::Namepath::last::hd204dfab89d26ff3(r14, rbp);
                let mut rax_6: *mut c_void;
                let mut rdx_5: i64;
                rax_6 = just::token::Token::lexeme::h66587cdf67f63270(arg4.byte_offset(0x90));
                let result_2: i64 = arg5[1];
                let rcx_7: i64 = (arg5[2] << 4) + result_2;
                result_1 = result_2;
                let var_278_1: i64 = rcx_7;
                let var_270_1: *mut c_void = arg3;
                let var_268_1: i8 = 0;
                let mut var_228: ();
                core::iter::traits::iterator::Iterator::collect::h11828e8c2bc76a01(&var_228, 
                    &result_1);
                let var_210_1: *mut c_void = rax_6;
                let var_208_1: i64 = rdx_5;
                var_230 = -0x7fffffffffffffe9;
                return just::token::Token::error::h986494da066a4455(arg1, rax_5, &var_230);
            }
            
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hd5ced7b6bb659888(
                &var_230, arg2.byte_offset(0x38), rax_1, rdx);
            result = 0;
            
            if 0 + -(var_230)
            {
                *arg1 = result;
                arg1[9] = 0x25;
            }
            else
            {
                let mut var_130: ();
                memcpy(&var_130, &var_230, 0x100);
                just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(&result_1, 
                    arg2, arg5, &var_130);
                result = result_1;
                let var_238: i8;
                
                if var_238 != 0x25
                {
                    let var_248: i128;
                    *arg1.byte_offset(0x38) = var_248;
                    let var_258: i128;
                    *arg1.byte_offset(0x28) = var_258;
                    let var_268: i8;
                    *arg1.byte_offset(0x18) = var_268;
                    let var_278: i64;
                    *arg1.byte_offset(8) = var_278;
                    let var_237: i32;
                    *arg1.byte_offset(0x49) = var_237;
                    *arg1.byte_offset(0x4c) = var_237;
                    *arg1 = result;
                    arg1[9] = var_238;
                }
                else
                {
                    *arg1 = result;
                    arg1[9] = 0x25;
                }
            }
        }
        else
        {
            let rcx_2: *mut i64 = *rax_2;
            let temp0_1: i64 = *rcx_2;
            *rcx_2 += 1;
            
            if temp0_1 <= -1
            {
                trap(6);
            }
            
            result = *rax_2;
            *arg1 = result;
            arg1[9] = 0x25;
        }
    }
    else
    {
        result = just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(r14, rbp, 
            *arg2.byte_offset(0x18), arg2.byte_offset(0x20));
        *arg1 = result;
        arg1[9] = 0x25;
    }
    
    result
}
