
  int64_t just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(void* arg1, void* arg2, int64_t arg3)

{
    void* var_2d8 = arg2;
    char const* const var_328;
    int64_t** var_318;
    void* var_2e0;
    int64_t* var_2c8;
    int64_t* var_258;
    int64_t** var_248;
    int64_t var_228;
    void* var_1f8;
    int64_t var_1f0;
    
    if (!*(arg1 + 0x19e))
    {
        var_258 = nullptr;
        var_248 = nullptr;
        int64_t** rax_1 = *(arg2 + 0x268);
        int64_t rcx_1 = *(arg2 + 0x270);
        int64_t** rsi = rax_1;
        char* rdx;
        rdx = rax_1;
        
        if (rax_1)
            rsi = *(var_2d8 + 0x278);
        
        var_328 = rdx;
        int64_t var_320_1 = 0;
        var_318 = rax_1;
        int64_t var_310_1 = rcx_1;
        char* var_308_1 = rdx;
        int64_t var_300_1 = 0;
        int64_t** var_2f8_1 = rax_1;
        int64_t var_2f0_1 = rcx_1;
        int64_t** var_2e8_1 = rsi;
        
        while (true)
        {
            int64_t* rax_2 =
                core::iter::traits::iterator::Iterator::try_fold::ha7957c17d08ee726(&var_328);
            
            if (!rax_2)
                break;
            
            void* rax_3;
            uint64_t rdx_1;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(rax_2[3] + 0xa0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he27f9e5dce939e66(
                &var_2c8, &var_258, rax_3, rdx_1);
            int64_t* rax_4 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::hdf29e6771a0aa0e0(&var_2c8);
            void* rax_5;
            int64_t rdx_3;
            rax_5 = just::token::Token::lexeme::h66587cdf67f63270(&rax_2[4]);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(rax_4, rax_5, rdx_3);
        }
        
        var_1f8 = var_258;
        int64_t** var_1e8_1 = var_248;
        var_2e0 = var_1f8;
        var_228 = var_1f0;
        arg2 = var_2d8;
    }
    else
    {
        var_1f8 = nullptr;
        int64_t var_1e8 = 0;
        var_2e0 = nullptr;
    }
    
    int64_t var_e0 = 0;
    int64_t** var_d0 = nullptr;
    int64_t** rax_9 = *(arg2 + 0x2b8);
    int64_t rcx_4 = *(arg2 + 0x2c0);
    int64_t** rsi_4 = rax_9;
    char* rdx_4;
    rdx_4 = rax_9;
    
    if (rax_9)
        rsi_4 = *(var_2d8 + 0x2c8);
    
    var_328 = rdx_4;
    int64_t var_320_2 = 0;
    var_318 = rax_9;
    int64_t var_310_2 = rcx_4;
    char* var_308_2 = rdx_4;
    int64_t var_300_2 = 0;
    int64_t** var_2f8_2 = rax_9;
    int64_t var_2f0_2 = rcx_4;
    int64_t** var_2e8_2 = rsi_4;
    void* const var_2c0;
    int64_t* var_2b8;
    uint64_t (* var_2b0)(int64_t* arg1, int64_t arg2);
    void** var_2a8;
    void* var_288;
    uint64_t var_280;
    int64_t* var_220;
    
    while (true)
    {
        int64_t* rax_10;
        int64_t* rdx_5;
        rax_10 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_328);
        
        if (!rax_10)
            break;
        
        void* rdi_8 = *rdx_5;
        
        if (!*(rdi_8 + 0x10c)
            && !just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(rdi_8 + 0xe8, 0xf))
        {
            void* rax_12 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd6d59b53234512e9(
                var_2e0, var_228, *rax_10, rax_10[1]);
            int64_t rcx_6;
            int64_t rdx_7;
            
            if (!rax_12)
            {
                rdx_7 = 8;
                rcx_6 = 0;
            }
            else
            {
                rdx_7 = *(rax_12 + 8);
                rcx_6 = *(rax_12 + 0x10);
            }
            
            core::iter::traits::iterator::Iterator::chain::h4e15377c649427ca(&var_258, rax_10, 
                rdx_7, rcx_6);
            
            for (int64_t* i = core::option::Option$LT$T$GT$::or_else::h14d7d0d8ae5858a1(
                core::iter::adapters::chain::and_then_or_clear::he6028131b18a4029(&var_258), 
                &var_248); i; i = core::option::Option$LT$T$GT$::or_else::h14d7d0d8ae5858a1(
                core::iter::adapters::chain::and_then_or_clear::he6028131b18a4029(&var_258), 
                &var_248))
            {
                void* r14_2 = *i;
                uint64_t r15_1 = i[1];
                int64_t rax_15 = *rdx_5 + 0x10;
                var_288 = r14_2;
                var_280 = r15_1;
                int64_t var_278_1 = rax_15;
                var_2c8 = &var_288;
                var_2c0 = &data_831320;
                var_2b0 = 0;
                var_2b8 = nullptr;
                var_2b0 = 0xa0000000a;
                *var_2a8[1] = 2;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::ha466f91c47c2f1dc(&var_220, &var_2c8);
                int64_t var_218;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hf48949544e7b97fa(&var_e0, r14_2, r15_1, 
                    core::iter::traits::double_ended::DoubleEndedIterator::rfold::h5581e28ca29d37ae(
                        var_218));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_220);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(0, 8);
        }
    }
    
    char rax_19 = *(arg1 + 0x19c);
    
    if (!rax_19)
    {
        int64_t** rax_42 = *(var_2d8 + 0x2a0);
        int64_t rcx_13 = *(var_2d8 + 0x2a8);
        int64_t** rsi_38 = rax_42;
        char* rdx_23;
        rdx_23 = rax_42;
        
        if (rax_42)
            rsi_38 = *(var_2d8 + 0x2b0);
        
        var_328 = rdx_23;
        int64_t var_320_5 = 0;
        var_318 = rax_42;
        int64_t var_310_4 = rcx_13;
        char* var_308_5 = rdx_23;
        int64_t var_300_4 = 0;
        int64_t** var_2f8_4 = rax_42;
        int64_t var_2f0_4 = rcx_13;
        int64_t** var_2e8_4 = rsi_38;
        
        while (true)
        {
            int64_t* rax_43;
            uint64_t rdx_24;
            rax_43 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_328);
            
            if (!rax_43)
                break;
            
            var_220 = rax_43;
            int64_t r13_4 = *rax_43;
            uint64_t rbp_2 = rax_43[1];
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
    
    int64_t** rax_20 = var_d0;
    int64_t** var_198 = rax_20;
    int128_t var_1a8 = var_e0;
    int64_t** rcx_8 = var_1a8;
    int64_t rdx_9 = *var_1a8[8];
    char* rsi_14;
    rsi_14 = rcx_8;
    
    if (!rcx_8)
        rax_20 = rcx_8;
    
    var_328 = rsi_14;
    int64_t var_320_3 = 0;
    var_318 = rcx_8;
    int64_t var_310_3 = rdx_9;
    char* var_308_3 = rsi_14;
    int64_t var_300_3 = 0;
    int64_t** var_2f8_3 = rcx_8;
    int64_t var_2f0_3 = rdx_9;
    int64_t** var_2e8_3 = rax_20;
    char rax_21;
    void* rdx_10;
    rax_21 = core::iter::traits::iterator::Iterator::reduce::he1f3b1c857259fe2(&var_328);
    void* rcx_9 = nullptr;
    
    if (rax_21 & 1)
        rcx_9 = rdx_10;
    
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h241624d29c2b5753(&var_328, 
        *(arg1 + 0x50), *(arg1 + 0x58), arg3 + 1);
    int64_t** var_178 = var_318;
    int128_t var_188 = var_328;
    
    if (!arg3)
    {
        var_2c8 = arg1 + 0x30;
        var_2c0 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_328 = &data_465db0;
        int64_t var_320_4 = 1;
        int64_t var_308_4 = 0;
        var_318 = &var_2c8;
        var_310_3 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_328);
    }
    
    var_220 = nullptr;
    int64_t var_210_1 = 0;
    uint32_t rdx_12 = *(arg1 + 0x1a3);
    var_2e0 = rdx_12;
    just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(&var_328, var_2d8, rdx_12);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_258, &var_328);
    void* i_10 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_258);
    
    if (i_10)
    {
        void* i_6 = i_10;
        void* i_1;
        
        do
        {
            void var_b8;
            just::recipe::Recipe$LT$D$GT$::groups::hd8e05377223fb99f(&var_b8, i_6);
            int64_t var_a8;
            
            if (!var_a8)
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
                
                while (true)
                {
                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf7c3db92e6462bc5(&var_2c8, &var_328);
                    int64_t* rax_27 = var_2c8;
                    
                    if (rax_27 == -0x8000000000000000)
                        break;
                    
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
        } while (i_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_258);
    int128_t var_168 = var_220;
    int64_t var_158 = var_210_1;
    var_288 = nullptr;
    int64_t var_278_2 = 0;
    just::justfile::Justfile::modules::h159af459e28c9d16(&var_328, var_2d8, var_2e0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_2c8, &var_328);
    void* i_11 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h151346bd341698a9(&var_2c8);
    
    if (i_11)
    {
        void* i_7 = i_11;
        void* i_2;
        
        do
        {
            int64_t rax_31 = *(i_7 + 0x10);
            
            if (!rax_31)
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
                void* rsi_27 = *(i_7 + 8);
                void* r15_2 = rsi_27 + rax_31 * 0x18;
                
                while (true)
                {
                    void* r14_3 = rsi_27 + 0x18;
                    
                    if (rsi_27 == r15_2)
                        r14_3 = rsi_27;
                    
                    if (rsi_27 == r15_2)
                        break;
                    
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
        } while (i_2);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_2c8);
    int128_t var_148 = var_288;
    int64_t var_138 = var_278_2;
    just::justfile::Justfile::public_groups::he2abda4ed6140bb7(&var_2c8, var_2d8, var_2e0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_328, &var_2c8);
    void var_f8;
    core::iter::traits::iterator::Iterator::collect::h09db40981d4e2d45(&var_f8, &var_328);
    int64_t rax_37 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(var_168, 
        *var_168[8], &data_49e600);
    int64_t rax_38;
    
    if (!rax_37)
        rax_38 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
            var_148, *var_148[8], &data_49e600);
    
    if (rax_37 || rax_38)
    {
        var_328 = -0x8000000000000000;
        alloc::vec::Vec$LT$T$C$A$GT$::insert::he3db1d3daf83d2aa(&var_f8, &var_328);
    }
    
    uint64_t var_e8;
    uint64_t var_1d8 = var_e8;
    char var_25c;
    
    if (var_e8 != 1)
        var_25c = 0;
    else
    {
        int64_t* var_f0;
        char rax_40 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8215ef34eec99694(*var_f0);
        var_25c = rax_40;
        var_1d8 = rax_40 ^ 1;
    }
    
    void var_70;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb3f28c793021a9ec(&var_70, &var_f8);
    int64_t var_50 = 0;
    int64_t var_a0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he46fc01dbeb051fc(&var_a0, &var_70);
    int64_t var_2d8_1 = -0x7fffffffffffffff;
    int64_t var_98;
    
    if (var_98 != -0x7fffffffffffffff)
    {
        char rax_47 = *(arg1 + 0x1a6);
        int64_t var_1d8_1 = -(var_1d8);
        
        do
        {
            bool cond:6_1 = !var_a0;
            int64_t var_88;
            int64_t var_118_1 = var_88;
            int128_t var_128 = var_98;
            
            if (!cond:6_1)
            {
                var_328 = &data_82dbf8;
                int64_t var_320_6 = 1;
                var_318 = 8;
                var_310_3 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
            }
            
            if (!(var_128 == -0x8000000000000000 | var_25c))
            {
                var_220 = &var_128;
                uint64_t rdx_26 =
                    just::color::Color::stdout::h99dee7c87aa8c485(&var_328, arg1 + 0x184);
                char rbx_1 = var_328;
                uint32_t r14_4 = *var_318[1];
                var_288 = &var_220;
                int64_t (* var_280_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15fafb9b4c0844ff;
                var_328 = &data_830e00;
                int64_t var_320_7 = 2;
                int64_t var_308_6 = 0;
                var_318 = &var_288;
                int64_t var_310_5 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_258, 0, rdx_26, 
                    &var_328);
                var_288 = var_258;
                int64_t** rax_51 = var_248;
                int64_t** var_278_3 = rax_51;
                int32_t rcx_17 = 3;
                char rdx_27 = 1;
                
                if (r14_4 && (r14_4 != 1 || !rbx_1))
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
                int64_t (* var_2c0_1)(int64_t* arg1, int64_t arg2) = var_280_1;
                var_2b8 = rax_51;
                var_258 = &var_188;
                int64_t (* var_250_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_248 = &var_2c8;
                uint64_t (* var_240_1)(int64_t* arg1, int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                var_328 = &data_831060;
                int64_t var_320_8 = 3;
                int64_t var_308_7 = 0;
                var_318 = &var_258;
                var_310_3 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_2c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_288);
            }
            
            void* rax_52 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
                var_168, *var_168[8], &var_128);
            
            if (rax_52)
            {
                int64_t rcx_18 = *(rax_52 + 0x10);
                
                if (rcx_18)
                {
                    void** rdx_29 = *(rax_52 + 8);
                    void* rax_53 = &rdx_29[rcx_18];
                    void** var_2e0_1 = rdx_29;
                    void* rax_54 = &rdx_29[1];
                    int64_t** var_1d0_1;
                    
                    do
                    {
                        int64_t** r14_5 = rax_54;
                        void* const rbx_2;
                        
                        if (rax_47 != 2)
                            rbx_2 = nullptr;
                        else
                        {
                            void* rax_57;
                            uint64_t rdx_30;
                            rax_57 =
                                just::token::Token::lexeme::h66587cdf67f63270(*var_2e0_1 + 0x90);
                            rbx_2 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h5c8f1374548200ad(var_1f8, var_1f0, rax_57, rdx_30);
                        }
                        
                        void* rax_60;
                        int64_t rdx_32;
                        rax_60 = just::token::Token::lexeme::h66587cdf67f63270(*var_2e0_1 + 0x90);
                        void* var_80 = rax_60;
                        int64_t var_78_1 = rdx_32;
                        var_1d0_1 = r14_5;
                        int64_t rcx_21;
                        int64_t rdx_33;
                        
                        if (!rbx_2)
                        {
                            rdx_33 = 8;
                            rcx_21 = 0;
                        }
                        else
                        {
                            rdx_33 = *(rbx_2 + 8);
                            rcx_21 = *(rbx_2 + 0x10);
                        }
                        
                        core::iter::traits::iterator::Iterator::chain::h4e15377c649427ca(&var_e0, 
                            &var_80, rdx_33, rcx_21);
                        int64_t var_c0_1 = 0;
                        int64_t rax_61;
                        uint64_t i_3;
                        rax_61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2b2f5d9c62b63722(&var_e0);
                        
                        if (i_3)
                        {
                            uint64_t i_8 = i_3;
                            
                            do
                            {
                                int128_t var_1c8;
                                int64_t rbx_3;
                                
                                if (!rax_61)
                                {
                                    int64_t** rax_68;
                                    int64_t rdx_34;
                                    rax_68 = just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(
                                        *var_2e0_1);
                                    r14_5 = rax_68;
                                    
                                    if (!rax_68)
                                        var_1c8 = var_2d8_1;
                                    else
                                    {
                                        rbx_3 = rdx_34;
                                        var_1c8 = -0x8000000000000000;
                                        *var_1c8[8] = r14_5;
                                        int64_t var_1b8_2 = rdx_34;
                                        label_68f9ae:
                                        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_318, 0xa, r14_5, rbx_3);
                                        var_328 = nullptr;
                                        int64_t var_320_10 = rbx_3;
                                        var_2e8_3 = 0;
                                        
                                        if (core::iter::traits::iterator::Iterator::fold::h4f649a8e05f4dc5f(&var_328) >= 2)
                                        {
                                            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_318, 0xa, r14_5, rbx_3);
                                            var_328 = nullptr;
                                            int64_t var_320_11 = rbx_3;
                                            var_2e8_3 = 0;
                                            
                                            while (true)
                                            {
                                                int64_t rax_70;
                                                int64_t rdx_37;
                                                rax_70 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h05fb6e2c9643a702(&var_328);
                                                
                                                if (!rax_70)
                                                    break;
                                                
                                                int64_t rax_71;
                                                int64_t rdx_38;
                                                rax_71 = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(rax_70, rdx_37);
                                                
                                                if (!rax_71)
                                                    break;
                                                
                                                just::color::Color::stdout::h99dee7c87aa8c485(
                                                    &var_2c8, arg1 + 0x184);
                                                uint32_t rcx_25 = *var_2b8[1];
                                                int32_t rax_72 = 4;
                                                
                                                if (rcx_25 && (rcx_25 == 2 || !var_2c8))
                                                    rax_72 = 0xa;
                                                
                                                int64_t var_208_1 = 0;
                                                int32_t var_200_1 = rax_72;
                                                int32_t var_1fc_1 = 0xa;
                                                var_220 = -0x8000000000000000;
                                                char const* const var_218_1 =
                                                    "#/rustc/bf64d66bd58719fac2585eae…";
                                                int64_t var_210_2 = 1;
                                                just::color::Color::stdout::h99dee7c87aa8c485(
                                                    &var_2c8, arg1 + 0x184);
                                                uint32_t rcx_27 = *var_2b8[1];
                                                int32_t rax_73 = 4;
                                                
                                                if (rcx_27 && (rcx_27 == 2 || !var_2c8))
                                                    rax_73 = 0xa;
                                                
                                                int64_t var_270_1 = 0;
                                                int32_t var_268_1 = rax_73;
                                                int32_t var_264_1 = 0xa;
                                                var_288 = -0x8000000000000000;
                                                int64_t var_280_2 = rax_71;
                                                int64_t var_278_4 = rdx_38;
                                                var_2c8 = &var_188;
                                                int64_t (* var_2c0_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                                r14_5 = &var_220;
                                                var_2b8 = &var_220;
                                                var_2b0 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                                var_2a8 = &var_288;
                                                uint64_t (* var_2a0_1)(int64_t* arg1, 
                                                    int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                                var_258 = &data_831250;
                                                int64_t var_250_2 = 4;
                                                int64_t var_238_1 = 0;
                                                var_248 = &var_2c8;
                                                int64_t var_240_2 = 3;
                                                std::io::stdio::_print::h5e446ff973c02de6(&var_258);
                                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_288);
                                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_220);
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    var_2c8 = *var_2e0_1 + 0x90;
                                    int64_t (* var_2c0_2)(void* arg1, int64_t* arg2) = _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
                                    var_328 = &data_831230;
                                    int64_t var_320_9 = 2;
                                    int64_t var_308_8 = 0;
                                    var_318 = &var_2c8;
                                    int64_t var_310_6 = 1;
                                    int128_t var_48;
                                    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(
                                        &var_48, 0, i_3, &var_328);
                                    var_1c8 = var_48;
                                    
                                    if (var_1c8 != var_2d8_1)
                                    {
                                        r14_5 = *var_1c8[8];
                                        int64_t var_38;
                                        rbx_3 = var_38;
                                        goto label_68f9ae;
                                    }
                                }
                                var_288 = *i_8;
                                void* var_278_5 = *var_2e0_1;
                                just::color::Color::stdout::h99dee7c87aa8c485(&var_328, 
                                    arg1 + 0x184);
                                var_2c8 = &var_288;
                                void* const var_2c0_4 = &data_831320;
                                var_2a8 = var_318;
                                var_2b8 = var_328;
                                var_258 = &var_188;
                                int64_t (* var_250_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                var_248 = &var_2c8;
                                int64_t (* var_240_3)(int64_t* arg1, int64_t arg2) = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
                                var_328 = &data_46ca80;
                                char* var_320_12 = 2;
                                int64_t var_308_9 = 0;
                                var_318 = &var_258;
                                var_310_3 = 2;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                                int64_t r15_4 = *i_8;
                                uint64_t r13_5 = *(i_8 + 8);
                                core::option::Option$LT$T$GT$::filter::hd5bd189972cd2fd9(&var_328, 
                                    &var_1c8);
                                char const* const rax_78 = var_328;
                                char* rbx_4;
                                
                                if (-(rax_78) == -0x8000000000000000
                                    || rax_78 != -0x7fffffffffffffff)
                                {
                                    rbx_4 = var_320_12;
                                    r14_5 = var_318;
                                }
                                else
                                    rbx_4 = nullptr;
                                
                                void* rax_80;
                                uint64_t rdx_39;
                                rax_80 = just::token::Token::lexeme::h66587cdf67f63270(*var_2e0_1
                                    + 0x90);
                                void* const rax_81 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h5c8f1374548200ad(var_1f8, var_1f0, rax_80, rdx_39);
                                void* const r9_1;
                                
                                if (!rax_81)
                                    r9_1 = nullptr;
                                else
                                {
                                    r9_1 = *(rax_81 + 8);
                                    rax_81 = *(rax_81 + 0x10);
                                }
                                
                                if (!r9_1)
                                    rax_81 = r9_1;
                                
                                if (!r9_1)
                                    r9_1 = 8;
                                
                                int64_t var_348;
                                var_348 = var_1a8;
                                just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(arg1, r15_4, r13_5, rbx_4, r14_5, r9_1, rax_81, rcx_9, var_348);
                                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::hf39f0871769c5aca(&var_328);
                                rax_61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2b2f5d9c62b63722(&var_e0);
                                i_8 = i_3;
                            } while (i_3);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(0, 8);
                        var_2e0_1 = var_1d0_1;
                        int64_t rax_55;
                        rax_55 = var_1d0_1 != rax_53;
                        rax_54 = &var_1d0_1[rax_55];
                    } while (var_1d0_1 != rax_53);
                }
            }
            
            void* rax_82 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1f871c7dbb5baf97(
                var_148, *var_148[8], &var_128);
            
            if (rax_82)
            {
                int64_t* rcx_33 = *(rax_82 + 8);
                void* rax_84 = &rcx_33[*(rax_82 + 0x10)];
                var_258 = rcx_33;
                void* var_250_4 = rax_84;
                var_248 = nullptr;
                int64_t rax_85;
                void** i_12;
                rax_85 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                
                if (i_12)
                {
                    void** i_9 = i_12;
                    
                    if (!rax_19)
                    {
                        int64_t rbx_5 = var_1a8;
                        int64_t r14_7 = *var_1a8[8];
                        void** i_4;
                        
                        do
                        {
                            void* rax_87;
                            int64_t rdx_45;
                            rax_87 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            var_288 = rax_87;
                            int64_t var_280_4 = rdx_45;
                            var_2c8 = &var_188;
                            int64_t (* var_2c0_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_2b8 = &var_288;
                            var_2b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                            var_328 = &data_8312c0;
                            int64_t var_320_15 = 3;
                            int64_t var_308_11 = 0;
                            var_318 = &var_2c8;
                            var_310_3 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            void* rax_88;
                            uint64_t rdx_46;
                            int64_t r8_2;
                            rax_88 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            void* rsi_60 = *i_9;
                            char* rcx_34;
                            
                            if (*(rsi_60 + 0x90) != -0x8000000000000000)
                            {
                                rcx_34 = *(rsi_60 + 0x98);
                                r8_2 = *(rsi_60 + 0xa0);
                            }
                            else
                                rcx_34 = nullptr;
                            
                            int64_t var_340_1 = r14_7;
                            just::subcommand::Subcommand::list_module::print_doc_and_aliases::h31cf26e1a0d23f3b(arg1, rax_88, rdx_46, rcx_34, r8_2, 8, 0, rcx_9, rbx_5);
                            i_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                            i_9 = i_4;
                        } while (i_4);
                    }
                    else
                    {
                        void** i_5;
                        
                        do
                        {
                            rax_85 = rax_85 != var_1d8_1;
                            rax_85 &= var_25c;
                            
                            if (rax_85 == 1)
                            {
                                var_328 = &data_82dbf8;
                                int64_t var_320_13 = 1;
                                var_318 = 8;
                                var_310_3 = {0};
                                std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            }
                            
                            void* rax_86;
                            int64_t rdx_43;
                            rax_86 = just::justfile::Justfile::name::h6cf755733084bfb9(*i_9);
                            var_288 = rax_86;
                            int64_t var_280_3 = rdx_43;
                            var_2c8 = &var_188;
                            int64_t (* var_2c0_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_2b8 = &var_288;
                            var_2b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                            var_328 = &data_831290;
                            int64_t var_320_14 = 3;
                            int64_t var_308_10 = 0;
                            var_318 = &var_2c8;
                            var_310_3 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_328);
                            just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(arg1, 
                                *i_9, arg3 + 1);
                            rax_85 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41903984afd11d4e(&var_258);
                            i_9 = i_5;
                        } while (i_5);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_128);
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he46fc01dbeb051fc(&var_a0, &var_70);
        } while (var_98 != var_2d8_1);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$core..option..Option$LT$alloc..string..String$GT$$GT$$GT$$GT$::h008586da8730abec(&var_70);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$core..option..Option$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$$RF$just..recipe..Recipe$GT$$GT$$GT$::hc9730cea9ad5b4d3(&var_148);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$core..option..Option$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$$RF$just..recipe..Recipe$GT$$GT$$GT$::hc9730cea9ad5b4d3(&var_168);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_188);
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$$RF$str$C$usize$GT$$GT$::h925bad57efe722e1(&var_1a8);
    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$$RF$str$C$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h653f39956d94f360(&var_1f8);
}
