
  fn zoxide::cmd::add::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Add$GT$::run::hc81159ef5a5240a6(arg1: *mut i8) -> u64

{
    let mut var_110: u64;
    zoxide::config::exclude_dirs::h9f1bdfa8604aa8e4(&var_110);
    let rax: u64 = var_110;
    let mut var_108: u64;
    let rbx: u64 = var_108;
    
    if -(rax) == -0x8000000000000000
    {
        return rbx;
    }
    
    let mut var_a8: u64 = rax;
    let var_a0_1: u64 = rbx;
    let var_100: i64;
    let var_98_1: i64 = var_100;
    zoxide::config::maxage::h1da6279f48bc86a1(&var_110);
    let mut r15_1: u64 = var_108;
    
    if (var_110 & 1) == 0
    {
        let mut rax_1: i8;
        let mut rdx_1: u64;
        rax_1 = zoxide::util::current_time::hc177626caa3eacce();
        
        if (rax_1 & 1) == 0
        {
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_110);
            let mut rcx_2: u64 = var_108;
            
            if var_110 != 1
            {
                let var_e0: i128;
                let var_68_1: i128 = var_e0;
                let mut var_f0: i128;
                let var_78_1: i128 = var_f0;
                let var_88_1: u128 = var_100;
                let mut var_90: u64 = rcx_2;
                let rax_3: i64 = *arg1.byte_offset(0x20);
                
                if rax_3 != 0
                {
                    let mut zmm0_1: u128;
                    
                    if (*arg1 & 1) != 0
                    {
                        zmm0_1 = *arg1.byte_offset(8);
                    }
                    else
                    {
                        zmm0_1 = 0x3ff0000000000000;
                    }
                    
                    let var_c8_1: u64 = zmm0_1;
                    let mut r12_1: *mut c_void = *arg1.byte_offset(0x18);
                    let var_c0_2: u64 = var_100 * 0x38 + rbx;
                    let mut r14_2: i64 = rax_3 * 0x18;
                    
                    loop
                    {
                        let mut rax_6: fn(arg1: *mut i128, arg2: *mut c_void) -> *mut i128 =
                            zoxide::util::resolve_path::h9fc2bd2a876b461a;
                        
                        if zoxide::config::resolve_symlinks::h2e8c21983af893b2() != 0
                        {
                            rax_6 = zoxide::util::canonicalize::hbd4c56297afb77b5;
                        }
                        
                        rax_6(&var_110, r12_1);
                        let r13_2: u64 = var_110;
                        let mut r15_2: u64;
                        
                        if r13_2 == -0x8000000000000000
                        {
                            r15_2 = var_108;
                        }
                        else
                        {
                            let var_118_1: u64 = var_108;
                            zoxide::util::path_to_str::h52f975d9744c5a30(&var_110, var_108);
                            let rbp_1: u64 = var_110;
                            r15_2 = var_108;
                            
                            if rbp_1 != 0
                            {
                                let mut var_50: u64 = rbp_1;
                                let var_48_1: u64 = r15_2;
                                
                                if core::str::pattern::Pattern::is_contained_in::h862045890a65aac6(
                                    rbp_1, r15_2) != 0
                                {
                                    goto 'label_48e907;
                                }
                                
                                var_110 = rbx;
                                var_108 = var_c0_2;
                                
                                if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0c787573afdf4961(&var_110, rbp_1, r15_2) != 0
                                {
                                    goto 'label_48e907;
                                }
                                
                                if std::path::Path::is_dir::h02edbc48c38d7d9e(rbp_1, r15_2) == 0
                                {
                                    let mut var_40: *mut u64 = &var_50;
                                    let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3f43078e28aa9000;
                                    var_110 = &data_5348d0;
                                    let var_108_1: i64 = 1;
                                    var_f0 = 0;
                                    let var_100_1: *mut *mut u64 = &var_40;
                                    let var_f8_1: i64 = 1;
                                    r15_2 =
                                        anyhow::__private::format_err::h09b344f6a077676a(&var_110);
                                }
                                else
                                {
                                    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_update::h93186d8728d9a211(&var_90, rbp_1, r15_2, rdx_1, var_c8_1);
                                    'label_48e907:
                                    core::mem::drop::h8efcdb4578edbe7f(r13_2, var_118_1);
                                    r12_1 += 0x18;
                                    let temp1_1: i64 = r14_2;
                                    r14_2 -= 0x18;
                                    
                                    if temp1_1 == 0x18
                                    {
                                        break;
                                    }
                                    
                                    continue;
                                }
                            }
                            
                            core::mem::drop::h8efcdb4578edbe7f(r13_2, var_118_1);
                        }
                        
                        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
                        rcx_2 = r15_2;
                        goto 'label_48eac0;
                    }
                }
                
                let var_d0: i8;
                
                if var_d0 == 1
                {
                    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::age::h2b65e1eeb6c66eec(&var_90, r15_1);
                }
                
                let rax_11: u64 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_90);
                core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
                rcx_2 = rax_11;
            }
            
            'label_48eac0:
            r15_1 = rcx_2;
        }
        else
        {
            r15_1 = rdx_1;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::haacfece5fe5473bb(
        &var_a8);
    r15_1
}
