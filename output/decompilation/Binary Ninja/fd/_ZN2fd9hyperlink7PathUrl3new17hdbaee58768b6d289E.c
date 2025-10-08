
  int64_t fd::hyperlink::PathUrl::new::hdbaee58768b6d289(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_28;
    fd::filesystem::absolute_path::h431e4f2ac32a5803(&var_28, arg2, arg3);
    int64_t r14 = var_28;
    int64_t result = -(r14);
    int128_t var_20;
    
    if (-(r14) != -0x8000000000000000)
        *(arg1 + 8) = var_20;
    else
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb59c92ea44cd99fa(&var_28);
    *arg1 = r14;
    return result;
}
