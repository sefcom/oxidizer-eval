
  fn just::argument_parser::ArgumentParser::resolve_recipe::h7bff01a000980bc2(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut rax: *mut c_void = arg2;
    let mut var_110: i64 = 0;
    let var_108: i64 = 8;
    let var_100: i64 = 0;
    let mut var_48: i64 = arg3;
    let var_40: i64 = (arg4 << 4) + arg3;
    let var_38: i64 = 0;
    let mut result: i64;
    let mut rdx_5: *mut i8;
    
    loop
    {
        let r14_1: *mut c_void = rax;
        let mut rax_1: i64;
        let mut rdx: *mut i64;
        rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1433946cae7ad1f0(&var_48);
        let mut var_f8: i128;
        let mut var_d0: i128;
        let mut var_c0: i64;
        
        if rdx == 0
        {
            let rsi_5: *mut c_void = *r14_1.byte_offset(0x298);
            
            if rsi_5 == 0
            {
                rax_1 = *r14_1.byte_offset(0x2c8) == 0;
                rax_1 |= 0x24;
                *arg1 = rax_1;
            }
            else
            {
                just::recipe::Recipe$LT$D$GT$::check_can_be_default_recipe::hbdbea57edf4aea7b(
                    &var_d0, rsi_5.byte_offset(0x10));
                let rax_4: i8 = var_d0;
                
                if rax_4 == 0x38
                {
                    let mut rax_5: *mut c_void;
                    let mut rdx_6: u64;
                    rax_5 = just::token::Token::lexeme::h66587cdf67f63270(0xa0
                        + *r14_1.byte_offset(0x298));
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, rax_5, rdx_6);
                    let var_e8_2: i64 = var_c0;
                    var_f8 = var_d0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_110, &var_f8);
                    let rax_8: i64 = *r14_1.byte_offset(0x298) + 0x10;
                    rdx_5 = arg1;
                    *rdx_5.byte_offset(0x18) = var_100;
                    *rdx_5.byte_offset(8) = var_110;
                    *rdx_5.byte_offset(0x20) = rax_8;
                    result = arg4;
                    *rdx_5.byte_offset(0x28) = result;
                    break;
                }
                
                let var_70: i64;
                *arg1.byte_offset(0x60) = var_70;
                let var_7f: i128;
                *arg1.byte_offset(0x51) = var_7f;
                let var_8f: i128;
                *arg1.byte_offset(0x41) = var_8f;
                let zmm0_3: i128 = var_d0;
                let var_9f: i128;
                *arg1.byte_offset(0x31) = var_9f;
                let var_af: i128;
                *arg1.byte_offset(0x21) = var_af;
                *arg1.byte_offset(0x11) = *var_c0[1];
                *arg1.byte_offset(1) = zmm0_3;
                *arg1 = rax_4;
            }
        }
        else
        {
            rdx[1];
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 =
                _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h108b88534797670a(
                *rdx);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, rax_2, rdx_1);
            var_f8 = var_d0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_110, &var_f8);
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *r14_1.byte_offset(0x2a0), *r14_1.byte_offset(0x2a8), rax_2, rdx_1);
            
            if rax != 0
            {
                continue;
            }
            else
            {
                result =
                    just::justfile::Justfile::get_recipe::h2487a07572812fbd(r14_1, rax_2, rdx_1);
                
                if result != 0
                {
                    rdx_5 = arg1;
                    *rdx_5.byte_offset(0x18) = var_100;
                    *rdx_5.byte_offset(8) = var_110;
                    *rdx_5.byte_offset(0x20) = result;
                    *rdx_5.byte_offset(0x28) = rax_1 + 1;
                    break;
                }
                
                alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_d0, var_108, var_100, 
                    " [private]\nexport no entry foun…", 1);
                let zmm0_6: i128 = var_d0;
                just::justfile::Justfile::suggest_recipe::hb59653753af09818(&var_f8, r14_1, rax_2, 
                    rdx_1);
                *arg1.byte_offset(0x38) = var_c0;
                *arg1.byte_offset(0x28) = zmm0_6;
                var_d0 = var_f8;
                *var_c0[7] = var_c0;
                *arg1 = 0x34;
                *arg1.byte_offset(1) = var_d0;
                *arg1.byte_offset(0x11) = var_c0;
                let var_b1: i64;
                *arg1.byte_offset(0x20) = var_b1;
            }
        }
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_110);
    }
    
    *rdx_5 = 0x38;
    result
}
