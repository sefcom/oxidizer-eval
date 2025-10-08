
  uint64_t just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(char* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t* arg6, int64_t arg7, int64_t* arg8, int64_t arg9)

{
    int64_t var_138 = arg9;
    char result_1;
    just::evaluator::Evaluator::evaluate_assignments::h2cf48b4fb0207fb8(&result_1, arg4, arg5, 
        arg2, arg6, arg7);
    uint64_t result = result_1;
    int128_t var_11f;
    int128_t var_10f;
    int64_t var_100;
    int128_t var_f8;
    int128_t var_e8;
    int128_t var_d8;
    int128_t var_c8;
    int128_t var_b8;
    
    if (result != 0x38)
    {
        var_b8 = var_11f;
        *(arg1 + 0x58) = var_c8;
        *(arg1 + 0x48) = var_d8;
        *(arg1 + 0x38) = var_e8;
        *(arg1 + 0x28) = var_f8;
        *(arg1 + 0x20) = var_100;
        int128_t zmm0 = var_b8;
        *(arg1 + 0x11) = var_10f;
        *(arg1 + 1) = zmm0;
        *arg1 = result;
    }
    else
    {
        int128_t var_58 = var_11f;
        int128_t var_48_1 = var_10f;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::hd673e813275a11c7(&result_1, arg3, &var_58);
        int64_t rbp_1;
        
        if (result_1 != 1)
            rbp_1 = *var_11f[7];
        else
            rbp_1 =
                typed_arena::Arena$LT$T$GT$::alloc_slow_path::hc006cc0a87cb3d76(arg3, &*var_11f[7]);
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &result_1, arg2 + 0x30);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h0aa37625c7037f01(arg8, 
            &result_1, arg2, rbp_1);
        int64_t rax_2 = *(arg2 + 0x2a0);
        int64_t rcx_4 = *(arg2 + 0x2a8);
        int64_t rsi_5 = rax_2;
        int64_t rdx_3;
        rdx_3 = rax_2;
        
        if (rax_2)
            rsi_5 = *(arg2 + 0x2b0);
        
        var_b8 = rdx_3;
        *var_b8[8] = 0;
        int128_t var_a8;
        var_a8 = rax_2;
        *var_a8[8] = rcx_4;
        int64_t var_99 = rdx_3;
        int64_t var_90_1 = 0;
        int64_t var_88_1 = rax_2;
        int64_t var_80_1 = rcx_4;
        int64_t var_78_1 = rsi_5;
        int64_t rax_3;
        void* rdx_4;
        rax_3 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_b8);
        
        if (rax_3)
        {
            int64_t i;
            
            do
            {
                int64_t var_70 = 0;
                int64_t var_60_1 = 0;
                just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(&result_1, rdx_4, 
                    arg3, arg4, arg5, &var_70, rbp_1, arg8, arg9);
                
                if (result_1 != 0x38)
                {
                    *(arg1 + 0x60) = *var_c8[8];
                    *(arg1 + 0x50) = var_d8;
                    *(arg1 + 0x40) = var_e8;
                    int128_t zmm0_1 = result_1;
                    int128_t zmm1_1 = var_11f;
                    *(arg1 + 0x30) = var_f8;
                    *(arg1 + 0x20) = var_100;
                    *(arg1 + 0x10) = zmm1_1;
                    *arg1 = zmm0_1;
                    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_70);
                }
                
                core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_70);
                i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_b8);
            } while (i);
        }
        
        result = arg1;
        *result = 0x38;
    }
    return result;
}
