
  void uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(int64_t* arg1, int64_t* arg2, char arg3, char arg4, int64_t arg5 @ r12, int64_t arg6 @ r15)

{
    int64_t var_8 = arg6;
    int64_t var_20 = arg5;
    int64_t r13;
    
    if (*arg2 == -0x8000000000000000)
    {
        r13 = -0x8000000000000000;
        label_4b67c7:
        *arg1 = r13;
        arg1[1] = arg6;
        arg1[2] = arg5;
        return;
    }
    
    int64_t rax_1 = arg2[2];
    int64_t var_68_1 = rax_1;
    int128_t var_78 = *arg2;
    void var_40;
    uu_realpath::canonicalize_relative::h9315a0e677658306(&var_40, *var_78[8], rax_1, arg3, arg4);
    int64_t var_58;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8dc0120961bddde7(&var_58, &var_40, &var_78);
    r13 = var_58;
    int64_t var_50;
    arg6 = var_50;
    int64_t var_48;
    arg5 = var_48;
    
    if (r13 != -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&var_78);
        goto label_4b67c7;
    }
    
    arg1[1] = arg6;
    arg1[2] = arg5;
    *arg1 = -0x7fffffffffffffff;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&var_78);
}
