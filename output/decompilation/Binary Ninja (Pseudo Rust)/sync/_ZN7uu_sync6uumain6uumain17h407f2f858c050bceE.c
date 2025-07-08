
  fn uu_sync::uumain::uumain::h407f2f858c050bce(arg1: i64) -> *mut i64

{
    let mut var_2f8: i128;
    uu_sync::uu_app::hbd9026fe07cb3ff7(&var_2f8);
    let mut var_388: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hc23ef9eb20649cbc(&var_388, 
        &var_2f8, arg1);
    let rax: i64 = var_388;
    let mut result: *mut i64;
    let var_380: i64;
    
    if rax != -0x8000000000000000
    {
        let var_358: i64;
        let var_318_1: i64 = var_358;
        let var_368: i128;
        let var_328_1: i128 = var_368;
        let var_378: i128;
        let var_338_1: i128 = var_378;
        let mut var_348: i64 = rax;
        let var_340_1: i64 = var_380;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h081bf8739e290fe0(
            &var_2f8, &var_348, "filessrc/uu/sync/src/sync.rs0.0.…", 5);
        clap_builder::parser::error::MatchesError::unwrap::hef673200ff6c2f5e(&var_388, 
            "filessrc/uu/sync/src/sync.rs0.0.…", 5, &var_2f8);
        let mut var_3a8: i64;
        let mut var_3a0: i64;
        let mut var_398: i64;
        let mut var_2e8: i128;
        
        if var_388 == 0
        {
            'label_46049f:
            var_3a8 = 0;
            var_3a0 = 8;
            var_398 = 0;
        }
        else
        {
            let var_2c8_1: i128 = var_358;
            let var_2d8_1: i128 = var_368;
            var_2e8 = var_378;
            var_2f8 = var_388;
            let mut var_310: i64;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h93e75ad4c4b808a4(&var_310, &var_2f8);
            let rax_2: i64 = var_310;
            let var_308: i128;
            var_2f8 = var_308;
            
            if rax_2 == -0x8000000000000000
            {
                goto 'label_46049f;
            }
            
            var_3a0 = var_2f8;
            var_3a8 = rax_2;
        }
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, &data_4133fc[8], 4) & var_398 == 0) == 0
        {
            let var_390_1: *const i8 = &data_4133fc[8];
            var_2f8 = var_3a0;
            *var_2f8[8] = var_3a0 + var_398 * 0x18;
            let i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&var_2f8);
            
            if i_2 != 0
            {
                let mut i_1: *mut c_void = i_2;
                let mut i: *mut c_void;
                
                do
                {
                    let r12: *mut *mut c_void = *i_1.byte_offset(8);
                    let rbx_1: u64 = *i_1.byte_offset(0x10);
                    let mut rax_7: i32;
                    let mut rdx_2: i32;
                    rax_7 = nix::fcntl::open::h0c6e2bb6a369b838(r12, rbx_1, 0x800, 0);
                    
                    if rax_7 == 1
                    {
                        let mut rax_8: i8;
                        
                        if rdx_2 == 0xd
                        {
                            rax_8 = std::path::Path::is_dir::h9ac0db933706da51(r12, rbx_1);
                        }
                        
                        if rdx_2 != 0xd || rax_8 != 0
                        {
                            let mut result_1: *mut i128;
                            let mut rdx_3: *mut *mut c_void;
                            result_1 = _$LT$nix..errno..consts..Errno$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dddc6fc9afca155(rdx_2, i_1);
                            result = result_1;
                            
                            if result_1 != 0
                            {
                                goto 'label_460692;
                            }
                        }
                    }
                    
                    i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1aca6a860bec0f51(&var_2f8);
                    i_1 = i;
                } while i != 0;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "file-systemfilessrc/uu/sync/src/…", 0xb) == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_348, var_390_1, 4) == 0
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
        'label_460692:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h14d95892ba184393(&var_3a8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f65eda5a4ca9139(&var_348);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_380);
    }
    result
}
