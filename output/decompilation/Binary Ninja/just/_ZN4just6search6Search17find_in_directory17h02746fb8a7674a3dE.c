
  uint64_t just::search::Search::find_in_directory::h02746fb8a7674a3d(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5)

{
    int64_t var_58;
    just::search::Search::justfile::h0dde78ec0504c748(&var_58, arg2, arg3, arg4, arg5);
    int64_t rax = var_58;
    int128_t var_50;
    uint64_t var_40;
    
    if (rax != -0x7ffffffffffffffa)
    {
        arg1[2] = var_40;
        arg1[1] = var_50;
        *(arg1 + 8) = rax;
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    uint64_t var_18 = var_40;
    int128_t var_28 = var_50;
    just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_58, *var_28[8], 
        var_40);
    int64_t rax_1 = var_58;
    
    if (rax_1 != -0x7ffffffffffffffa)
    {
        arg1[2] = var_40;
        arg1[1] = var_50;
        *(arg1 + 8) = rax_1;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_28);
    }
    
    uint64_t var_30 = var_40;
    var_40 = var_50;
    *var_50[8] = var_18;
    int128_t zmm0_1 = var_28;
    var_58 = zmm0_1;
    int64_t var_38;
    arg1[2] = var_38;
    *(arg1 + 0x28) = var_30;
    arg1[1] = *var_50[8];
    *(arg1 + 0x18) = var_40;
    *arg1 = zmm0_1;
    return var_40;
}
