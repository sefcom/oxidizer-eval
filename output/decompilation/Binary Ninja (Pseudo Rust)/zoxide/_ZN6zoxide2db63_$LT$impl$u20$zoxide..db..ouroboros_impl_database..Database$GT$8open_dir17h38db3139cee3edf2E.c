
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::h38db3139cee3edf2(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rbx: i64 = arg2[1];
    arg2[2];
    let mut rax: i64;
    let mut rdx: u64;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(rbx);
    let mut var_d8: i128;
    std::path::Path::join::hb0fbf4f9ac9d7e75(&var_d8, rax, rdx, 
        "db.zounable to create data direc…");
    let mut var_c0: i64;
    std::fs::canonicalize::he51144e910f5569b(&var_c0, &var_d8);
    let mut var_a8: i128 = var_d8;
    let mut var_f8: i128;
    core::result::Result$LT$T$C$E$GT$::unwrap_or::h62cab0fd48b9933e(&var_f8, &var_c0, &var_a8);
    let mut var_60: i64;
    std::fs::read::heeb5edeae98c8192(&var_60, &var_f8);
    let var_e8: u64;
    let var_58: i64;
    
    if !(0 + -(var_60))
    {
        let var_98_1: u64 = var_e8;
        var_a8 = var_f8;
        zoxide::db::ouroboros_impl_database::Database::try_new::h74a6396062d45fa8(arg1, &var_a8, 
            &var_60);
    }
    else if std::io::error::Error::kind::h135fe00c4e7365f3(var_58) == 0
    {
        let mut var_e0: i64 = var_58;
        let mut rbp_1: i64;
        rbp_1 = 1;
        let rax_5: u64 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h7a4d7fa1b1580ddd(std::fs::create_dir_all::h7a4b11839d2ace3d(rax), rax, rdx);
        
        if rax_5 == 0
        {
            let var_38_1: u64 = var_e8;
            let mut var_48: i128 = var_f8;
            var_c0 = 0;
            let var_b8_1: i64 = 1;
            let var_b0_1: i64 = 0;
            zoxide::db::ouroboros_impl_database::Database::new::hea6bb27ef095d44c(&var_a8, &var_48, 
                &var_c0);
            let zmm0_3: i128 = var_a8;
            let var_78: i128;
            *arg1.byte_offset(0x38) = var_78;
            let var_88: i128;
            *arg1.byte_offset(0x28) = var_88;
            let var_c8: i64;
            *arg1.byte_offset(0x18) = var_c8;
            *arg1.byte_offset(8) = zmm0_3;
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
    core::mem::drop::h8efcdb4578edbe7f(*arg2, rbx)
}
