
  int64_t uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(int64_t* arg1, int64_t* arg2, char arg3, char arg4, int64_t arg5 @ rbp, int64_t arg6 @ r12)

{
    int64_t var_8 = arg5;
    int64_t var_28 = arg6;
    int64_t r14 = *arg2;
    int64_t result = -(r14);
    int64_t r13;
    
    if (-(r14) != -0x8000000000000000)
    {
        int64_t r13_1 = arg2[1];
        void var_48;
        uu_realpath::canonicalize_relative::ha3a23c9727c26a2f(&var_48, r13_1, arg2[2], arg3, arg4);
        int64_t var_60;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9ab56ab1f2cee605(&var_60, &var_48);
        r13 = var_60;
        int64_t var_58;
        arg6 = var_58;
        int64_t var_50;
        arg5 = var_50;
        
        if (r13 == -0x8000000000000000)
        {
            arg1[1] = arg6;
            arg1[2] = arg5;
            *arg1 = -0x7fffffffffffffff;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(r14, 
                r13_1);
        }
        
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(r14, r13_1);
    }
    else
        r13 = -0x8000000000000000;
    
    *arg1 = r13;
    arg1[1] = arg6;
    arg1[2] = arg5;
    return result;
}
