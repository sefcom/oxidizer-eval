
  fn uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(arg1: *mut i64, arg2: *mut i8) -> *mut i64

{
    let mut var_38: i64;
    let mut var_20: i64;
    let mut rax_3: i64;
    let mut rcx: i64;
    let mut rdx: i64;
    
    match jump_table_41bd24[*arg2]
    {
        0x4c2b7 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_38, "LS_COLORS=''';\nexport LS_COLORS…", 0xb);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_20, "';\nexport LS_COLORSinternal err…", 0x13);
            'label_468056:
            rax_3 = var_20;
            let var_18: i64;
            rcx = var_18;
            let var_10: i64;
            rdx = var_10;
            goto 'label_46806a;
        }
        0x4c2e3 =>
        {
            var_38 = 0;
            let var_30: i64 = 1;
            let var_28: i64 = 0;
            rcx = 1;
            rax_3 = 0;
            rdx = 0;
            'label_46806a:
            arg1[2] = var_28;
            *arg1 = var_38;
            arg1[1] = var_30;
            arg1[3] = rax_3;
            arg1[4] = rcx;
            arg1[5] = rdx;
            arg1
        }
        0x4c308 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_38, "setenv LS_COLORS 'LS_COLORS=''';…", 0x12);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_20, "'';\nexport LS_COLORSinternal er…", 1);
            goto 'label_468056;
        }
        0x4c36f =>
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
    }
}
