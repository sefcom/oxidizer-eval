
  int64_t just::load_dotenv::load_from_file::h94978de6d8bd46bb(char* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t var_a8;
    dotenvy::from_path_iter::hb404f5f3f3c1c123(&var_a8, arg2);
    int64_t rax = var_a8;
    int64_t result;
    int128_t var_108;
    int128_t var_a0;
    int128_t var_90;
    
    if (!rax)
    {
        *arg1 = 0x10;
        *(arg1 + 1) = var_108;
        *(arg1 + 0x11) = var_a0;
        result = *var_90[8];
        *(arg1 + 0x20) = result;
    }
    else
    {
        int64_t var_50;
        int64_t var_b0_1 = var_50;
        int128_t var_60;
        int128_t var_c0_1 = var_60;
        int128_t var_70;
        int128_t var_d0_1 = var_70;
        int128_t var_80;
        int128_t var_e0_1 = var_80;
        int128_t var_101 = var_a0;
        int128_t var_f1 = var_90;
        int64_t var_190 = 0;
        int64_t result_1 = 0;
        var_108 = rax;
        
        while (true)
        {
            _$LT$dotenvy..iter..Iter$LT$R$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5b1cc3ee223d309(&var_a8, &var_108);
            int64_t rax_1 = var_a8;
            int128_t var_178;
            
            if (-(rax_1) == -0x8000000000000000)
            {
                *arg1 = 0x10;
                *(arg1 + 1) = var_178;
                *(arg1 + 0x11) = var_a0;
                *(arg1 + 0x20) = *var_90[8];
                core::ptr::drop_in_place$LT$dotenvy..iter..Iter$LT$std..fs..File$GT$$GT$::h7ebcd747ad9a99f6(&var_108);
                return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_190);
            }
            
            if (rax_1 == -0x7fffffffffffffff)
                break;
            
            int128_t var_148 = var_90;
            int64_t var_1a8 = rax_1;
            int64_t var_138_1 = var_80;
            
            if (!(arg4 & 1))
            {
                std::env::var_os::h6a2d090e3fc310b6(&var_178, &var_1a8);
                int64_t r14_1 = var_178;
                core::ptr::drop_in_place$LT$std..env..VarError$GT$::h3a6801680fc5590a(&var_178);
                
                if (!(0 + -(r14_1)))
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_148);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_1a8);
                    continue;
                }
            }
            
            int128_t var_171;
            *var_171[9] = *var_a0[8];
            var_178 = var_1a8;
            *var_171[1] = var_a0;
            void var_48;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h31a4bd75c0e0caf1(
                &var_48, &var_190, &var_178, &var_148);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_48);
        }
        
        core::ptr::drop_in_place$LT$dotenvy..iter..Iter$LT$std..fs..File$GT$$GT$::h7ebcd747ad9a99f6(
            &var_108);
        result = result_1;
        *(arg1 + 0x18) = result;
        *(arg1 + 8) = var_190;
        *arg1 = 0x38;
    }
    return result;
}
