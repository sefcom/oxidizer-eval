
  uint64_t zoxide::cmd::add::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Add$GT$::run::hc81159ef5a5240a6(char* arg1)

{
    uint64_t var_110;
    zoxide::config::exclude_dirs::h9f1bdfa8604aa8e4(&var_110);
    uint64_t rax = var_110;
    uint64_t var_108;
    uint64_t rbx = var_108;
    
    if (-(rax) == -0x8000000000000000)
        return rbx;
    
    uint64_t var_a8 = rax;
    uint64_t var_a0_1 = rbx;
    int64_t var_100;
    int64_t var_98_1 = var_100;
    zoxide::config::maxage::h1da6279f48bc86a1(&var_110);
    uint64_t r15_1 = var_108;
    
    if (!(var_110 & 1))
    {
        char rax_1;
        uint64_t rdx_1;
        rax_1 = zoxide::util::current_time::hc177626caa3eacce();
        
        if (!(rax_1 & 1))
        {
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_110);
            uint64_t rcx_2 = var_108;
            
            if (var_110 != 1)
            {
                int128_t var_e0;
                int128_t var_68_1 = var_e0;
                int128_t var_f0;
                int128_t var_78_1 = var_f0;
                uint128_t var_88_1 = var_100;
                uint64_t var_90 = rcx_2;
                int64_t rax_3 = *(arg1 + 0x20);
                
                if (rax_3)
                {
                    uint128_t zmm0_1;
                    
                    if (*arg1 & 1)
                        zmm0_1 = *(arg1 + 8);
                    else
                        zmm0_1 = 0x3ff0000000000000;
                    
                    uint64_t var_c8_1 = zmm0_1;
                    void* r12_1 = *(arg1 + 0x18);
                    uint64_t var_c0_2 = var_100 * 0x38 + rbx;
                    int64_t r14_2 = rax_3 * 0x18;
                    
                    while (true)
                    {
                        int128_t* (* rax_6)(int128_t* arg1, void* arg2) =
                            zoxide::util::resolve_path::h9fc2bd2a876b461a;
                        
                        if (zoxide::config::resolve_symlinks::h2e8c21983af893b2())
                            rax_6 = zoxide::util::canonicalize::hbd4c56297afb77b5;
                        
                        rax_6(&var_110, r12_1);
                        uint64_t r13_2 = var_110;
                        uint64_t r15_2;
                        
                        if (r13_2 == -0x8000000000000000)
                            r15_2 = var_108;
                        else
                        {
                            uint64_t var_118_1 = var_108;
                            zoxide::util::path_to_str::h52f975d9744c5a30(&var_110, var_108);
                            uint64_t rbp_1 = var_110;
                            r15_2 = var_108;
                            
                            if (rbp_1)
                            {
                                uint64_t var_50 = rbp_1;
                                uint64_t var_48_1 = r15_2;
                                
                                if (core::str::pattern::Pattern::is_contained_in::h862045890a65aac6(
                                        rbp_1, r15_2))
                                    goto label_48e907;
                                
                                var_110 = rbx;
                                var_108 = var_c0_2;
                                
                                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0c787573afdf4961(&var_110, rbp_1, r15_2))
                                    goto label_48e907;
                                
                                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(rbp_1, r15_2))
                                {
                                    uint64_t* var_40 = &var_50;
                                    int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3f43078e28aa9000;
                                    var_110 = &data_5348d0;
                                    int64_t var_108_1 = 1;
                                    var_f0 = 0;
                                    uint64_t** var_100_1 = &var_40;
                                    int64_t var_f8_1 = 1;
                                    r15_2 =
                                        anyhow::__private::format_err::h09b344f6a077676a(&var_110);
                                }
                                else
                                {
                                    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_update::h93186d8728d9a211(&var_90, rbp_1, r15_2, rdx_1, var_c8_1);
                                    label_48e907:
                                    core::mem::drop::h8efcdb4578edbe7f(r13_2, var_118_1);
                                    r12_1 += 0x18;
                                    int64_t temp1_1 = r14_2;
                                    r14_2 -= 0x18;
                                    
                                    if (temp1_1 == 0x18)
                                        break;
                                    
                                    continue;
                                }
                            }
                            
                            core::mem::drop::h8efcdb4578edbe7f(r13_2, var_118_1);
                        }
                        
                        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
                        rcx_2 = r15_2;
                        goto label_48eac0;
                    }
                }
                
                char var_d0;
                
                if (var_d0 == 1)
                    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::age::h2b65e1eeb6c66eec(&var_90, r15_1);
                
                uint64_t rax_11 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_90);
                core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
                rcx_2 = rax_11;
            }
            
            label_48eac0:
            r15_1 = rcx_2;
        }
        else
            r15_1 = rdx_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::haacfece5fe5473bb(
        &var_a8);
    return r15_1;
}
