
  uint64_t uu_install::copy::h306162d3f0e5e6d2(char* arg1, uint64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    uint64_t var_d8;
    uint64_t var_d0;
    
    if (!*(arg5 + 0x63))
    {
        label_469712:
        uu_install::perform_backup::h71eccbd452695050(&var_d8, arg3, arg4, arg5);
        uint64_t rdx_3 = var_d8;
        
        if (rdx_3 == -0x7fffffffffffffff)
            return var_d0;
        
        uint64_t var_a8 = rdx_3;
        int64_t var_c8;
        int64_t var_98_1 = var_c8;
        uint64_t rax_2;
        void** rdx_6;
        rax_2 = uu_install::copy_file::h9c5ec538cb19a460(arg1, arg2, arg3, arg4);
        uint64_t rbx_1;
        
        if (rax_2)
        {
            label_46978a:
            rbx_1 = rax_2;
            label_469792:
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1b9f1de4ce9f7be6(&var_a8);
            return rbx_1;
        }
        
        uint64_t rax_3;
        
        if (*(arg5 + 0x64))
            rax_3 = uu_install::strip_file::hce331b84877bdb5d(arg3, arg4, arg5);
        
        if (*(arg5 + 0x64) && rax_3)
        {
            rbx_1 = rax_3;
            goto label_469792;
        }
        
        rax_2 = uu_install::set_ownership_and_permissions::h4b3ae3ef285be2d9(arg3, arg4, arg5);
        
        if (rax_2)
            goto label_46978a;
        
        if (*(arg5 + 0x62))
            rax_3 = uu_install::preserve_timestamps::h613a91b27797a409(arg1, arg2, arg3);
        
        if (*(arg5 + 0x62) && rax_3)
        {
            rbx_1 = rax_3;
            goto label_469792;
        }
        
        if (*(arg5 + 0x61))
        {
            int64_t* var_70 = 1;
            char* var_68_1 = arg1;
            uint64_t var_60_1 = arg2;
            char var_58_1 = 1;
            int64_t var_90 = 1;
            char* var_88_1 = arg3;
            uint64_t var_80_1 = arg4;
            char var_78_1 = 1;
            int64_t* var_50 = &var_70;
            int64_t (* var_48_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            int64_t* var_40_1 = &var_90;
            int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_d8 = &data_502530;
            int64_t var_d0_1 = 2;
            int64_t var_b8_1 = 0;
            int64_t** var_c8_1 = &var_50;
            int64_t var_c0_1 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            
            if (rdx_3 != -0x8000000000000000)
            {
                var_90 = 1;
                var_88_1 = var_d0;
                char var_78_2 = 1;
                var_70 = &var_90;
                int64_t (* var_68_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_d8 = &data_502560;
                int64_t var_d0_3 = 2;
                int64_t var_b8_2 = 0;
                int64_t** var_c8_3 = &var_70;
                int64_t var_c0_2 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_a8);
            }
            else
            {
                var_d8 = &data_502550;
                int64_t var_d0_2 = 1;
                int64_t var_c8_2 = 8;
                var_c0_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
        }
        else if (rdx_3 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_a8);
    }
    else
    {
        uu_install::need_copy::h897b20bca7aa9813(&var_d8, arg1, arg2, arg3, arg4, arg5);
        uint64_t rax_1 = var_d8;
        
        if (rax_1)
            return rax_1;
        
        if (var_d0)
            goto label_469712;
    }
    return 0;
}
