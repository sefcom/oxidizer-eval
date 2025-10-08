
  int64_t linera_summary::github::GithubContext::get_local_git_info::h57dc8e6f5dcc2bb3(int128_t* arg1)

{
    void** const var_a8;
    git2::repo::Repository::open_from_env::h79ab167bfd5dce3b(&var_a8);
    char result;
    int64_t rdx;
    result = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h7b702a86a60c088e(&var_a8);
    
    if (result & 1)
    {
        *(arg1 + 8) = rdx;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_b0 = rdx;
    git2::repo::Repository::head::h5f705e83c3730039(&var_a8, &var_b0);
    void** const rcx = var_a8;
    int64_t var_a0;
    int64_t var_98;
    
    if (!rcx)
    {
        int64_t var_b8 = var_a0;
        git2::reference::Reference::peel_to_commit::h096eb58399d37602(&var_a8, &var_b8);
        void** const rcx_1 = var_a8;
        
        if (!rcx_1)
        {
            int64_t var_58 = var_a0;
            int128_t var_28;
            git2::commit::Commit::id::h75f5b774da928f64(&var_28, &var_58);
            int128_t var_40;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7a7f7d96c5bdc7cf(
                &var_40, &var_28);
            core::ptr::drop_in_place$LT$git2..commit..Commit$GT$::hb88ec7ba09ec5f8d(&var_58);
            uint64_t rax_13;
            
            if (!git2::reference::Reference::is_branch::h0eaed2db323e3e10(&var_b8))
            {
                var_a8 = &data_cf3460;
                int64_t var_a0_3 = 1;
                int64_t var_98_4 = 8;
                int128_t var_90_2 = {0};
                rax_13 = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_a8);
                label_918adc:
                *(arg1 + 8) = rax_13;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_40);
                core::ptr::drop_in_place$LT$git2..reference..Reference$GT$::h02cad6968eda8d49(
                    &var_b8);
            }
            else
            {
                int64_t rax_5;
                uint64_t rdx_3;
                rax_5 = git2::reference::Reference::shorthand::h156796cbccb63b3e(&var_b8);
                
                if (!rax_5)
                {
                    var_a8 = &data_cf3450;
                    int64_t var_a0_4 = 1;
                    int64_t var_98_5 = 8;
                    int128_t var_90_3 = {0};
                    rax_13 = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_a8);
                    goto label_918adc;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h81302a4b01e720c3(&var_a8, rax_5, rdx_3);
                var_58 = var_a8;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h81302a4b01e720c3(&var_28, "mainincbkrai\t", 4);
                int64_t var_18;
                int64_t var_68_1 = var_18;
                int128_t zmm0_2 = var_28;
                int128_t var_78_1 = zmm0_2;
                int128_t zmm1_1 = var_40;
                var_a8 = zmm1_1;
                int128_t zmm2_1 = var_58;
                arg1[4] = var_18;
                arg1[3] = zmm0_2;
                arg1[2] = *zmm2_1[8];
                *(arg1 + 0x28) = var_98;
                int64_t var_30;
                arg1[1] = var_30;
                *(arg1 + 0x18) = zmm2_1;
                *arg1 = zmm1_1;
                core::ptr::drop_in_place$LT$git2..reference..Reference$GT$::h02cad6968eda8d49(
                    &var_b8);
            }
        }
        else
        {
            var_a8 = rcx_1;
            int64_t var_a0_2 = var_a0;
            int64_t var_98_2 = var_98;
            *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h292f58dd015d095a(&var_a8);
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$git2..reference..Reference$GT$::h02cad6968eda8d49(&var_b8);
        }
    }
    else
    {
        var_a8 = rcx;
        int64_t var_a0_1 = var_a0;
        int64_t var_98_1 = var_98;
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h292f58dd015d095a(&var_a8);
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$git2..repo..Repository$GT$::h38ea74f1f8f24a95(&var_b0);
}
