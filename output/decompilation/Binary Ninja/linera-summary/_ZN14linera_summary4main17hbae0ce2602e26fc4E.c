
  int64_t linera_summary::main::hbae0ce2602e26fc4()

{
    int128_t var_d98;
    linera_summary::summary_options::SummaryOptions::init::hcfafcecfa2b6f427(&var_d98);
    linera_base::tracing::init::h2bf0ee6ff75d7e39("summaryFailed to create Tokio ru…");
    void var_d70;
    tokio::runtime::builder::Builder::new_multi_thread::h05e5bcdd261c2fea(&var_d70);
    int64_t rax = core::sync::atomic::atomic_load::hb4b717e74f96b46b(
        &tracing_core::metadata::MAX_LEVEL::h02c344de83897b1d, 0);
    int64_t** var_eb8;
    int64_t result;
    void* var_ea8;
    int128_t var_e38;
    int128_t var_e28;
    void* linera_summary::main::__CALLSITE::h317f18fb63efec68_3;
    char const (** const var_c98)[0x9b];
    int128_t var_c88;
    
    if (rax == 5 || rax > 2)
    {
        label_88d3d3:
        void* linera_summary::main::__CALLSITE::h317f18fb63efec68_1 =
            linera_summary::main::__CALLSITE::h317f18fb63efec68;
        var_c98 = 2;
        
        if (!core::sync::atomic::atomic_load::h7eee19a9e461d8d8(
            &tracing_core::dispatcher::EXISTS::h875930db1ebeac73))
        {
            var_eb8 = 8;
            result = 0;
            var_ea8 = linera_summary::main::__CALLSITE::h317f18fb63efec68_1 + 0x30;
            tracing::span::Span::record_all::h00ba14f0532f8e03(&var_c98, &var_eb8);
        }
        
        linera_summary::main::__CALLSITE::h317f18fb63efec68_3 =
            linera_summary::main::__CALLSITE::h317f18fb63efec68_1;
        var_e28 = var_c88;
        var_e38 = var_c98;
    }
    else
    {
        char rax_1 = tracing_core::callsite::DefaultCallsite::interest::he9a0fdb56f10bbca(
            &linera_summary::main::__CALLSITE::h317f18fb63efec68);
        
        if (!rax_1)
            goto label_88d3d3;
        
        if (!tracing::__macro_support::__is_enabled::hcd52fb4fe9dde9ef(
                linera_summary::main::__CALLSITE::h317f18fb63efec68, rax_1))
            goto label_88d3d3;
        
        void* linera_summary::main::__CALLSITE::h317f18fb63efec68_2 =
            linera_summary::main::__CALLSITE::h317f18fb63efec68;
        var_c98 = 8;
        int64_t var_c90_1 = 0;
        var_c88 = linera_summary::main::__CALLSITE::h317f18fb63efec68_2 + 0x30;
        tracing::span::Span::new::hee0a8b9b1691f332(&var_e38, 
            linera_summary::main::__CALLSITE::h317f18fb63efec68_2, &var_c98);
    }
    int16_t var_ca3 = 0x101;
    tokio::runtime::builder::Builder::build::h9da2fc630f00e176(&var_c98, &var_d70);
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h0dd3069c5a2dea86(&var_eb8, &var_c98);
    int64_t** rax_6 = var_eb8;
    
    if (rax_6 == 2)
    {
        core::ptr::drop_in_place$LT$tracing..span..Span$GT$::h5e4ab9b2dec04c51(&var_e38);
        core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h8339a9b054909e41(
            &var_d70);
        core::ptr::drop_in_place$LT$linera_summary..summary_options..SummaryOptions$GT$::ha6e69de5bba54f58(&var_d98);
        return result;
    }
    
    int128_t var_e78;
    int128_t var_db8 = var_e78;
    int128_t var_e88;
    int128_t var_dc8 = var_e88;
    int128_t var_e98;
    int128_t var_dd8 = var_e98;
    int128_t var_de8 = var_ea8;
    int64_t** var_df8 = rax_6;
    int64_t result_1 = result;
    int64_t var_d78;
    int64_t var_c50 = var_d78;
    int128_t var_d88;
    int128_t var_c60 = var_d88;
    int128_t var_c70 = var_d98;
    var_c98 = var_e38;
    char var_c20 = 0;
    int64_t* rax_10 =
        tokio::runtime::runtime::Runtime::block_on::he2cb01c88dbbe1a3(&var_df8, &var_c98);
    int64_t* var_ec0 = rax_10;
    int64_t rbp;
    rbp = 1;
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h5022d1dfaaa3e311(&var_df8);
    int32_t rdi_12 = 0;
    rbp = !rax_10;
    
    if (rax_10)
    {
        int64_t* var_ec8 = rax_10;
        int64_t* var_e68;
        int64_t** var_e50;
        int128_t var_c88_1;
        
        if (core::sync::atomic::atomic_load::hb4b717e74f96b46b(
            &tracing_core::metadata::MAX_LEVEL::h02c344de83897b1d, 0) != 5)
        {
            char rax_14 = tracing_core::callsite::DefaultCallsite::interest::he9a0fdb56f10bbca(
                &linera_summary::main::__CALLSITE::h57c9c556b7219041);
            
            if (!rax_14)
                goto label_88d5eb;
            
            if (!tracing::__macro_support::__is_enabled::hcd52fb4fe9dde9ef(
                    linera_summary::main::__CALLSITE::h57c9c556b7219041, rax_14))
                goto label_88d5eb;
            
            void* linera_summary::main::__CALLSITE::h57c9c556b7219041_3 =
                linera_summary::main::__CALLSITE::h57c9c556b7219041;
            var_eb8 = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_3 + 0x30);
            var_ea8 = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_3 + 0x40);
            var_e98 = 0;
            *var_e98[8] = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_3 + 0x38);
            _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9677a7ebe172bbe8(&var_c98, &var_eb8);
            
            if (!var_c98)
            {
                core::option::expect_failed::h3f620cfb8545dc61("FieldSet corrupted (this is a bu…");
                /* no return */
            }
            
            var_dd8 = linera_summary::main::__CALLSITE::h317f18fb63efec68_3;
            int128_t var_de8_1 = var_e28;
            var_df8 = var_c98;
            var_e50 = &var_ec8;
            int64_t (* var_e48_1)(int64_t* arg1) = anyhow::error::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$anyhow..Error$GT$::fmt::h08f1a4a1c54636dd;
            var_c98 = &data_cd0910;
            int64_t var_c90_2 = 1;
            int64_t var_c78_3 = 0;
            var_c88_1 = &var_e50;
            *var_c88_1[8] = 1;
            var_e68 = &var_df8;
            char const (** const* var_e60_1)[0x9b] = &var_c98;
            void* const var_e58_1 = &data_ccd5e8;
            var_eb8 = &var_e68;
            int64_t var_eb0 = 1;
            void* var_ea8_1 = linera_summary::main::__CALLSITE::h57c9c556b7219041_3 + 0x30;
            linera_summary::main::_$u7b$$u7b$closure$u7d$$u7d$::hb8a6667d3144708b(&var_eb8);
        }
        else
        {
            label_88d5eb:
            
            if (!core::sync::atomic::atomic_load::h7eee19a9e461d8d8(
                &tracing_core::dispatcher::EXISTS::h875930db1ebeac73) &&
                core::sync::atomic::atomic_load::hb4b717e74f96b46b(
                &log::MAX_LOG_LEVEL_FILTER::h51cc9c3cd67347fa, 0))
            {
                void* linera_summary::main::__CALLSITE::h57c9c556b7219041_2 =
                    linera_summary::main::__CALLSITE::h57c9c556b7219041;
                int128_t zmm0_3 = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_2 + 0x20);
                int64_t var_e10 = 1;
                void* rax_18;
                int64_t rdx_2;
                rax_18 = log::logger::h0d3dd8cac80dc3fa();
                
                if ((*(rdx_2 + 0x18))(rax_18, &var_e10))
                {
                    void* linera_summary::main::__CALLSITE::h57c9c556b7219041_1 =
                        linera_summary::main::__CALLSITE::h57c9c556b7219041;
                    var_eb8 = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_1 + 0x30);
                    var_ea8 = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_1 + 0x40);
                    var_e98 = 0;
                    *var_e98[8] = *(linera_summary::main::__CALLSITE::h57c9c556b7219041_1 + 0x38);
                    _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9677a7ebe172bbe8(&var_c98, &var_eb8);
                    
                    if (!var_c98)
                    {
                        core::option::expect_failed::h3f620cfb8545dc61(
                            "FieldSet corrupted (this is a bu…");
                        /* no return */
                    }
                    
                    var_dd8 = linera_summary::main::__CALLSITE::h317f18fb63efec68_3;
                    int128_t var_de8_2 = var_e28;
                    var_df8 = var_c98;
                    int64_t* var_da8 = &var_ec8;
                    int64_t (* var_da0_1)(int64_t* arg1) = anyhow::error::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$anyhow..Error$GT$::fmt::h08f1a4a1c54636dd;
                    var_c98 = &data_cd0910;
                    int64_t var_c90_3 = 1;
                    int64_t var_c78_4 = 0;
                    var_c88_1 = &var_da8;
                    *var_c88_1[8] = 1;
                    var_e68 = &var_df8;
                    char const (** const* var_e60_2)[0x9b] = &var_c98;
                    void* const var_e58_2 = &data_ccd5e8;
                    var_e50 = &var_e68;
                    int64_t var_e48_2 = 1;
                    void* var_e40_1 = linera_summary::main::__CALLSITE::h57c9c556b7219041_1 + 0x30;
                    int64_t var_ea8_2 = *zmm0_3[8];
                    var_eb8 = var_e10;
                    tracing::__macro_support::__tracing_log::h5fab331f013c479b(
                        linera_summary::main::__CALLSITE::h57c9c556b7219041_2, rax_18, rdx_2, 
                        &var_eb8, &var_e50);
                }
            }
        }
        core::ptr::drop_in_place$LT$anyhow..Error$GT$::hc8d6c5e15b795df0();
        rdi_12 = 2;
    }
    
    std::process::exit::hcda678ff272dfed1(rdi_12);
    /* no return */
}
