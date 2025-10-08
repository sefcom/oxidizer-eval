
  int64_t just::analyzer::Analyzer::justfile::hb3a8c691cc057ec6(int64_t* arg1, uint64_t arg2, int64_t* arg3, int64_t* arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int128_t* arg9, int64_t* arg10, int64_t arg11, uint64_t arg12)

{
    void* rbp;
    void* var_8 = rbp;
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    int128_t var_978 = data_82bd20;
    int128_t var_988 = *data_82bd10;
    int64_t var_968 = rax;
    int64_t var_960 = rdx;
    int128_t var_908;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h7747b82267ce9a18(&var_908);
    int128_t var_8e8;
    int128_t var_5f8 = var_8e8;
    int128_t var_8f8;
    int128_t var_608 = var_8f8;
    int128_t var_618 = var_908;
    int64_t var_9c0 = 0;
    int64_t var_9b0 = 0;
    int64_t var_a58 = 0;
    int64_t var_a50 = 8;
    int64_t var_a48 = 0;
    int32_t rax_1;
    rax_1 = 1;
    int32_t var_b64 = rax_1;
    void* rax_2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc0b8c4999793d41b(arg3, 
        arg11, arg12);
    void* rsi_1 = rax_2 + 0x18;
    bool cond:0 = !rax_2;
    
    if (rax_2)
        rax_2 = rsi_1;
    
    if (cond:0)
    {
        label_6553a2:
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h4588780f39a432ad(&var_a58, rsi_1);
    int64_t r15_1;
    
    while (true)
    {
        int64_t rax_5 = var_a48;
        int128_t var_b38;
        int128_t var_b28;
        int128_t var_b18;
        int128_t var_b08;
        int128_t var_af8;
        int128_t var_aa8;
        int64_t var_a98;
        int128_t var_a88;
        int128_t var_a78;
        int128_t var_9e8;
        int128_t var_8d8;
        int64_t var_8c8;
        char var_8c0;
        int32_t var_8bf;
        int128_t var_8b8;
        int64_t var_8a8;
        
        if (!rax_5)
        {
            var_8f8 = *(arg2 + 0xb8);
            var_908 = *(arg2 + 0xa8);
            char var_b64_1 = 0;
            void var_4d8;
            just::settings::Settings::from_table::h1496d338ea96c3b9(&var_4d8);
            void* const var_a30 = nullptr;
            int64_t var_a20_1 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_9e8, arg2);
            
            while (true)
            {
                void* rax_32 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf2679ae5faf03928(&var_9e8);
                
                if (!rax_32)
                {
                    rbp = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_9e8);
                    just::assignment_resolver::AssignmentResolver::resolve_assignments::h326a32445f9866d5(&var_908, &var_a30);
                    
                    if (var_8c0 == 0x25)
                    {
                        void* var_9a8 = nullptr;
                        int64_t var_998_1 = 0;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_aa8, arg2 + 0x18);
                        void* rax_47 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_aa8);
                        
                        if (!rax_47)
                        {
                            label_65491f:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_aa8);
                            int64_t rdx_23 = *(rax_2 + 0x20);
                            int64_t rcx_17 = *(rax_2 + 0x28);
                            int64_t var_a98_1 = var_998_1;
                            var_aa8 = var_9a8;
                            char var_399;
                            just::recipe_resolver::RecipeResolver::resolve_recipes::h470e1f461b9069ea(&var_908, &var_a30, rdx_23, rcx_17, arg2 + 0x90, var_399, &var_aa8);
                            
                            if (var_8c0 != 0x25)
                            {
                                var_af8 = var_8c8;
                                var_b38 = var_908;
                                *(arg1 + 0x54) = var_8bf;
                                *(arg1 + 0x51) = var_8bf;
                                arg1[9] = var_af8;
                                int128_t zmm0_15 = var_b38;
                                *(arg1 + 0x38) = var_8d8;
                                *(arg1 + 0x28) = var_8e8;
                                *(arg1 + 0x18) = var_8f8;
                                *(arg1 + 8) = zmm0_15;
                                arg1[0xa] = var_8c0;
                                *arg1 = -0x8000000000000000;
                                rbp = nullptr;
                            }
                            else
                            {
                                int64_t rax_62 = var_8f8;
                                int128_t var_a18 = var_908;
                                int64_t var_950 = 0;
                                int64_t var_940_1 = 0;
                                
                                while (true)
                                {
                                    int64_t var_390;
                                    just::table::Table$LT$V$GT$::pop::hf9d1776d483a5e0b(&var_390, 
                                        arg2 + 0x78);
                                    
                                    if (var_390 == -0x8000000000000000)
                                    {
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::h6dbbd892c527de2d(&var_390);
                                        int64_t rbx_3 = var_a18;
                                        int64_t r15_3 = *var_a18[8];
                                        int64_t r13_4 = rbx_3;
                                        
                                        if (rbx_3)
                                            r13_4 = rax_62;
                                        
                                        int64_t r12_4;
                                        r12_4 = rbx_3;
                                        var_908 = r12_4;
                                        *var_908[8] = 0;
                                        var_8f8 = rbx_3;
                                        *var_8f8[8] = r15_3;
                                        var_8e8 = r12_4;
                                        *var_8e8[8] = 0;
                                        var_8d8 = rbx_3;
                                        *var_8d8[8] = r15_3;
                                        int64_t var_8c8_1 = r13_4;
                                        
                                        while (true)
                                        {
                                            int64_t rax_65;
                                            int64_t* rdx_28;
                                            rax_65 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_908);
                                            
                                            if (!rax_65)
                                                break;
                                            
                                            if (!rdx_28)
                                                break;
                                            
                                            if (just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(*rdx_28 + 0xe8, 0x10))
                                            {
                                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(&var_9c0, 2);
                                                break;
                                            }
                                        }
                                        
                                        int64_t var_4a8;
                                        
                                        if (var_4a8 != -0x8000000000000000)
                                            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(&var_9c0, 3);
                                        
                                        int128_t var_938;
                                        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_938, arg11, arg12);
                                        int64_t rax_67 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0847a9696ca724e8(arg10, arg11, arg12);
                                        
                                        if (!rax_67)
                                        {
                                            core::option::unwrap_failed::h893f57cb7db71cb7();
                                            /* no return */
                                        }
                                        
                                        int64_t var_910 = rax_67 + 0x18;
                                        int64_t var_b48 = 0;
                                        var_aa8 = r12_4;
                                        *var_aa8[8] = 0;
                                        int64_t var_a98_2 = rbx_3;
                                        int64_t var_a90_1 = r15_3;
                                        var_a88 = r12_4;
                                        *var_a88[8] = 0;
                                        var_a78 = rbx_3;
                                        *var_a78[8] = r15_3;
                                        int64_t var_a68_4 = r13_4;
                                        
                                        while (true)
                                        {
                                            int64_t rax_69;
                                            int64_t* rdx_31;
                                            rax_69 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_aa8);
                                            
                                            if (!rax_69 || !rdx_31)
                                            {
                                                int64_t* rax_73 = core::option::Option$LT$T$GT$::or_else::h39fe196a0fee08ba(var_b48, &var_a18, &var_910);
                                                int128_t var_5e8_1 = var_950;
                                                int128_t zmm0_17 = var_a30;
                                                int128_t var_5a8;
                                                core::option::Option$LT$T$GT$::filter::h45f0602a68689dd2(&var_5a8, arg4);
                                                int128_t var_590;
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_590, arg5, arg6);
                                                int128_t var_578;
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h98dde29977f1dd5c(&var_578, arg7, arg8);
                                                int128_t var_560;
                                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_560, rax_2 + 0x18);
                                                int64_t rax_74 = *(arg2 + 0xa0);
                                                var_9e8 = *(arg2 + 0x90);
                                                int128_t zmm1_13 = *(arg2 + 0x58);
                                                int128_t zmm2_13 = *(arg2 + 0x68);
                                                var_b38 = *(arg2 + 0x48);
                                                var_aa8 = var_9c0;
                                                int64_t r12_7 = *(arg2 + 0x30);
                                                int64_t r15_4 = *(arg2 + 0x38);
                                                int64_t rbx_4 = *(arg2 + 0x40);
                                                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_908, *(rax_2 + 0x50), *(rax_2 + 0x58));
                                                arg1[0x11] = var_8f8;
                                                *(arg1 + 0x78) = var_908;
                                                arg1[0x4f] = var_940_1;
                                                *(arg1 + 0x268) = var_5e8_1;
                                                *(arg1 + 0x280) = zmm0_17;
                                                arg1[0x52] = var_a20_1;
                                                *(arg1 + 0x90) = var_5a8;
                                                int64_t var_598;
                                                arg1[0x14] = var_598;
                                                var_908 = var_590;
                                                int64_t var_580;
                                                var_8f8 = var_580;
                                                int64_t var_568;
                                                *var_8e8[8] = var_568;
                                                var_8f8 = var_578;
                                                int128_t var_8d8_1 = var_560;
                                                arg1[0x56] = rax_74;
                                                *(arg1 + 0x2a0) = var_9e8;
                                                arg1[0x59] = rax_62;
                                                *(arg1 + 0x2b8) = var_a18;
                                                memcpy(&arg1[0x15], &var_4d8, 0x148);
                                                int64_t var_928;
                                                *var_8b8[8] = var_928;
                                                var_8c0 = var_938;
                                                int128_t zmm0_20 = var_b38;
                                                *(arg1 + 0x258) = zmm2_13;
                                                *(arg1 + 0x248) = zmm1_13;
                                                *(arg1 + 0x238) = zmm0_20;
                                                arg1[0x5c] = var_9b0;
                                                *(arg1 + 0x2d0) = var_aa8;
                                                zmm0_20 = var_908;
                                                int64_t var_550;
                                                *(arg1 + 0x40) = var_550;
                                                *arg1 = zmm0_20;
                                                *(arg1 + 0x50) = var_8b8;
                                                *(arg1 + 0x30) = var_8d8_1;
                                                *(arg1 + 0x20) = var_8e8;
                                                *(arg1 + 0x10) = var_8f8;
                                                arg1[0xc] = r12_7;
                                                arg1[0xd] = r15_4;
                                                arg1[0xe] = rbx_4;
                                                int128_t zmm1_14 = arg9[1];
                                                int128_t zmm2_14 = arg9[2];
                                                int128_t zmm3_13 = arg9[3];
                                                *(arg1 + 0x1f0) = *arg9;
                                                *(arg1 + 0x200) = zmm1_14;
                                                *(arg1 + 0x210) = zmm2_14;
                                                *(arg1 + 0x220) = zmm3_13;
                                                arg1[0x46] = arg9[4];
                                                arg1[0x53] = rax_73;
                                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_a58, var_a50);
                                                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$std..path..PathBuf$GT$$GT$::h33025ef45c80cace(var_618, *var_618[8]);
                                                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$$LP$$RF$str$C$just..name..Name$RP$$GT$$GT$::h8de0aae6b4af080d(var_988, *var_988[8]);
                                                return core::ptr::drop_in_place$LT$just..table..Table$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::hdbbe57351eab1e4e(arg2 + 0x78);
                                            }
                                            
                                            if (just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(*rdx_31 + 0xe8, 1))
                                            {
                                                if (var_b48)
                                                {
                                                    int128_t* r14_3 = 0xa0 + *rdx_31;
                                                    void* rax_92;
                                                    int64_t rdx_36;
                                                    rax_92 = just::token::Token::lexeme::h66587cdf67f63270(r14_3);
                                                    *var_908[8] = rax_92;
                                                    var_8f8 = rdx_36;
                                                    var_908 = -0x7fffffffffffffe5;
                                                    just::token::Token::error::h986494da066a4455(
                                                        &var_b38, r14_3, &var_908);
                                                    *(arg1 + 0x48) = var_af8;
                                                    int128_t zmm0_21 = var_b38;
                                                    *(arg1 + 0x38) = var_b08;
                                                    *(arg1 + 0x28) = var_b18;
                                                    *(arg1 + 0x18) = var_b28;
                                                    *(arg1 + 8) = zmm0_21;
                                                    *arg1 = -0x8000000000000000;
                                                    core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h52ab54184d85e79e(&var_b48);
                                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_938);
                                                    break;
                                                }
                                                
                                                int64_t* rax_71 = *rdx_31;
                                                int64_t temp2_1 = *rax_71;
                                                *rax_71 += 1;
                                                
                                                if (temp2_1 <= -1)
                                                    trap(6);
                                                
                                                int64_t r12_6 = *rdx_31;
                                                core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h52ab54184d85e79e(&var_b48);
                                                var_b48 = r12_6;
                                            }
                                        }
                                        
                                        break;
                                    }
                                    
                                    just::analyzer::Analyzer::resolve_alias::h86efbc0531b9ce74(
                                        &var_908, arg2 + 0x90, &var_a18, &var_390);
                                    char rax_63 = var_8a8;
                                    
                                    if (rax_63 == 0x25)
                                    {
                                        int128_t zmm0_16 = var_8c8;
                                        int128_t var_af8_1 = zmm0_16;
                                        int128_t zmm1_12 = var_908;
                                        int128_t var_b08_3 = var_8d8;
                                        int128_t var_b18_3 = var_8e8;
                                        int128_t var_b28_3 = var_8f8;
                                        var_b38 = zmm1_12;
                                        *(arg1 + 0x48) = zmm0_16;
                                        *(arg1 + 0x38) = var_8d8;
                                        *(arg1 + 0x28) = var_8e8;
                                        *(arg1 + 0x18) = var_8f8;
                                        *(arg1 + 8) = zmm1_12;
                                        *arg1 = -0x8000000000000000;
                                        break;
                                    }
                                    
                                    int128_t var_ae8_1 = var_8b8;
                                    var_af8 = var_8c8;
                                    var_b08 = var_8d8;
                                    var_b18 = var_8e8;
                                    var_b28 = var_8f8;
                                    var_b38 = var_908;
                                    int32_t var_4e4_1 = *var_8a8[4];
                                    int32_t var_4e7_1 = *var_8a8[1];
                                    int128_t var_548 = var_b38;
                                    int128_t var_538_1 = var_b28;
                                    int128_t var_528_1 = var_b18;
                                    int128_t var_518_1 = var_b08;
                                    int128_t var_508_1 = var_af8;
                                    int128_t var_4f8_1 = var_ae8_1;
                                    char var_4e8_1 = rax_63;
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
                            void* r12_3 = rax_47;
                            
                            while (true)
                            {
                                var_af8 = *(r12_3 + 0xd0);
                                var_b08 = *(r12_3 + 0xc0);
                                var_b18 = *(r12_3 + 0xb0);
                                var_b28 = *(r12_3 + 0xa0);
                                var_b38 = *(r12_3 + 0x90);
                                char var_3a0;
                                just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, 
                                    &var_988, &var_b38, "recipeRecipesrc/argument_parser.…", 6, 
                                    var_3a0);
                                
                                if (var_8c0 != 0x25)
                                {
                                    arg1[9] = var_8c8;
                                    int128_t zmm0_13 = var_908;
                                    *(arg1 + 0x38) = var_8d8;
                                    *(arg1 + 0x28) = var_8e8;
                                    *(arg1 + 0x18) = var_8f8;
                                    *(arg1 + 8) = zmm0_13;
                                    *(arg1 + 0x51) = var_8bf;
                                    *(arg1 + 0x54) = var_8bf;
                                    arg1[0xa] = var_8c0;
                                    *arg1 = -0x8000000000000000;
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_aa8);
                                    core::ptr::drop_in_place$LT$just..table..Table$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h4a7abc0528fca674(&var_9a8);
                                    break;
                                }
                                
                                void* rax_51;
                                uint64_t rdx_19;
                                rax_51 =
                                    just::token::Token::lexeme::h66587cdf67f63270(r12_3 + 0x90);
                                int64_t var_9a0;
                                
                                if (core::option::Option$LT$T$GT$::map_or::h3e93b705283870db(
                                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd6c31e18dfe74f8b(var_9a8, var_9a0, rax_51, rdx_19), 
                                    *(r12_3 + 0xf8)))
                                {
                                    _$LT$just..recipe..Recipe$LT$D$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2c5af075435dd13b(&var_908, r12_3);
                                    just::table::Table$LT$V$GT$::insert::h7e8edd8ce2ada04a(
                                        &var_9a8, &var_908);
                                }
                                
                                void* rax_48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_aa8);
                                r12_3 = rax_48;
                                
                                if (!rax_48)
                                    goto label_65491f;
                            }
                            
                            rbp = nullptr;
                        }
                        
                        break;
                    }
                    
                    arg1[9] = var_8c8;
                    int128_t zmm0_12 = var_908;
                    *(arg1 + 0x38) = var_8d8;
                    *(arg1 + 0x28) = var_8e8;
                    *(arg1 + 0x18) = var_8f8;
                    *(arg1 + 8) = zmm0_12;
                    *(arg1 + 0x51) = var_8bf;
                    *(arg1 + 0x54) = var_8bf;
                    arg1[0xa] = var_8c0;
                    *arg1 = -0x8000000000000000;
                }
                else
                {
                    void* rax_33;
                    uint64_t rdx_13;
                    rax_33 = just::token::Token::lexeme::h66587cdf67f63270(rax_32 + 0x80);
                    char var_39f;
                    int64_t var_a28;
                    
                    if (var_39f & 1)
                    {
                        label_65434c:
                        void* rax_35 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(var_a30, var_a28, rax_33, rdx_13);
                        int32_t r14_1 = *(rax_32 + 0xc8);
                        
                        if (core::option::Option$LT$T$GT$::map_or::hd1b1f979c5314c9d(rax_35, r14_1))
                        {
                            char r12_2 = *(rax_32 + 0xcc);
                            char r13_3 = *(rax_32 + 0xcd);
                            int64_t rax_37 = *(rax_32 + 0xc0);
                            int128_t zmm2_6 = *(rax_32 + 0xa0);
                            int128_t zmm3_6 = *(rax_32 + 0xb0);
                            var_a98 = *(rax_32 + 0x90);
                            var_aa8 = *(rax_32 + 0x80);
                            char rbx_2 = *(rax_32 + 0xce);
                            _$LT$just..expression..Expression$u20$as$u20$core..clone..Clone$GT$::clone::h40fd9fa85428c074(&var_b38, rax_32);
                            char var_83c_1 = r12_2;
                            char var_83b_1 = r13_3;
                            int32_t var_840_1 = r14_1;
                            int64_t var_848_1 = rax_37;
                            int128_t var_858_1 = zmm3_6;
                            int128_t var_868_1 = zmm2_6;
                            int128_t var_878_1 = var_a98;
                            int128_t var_888_2 = var_aa8;
                            char var_83a_1 = rbx_2;
                            var_908 = var_b38;
                            var_8f8 = var_b28;
                            var_8e8 = var_b18;
                            var_8d8 = var_b08;
                            var_8c8 = var_af8;
                            int128_t var_ae8;
                            var_8b8 = var_ae8;
                            int128_t var_ad8;
                            var_8a8 = var_ad8;
                            int128_t var_ac8;
                            int128_t var_898_2 = var_ac8;
                            just::table::Table$LT$V$GT$::insert::heb5088149d7beb1e(&var_a30, 
                                &var_908);
                        }
                        
                        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8b5a5ae6b210544e(arg2 + 0x48, rax_33, rdx_13))
                            continue;
                        else
                        {
                            *var_908[8] = rax_33;
                            var_8f8 = rdx_13;
                            var_908 = -0x7fffffffffffffde;
                            just::token::Token::error::h986494da066a4455(&var_b38, rax_32 + 0x80, 
                                &var_908);
                        }
                    }
                    else
                    {
                        if (!alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(var_a30, var_a28, rax_33, rdx_13))
                            goto label_65434c;
                        
                        *var_908[8] = rax_33;
                        var_8f8 = rdx_13;
                        var_908 = -0x7fffffffffffffe1;
                        just::token::Token::error::h986494da066a4455(&var_b38, rax_32 + 0x80, 
                            &var_908);
                    }
                    *(arg1 + 0x48) = var_af8;
                    int128_t zmm0_11 = var_b38;
                    *(arg1 + 0x38) = var_b08;
                    *(arg1 + 0x28) = var_b18;
                    *(arg1 + 0x18) = var_b28;
                    *(arg1 + 8) = zmm0_11;
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
        void* rbx_1 = *(var_a50 + (rax_5 << 3) - 8);
        _$LT$alloc..collections..btree..set..BTreeSet$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$RF$T$GT$$GT$::extend::hce3d8430e15f86bd(&var_9c0, rbx_1 + 0x60);
        int64_t r13_1 = *(rbx_1 + 0x10);
        
        if (r13_1)
        {
            int64_t* r12_1 = *(rbx_1 + 8);
            r15_1 = 0;
            
            while (true)
            {
                int64_t rax_7 = *(r12_1 + r15_1) ^ 0x8000000000000000;
                
                if (rax_7 >= 8)
                    rax_7 = 5;
                
                char rax_11;
                int64_t* rax_29;
                int128_t zmm0_7;
                int128_t zmm1_4;
                int128_t zmm2_4;
                int128_t zmm3_4;
                
                switch (rax_7)
                {
                    case 0:
                    {
                        var_af8 = *(r12_1 + r15_1 + 0x60);
                        var_b08 = *(r12_1 + r15_1 + 0x50);
                        var_b18 = *(r12_1 + r15_1 + 0x40);
                        var_b28 = *(r12_1 + r15_1 + 0x30);
                        var_b38 = *(r12_1 + r15_1 + 0x20);
                        just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, &var_988, 
                            &var_b38, "aliasmodulerecipeRecipesrc/argum…", 5, 0);
                        rax_11 = var_8c0;
                        
                        if (rax_11 == 0x25)
                        {
                            _$LT$just..alias..Alias$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h436d3442a6911b15(&var_908, r12_1 + r15_1 + 8);
                            just::table::Table$LT$V$GT$::insert::ha73d91efe8f59421(arg2 + 0x78, 
                                &var_908);
                            goto label_653bf0;
                        }
                        
                        label_65418b:
                        arg1[9] = var_8c8;
                        int128_t zmm0_4 = var_908;
                        *(arg1 + 0x38) = var_8d8;
                        *(arg1 + 0x28) = var_8e8;
                        *(arg1 + 0x18) = var_8f8;
                        *(arg1 + 8) = zmm0_4;
                        *(arg1 + 0x51) = var_8bf;
                        *(arg1 + 0x54) = var_8bf;
                        arg1[0xa] = rax_11;
                        *arg1 = -0x8000000000000000;
                        label_654571:
                        r15_1 = 1;
                        rbp = 1;
                        break;
                        break;
                    }
                    case 1:
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hd652c16a120df5f6(arg2, 
                            r12_1 + r15_1 + 8);
                        label_653bf0:
                        r15_1 += 0x100;
                        
                        if (r13_1 << 8 == r15_1)
                            goto label_653b79;
                        
                        continue;
                    }
                    case 2:
                    {
                        goto label_653bf0;
                    }
                    case 3:
                    {
                        if (*(r12_1 + r15_1 + 0x38) != -0x8000000000000000 && !
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h46ebfaa3012d7b50(
                            &var_618, r12_1 + r15_1 + 0x38))
                        {
                            int64_t rax_14 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h32fcef423693d73d(arg3, r12_1 + r15_1 + 0x38);
                            
                            if (!rax_14)
                                goto label_6553a2;
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h4588780f39a432ad(&var_a58, 
                                rax_14 + 0x18);
                        }
                        
                        goto label_653bf0;
                    }
                    case 4:
                    {
                        if (*(r12_1 + r15_1 + 0x20) == -0x8000000000000000)
                            goto label_653bf0;
                        
                        var_af8 = *(r12_1 + r15_1 + 0xc0);
                        int128_t var_b08_1 = *(r12_1 + r15_1 + 0xb0);
                        int128_t var_b18_1 = *(r12_1 + r15_1 + 0xa0);
                        int128_t var_b28_1 = *(r12_1 + r15_1 + 0x90);
                        var_b38 = *(r12_1 + r15_1 + 0x80);
                        just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(&var_908, &var_988, 
                            &var_b38, "modulerecipeRecipesrc/argument_p…", 6, 0);
                        rax_11 = var_8c0;
                        
                        if (rax_11 != 0x25)
                            goto label_65418b;
                        
                        if (*(r12_1 + r15_1 + 0x38) != -0x8000000000000000)
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_aa8, r12_1 + r15_1 + 0x38);
                            int64_t var_9d8_1 = var_a98;
                            var_9e8 = var_aa8;
                        }
                        else
                            var_9e8 = -0x8000000000000000;
                        
                        int64_t rcx_8 = *(r12_1 + r15_1 + 0x10);
                        int64_t r8 = *(r12_1 + r15_1 + 0x18);
                        int64_t var_a68_2 = *(r12_1 + r15_1 + 0xc0);
                        var_a78 = *(r12_1 + r15_1 + 0xb0);
                        var_a88 = *(r12_1 + r15_1 + 0xa0);
                        var_a98 = *(r12_1 + r15_1 + 0x90);
                        var_aa8 = *(r12_1 + r15_1 + 0x80);
                        just::analyzer::Analyzer::analyze::h647d89e635aa2068(&var_908, arg3, 
                            &var_9e8, rcx_8, r8, arg7, arg8, &var_aa8, arg10, 
                            *(r12_1 + r15_1 + 0x28), arg2);
                        rbp = var_908;
                        var_b38 = var_908;
                        var_b28 = var_8f8;
                        var_b18 = var_8e8;
                        var_b08 = var_8d8;
                        var_af8 = var_8c0;
                        
                        if (rbp == -0x8000000000000000)
                        {
                            rax_29 = arg1;
                            *(rax_29 + 0x48) = var_af8;
                            zmm0_7 = var_b38;
                            zmm1_4 = var_b28;
                            zmm2_4 = var_b18;
                            zmm3_4 = var_b08;
                            goto label_654554;
                        }
                        
                        void var_2c0;
                        memcpy(&var_2c0, &*var_8b8[8], 0x290);
                        void* var_318 = rbp;
                        int128_t var_2d0_1 = var_af8;
                        int128_t var_2e0_1 = var_b08;
                        int128_t var_2f0_1 = var_b18;
                        int128_t var_300_1 = var_b28;
                        int128_t var_310_1 = var_b38;
                        just::table::Table$LT$V$GT$::insert::h83a1c8dcfa277e76(arg2 + 0x90, 
                            &var_318);
                        goto label_653bf0;
                    }
                    case 5:
                    {
                        rbp = r12_1 + r15_1;
                        
                        if (!just::recipe::Recipe$LT$D$GT$::enabled::h8a787b3e1a79d05f(rbp))
                            goto label_653bf0;
                        
                        just::analyzer::Analyzer::analyze_recipe::h80a21d1680871f82(&var_908, rbp);
                        rax_11 = var_8c0;
                        
                        if (rax_11 != 0x25)
                            goto label_65418b;
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h4afd8370baf6f0bb(arg2 + 0x18, rbp);
                        goto label_653bf0;
                    }
                    case 6:
                    {
                        just::analyzer::Analyzer::analyze_set::h5deef59ee96e96de(&var_908, 
                            *(arg2 + 0xa8), *(arg2 + 0xb0), r12_1 + r15_1 + 8);
                        rax_11 = var_8c0;
                        
                        if (rax_11 != 0x25)
                            goto label_65418b;
                        
                        int64_t rax_21 = *(r12_1 + r15_1 + 0x98);
                        int128_t zmm2_2 = *(r12_1 + r15_1 + 0x78);
                        int128_t zmm3_2 = *(r12_1 + r15_1 + 0x88);
                        var_a98 = *(r12_1 + r15_1 + 0x68);
                        var_aa8 = *(r12_1 + r15_1 + 0x58);
                        _$LT$just..setting..Setting$u20$as$u20$core..clone..Clone$GT$::clone::ha7de84e269ad33a1(&var_b38, r12_1 + r15_1 + 8);
                        int128_t var_878;
                        var_878 = rax_21;
                        int128_t var_888_1 = zmm3_2;
                        int128_t var_898_1 = zmm2_2;
                        var_8a8 = var_a98;
                        var_8b8 = var_aa8;
                        var_908 = var_b38;
                        var_8f8 = var_b28;
                        var_8e8 = var_b18;
                        var_8d8 = var_b08;
                        var_8c8 = var_af8;
                        just::table::Table$LT$V$GT$::insert::h3c988222b553a2aa(arg2 + 0xa8, 
                            &var_908);
                        goto label_653bf0;
                    }
                    case 7:
                    {
                        void* rax_16;
                        uint64_t rdx_6;
                        rax_16 = just::token::Token::lexeme::h66587cdf67f63270(r12_1 + r15_1 + 8);
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_908, rax_16, rdx_6);
                        var_b28 = var_8f8;
                        var_b38 = var_908;
                        
                        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h3f4c64e00449f61e(arg2 + 0x48, &var_b38))
                            goto label_653bf0;
                        
                        void* rax_28;
                        int64_t rdx_11;
                        rax_28 = just::token::Token::lexeme::h66587cdf67f63270(r12_1 + r15_1 + 8);
                        *var_908[8] = rax_28;
                        var_8f8 = rdx_11;
                        var_908 = -0x7fffffffffffffe2;
                        just::token::Token::error::h986494da066a4455(&var_b38, r12_1 + r15_1 + 8, 
                            &var_908);
                        rax_29 = arg1;
                        *(rax_29 + 0x48) = var_af8;
                        zmm0_7 = var_b38;
                        zmm1_4 = var_b28;
                        zmm2_4 = var_b18;
                        zmm3_4 = var_b08;
                        label_654554:
                        *(rax_29 + 0x38) = zmm3_4;
                        *(rax_29 + 0x28) = zmm2_4;
                        *(rax_29 + 0x18) = zmm1_4;
                        *(rax_29 + 8) = zmm0_7;
                        *rax_29 = -0x8000000000000000;
                        goto label_654571;
                    }
                }
            }
            
            break;
        }
        
        label_653b79:
        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h605adacde89f0a7a(arg2 + 0x30, 
            *(rbx_1 + 0x40));
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(var_a58, var_a50);
    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$just..unstable_feature..UnstableFeature$GT$$GT$::h9eaa1dd0bb003650(&var_9c0);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$std..path..PathBuf$GT$$GT$::h33025ef45c80cace(var_618, *var_618[8]);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$$LP$$RF$str$C$just..name..Name$RP$$GT$$GT$::h8de0aae6b4af080d(var_988, *var_988[8]);
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(arg4);
    core::ptr::drop_in_place$LT$just..table..Table$LT$just..alias..Alias$LT$just..namepath..Namepath$GT$$GT$$GT$::hdbbe57351eab1e4e(arg2 + 0x78);
    
    if (r15_1)
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(*arg2, *(arg2 + 8));
    
    core::ptr::drop_in_place$LT$just..table..Table$LT$just..justfile..Justfile$GT$$GT$::h73c7e1147cdcae6a(arg2 + 0x90);
    
    if (rbp)
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(*(arg2 + 0x18), *(arg2 + 0x20));
    
    if (r15_1)
        core::ptr::drop_in_place$LT$just..table..Table$LT$just..set..Set$GT$$GT$::h2236ec451f2859ff(
            arg2 + 0xa8);
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::hfb902d89700f9edf(arg2 + 0x48);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..warning..Warning$GT$$GT$::h908072e5e1668ca3(*(arg2 + 0x30), *(arg2 + 0x38));
}
