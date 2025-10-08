
  int64_t* linera_summary::ci_runtime_comparison::CiRuntimeComparison::from_jobs::ha12048923acb13da(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int32_t var_60;
    linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes::h6b7aa8181dc2e971(
        &var_60, arg2);
    int64_t var_58;
    
    if (var_60 != 1)
    {
        int128_t var_50;
        int128_t var_a0_1 = var_50;
        int64_t var_a8 = var_58;
        linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes::h6b7aa8181dc2e971(
            &var_60, arg3);
        
        if (var_60 != 1)
        {
            int128_t var_88_1 = var_50;
            int64_t var_90 = var_58;
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7a2bb3fbe1e189a0(&var_60, &var_90);
            int64_t* var_18_1 = &var_a8;
            int128_t var_78;
            core::iter::traits::iterator::Iterator::collect::hdace7d02484990c5(&var_78, &var_60);
            int64_t var_68;
            arg1[3] = var_68;
            *(arg1 + 8) = var_78;
            *arg1 = 0;
        }
        else
        {
            arg1[1] = var_58;
            *arg1 = 1;
        }
        
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$u64$GT$$GT$$GT$::hcda09b8ef5bf9729(&var_a8);
    }
    else
    {
        arg1[1] = var_58;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$octocrab..models..workflows..Job$GT$$GT$::hb6e03596ce738328(arg3);
    }
    return arg1;
}
