
  int64_t* uu_fold::uumain::uumain::h155a94364b670395(int64_t arg1)

{
    void var_418;
    uucore::Args::collect_lossy::h1cee8c2280f3bcb1(&var_418, arg1);
    int64_t var_410;
    int64_t var_408;
    int128_t var_2f8;
    uu_fold::handle_obsolete::h3fddf2520a33c709(&var_2f8, var_410, var_408);
    int128_t var_388 = var_2f8;
    int64_t var_2d0;
    int64_t var_428 = var_2d0;
    int128_t var_2e0;
    int128_t var_438 = var_2e0;
    int64_t r12;
    r12 = 1;
    uu_fold::uu_app::hfa78df7319f7c039(&var_2f8);
    int64_t var_2e8;
    int64_t var_358 = var_2e8;
    int128_t var_368 = var_388;
    r12 = 1;
    int64_t rbp;
    rbp = 1;
    int64_t var_400;
    clap_builder::builder::command::Command::try_get_matches_from::hea47991cc25bd6e3(&var_400, 
        &var_2f8, &var_368);
    int64_t rax_3 = var_400;
    int64_t* result;
    void* var_3f8;
    
    if (rax_3 != -0x8000000000000000)
    {
        int64_t var_3d0;
        int64_t var_390_1 = var_3d0;
        int128_t var_3e0;
        int128_t var_3a0_1 = var_3e0;
        int128_t var_3f0;
        int128_t var_3b0_1 = var_3f0;
        int64_t var_3c0 = rax_3;
        void* var_3b8_1 = var_3f8;
        r12 = 1;
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3c0, "bytesspacesillegal width value (…", 5);
        char rax_6 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3c0, "spacesillegal width value (): /h…", 6);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h472e17604698523c(
            &var_2f8, &var_3c0, "widthbytesspacesillegal width va…", 5);
        void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::h4339da512d61fbc5(
            "widthbytesspacesillegal width va…", 5, &var_2f8);
        int128_t var_348_1;
        int64_t rax_8;
        void* r14_1;
        
        if (!rax_7)
        {
            rax_8 = var_438;
            var_348_1 = var_438;
            r14_1 = 0x50;
            r12 = 0;
            
            if (rax_8 == -0x8000000000000000)
                goto label_464b45;
            
            goto label_464a86;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_2f8, rax_7);
        rax_8 = var_2f8;
        var_348_1 = var_2f8;
        r12 = 1;
        label_464a86:
        var_2f8 = rax_8;
        var_2f8 = var_348_1;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_400, *var_2f8[8], var_2e8);
        
        if (!var_400)
        {
            r14_1 = var_3f8;
            label_464b27:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&var_2f8);
            label_464b45:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf6edee4d4c95a38(
                &var_2f8, &var_3c0, "filei128 as dyn ERANGEEDEADLKENA…", 4);
            clap_builder::parser::error::MatchesError::unwrap::h5400f4bced3243d7(&var_400, 
                "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
            
            if (!var_400)
            {
                int128_t* rax_9 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                
                if (!rax_9)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hca3da16942e22ce7(
                    &var_2f8);
                int64_t var_358_1 = var_2e8;
                int128_t zmm0_5 = var_2f8;
                var_368 = zmm0_5;
                rax_9[1] = var_2e8;
                *rax_9 = zmm0_5;
                alloc::slice::hack::into_vec::h8f55dd2e2988ff10(&var_2f8, rax_9);
            }
            else
            {
                int128_t var_308_1 = var_3d0;
                int128_t var_318_1 = var_3e0;
                int128_t var_328_1 = var_3f0;
                int128_t var_338 = var_400;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h71544f9847d722f8(&var_2f8, &var_338);
            }
            
            void* result_2;
            void** rdx_7;
            result_2 = uu_fold::fold::h0e99b4443f72c023(*var_2f8[8], var_2e8, rax_5, rax_6, r14_1);
            result = result_2;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h10b4bf408cda2574(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&var_3c0);
            
            if (r12)
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&var_438);
        }
        else
        {
            int64_t* result_1 =
                uu_fold::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hef0e7fe7c92ff8ac(
                *var_2f8[8], var_2e8, *var_400[1]);
            result = result_1;
            
            if (!result_1)
            {
                r14_1 = &data_517fb8;
                goto label_464b27;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&var_3c0);
            
            if (rax_7)
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&var_438);
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
    return result;
}
