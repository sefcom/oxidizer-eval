
  fn uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let mut var_38: i64;
    let mut var_20: i64;
    let mut rax_3: i64;
    let mut rcx: i64;
    let mut rdx: i64;
    
    match *arg2
    {
        0 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_38, "LS_COLORS='setenv LS_COLORS '';\n…", 0xb);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_20, "';\nexport LS_COLORS'internal er…", 0x13);
            'label_4bbb96:
            rax_3 = var_20;
            let var_18: i64;
            rcx = var_18;
            let var_10: i64;
            rdx = var_10;
            goto 'label_4bbbaa;
        }
        1 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_38, "setenv LS_COLORS '';\nexport LS_…", 0x12);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h210049b4d21a56e7(
                &var_20, "'internal error: entered unreach…", 1);
            goto 'label_4bbb96;
        }
        2 =>
        {
            var_38 = 0;
            let var_30: i64 = 1;
            let var_28: i64 = 0;
            rcx = 1;
            rax_3 = 0;
            rdx = 0;
            'label_4bbbaa:
            arg1[2] = var_28;
            *arg1 = var_38;
            arg1[1] = var_30;
            arg1[3] = rax_3;
            arg1[4] = rcx;
            arg1[5] = rdx;
            arg1
        }
        3 =>
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
    }
}
