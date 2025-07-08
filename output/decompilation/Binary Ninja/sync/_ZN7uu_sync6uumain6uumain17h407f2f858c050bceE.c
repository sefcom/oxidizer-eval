
  int64_t* uu_sync::uumain::uumain::h407f2f858c050bce(int64_t arg1)

{
    int128_t var_2f8;
    uu_sync::uu_app::hbd9026fe07cb3ff7(&var_2f8);
    int64_t var_388;
    clap_builder::builder::command::Command::try_get_matches_from::hc23ef9eb20649cbc(&var_388, 
        &var_2f8, arg1);
    int64_t rax = var_388;
    int64_t* result;
    int64_t var_380;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_358;
        int64_t var_318_1 = var_358;
        int128_t var_368;
        int128_t var_328_1 = var_368;
        int128_t var_378;
        int128_t var_338_1 = var_378;
        int64_t var_348 = rax;
        int64_t var_340_1 = var_380;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h081bf8739e290fe0(
            &var_2f8, &var_348, "filessrc/uu/sync/src/sync.rs0.0.…", 5);
        clap_builder::parser::error::MatchesError::unwrap::hef673200ff6c2f5e(&var_388, 
            "filessrc/uu/sync/src/sync.rs0.0.…", 5, &var_2f8);
        int64_t var_3a8;
        int64_t var_3a0;
        int64_t var_398;
        int128_t var_2e8;
        
        if (!var_388)
        {
            label_46049f:
            var_3a8 = 0;
            var_3a0 = 8;
            var_398 = 0;
        }
        else
        {
            int128_t var_2c8_1 = var_358;
            int128_t var_2d8_1 = var_368;
            var_2e8 = var_378;
            var_2f8 = var_388;
            int64_t var_310;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h93e75ad4c4b808a4(&var_310, &var_2f8);
            int64_t rax_2 = var_310;
            int128_t var_308;
            var_2f8 = var_308;
            
            if (rax_2 == -0x8000000000000000)
                goto label_46049f;
            
            var_3a0 = var_2f8;
            var_3a8 = rax_2;
        }
        
        if (!(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, &data_4133fc[8], 4) & !var_398))
        {
            char const* const var_390_1 = &data_4133fc[8];
            var_2f8 = var_3a0;
            *var_2f8[8] = var_3a0 + var_398 * 0x18;
            void* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&var_2f8);
            
            if (i_2)
            {
                void* i_1 = i_2;
                void* i;
                
                do
                {
                    void** const r12 = *(i_1 + 8);
                    uint64_t rbx_1 = *(i_1 + 0x10);
                    int32_t rax_7;
                    int32_t rdx_2;
                    rax_7 = nix::fcntl::open::h0c6e2bb6a369b838(r12, rbx_1, 0x800, 0);
                    
                    if (rax_7 == 1)
                    {
                        char rax_8;
                        
                        if (rdx_2 == 0xd)
                            rax_8 = std::path::Path::is_dir::h9ac0db933706da51(r12, rbx_1);
                        
                        if (rdx_2 != 0xd || rax_8)
                        {
                            int128_t* result_1;
                            void** rdx_3;
                            result_1 = _$LT$nix..errno..consts..Errno$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dddc6fc9afca155(rdx_2, i_1);
                            result = result_1;
                            
                            if (result_1)
                                goto label_460692;
                        }
                    }
                    
                    i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&var_2f8);
                    i_1 = i;
                } while (i);
            }
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "file-systemfilessrc/uu/sync/src/…", 0xb))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_348, var_390_1, 4))
                {
                    uu_sync::sync::h1ff0f9205f7ca55d();
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h14d95892ba184393(&var_3a8);
                }
                else
                {
                    var_2e8 = var_398;
                    var_2f8 = var_3a8;
                    uu_sync::fdatasync::h4c99a721be5a0cf3(&var_2f8);
                }
            }
            else
            {
                var_2e8 = var_398;
                var_2f8 = var_3a8;
                uu_sync::syncfs::he57a0533702037d5(&var_2f8);
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&var_348);
            return nullptr;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed56f59dd49a5456(&var_388);
        var_2e8 = var_378;
        var_2f8 = var_388;
        *var_2e8[8] = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h19a1f1b0b127e263(&var_2f8);
        label_460692:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h14d95892ba184393(&var_3a8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&var_348);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_380);
    return result;
}
