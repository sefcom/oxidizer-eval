
  fn just::subcommand::Subcommand::show::h0bdf6b2545355152(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void) -> *mut c_void

{
    let r15: i64 = *arg4.byte_offset(8);
    let r12: i64 = *arg4.byte_offset(0x10);
    let mut i_1: *mut c_void;
    let mut rdx_1: i64;
    i_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h558ebd0999430957(r12 - 1, r15, r12);
    let mut i: *mut c_void = i_1;
    i_1 = rdx_1 == 0;
    let mut result_1: *mut c_void;
    let mut var_a8: i128;
    let mut rax: *mut c_void;
    let mut result: *mut c_void;
    
    if (i == 0 | i_1) == 0
    {
        let r14_3: *mut c_void = rdx_1 * 0x18 + i;
        let mut i_2: *mut c_void = i.byte_offset(0x18);
        rax = arg3;
        
        do
        {
            let rdx_4: i64 = *i.byte_offset(8);
            let rcx_3: u64 = *i.byte_offset(0x10);
            i = i_2;
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *rax.byte_offset(0x2a0), *rax.byte_offset(0x2a8), rdx_4, rcx_3);
            
            if rax == 0
            {
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbfd22dd80b4b7c3f(&result_1, arg4);
                result = result_1;
                *arg1.byte_offset(0x10) = var_a8;
                *arg1 = 0x35;
                *arg1.byte_offset(8) = result;
                goto 'label_690f67;
            }
            
            i_2 = i.byte_offset(0x18);
            
            if i == r14_3
            {
                i_2 = i;
            }
            
            if i == r14_3
            {
                break;
            }
        } while i != 0;
    }
    else
    {
        rax = arg3;
    }
    
    let mut rcx_1: i64;
    
    if r12 != 0
    {
        rcx_1 = r12 * 3;
    }
    
    if r12 == 0 || r15 + (rcx_1 << 3) == 0x18
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let r14_1: *mut c_void = r15 + (rcx_1 << 3);
    let rax_1: i64 = just::justfile::Justfile::get_alias::h42732d97284ae40e(
        *rax.byte_offset(0x268), *rax.byte_offset(0x270), *r14_1.byte_offset(-0x10), 
        *r14_1.byte_offset(-8));
    let mut result_2: *mut c_void;
    let mut var_80: i128;
    let mut var_60: i128;
    let mut var_50: i128;
    
    if rax_1 == 0
    {
        let rax_5: i64 = just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax, 
            *r14_1.byte_offset(-0x10), *r14_1.byte_offset(-8));
        
        if rax_5 == 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_80, (r15 + (rcx_1 << 3)).byte_offset(-0x18));
            just::justfile::Justfile::suggest_recipe::hb59653753af09818(&var_60, rax, 
                *r14_1.byte_offset(-0x10), *r14_1.byte_offset(-8));
            let var_70: i64;
            *arg1.byte_offset(0x38) = var_70;
            *arg1.byte_offset(0x28) = var_80;
            let zmm1_1: i128 = var_50;
            *result_1[7] = var_60;
            *arg1 = 0x34;
            *arg1.byte_offset(1) = result_1;
            *arg1.byte_offset(0x11) = zmm1_1;
            result = result_2;
            *arg1.byte_offset(0x20) = result;
        }
        else
        {
            just::color::Color::stdout::h99dee7c87aa8c485(&var_50, arg2.byte_offset(0x184));
            var_60 = rax_5;
            *var_60[8] = &data_830370;
            var_80 = &var_60;
            *var_80[8] = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
            result_1 = &data_82dbd8;
            var_a8 = 2;
            result_2 = 0;
            *var_a8[8] = &var_80;
            let var_98_3: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            result = arg1;
            *result = 0x38;
        }
    }
    else
    {
        let mut var_38: i64 = rax_1;
        let mut rax_2: *mut c_void;
        let mut rdx_3: u64;
        rax_2 = just::token::Token::lexeme::h66587cdf67f63270(0xa0 + *(rax_1 + 0x18));
        let rax_3: i64 = just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax, rax_2, rdx_3);
        
        if rax_3 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_60 = &var_38;
        *var_60[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a08090f72f316c;
        result_1 = &data_82dbd8;
        var_a8 = 2;
        result_2 = 0;
        *var_a8[8] = &var_60;
        let var_98_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        just::color::Color::stdout::h99dee7c87aa8c485(&var_50, arg2.byte_offset(0x184));
        var_60 = rax_3;
        *var_60[8] = &data_830370;
        var_80 = &var_60;
        *var_80[8] = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
        result_1 = &data_82dbd8;
        var_a8 = 2;
        result_2 = 0;
        *var_a8[8] = &var_80;
        let var_98_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        result = arg1;
        *result = 0x38;
    }
    'label_690f67:
    result
}
