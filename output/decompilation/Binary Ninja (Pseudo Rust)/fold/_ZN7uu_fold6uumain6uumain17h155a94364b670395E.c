
  fn uu_fold::uumain::uumain::h155a94364b670395(arg1: i64) -> *mut i64

{
    let mut var_418: ();
    uucore::Args::collect_lossy::h1cee8c2280f3bcb1(&var_418, arg1);
    let var_410: i64;
    let var_408: i64;
    let mut var_2f8: i128;
    uu_fold::handle_obsolete::h3fddf2520a33c709(&var_2f8, var_410, var_408);
    let var_388: i128 = var_2f8;
    let var_2d0: i64;
    let var_428: i64 = var_2d0;
    let var_2e0: i128;
    let mut var_438: i128 = var_2e0;
    let mut r12: i64;
    r12 = 1;
    uu_fold::uu_app::hfa78df7319f7c039(&var_2f8);
    let var_2e8: i64;
    let var_358: i64 = var_2e8;
    let mut var_368: i128 = var_388;
    r12 = 1;
    let mut rbp: i64;
    rbp = 1;
    let mut var_400: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hea47991cc25bd6e3(&var_400, 
        &var_2f8, &var_368);
    let rax_3: i64 = var_400;
    let mut result: *mut i64;
    let var_3f8: *mut c_void;
    
    if rax_3 != -0x8000000000000000
    {
        let var_3d0: i64;
        let var_390_1: i64 = var_3d0;
        let var_3e0: i128;
        let var_3a0_1: i128 = var_3e0;
        let var_3f0: i128;
        let var_3b0_1: i128 = var_3f0;
        let mut var_3c0: i64 = rax_3;
        let var_3b8_1: *mut c_void = var_3f8;
        r12 = 1;
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3c0, "bytesspacesillegal width value (…", 5);
        let rax_6: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3c0, "spacesillegal width value (): /h…", 6);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h472e17604698523c(
            &var_2f8, &var_3c0, "widthbytesspacesillegal width va…", 5);
        let rax_7: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h4339da512d61fbc5(
            "widthbytesspacesillegal width va…", 5, &var_2f8);
        let mut var_348_1: i128;
        let mut rax_8: i64;
        let mut r14_1: *mut c_void;
        
        if rax_7 == 0
        {
            rax_8 = var_438;
            var_348_1 = var_438;
            r14_1 = 0x50;
            r12 = 0;
            
            if rax_8 == -0x8000000000000000
            {
                goto 'label_464b45;
            }
            
            goto 'label_464a86;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_2f8, rax_7);
        rax_8 = var_2f8;
        var_348_1 = var_2f8;
        r12 = 1;
        'label_464a86:
        var_2f8 = rax_8;
        var_2f8 = var_348_1;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_400, *var_2f8[8], var_2e8);
        
        if var_400 == 0
        {
            r14_1 = var_3f8;
            'label_464b27:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&var_2f8);
            'label_464b45:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf6edee4d4c95a38(
                &var_2f8, &var_3c0, "filei128 as dyn ERANGEEDEADLKENA…", 4);
            clap_builder::parser::error::MatchesError::unwrap::h5400f4bced3243d7(&var_400, 
                "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
            
            if var_400 == 0
            {
                let rax_9: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                
                if rax_9 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hca3da16942e22ce7(
                    &var_2f8);
                let var_358_1: i64 = var_2e8;
                let zmm0_5: i128 = var_2f8;
                var_368 = zmm0_5;
                rax_9[1] = var_2e8;
                *rax_9 = zmm0_5;
                alloc::slice::hack::into_vec::h8f55dd2e2988ff10(&var_2f8, rax_9);
            }
            else
            {
                let var_308_1: i128 = var_3d0;
                let var_318_1: i128 = var_3e0;
                let var_328_1: i128 = var_3f0;
                let mut var_338: i128 = var_400;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h71544f9847d722f8(&var_2f8, &var_338);
            }
            
            let mut result_2: *mut c_void;
            let mut rdx_7: *mut *mut c_void;
            result_2 = uu_fold::fold::h0e99b4443f72c023(*var_2f8[8], var_2e8, rax_5, rax_6, r14_1);
            result = result_2;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h10b4bf408cda2574(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&var_3c0);
            
            if r12 != 0
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&var_438);
            }
        }
        else
        {
            let result_1: *mut i64 =
                uu_fold::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hef0e7fe7c92ff8ac(
                *var_2f8[8], var_2e8, *var_400[1]);
            result = result_1;
            
            if result_1 == 0
            {
                r14_1 = &data_517fb8;
                goto 'label_464b27;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&var_3c0);
            
            if rax_7 != 0
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&var_438);
            }
        }
    }
    else
    {
        r12 = 1;
        rbp = 1;
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&var_438);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h10b4bf408cda2574(
        &var_418);
    result
}
