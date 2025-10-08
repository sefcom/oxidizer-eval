
  int64_t* uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(int64_t* arg1, char* arg2)

{
    int64_t var_38;
    int64_t var_20;
    int64_t rax_3;
    int64_t rcx;
    int64_t rdx;
    
    switch (jump_table_41bd24[*arg2])
    {
        case 0x4c2b7:
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_38, "LS_COLORS=''';\nexport LS_COLORS…", 0xb);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_20, "';\nexport LS_COLORSinternal err…", 0x13);
            label_468056:
            rax_3 = var_20;
            int64_t var_18;
            rcx = var_18;
            int64_t var_10;
            rdx = var_10;
            goto label_46806a;
        }
        case 0x4c2e3:
        {
            var_38 = 0;
            int64_t var_30 = 1;
            int64_t var_28 = 0;
            rcx = 1;
            rax_3 = 0;
            rdx = 0;
            label_46806a:
            arg1[2] = var_28;
            *arg1 = var_38;
            arg1[1] = var_30;
            arg1[3] = rax_3;
            arg1[4] = rcx;
            arg1[5] = rdx;
            return arg1;
            break;
        }
        case 0x4c308:
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_38, "setenv LS_COLORS 'LS_COLORS=''';…", 0x12);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_20, "'';\nexport LS_COLORSinternal er…", 1);
            goto label_468056;
        }
        case 0x4c36f:
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
    }
}
