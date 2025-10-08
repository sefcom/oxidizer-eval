
  uint64_t uu_chmod::uumain::uumain::hef7bd93be3cedfc8(int64_t arg1, int64_t arg2)

{
    char const (** const var_2f8)[0xac];
    core::iter::traits::iterator::Iterator::skip::h70fc60295b7e572e(&var_2f8, arg1, arg2);
    uint64_t result_1;
    uu_chmod::extract_negative_modes::h96e49cec7b4bfb40(&result_1, &var_2f8);
    void** result_5 = result_1;
    int128_t var_5f0;
    int128_t var_658 = var_5f0;
    int64_t var_5e0;
    int64_t var_648 = var_5e0;
    uu_chmod::uu_app::h525988f9a6fd06f1(&result_1);
    clap_builder::builder::command::Command::after_help::h3be6003b57cde48e(&var_2f8, &result_1);
    int64_t r13;
    r13 = 1;
    uint64_t result_9;
    clap_builder::builder::command::Command::try_get_matches_from::ha23daf28cee5362a(&result_9, 
        &var_2f8, &var_658);
    uint64_t result_12 = result_9;
    void** result_11;
    uint64_t result;
    void* var_6c8;
    
    if (result_12 != -0x8000000000000000)
    {
        int64_t var_6a0;
        int64_t var_668_1 = var_6a0;
        int128_t var_6b0;
        int128_t var_678_1 = var_6b0;
        int128_t var_6c0;
        int128_t var_688_1 = var_6c0;
        uint64_t result_14 = result_12;
        void* var_690_1 = var_6c8;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_14, "changesquietverbosepreserve-root…", 7);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_14, "quietverbosepreserve-rootRFILEEr…", 5);
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_14, "verbosepreserve-rootRFILEError f…", 7);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_14, "preserve-rootRFILEError flushing…", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc19b6dc66c36ae9b(
            &result_1, &result_14, "RFILEError flushing stdout", 5);
        void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::hfca8d90b4030ba09(
            "RFILEError flushing stdout", 5, &result_1);
        int32_t var_6ec;
        int32_t rbp_1;
        
        if (!rax_6)
        {
            rbp_1 = 0;
            label_459f73:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc19b6dc66c36ae9b(
                &result_1, &result_14, &data_4186e0[0x10], 4);
            void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::hfca8d90b4030ba09(
                &data_4186e0[0x10], 4, &result_1);
            void** result_7;
            void** result_8;
            int64_t var_6d8;
            
            if (result_5 != -0x8000000000000000)
            {
                result_7 = result_5;
                result_8 = result_11;
                int64_t var_5f8;
                var_6d8 = var_5f8;
                r13 = 0;
            }
            else
            {
                if (!rax_12)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                r13 = 1;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_7, rax_12);
            }
            
            void** result_6 = result_5;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h91e7d2de63cdf48c(
                &result_1, &result_14);
            int64_t var_338;
            clap_builder::parser::error::MatchesError::unwrap::h3769cce72ca152ad(&var_338, 
                &result_1);
            
            if (var_338)
            {
                core::iter::traits::iterator::Iterator::collect::h67f57125fe10790e(&result_1, 
                    &var_338);
                uint64_t result_3 = result_1;
                var_2f8 = result_11;
                
                if (result_3 == -0x8000000000000000)
                    goto label_45a04d;
                
                var_6c8 = var_2f8;
                result_9 = result_3;
                
                if (rax_6)
                    goto label_45a07b;
                
                goto label_45a1c1;
            }
            
            label_45a04d:
            result_9 = 0;
            var_6c8 = 8;
            var_6c0 = 0;
            uint64_t result_4;
            
            if (rax_6)
            {
                label_45a07b:
                alloc::vec::Vec$LT$T$C$A$GT$::push::h609dc871f7b5f155(&result_9, &result_7);
                result_4 = -0x8000000000000000;
                
                if (!var_6c0)
                    goto label_45a1f8;
                
                goto label_45a0ae;
            }
            
            label_45a1c1:
            result_4 = result_7;
            result_5 = result_8;
            int64_t var_660 = var_6d8;
            
            if (var_6c0)
            {
                label_45a0ae:
                uucore::features::perms::configure_symlink_and_recursion::h81a2ef7d5fd462f3(
                    &result_1, &result_14, 1);
                result = result_1;
                
                if (result)
                    goto label_45a245;
                
                *var_5f0[8] = rax_2;
                *var_5f0[9] = rax_3;
                *var_5f0[0xa] = rax_4;
                *var_5f0[0xb] = rax_5;
                *var_5f0[0xc] = result_11 & 1;
                var_5f0 = rbp_1;
                *var_5f0[4] = var_6ec;
                result_1 = result_4;
                void** result_10 = result_5;
                int64_t var_5f8_1 = var_660;
                *var_5f0[0xe] = result_11 >> 0x10;
                *var_5f0[0xd] = result_11 >> 8 & 1;
                uint64_t result_2;
                void** rdx_5;
                result_2 = uu_chmod::Chmoder::chmod::h92b1b878e45c814b(&result_1, var_6c8, var_6c0);
                result = result_2;
                core::ptr::drop_in_place$LT$uu_chmod..Chmoder$GT$::h9a8c25ae47d3201a(result_4, 
                    result_5);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb50aa0d76f7479ce(&result_9);
                result_5 = result_6;
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6be49d4609519a46(&result_14);
            }
            else
            {
                label_45a1f8:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc4e0d8744d3033c6(&var_2f8, "missing operandEach MODE is of t…", 0xf);
                int64_t var_2e8;
                int64_t var_5f8_2 = var_2e8;
                result_1 = var_2f8;
                var_5f0 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::hbd41a17ca83e26c9(&result_1);
                label_45a245:
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hce9e210c09021944(result_4, result_5);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb50aa0d76f7479ce(&result_9);
                result_5 = result_6;
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6be49d4609519a46(&result_14);
            }
        }
        else
        {
            std::fs::metadata::ha3c89610aafdf953(&result_1, rax_6);
            
            if (result_1 != 2)
            {
                int32_t var_5d0;
                var_6ec = 0xfff & var_5d0;
                rbp_1 = 1;
                goto label_459f73;
            }
            
            void** result_13 = result_11;
            int64_t rax_8 = *(rax_6 + 8);
            int64_t rcx_2 = *(rax_6 + 0x10);
            result_9 = 0;
            int64_t var_6c8_1 = rax_8;
            var_6c0 = rcx_2;
            *var_6c0[8] = 1;
            int64_t* var_640 = &result_9;
            int64_t (* var_638_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            void*** var_630_1 = &result_13;
            int64_t (* var_628_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_2f8 = &data_4eaea0;
            int64_t var_2f0_1 = 2;
            int64_t var_2d8_1 = 0;
            int64_t** var_2e8_1 = &var_640;
            int64_t var_2e0_1 = 2;
            int128_t var_620;
            core::option::Option$LT$T$GT$::map_or_else::hda764680417bbb7b(&var_620, &var_2f8);
            var_2e0_1 = 1;
            var_2f8 = var_620;
            int64_t var_610;
            int64_t var_2e8_2 = var_610;
            result = alloc::boxed::Box$LT$T$GT$::new::hbd41a17ca83e26c9(&var_2f8);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he50a073861594a25(result_13);
            r13 = 1;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6be49d4609519a46(&result_14);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_6c8);
        r13 = 1;
    }
    
    if (result_5 != -0x8000000000000000 && r13)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h617eeb25d6483ba4(result_5, 
            result_11);
    
    return result;
}
