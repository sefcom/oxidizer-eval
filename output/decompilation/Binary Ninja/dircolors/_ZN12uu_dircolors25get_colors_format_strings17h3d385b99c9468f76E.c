
  int64_t* uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(int64_t* arg1, char* arg2)

{
    int64_t var_38;
    int64_t var_20;
    int64_t rax_3;
    int64_t rcx;
    int64_t rdx;
    
    switch (*arg2)
    {
        case 0:
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_38, "LS_COLORS='setenv LS_COLORS '';\n…", 0xb);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_20, "';\nexport LS_COLORS'internal er…", 0x13);
            label_4bbb96:
            rax_3 = var_20;
            int64_t var_18;
            rcx = var_18;
            int64_t var_10;
            rdx = var_10;
            goto label_4bbbaa;
        }
        case 1:
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_38, "setenv LS_COLORS '';\nexport LS_…", 0x12);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_20, "'internal error: entered unreach…", 1);
            goto label_4bbb96;
        }
        case 2:
        {
            var_38 = 0;
            int64_t var_30 = 1;
            int64_t var_28 = 0;
            rcx = 1;
            rax_3 = 0;
            rdx = 0;
            label_4bbbaa:
            arg1[2] = var_28;
            *arg1 = var_38;
            arg1[1] = var_30;
            arg1[3] = rax_3;
            arg1[4] = rcx;
            arg1[5] = rdx;
            return arg1;
            break;
        }
        case 3:
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
    }
}
