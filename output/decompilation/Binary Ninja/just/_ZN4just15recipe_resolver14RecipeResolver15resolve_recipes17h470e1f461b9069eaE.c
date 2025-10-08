
  int64_t just::recipe_resolver::RecipeResolver::resolve_recipes::h470e1f461b9069ea(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6, int128_t* arg7)

{
    void** var_3a0 = arg2;
    int64_t var_398 = arg3;
    int64_t var_390 = arg4;
    int64_t var_388 = arg5;
    int64_t var_380 = 0;
    int64_t var_370 = 0;
    int128_t var_368 = *arg7;
    int64_t var_358 = arg7[1];
    
    while (true)
    {
        uint64_t var_308;
        just::table::Table$LT$V$GT$::pop::hec14cdf4ac70782b(&var_308, &var_368);
        int64_t var_448;
        int64_t var_440;
        int64_t var_408;
        int64_t var_3f0;
        
        if (0 + -(var_308))
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h01a3bc3cb30df394(&var_308);
            int64_t rsi_4 = var_380;
            
            if (var_380)
                rsi_4 = var_370;
            
            int64_t rdx_1;
            rdx_1 = var_380;
            var_3f0 = rdx_1;
            int64_t var_3e8_1 = 0;
            int64_t var_3e0_1 = var_380;
            int64_t var_378;
            int64_t var_3d8_1 = var_378;
            int64_t var_3d0_1 = rdx_1;
            int64_t var_3c8_1 = 0;
            int64_t var_3c0_1 = var_380;
            int64_t var_3b8_1 = var_378;
            int64_t var_3b0_1 = rsi_4;
            int64_t* rdi_7 = &var_3f0;
            char i_1;
            int64_t rax_8;
            char i;
            int64_t* rdx_2;
            int32_t* rdx_3;
            
            while (true)
            {
                int64_t rax_4;
                rax_4 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(rdi_7);
                
                if (!rax_4 || !rdx_2)
                {
                    arg1[2] = var_370;
                    *arg1 = var_380;
                    arg1[9] = 0x25;
                    return core::ptr::drop_in_place$LT$just..table..Table$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$$GT$::h4a7abc0528fca674(&var_368);
                }
                
                void* rax_5 = *rdx_2;
                int64_t rcx_3 = *(rax_5 + 0x60);
                int64_t rax_7 = *(rax_5 + 0x68) * 0xd0 + rcx_3;
                var_408 = rcx_3;
                int64_t var_400_1 = rax_7;
                int64_t var_3f8_1 = 0;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67943448222f2e9b(&var_408);
                
                if (rdx_3)
                    break;
                
                label_686ed0:
                void* rax_21 = *rdx_2;
                int64_t rcx_5 = *(rax_21 + 0x38);
                
                if (rcx_5)
                {
                    void* rdx_7 = *(rax_21 + 0x30);
                    void* rcx_7 = (rcx_5 << 5) + rdx_7;
                    void* rax_13 = rdx_7 + 0x20;
                    
                    do
                    {
                        int64_t rdx_8 = *(rdx_7 + 0x10);
                        
                        if (rdx_8)
                        {
                            int64_t rbx_2 = *(rdx_7 + 8);
                            int64_t rdx_10 = (rdx_8 << 7) + rbx_2;
                            int64_t rax_14 = rbx_2 + 0x80;
                            
                            do
                            {
                                int64_t rsi_10 = rbx_2;
                                rbx_2 = rax_14;
                                int128_t var_338;
                                just::expression::Expression::variables::h421cbbeec48818c6(
                                    &var_338, rsi_10);
                                int64_t var_328;
                                int64_t var_438_3 = var_328;
                                var_448 = var_338;
                                
                                while (true)
                                {
                                    void var_208;
                                    _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_208, &var_448);
                                    char var_1c8;
                                    
                                    if (var_1c8 == 0x25)
                                        break;
                                    
                                    void* rax_16 = *rdx_2;
                                    just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(&var_308, var_3a0, &var_208, *(rax_16 + 0x60), 
                                        *(rax_16 + 0x68));
                                    i = i_1;
                                    
                                    if (i != 0x25)
                                        goto label_687139;
                                }
                                
                                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                                int32_t rax_17;
                                rax_17 = rbx_2 != rdx_10;
                                rax_14 = (rax_17 << 7) + rbx_2;
                            } while (rbx_2 != rdx_10);
                        }
                        
                        rdx_7 = rax_13;
                        int32_t rax_19;
                        rax_19 = rdx_7 != rcx_7;
                        rax_13 = (rax_19 << 5) + rdx_7;
                    } while (rdx_7 != rcx_7);
                    
                    rax_21 = *rdx_2;
                }
                
                int64_t rcx_11 = *(rax_21 + 0x20);
                rdi_7 = &var_3f0;
                
                if (rcx_11)
                {
                    void* rbx_3 = *(rax_21 + 0x18);
                    void* rcx_13 = (rcx_11 << 5) + rbx_3;
                    void* rax_22 = rbx_3 + 0x20;
                    
                    do
                    {
                        if (!(arg6 & just::line::Line::is_comment::h9a81c927aacfe8c9(*(rbx_3 + 8), 
                            *(rbx_3 + 0x10))))
                        {
                            int64_t rcx_15 = *(rbx_3 + 0x10);
                            
                            if (rcx_15)
                            {
                                int32_t* rsi_15 = *(rbx_3 + 8);
                                void* rax_28 = &rsi_15[rcx_15 * 0x20];
                                void* rax_29 = &rsi_15[0x20];
                                void* rbx_4;
                                
                                do
                                {
                                    rbx_4 = rax_29;
                                    
                                    if (*rsi_15 != 0x12)
                                    {
                                        int128_t var_320;
                                        just::expression::Expression::variables::h421cbbeec48818c6(
                                            &var_320, rsi_15);
                                        int64_t var_310;
                                        int64_t var_438_4 = var_310;
                                        var_448 = var_320;
                                        
                                        while (true)
                                        {
                                            void var_1c0;
                                            _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_1c0, &var_448);
                                            char var_180;
                                            
                                            if (var_180 == 0x25)
                                            {
                                                core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                                                break;
                                            }
                                            
                                            void* rax_33 = *rdx_2;
                                            just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(&var_308, var_3a0, &var_1c0, *(rax_33 + 0x60), 
                                                *(rax_33 + 0x68));
                                            i = i_1;
                                            
                                            if (i != 0x25)
                                                goto label_687139;
                                        }
                                    }
                                    
                                    int32_t rax_30;
                                    rax_30 = rbx_4 != rax_28;
                                    rax_29 = (rax_30 << 7) + rbx_4;
                                    rsi_15 = rbx_4;
                                } while (rbx_4 != rax_28);
                            }
                        }
                        
                        rbx_3 = rax_22;
                        int32_t rax_23;
                        rax_23 = rbx_3 != rcx_13;
                        rax_22 = (rax_23 << 5) + rbx_3;
                        rdi_7 = &var_3f0;
                    } while (rbx_3 != rcx_13);
                }
            }
            
            int64_t rbx_1 = rax_8;
            
            while (true)
            {
                if (*rdx_3 != 0x12)
                {
                    int128_t var_350;
                    just::expression::Expression::variables::h421cbbeec48818c6(&var_350, rdx_3);
                    int64_t var_340;
                    int64_t var_438_2 = var_340;
                    var_448 = var_350;
                    
                    do
                    {
                        void var_178;
                        _$LT$just..variables..Variables$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he65f7fdf9fba7f7a(&var_178, &var_448);
                        char var_138;
                        
                        if (var_138 == 0x25)
                        {
                            core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(var_448, var_440);
                            goto label_686e23;
                        }
                        
                        void* rax_11 = *rdx_2;
                        int64_t rax_12;
                        int64_t rdx_5;
                        rax_12 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04f40b3a0c144874(rbx_1, *(rax_11 + 0x60), *(rax_11 + 0x68));
                        just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(
                            &var_308, var_3a0, &var_178, rax_12, rdx_5);
                        i = i_1;
                    } while (i == 0x25);
                    
                    label_687139:
                    int64_t var_2c8;
                    arg1[8] = var_2c8;
                    int128_t zmm0_3 = var_308;
                    int128_t var_2d8;
                    *(arg1 + 0x30) = var_2d8;
                    int128_t var_2e8;
                    *(arg1 + 0x20) = var_2e8;
                    int128_t var_2f8;
                    *(arg1 + 0x10) = var_2f8;
                    *arg1 = zmm0_3;
                    int32_t var_2bf;
                    *(arg1 + 0x49) = var_2bf;
                    *(arg1 + 0x4c) = var_2bf;
                    arg1[9] = i;
                    core::ptr::drop_in_place$LT$just..variables..Variables$GT$::hdba53261cf647461(
                        var_448, var_440);
                    break;
                }
                
                label_686e23:
                int64_t rax_9;
                rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67943448222f2e9b(&var_408);
                rbx_1 = rax_9;
                
                if (!rdx_3)
                    goto label_686ed0;
            }
            
            return core::ptr::drop_in_place$LT$just..recipe_resolver..RecipeResolver$GT$::h5bca05341d6b75f4(&var_3a0);
        }
        
        void var_130;
        memcpy(&var_130, &var_308, 0x100);
        var_448 = 0;
        var_440 = 8;
        int64_t var_438_1 = 0;
        just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(&var_3f0, 
            &var_3a0, &var_448, &var_130);
        int64_t rcx_1 = var_3f0;
        char var_3a8;
        
        if (var_3a8 != 0x25)
        {
            int64_t var_3b8;
            *(arg1 + 0x38) = var_3b8;
            int64_t var_3c8;
            *(arg1 + 0x28) = var_3c8;
            int64_t var_3d8;
            *(arg1 + 0x18) = var_3d8;
            int64_t var_3e8;
            *(arg1 + 8) = var_3e8;
            int32_t var_3a7;
            *(arg1 + 0x49) = var_3a7;
            *(arg1 + 0x4c) = var_3a7;
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
