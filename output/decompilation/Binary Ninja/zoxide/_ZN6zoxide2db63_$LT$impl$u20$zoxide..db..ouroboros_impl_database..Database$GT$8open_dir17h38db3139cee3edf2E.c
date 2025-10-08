
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::h38db3139cee3edf2(int64_t* arg1, int64_t* arg2)

{
    int64_t rbx = arg2[1];
    arg2[2];
    int64_t rax;
    uint64_t rdx;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(rbx);
    int128_t var_d8;
    std::path::Path::join::hb0fbf4f9ac9d7e75(&var_d8, rax, rdx, 
        "db.zounable to create data direc…");
    int64_t var_c0;
    std::fs::canonicalize::he51144e910f5569b(&var_c0, &var_d8);
    int128_t var_a8 = var_d8;
    int128_t var_f8;
    core::result::Result$LT$T$C$E$GT$::unwrap_or::h62cab0fd48b9933e(&var_f8, &var_c0, &var_a8);
    int64_t var_60;
    std::fs::read::heeb5edeae98c8192(&var_60, &var_f8);
    uint64_t var_e8;
    int64_t var_58;
    
    if (!(0 + -(var_60)))
    {
        uint64_t var_98_1 = var_e8;
        var_a8 = var_f8;
        zoxide::db::ouroboros_impl_database::Database::try_new::h74a6396062d45fa8(arg1, &var_a8, 
            &var_60);
    }
    else if (!std::io::error::Error::kind::h135fe00c4e7365f3(var_58))
    {
        int64_t var_e0 = var_58;
        int64_t rbp_1;
        rbp_1 = 1;
        uint64_t rax_5 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h7a4d7fa1b1580ddd(std::fs::create_dir_all::h7a4b11839d2ace3d(rax), rax, rdx);
        
        if (!rax_5)
        {
            uint64_t var_38_1 = var_e8;
            int128_t var_48 = var_f8;
            var_c0 = 0;
            int64_t var_b8_1 = 1;
            int64_t var_b0_1 = 0;
            zoxide::db::ouroboros_impl_database::Database::new::hea6bb27ef095d44c(&var_a8, &var_48, 
                &var_c0);
            int128_t zmm0_3 = var_a8;
            int128_t var_78;
            *(arg1 + 0x38) = var_78;
            int128_t var_88;
            *(arg1 + 0x28) = var_88;
            int64_t var_c8;
            *(arg1 + 0x18) = var_c8;
            *(arg1 + 8) = zmm0_3;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_e0);
        }
        else
        {
            arg1[1] = rax_5;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_e0);
            core::mem::drop::h8efcdb4578edbe7f(var_f8, *var_f8[8]);
        }
    }
    else
    {
        *var_a8[8] = var_58;
        var_a8 = 1;
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::ha0748b3b249b3484(arg1, &var_a8, *var_f8[8], var_e8);
        core::mem::drop::h8efcdb4578edbe7f(var_f8, *var_f8[8]);
    }
    return core::mem::drop::h8efcdb4578edbe7f(*arg2, rbx);
}
