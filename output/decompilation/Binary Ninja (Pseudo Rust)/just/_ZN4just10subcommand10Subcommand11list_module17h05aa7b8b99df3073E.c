
  fn just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> i64

{
    let var_2d8: *mut c_void = arg2;
    let mut var_328: *const i8;
    let mut var_318: *mut *mut i64;
    let mut var_2e0: *mut c_void;
    let mut var_2c8: *mut i64;
    let mut var_258: *mut i64;
    let mut var_248: *mut *mut i64;
    let mut var_228: i64;
    let mut var_1f8: *mut c_void;
    let var_1f0: i64;
    
    if *arg1.byte_offset(0x19e) == 0
    {
        var_258 = nullptr;
        var_248 = nullptr;
        let rax_1: *mut *mut i64 = *arg2.byte_offset(0x268);
        let rcx_1: i64 = *arg2.byte_offset(0x270);
        let mut rsi: *mut *mut i64 = rax_1;
        let mut rdx: *mut i8;
        rdx = rax_1 != 0;
        
        if rax_1 != 0
        {
            rsi = *var_2d8.byte_offset(0x278);
        }
        
        var_328 = rdx;
        let var_320_1: i64 = 0;
        var_318 = rax_1;
        let var_310_1: i64 = rcx_1;
        let var_308_1: *mut i8 = rdx;
        let var_300_1: i64 = 0;
        let var_2f8_1: *mut *mut i64 = rax_1;
        let var_2f0_1: i64 = rcx_1;
        let var_2e8_1: *mut *mut i64 = rsi;
        
        loop
        {
            let rax_2: *mut i64 =
                core::iter::traits::iterator::Iterator::try_fold::ha7957c17d08ee726(&var_328);
            
            if rax_2 == 0
            {
                break;
            }
            
            let mut rax_3: *mut c_void;
            let mut rdx_1: u64;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(rax_2[3] + 0xa0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he27f9e5dce939e66(
                &var_2c8, &var_258, rax_3, rdx_1);
            let rax_4: *mut i64 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::hdf29e6771a0aa0e0(&var_2c8);
            let mut rax_5: *mut c_void;
            let mut rdx_3: i64;
            rax_5 = just::token::Token::lexeme::h66587cdf67f63270(&rax_2[4]);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(rax_4, rax_5, rdx_3);
        }
        
        var_1f8 = var_258;
        let var_1e8_1: *mut *mut i64 = var_248;
        var_2e0 = var_1f8;
        var_228 = var_1f0;
        arg2 = var_2d8;
    }
    else
    {
        var_1f8 = nullptr;
        let var_1e8: i64 = 0;
        var_2e0 = nullptr;
    }
    
    let mut var_e0: i64 = 0;
    let var_d0: *mut *mut i64 = nullptr;
    let rax_9: *mut *mut i64 = *arg2.byte_offset(0x2b8);
    let rcx_4: i64 = *arg2.byte_offset(0x2c0);
    let mut rsi_4: *mut *mut i64 = rax_9;
    let mut rdx_4: *mut i8;
    rdx_4 = rax_9 != 0;
    
    if rax_9 != 0
    {
        rsi_4 = *var_2d8.byte_offset(0x2c8);
    }
    
    var_328 = rdx_4;
    let var_320_2: i64 = 0;
    var_318 = rax_9;
    let var_310_2: i64 = rcx_4;
    let var_308_2: *mut i8 = rdx_4;
    let var_300_2: i64 = 0;
    let var_2f8_2: *mut *mut i64 = rax_9;
    let var_2f0_2: i64 = rcx_4;
    let var_2e8_2: *mut *mut i64 = rsi_4;
    let mut var_2c0: *mut c_void;
    let mut var_2b8: *mut i64;
    let mut var_2b0: fn(arg1: *mut i64, arg2: i64) -> u64;
    let mut var_2a8: *mut *mut c_void;
    let mut var_288: *mut c_void;
    let mut var_280: u64;
    let mut var_220: *mut i64;
    
    loop
    {
        let mut rax_10: *mut i64;
        let mut rdx_5: *mut i64;
        rax_10 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_328);
        
        if rax_10 == 0
        {
            break;
        }
        
        let rdi_8: *mut c_void = *rdx_5;
        
        if *rdi_8.byte_offset(0x10c) == 0 &&
            just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(rdi_8.byte_offset(0xe8), 
            0xf) == 0
        {
            let rax_12: *mut c_void =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd6d59b53234512e9(
                var_2e0, var_228, *rax_10, rax_10[1]);
            let mut rcx_6: i64;
            let mut rdx_7: i64;
            
            if rax_12 == 0
            {
                rdx_7 = 8;
                rcx_6 = 0;
            }
            else
            {
                rdx_7 = *rax_12.byte_offset(8);
                rcx_6 = *rax_12.byte_offset(0x10);
            }
            
            core::iter::traits::iterator::Iterator::chain::h4e15377c649427ca(&var_258, rax_10, 
                rdx_7, rcx_6);
            
            for let mut i: *mut i64 = core::option::Option$LT$T$GT$::or_else::h14d7d0d8ae5858a1(
                core::iter::adapters::chain::and_then_or_clear::he6028131b18a4029(&var_258), 
                &var_248); i != 0; i = core::option::Option$LT$T$GT$::or_else::h14d7d0d8ae5858a1(
                core::iter::adapters::chain::and_then_or_clear::he6028131b18a4029(&var_258), 
                &var_248)
            {
                let r14_2: *mut c_void = *i;
                let r15_1: u64 = i[1];
                let rax_15: i64 = *rdx_5 + 0x10;
                var_288 = r14_2;
                var_280 = r15_1;
                let var_278_1: i64 = rax_15;
                var_2c8 = &var_288;
                var_2c0 = &data_831320;
                var_2b0 = 0;
                var_2b8 = nullptr;
                var_2b0 = 0xa0000000a;
                *var_2a8[1] = 2;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::ha466f91c47c2f1dc(&var_220, &var_2c8);
                let var_218: i64;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hf48949544e7b97fa(&var_e0, r14_2, r15_1, 
                    core::iter::traits::double_ended::DoubleEndedIterator::rfold::h5581e28ca29d37ae(
                        var_218));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_220);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(0, 8);
        }
    }
    
    let rax_19: i8 = *arg1.byte_offset(0x19c);
    
    if rax_19 == 0
    {
        let rax_42: *mut *mut i64 = *var_2d8.byte_offset(0x2a0);
        let rcx_13: i64 = *var_2d8.byte_offset(0x2a8);
        let mut rsi_38: *mut *mut i64 = rax_42;
        let mut rdx_23: *mut i8;
        rdx_23 = rax_42 != 0;
        
        if rax_42 != 0
        {
            rsi_38 = *var_2d8.byte_offset(0x2b0);
        }
        
        var_328 = rdx_23;
        let var_320_5: i64 = 0;
        var_318 = rax_42;
        let var_310_4: i64 = rcx_13;
        let var_308_5: *mut i8 = rdx_23;
        let var_300_4: i64 = 0;
        let var_2f8_4: *mut *mut i64 = rax_42;
        let var_2f0_4: i64 = rcx_13;
        let var_2e8_4: *mut *mut i64 = rsi_38;
        
        loop
        {
            let mut rax_43: *mut i64;
            let mut rdx_24: u64;
            rax_43 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_328);
            
            if rax_43 == 0
            {
                break;
            }
            
            var_220 = rax_43;
            let r13_4: i64 = *rax_43;
            let rbp_2: u64 = rax_43[1];
            var_288 = &var_220;
            var_280 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfb667536bbd64d87;
            var_2c8 = &data_831210;
            var_2c0 = 2;
            var_2a8 = nullptr;
            var_2b8 = &var_288;
            var_2b0 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_258, 0, rdx_24, 
                &var_2c8);
            var_2c8 = var_258;
            var_2b8 = var_248;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hf48949544e7b97fa(
                &var_e0, r13_4, rbp_2, 
                core::iter::traits::double_ended::DoubleEndedIterator::rfold::h5581e28ca29d37ae(
                    var_2c0));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2c8);
        }
    }
    
    let mut rax_20: *mut *mut i64 = var_d0;
    let var_198: *mut *mut i64 = rax_20;
    let mut var_1a8: i128 = var_e0;
    let rcx_8: *mut *mut i64 = var_1a8;
    let rdx_9: i64 = *var_1a8[8];
    let mut rsi_14: *mut i8;
    rsi_14 = rcx_8 != 0;
    
    if rcx_8 == 0
    {
        rax_20 = rcx_8;
    }
    
    var_328 = rsi_14;
    let var_320_3: i64 = 0;
    var_318 = rcx_8;
    let mut var_310_3: i64 = rdx_9;
    let var_308_3: *mut i8 = rsi_14;
    let var_300_3: i64 = 0;
    let var_2f8_3: *mut *mut i64 = rcx_8;
    let var_2f0_3: i64 = rdx_9;
    let mut var_2e8_3: *mut *mut i64 = rax_20;
    let mut rax_21: i8;
    let mut rdx_10: *mut c_void;
    rax_21 = core::iter::traits::iterator::Iterator::reduce::he1f3b1c857259fe2(&var_328);
    let mut rcx_9: *mut c_void = nullptr;
    
    if (rax_21 & 1) != 0
    {
        rcx_9 = rdx_10;
    }
    
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h241624d29c2b5753(&var_328, 
        *arg1.byte_offset(0x50), *arg1.byte_offset(0x58), arg3 + 1);
    let var_178: *mut *mut i64 = var_318;
    let mut var_188: i128 = var_328;
    
    if arg3 == 0
    {
        var_2c8 = arg1.byte_offset(0x30);
        var_2c0 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_328 = &data_465db0;
        let var_320_4: i64 = 1;
        let var_308_4: i64 = 0;
        var_318 = &var_2c8;
        var_310_3 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_328);
    }
    
    var_220 = nullptr;
    let var_210_1: i64 = 0;
    let rdx_12: u32 = *arg1.byte_offset(0x1a3);
    var_2e0 = rdx_12;
    just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(&var_328, var_2d8, rdx_12);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_258, &var_328);
    let i_10: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_258);
    
    if i_10 != 0
    {
        let mut i_6: *mut c_void = i_10;
        let mut i_1: *mut c_void;
        
        do
        {
            let mut var_b8: ();
            just::recipe::Recipe$LT$D$GT$::groups::hd8e05377223fb99f(&var_b8, i_6);
            let var_a8: i64;
            
            if var_a8 == 0
            {
                var_2c8 = -0x8000000000000000;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h1d922b2b1a5a5f2f(
                    &var_328, &var_220, &var_2c8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd32d1655be454ab3(
                    alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h6e0dccf1299e1d76(&var_328), 
                    i_6);
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..string..String$GT$$GT$::h20b05395ea960ef3(&var_b8);
            }
            else
            {
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_328, &var_b8);
                
                loop
                {
                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf7c3db92e6462bc5(&var_2c8, &var_328);
                    let rax_27: *mut i64 = var_2c8;
                    
                    if rax_27 == -0x8000000000000000
                    {
                        break;
                    }
                    
                    var_280 = var_2c0;
                    var_288 = rax_27;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h1d922b2b1a5a5f2f(&var_2c8, &var_220, &var_288);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hd32d1655be454ab3(
                        alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h6e0dccf1299e1d76(&var_2c8), 
                        i_6);
                }
                
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$alloc..string..String$GT$$GT$::hcfb473631b3f694e(&var_328);
            }
            
            i_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_258);
            i_6 = i_1;
        } while i_1 != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_258);
    let mut var_168: i128 = var_220;
    let var_158: i64 = var_210_1;
    var_288 = nullptr;
    let var_278_2: i64 = 0;
    just::justfile::Justfile::modules::h159af459e28c9d16(&var_328, var_2d8, var_2e0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_2c8, &var_328);
    let i_11: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h151346bd341698a9(&var_2c8);
    
    if i_11 != 0
    {
        let mut i_7: *mut c_void = i_11;
        let mut i_2: *mut c_void;
        
        do
        {
            let rax_31: i64 = *i_7.byte_offset(0x10);
            
            if rax_31 == 0
            {
                var_258 = -0x8000000000000000;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h1d922b2b1a5a5f2f(
                    &var_328, &var_288, &var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h23612b4d7d703d79(
                    alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h6e0dccf1299e1d76(&var_328), 
                    i_7);
            }
            else
            {
                let mut rsi_27: *mut c_void = *i_7.byte_offset(8);
                let r15_2: *mut c_void = rsi_27.byte_offset(rax_31 * 0x18);
                
                loop
                {
                    let mut r14_3: *mut c_void = rsi_27.byte_offset(0x18);
                    
                    if rsi_27 == r15_2
                    {
                        r14_3 = rsi_27;
                    }
                    
                    if rsi_27 == r15_2
                    {
                        break;
                    }
                    
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_328, rsi_27);
                    var_248 = var_318;
                    var_258 = var_328;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h1d922b2b1a5a5f2f(&var_328, &var_288, &var_258);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h23612b4d7d703d79(
                        alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h6e0dccf1299e1d76(&var_328), 
                        i_7);
                    rsi_27 = r14_3;
                }
            }
            
            i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h151346bd341698a9(&var_2c8);
            i_7 = i_2;
        } while i_2 != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_2c8);
    let mut var_148: i128 = var_288;
    let var_138: i64 = var_278_2;
    just::justfile::Justfile::public_groups::he2abda4ed6140bb7(&var_2c8, var_2d8, var_2e0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_328, &var_2c8);
    let mut var_f8: ();
    core::iter::traits::iterator::Iterator::collect::h09db40981d4e2d45(&var_f8, &var_328);
    let rax_37: i64 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(var_168, 
        *var_168[8], &data_49e600);
    let mut rax_38: i64;
    
    if rax_37 == 0
    {
        rax_38 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
            var_148, *var_148[8], &data_49e600);
    }
    
    if rax_37 != 0 || rax_38 != 0
    {
        var_328 = -0x8000000000000000;
        alloc::vec::Vec$LT$T$C$A$GT$::insert::he3db1d3daf83d2aa(&var_f8, &var_328);
    }
    
    let var_e8: u64;
    let mut var_1d8: u64 = var_e8;
    let mut var_25c: i8;
    
    if var_e8 != 1
    {
        var_25c = 0;
    }
    else
    {
        let var_f0: *mut i64;
        let rax_40: i8 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8215ef34eec99694(*var_f0);
        var_25c = rax_40;
        var_1d8 = rax_40 ^ 1;
    }
    
    let mut var_70: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb3f28c793021a9ec(&var_70, &var_f8);
    let var_50: i64 = 0;
    let mut var_a0: i64;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he46fc01dbeb051fc(&var_a0, &var_70);
    let var_2d8_1: i64 = -0x7fffffffffffffff;
    let var_98: i64;
    
    if var_98 != -0x7fffffffffffffff
    {
        let rax_47: i8 = *arg1.byte_offset(0x1a6);
        let var_1d8_1: i64 = -(var_1d8);
        
        do
        {
            let cond:6_1: bool = var_a0 == 0;
            let var_88: i64;
            let var_118_1: i64 = var_88;
            let mut var_128: i128 = var_98;
            
            if !cond:6_1
            {
                var_328 = &data_82dbf8;
                let var_320_6: i64 = 1;
                var_318 = 8;
                var_310_3 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
            }
            
            if (var_128 == -0x8000000000000000 | var_25c) == 0
            {
                var_220 = &var_128;
                let rdx_26: u64 = just::color::Color::stdout::h99dee7c87aa8c485(&var_328, 
                    arg1.byte_offset(0x184));
                let rbx_1: i8 = var_328;
                let r14_4: u32 = *var_318[1];
                var_288 = &var_220;
                let var_280_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15fafb9b4c0844ff;
                var_328 = &data_830e00;
                let var_320_7: i64 = 2;
                let var_308_6: i64 = 0;
                var_318 = &var_288;
                let var_310_5: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_258, 0, rdx_26, 
                    &var_328);
                var_288 = var_258;
                let rax_51: *mut *mut i64 = var_248;
                let var_278_3: *mut *mut i64 = rax_51;
                let mut rcx_17: i32 = 3;
                let mut rdx_27: i8 = 1;
                
                if r14_4 != 0 && (r14_4 != 1 || rbx_1 == 0)
                {
                    rcx_17 = 0xa;
                    rdx_27 = 0;
                }
                
                var_2b0 = rdx_27;
                *var_2b0[4] = 0;
                *var_2b0[1] = 0;
                var_2a8 = rcx_17;
                *var_2a8[4] = 0xa;
                var_2c8 = -0x8000000000000000;
                let var_2c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 = var_280_1;
                var_2b8 = rax_51;
                var_258 = &var_188;
                let var_250_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_248 = &var_2c8;
                let var_240_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_328 = &data_831060;
                let var_320_8: i64 = 3;
                let var_308_7: i64 = 0;
                var_318 = &var_258;
                var_310_3 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_2c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_288);
            }
            
            let rax_52: *mut c_void =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
                var_168, *var_168[8], &var_128);
            
            if rax_52 != 0
            {
                let rcx_18: i64 = *rax_52.byte_offset(0x10);
                
                if rcx_18 != 0
                {
                    let rdx_29: *mut *mut c_void = *rax_52.byte_offset(8);
                    let rax_53: *mut c_void = &rdx_29[rcx_18];
                    let mut var_2e0_1: *mut *mut c_void = rdx_29;
                    let mut rax_54: *mut c_void = &rdx_29[1];
                    let mut var_1d0_1: *mut *mut i64;
                    
                    do
                    {
                        let mut r14_5: *mut *mut i64 = rax_54;
                        let mut rbx_2: *mut c_void;
                        
                        if rax_47 != 2
                        {
                            rbx_2 = nullptr;
                        }
                        else
                        {
                            let mut rax_57: *mut c_void;
                            let mut rdx_30: u64;
                            rax_57 = just::token::Token::lexeme::h66587cdf67f63270((*var_2e0_1).
                                byte_offset(0x90));
                            rbx_2 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h5c8f1374548200ad(var_1f8, var_1f0, rax_57, rdx_30);
                        }
                        
                        let mut rax_60: *mut c_void;
                        let mut rdx_32: i64;
                        rax_60 = just::token::Token::lexeme::h66587cdf67f63270((*var_2e0_1).
                            byte_offset(0x90));
                        let mut var_80: *mut c_void = rax_60;
                        let var_78_1: i64 = rdx_32;
                        var_1d0_1 = r14_5;
                        let mut rcx_21: i64;
                        let mut rdx_33: i64;
                        
                        if rbx_2 == 0
                        {
                            rdx_33 = 8;
                            rcx_21 = 0;
                        }
                        else
                        {
                            rdx_33 = *rbx_2.byte_offset(8);
                            rcx_21 = *rbx_2.byte_offset(0x10);
                        }
                        
                        core::iter::traits::iterator::Iterator::chain::h4e15377c649427ca(&var_e0, 
                            &var_80, rdx_33, rcx_21);
                        let var_c0_1: i64 = 0;
                        let mut rax_61: i64;
                        let mut i_3: u64;
                        rax_61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2b2f5d9c62b63722(&var_e0);
                        
                        if i_3 != 0
                        {
                            let mut i_8: u64 = i_3;
                            
                            do
                            {
                                let mut var_1c8: i128;
                                let mut rbx_3: i64;
                                
                                if rax_61 == 0
                                {
                                    let mut rax_68: *mut *mut i64;
                                    let mut rdx_34: i64;
                                    rax_68 = just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(
                                        *var_2e0_1);
                                    r14_5 = rax_68;
                                    
                                    if rax_68 == 0
                                    {
                                        var_1c8 = var_2d8_1;
                                    }
                                    else
                                    {
                                        rbx_3 = rdx_34;
                                        var_1c8 = -0x8000000000000000;
                                        *var_1c8[8] = r14_5;
                                        let var_1b8_2: i64 = rdx_34;
                                        'label_68f9ae:
                                        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_318, 0xa, r14_5, rbx_3);
                                        var_328 = nullptr;
                                        let var_320_10: i64 = rbx_3;
                                        var_2e8_3 = 0;
                                        
                                        if core::iter::traits::iterator::Iterator::fold::h4f649a8e05f4dc5f(&var_328) >= 2
                                        {
                                            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_318, 0xa, r14_5, rbx_3);
                                            var_328 = nullptr;
                                            let var_320_11: i64 = rbx_3;
                                            var_2e8_3 = 0;
                                            
                                            loop
                                            {
                                                let mut rax_70: i64;
                                                let mut rdx_37: i64;
                                                rax_70 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h05fb6e2c9643a702(&var_328);
                                                
                                                if rax_70 == 0
                                                {
                                                    break;
                                                }
                                                
                                                let mut rax_71: i64;
                                                let mut rdx_38: i64;
                                                rax_71 = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(rax_70, rdx_37);
                                                
                                                if rax_71 == 0
                                                {
                                                    break;
                                                }
                                                
                                                just::color::Color::stdout::h99dee7c87aa8c485(
                                                    &var_2c8, arg1.byte_offset(0x184));
                                                let rcx_25: u32 = *var_2b8[1];
                                                let mut rax_72: i32 = 4;
                                                
                                                if rcx_25 != 0 && (rcx_25 == 2 || var_2c8 == 0)
                                                {
                                                    rax_72 = 0xa;
                                                }
                                                
                                                let var_208_1: i64 = 0;
                                                let var_200_1: i32 = rax_72;
                                                let var_1fc_1: i32 = 0xa;
                                                var_220 = -0x8000000000000000;
                                                let var_218_1: *const i8 =
                                                    "#/rustc/bf64d66bd58719fac2585eae…";
                                                let var_210_2: i64 = 1;
                                                just::color::Color::stdout::h99dee7c87aa8c485(
                                                    &var_2c8, arg1.byte_offset(0x184));
                                                let rcx_27: u32 = *var_2b8[1];
                                                let mut rax_73: i32 = 4;
                                                
                                                if rcx_27 != 0 && (rcx_27 == 2 || var_2c8 == 0)
                                                {
                                                    rax_73 = 0xa;
                                                }
                                                
                                                let var_270_1: i64 = 0;
                                                let var_268_1: i32 = rax_73;
                                                let var_264_1: i32 = 0xa;
                                                var_288 = -0x8000000000000000;
                                                let var_280_2: i64 = rax_71;
                                                let var_278_4: i64 = rdx_38;
                                                var_2c8 = &var_188;
                                                let var_2c0_3: fn(arg1: *mut c_void, arg2: i64) ->
                                                    i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                                r14_5 = &var_220;
                                                var_2b8 = &var_220;
                                                var_2b0 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                                var_2a8 = &var_288;
                                                let var_2a0_1: fn(arg1: *mut i64, arg2: i64) ->
                                                    u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                                var_258 = &data_831250;
                                                let var_250_2: i64 = 4;
                                                let var_238_1: i64 = 0;
                                                var_248 = &var_2c8;
                                                let var_240_2: i64 = 3;
                                                std::io::stdio::_print::h5e446ff973c02de6(&var_258);
                                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_288);
                                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_220);
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    var_2c8 = (*var_2e0_1).byte_offset(0x90);
                                    let var_2c0_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
                                    var_328 = &data_831230;
                                    let var_320_9: i64 = 2;
                                    let var_308_8: i64 = 0;
                                    var_318 = &var_2c8;
                                    let var_310_6: i64 = 1;
                                    let mut var_48: i128;
                                    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(
                                        &var_48, 0, i_3, &var_328);
                                    var_1c8 = var_48;
                                    
                                    if var_1c8 != var_2d8_1
                                    {
                                        r14_5 = *var_1c8[8];
                                        let var_38: i64;
                                        rbx_3 = var_38;
                                        goto 'label_68f9ae;
                                    }
                                }
                                var_288 = *i_8;
                                let var_278_5: *mut c_void = *var_2e0_1;
                                just::color::Color::stdout::h99dee7c87aa8c485(&var_328, 
                                    arg1.byte_offset(0x184));
                                var_2c8 = &var_288;
                                let var_2c0_4: *mut c_void = &data_831320;
                                var_2a8 = var_318;
                                var_2b8 = var_328;
                                var_258 = &var_188;
                                let var_250_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                var_248 = &var_2c8;
                                let var_240_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
                                var_328 = &data_46ca80;
                                let var_320_12: *mut i8 = 2;
                                let var_308_9: i64 = 0;
                                var_318 = &var_258;
                                var_310_3 = 2;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                                let r15_4: i64 = *i_8;
                                let r13_5: u64 = *(i_8 + 8);
                                core::option::Option$LT$T$GT$::filter::hd5bd189972cd2fd9(&var_328, 
                                    &var_1c8);
                                let rax_78: *const i8 = var_328;
                                let mut rbx_4: *mut i8;
                                
                                if -(rax_78) == -0x8000000000000000 || rax_78 != -0x7fffffffffffffff
                                {
                                    rbx_4 = var_320_12;
                                    r14_5 = var_318;
                                }
                                else
                                {
                                    rbx_4 = nullptr;
                                }
                                
                                let mut rax_80: *mut c_void;
                                let mut rdx_39: u64;
                                rax_80 = just::token::Token::lexeme::h66587cdf67f63270((*var_2e0_1).
                                    byte_offset(0x90));
                                let mut rax_81: *mut c_void = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h5c8f1374548200ad(var_1f8, var_1f0, rax_80, rdx_39);
                                let mut r9_1: *mut c_void;
                                
                                if rax_81 == 0
                                {
                                    r9_1 = nullptr;
                                }
                                else
                                {
                                    r9_1 = *rax_81.byte_offset(8);
                                    rax_81 = *rax_81.byte_offset(0x10);
                                }
                                
                                if r9_1 == 0
                                {
                                    rax_81 = r9_1;
                                }
                                
                                if r9_1 == 0
                                {
                                    r9_1 = 8;
                                }
                                
                                let mut var_348: i64;
                                var_348 = var_1a8;
                                just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(arg1, r15_4, r13_5, rbx_4, r14_5, r9_1, rax_81, rcx_9, var_348);
                                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::hf39f0871769c5aca(&var_328);
                                rax_61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2b2f5d9c62b63722(&var_e0);
                                i_8 = i_3;
                            } while i_3 != 0;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(0, 8);
                        var_2e0_1 = var_1d0_1;
                        let mut rax_55: i64;
                        rax_55 = var_1d0_1 != rax_53;
                        rax_54 = &var_1d0_1[rax_55];
                    } while var_1d0_1 != rax_53;
                }
            }
            
            let rax_82: *mut c_void =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
                var_148, *var_148[8], &var_128);
            
            if rax_82 != 0
            {
                let rcx_33: *mut i64 = *rax_82.byte_offset(8);
                let rax_84: *mut c_void = &rcx_33[*rax_82.byte_offset(0x10)];
                var_258 = rcx_33;
                let var_250_4: *mut c_void = rax_84;
                var_248 = nullptr;
                let mut rax_85: i64;
                let mut i_12: *mut *mut c_void;
                rax_85 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                
                if i_12 != 0
                {
                    let mut i_9: *mut *mut c_void = i_12;
                    
                    if rax_19 == 0
                    {
                        let rbx_5: i64 = var_1a8;
                        let r14_7: i64 = *var_1a8[8];
                        let mut i_4: *mut *mut c_void;
                        
                        do
                        {
                            let mut rax_87: *mut c_void;
                            let mut rdx_45: i64;
                            rax_87 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            var_288 = rax_87;
                            let var_280_4: i64 = rdx_45;
                            var_2c8 = &var_188;
                            let var_2c0_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_2b8 = &var_288;
                            var_2b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                            var_328 = &data_8312c0;
                            let var_320_15: i64 = 3;
                            let var_308_11: i64 = 0;
                            var_318 = &var_2c8;
                            var_310_3 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            let mut rax_88: *mut c_void;
                            let mut rdx_46: u64;
                            let mut r8_2: i64;
                            rax_88 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            let rsi_60: *mut c_void = *i_9;
                            let mut rcx_34: *mut i8;
                            
                            if *rsi_60.byte_offset(0x90) != -0x8000000000000000
                            {
                                rcx_34 = *rsi_60.byte_offset(0x98);
                                r8_2 = *rsi_60.byte_offset(0xa0);
                            }
                            else
                            {
                                rcx_34 = nullptr;
                            }
                            
                            let var_340_1: i64 = r14_7;
                            just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(arg1, rax_88, rdx_46, rcx_34, r8_2, 8, 0, rcx_9, rbx_5);
                            i_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                            i_9 = i_4;
                        } while i_4 != 0;
                    }
                    else
                    {
                        let mut i_5: *mut *mut c_void;
                        
                        do
                        {
                            rax_85 = rax_85 != var_1d8_1;
                            rax_85 &= var_25c;
                            
                            if rax_85 == 1
                            {
                                var_328 = &data_82dbf8;
                                let var_320_13: i64 = 1;
                                var_318 = 8;
                                var_310_3 = {0};
                                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            }
                            
                            let mut rax_86: *mut c_void;
                            let mut rdx_43: i64;
                            rax_86 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            var_288 = rax_86;
                            let var_280_3: i64 = rdx_43;
                            var_2c8 = &var_188;
                            let var_2c0_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_2b8 = &var_288;
                            var_2b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                            var_328 = &data_831290;
                            let var_320_14: i64 = 3;
                            let var_308_10: i64 = 0;
                            var_318 = &var_2c8;
                            var_310_3 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(arg1, 
                                *i_9, arg3 + 1);
                            rax_85 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                            i_9 = i_5;
                        } while i_5 != 0;
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_128);
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he46fc01dbeb051fc(&var_a0, &var_70);
        } while var_98 != var_2d8_1;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$core..option..Option$LT$alloc..string..String$GT$$GT$$GT$$GT$::h008586da8730abec(&var_70);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$core..option..Option$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$$RF$just..recipe..Recipe$GT$$GT$$GT$::hc9730cea9ad5b4d3(&var_148);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$core..option..Option$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$$RF$just..recipe..Recipe$GT$$GT$$GT$::hc9730cea9ad5b4d3(&var_168);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_188);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$$RF$str$C$usize$GT$$GT$::h925bad57efe722e1(&var_1a8);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$$RF$str$C$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h653f39956d94f360(&var_1f8)
}
