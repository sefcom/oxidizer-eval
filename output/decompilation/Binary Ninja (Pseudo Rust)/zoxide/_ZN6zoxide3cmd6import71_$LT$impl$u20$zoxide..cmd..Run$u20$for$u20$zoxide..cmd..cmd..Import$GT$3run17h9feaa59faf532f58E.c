
  fn zoxide::cmd::import::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Import$GT$::run::h9feaa59faf532f58(arg1: *mut c_void) -> u64

{
    let mut var_68: i32;
    std::fs::read_to_string::hc14e600540d5b405(&var_68, arg1);
    let mut var_a8: u64;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::ha329fa232b6500dd(&var_a8, &var_68, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
    let rax: u64 = var_a8;
    let mut var_a0: u64;
    let mut rbx: u64 = var_a0;
    
    if -(rax) != -0x8000000000000000
    {
        let mut var_c0: u64 = rax;
        let var_b8_1: u64 = rbx;
        let var_98: i64;
        let var_b0_1: i64 = var_98;
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_68);
        let var_60: u64;
        
        if var_68 == 1
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
            return var_60;
        }
        
        let var_28: i64;
        let var_70_1: i64 = var_28;
        let var_38: i128;
        let var_80_1: i128 = var_38;
        let var_48: i128;
        let var_90_1: i128 = var_48;
        let mut var_58: i128;
        var_a0 = var_58;
        var_a8 = var_60;
        let mut r12_1: u64;
        
        if *arg1.byte_offset(0x19) == 0 && var_98 != 0
        {
            var_68 = &data_534900;
            let var_60_1: i64 = 1;
            var_58 = 8;
            var_58 = {0};
            r12_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            'label_48f1dd:
            core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
            return r12_1;
        }
        
        let mut rax_2: u64;
        
        if *arg1.byte_offset(0x18) == 0
        {
            rax_2 = zoxide::cmd::import::import_autojump::hec90086a5ec2907e(&var_a8, rbx, var_98);
        }
        else
        {
            rax_2 = zoxide::cmd::import::import_z::hf8789239219700b8(&var_a8, rbx, var_98);
        }
        
        let rax_3: u64 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h36cd762370f4003e(rax_2, "import errorcould not open datab…");
        r12_1 = rax_3;
        
        if rax_3 != 0
        {
            goto 'label_48f1dd;
        }
        
        rbx = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_a8);
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_c0);
    }
    
    rbx
}
