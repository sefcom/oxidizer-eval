
  int128_t* uu_chroot::Options::from::hdf9aee44d298ba74(int128_t* arg1, void* arg2)

{
    int32_t var_d8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(&var_d8, 
        arg2, "newrootgroupsskip-chdir(uutils c…", 7);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
        "newrootgroupsskip-chdir(uutils c…", 7, &var_d8);
    
    if (!rax)
    {
        var_d8 = 6;
        *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_d8);
        arg1[1] = &data_4fabb0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t var_90;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, *(rax + 8), 
            *(rax + 0x10));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(
            &var_d8, arg2, "groupsskip-chdir(uutils coreutil…", 6);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
            "groupsskip-chdir(uutils coreutil…", 6, &var_d8);
        int128_t var_d0;
        int128_t var_c0;
        int64_t var_a8;
        int64_t var_98;
        
        if (!rax_1)
        {
            var_a8 = -0x8000000000000000;
            label_466edd:
            char rax_5 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "skip-chdir(uutils coreutils) 0.0…", 0xa);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(
                &var_d8, arg2, "userspec\n       extern "ENOTUNI…", 8);
            void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
                "userspec\n       extern "ENOTUNI…", 8, &var_d8);
            int128_t var_78;
            int128_t var_68;
            int64_t var_58;
            int64_t r15_1;
            
            if (!rax_6)
                r15_1 = -0x7ffffffffffffffd;
            else
            {
                uu_chroot::parse_userspec::h253265bc6f25e3bc(&var_d8, *(rax_6 + 8), 
                    *(rax_6 + 0x10));
                r15_1 = var_d8;
                var_78 = var_d0;
                var_68 = var_c0;
                int64_t var_b0;
                var_58 = var_b0;
            }
            
            int64_t var_80;
            *var_d0[8] = var_80;
            int128_t zmm0_2 = var_90;
            var_d8 = zmm0_2;
            int128_t zmm1_2 = var_a8;
            *arg1 = zmm0_2;
            arg1[2] = *zmm1_2[8];
            *(arg1 + 0x28) = var_98;
            arg1[1] = *var_d0[8];
            *(arg1 + 0x18) = zmm1_2;
            arg1[3] = r15_1;
            *(arg1 + 0x58) = var_58;
            *(arg1 + 0x48) = var_68;
            *(arg1 + 0x38) = var_78;
            arg1[6] = rax_5;
        }
        else
        {
            uint64_t rdx_3 = *(rax_1 + 0x10);
            
            if (!rdx_3)
            {
                var_a8 = 0;
                int64_t var_a0_1 = 8;
                var_98 = 0;
                goto label_466edd;
            }
            
            uu_chroot::parse_group_list::h961e5c146370f9a1(&var_d8, *(rax_1 + 8), rdx_3);
            int32_t rax_2 = var_d8;
            
            if (rax_2 == 0xe)
            {
                var_a8 = var_d0;
                var_98 = var_c0;
                goto label_466edd;
            }
            
            int128_t var_d4;
            int128_t var_d4_1 = var_d4;
            var_d8 = rax_2;
            *var_c0[8] = *var_c0[8];
            *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_d8);
            arg1[1] = &data_4fabb0;
            *arg1 = -0x8000000000000000;
            int64_t var_88;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h5fa71b8a5a225c58(var_90, var_88);
        }
    }
    
    return arg1;
}
