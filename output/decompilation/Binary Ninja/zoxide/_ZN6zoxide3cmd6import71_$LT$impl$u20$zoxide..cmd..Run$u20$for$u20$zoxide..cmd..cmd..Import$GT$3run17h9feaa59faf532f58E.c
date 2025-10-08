
  uint64_t zoxide::cmd::import::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Import$GT$::run::h9feaa59faf532f58(void* arg1)

{
    int32_t var_68;
    std::fs::read_to_string::hc14e600540d5b405(&var_68, arg1);
    uint64_t var_a8;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::ha329fa232b6500dd(&var_a8, &var_68, *(arg1 + 8), *(arg1 + 0x10));
    uint64_t rax = var_a8;
    uint64_t var_a0;
    uint64_t rbx = var_a0;
    
    if (-(rax) != -0x8000000000000000)
    {
        uint64_t var_c0 = rax;
        uint64_t var_b8_1 = rbx;
        int64_t var_98;
        int64_t var_b0_1 = var_98;
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_68);
        uint64_t var_60;
        
        if (var_68 == 1)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
            return var_60;
        }
        
        int64_t var_28;
        int64_t var_70_1 = var_28;
        int128_t var_38;
        int128_t var_80_1 = var_38;
        int128_t var_48;
        int128_t var_90_1 = var_48;
        int128_t var_58;
        var_a0 = var_58;
        var_a8 = var_60;
        uint64_t r12_1;
        
        if (!*(arg1 + 0x19) && var_98)
        {
            var_68 = &data_534900;
            int64_t var_60_1 = 1;
            var_58 = 8;
            var_58 = {0};
            r12_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            label_48f1dd:
            core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
            return r12_1;
        }
        
        uint64_t rax_2;
        
        if (!*(arg1 + 0x18))
            rax_2 = zoxide::cmd::import::import_autojump::hec90086a5ec2907e(&var_a8, rbx, var_98);
        else
            rax_2 = zoxide::cmd::import::import_z::hf8789239219700b8(&var_a8, rbx, var_98);
        
        uint64_t rax_3 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h36cd762370f4003e(rax_2, "import errorcould not open datab…");
        r12_1 = rax_3;
        
        if (rax_3)
            goto label_48f1dd;
        
        rbx = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_a8);
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
    }
    
    return rbx;
}
