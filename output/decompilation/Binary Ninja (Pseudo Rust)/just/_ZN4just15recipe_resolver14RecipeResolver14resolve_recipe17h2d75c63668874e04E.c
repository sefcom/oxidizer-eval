
  fn just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg4[0x12]);
    let rax_1: *mut i64 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
        *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), rax, rdx);
    
    if rax_1 == 0
    {
        let mut rax_3: *mut c_void;
        let mut rdx_2: i64;
        rax_3 = just::token::Token::lexeme::h66587cdf67f63270(&arg4[0x12]);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg3, rax_3, rdx_2);
        let rax_4: i64 = arg4[4];
        let rcx_3: i64 = arg4[5];
        let mut var_2b8: i64 = rax_4;
        let var_2b0_1: i64 = rcx_3 * 0x30 + rax_4;
        let mut var_2a8_1: *mut c_void = arg2;
        let var_2a0_1: *mut i64 = arg4;
        let mut var_298_1: *mut i64 = arg3;
        let mut var_238: i128;
        core::iter::traits::iterator::Iterator::collect::h124cdc44d57f2113(&var_238, &var_2b8);
        let mut var_228: i128;
        let mut var_218: i128;
        let mut var_208: i128;
        let mut var_1f0: i8;
        let mut var_128: i128;
        
        if var_1f0 == 0x25
        {
            let mut var_258: i128 = var_238;
            let var_248_1: i64 = var_228;
            let rax_7: i64 = arg3[2];
            
            if rax_7 != 0
            {
                arg3[2] = rax_7 - 1;
            }
            
            memcpy(&var_238, arg4, 0x100);
            just::unresolved_recipe::_$LT$impl$u20$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::resolve::h282f902b1bf99931(&var_128, &var_238, *arg2.byte_offset(8), *arg2.byte_offset(0x10), &var_258);
            let r15_1: i64 = var_128;
            var_2b8 = var_128;
            let var_118: i128;
            var_2a8_1 = var_118;
            let var_108: i128;
            var_298_1 = var_108;
            let var_f8: i128;
            let var_e0: i128;
            
            if -(r15_1) == -0x8000000000000000
            {
                *arg1.byte_offset(0x40) = var_e0;
                let zmm0_2: i128 = var_2b8;
                *arg1.byte_offset(0x30) = var_f8;
                *arg1.byte_offset(0x20) = var_298_1;
                *arg1.byte_offset(0x10) = var_2a8_1;
                *arg1 = zmm0_2;
                return -(r15_1);
            }
            
            let mut var_1d0: ();
            let mut var_d0: ();
            memcpy(&var_1d0, &var_d0, 0xa8);
            var_228 = var_2b8;
            var_218 = var_2a8_1;
            var_208 = var_298_1;
            var_1f0 = var_f8;
            let var_1e0_1: i128 = var_e0;
            var_238 = 1;
            *var_238[8] = 1;
            var_228 = r15_1;
            let rax_11: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::hd5615bb7f3f87468(&var_238);
            let var_260_1: *mut i64 = rax_11;
            let temp2_1: i64 = *rax_11;
            *rax_11 += 1;
            
            if temp2_1 <= -1
            {
                trap(6);
            }
            
            let result: i64 = just::table::Table$LT$V$GT$::insert::h70ddfb0fda70ad86(
                arg2.byte_offset(0x20), rax_11);
            *arg1 = rax_11;
            arg1[9] = 0x25;
            return result;
        }
        
        var_128 = var_238;
        let var_1ec: i32;
        *arg1.byte_offset(0x4c) = var_1ec;
        let var_1ef: i32;
        *arg1.byte_offset(0x49) = var_1ef;
        let var_1f8: i64;
        arg1[8] = var_1f8;
        let zmm0_1: i128 = var_128;
        *arg1.byte_offset(0x30) = var_208;
        *arg1.byte_offset(0x20) = var_218;
        *arg1.byte_offset(0x10) = var_228;
        *arg1 = zmm0_1;
        arg1[9] = var_1f0;
    }
    else
    {
        let rcx_1: *mut i64 = *rax_1;
        let temp0_1: i64 = *rcx_1;
        *rcx_1 += 1;
        
        if temp0_1 <= -1
        {
            trap(6);
        }
        
        *arg1 = *rax_1;
        arg1[9] = 0x25;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::ha19f91e5b971396e(arg4)
}
