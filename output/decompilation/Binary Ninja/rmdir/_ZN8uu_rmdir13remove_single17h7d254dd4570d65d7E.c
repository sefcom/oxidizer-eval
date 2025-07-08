
  int64_t uu_rmdir::remove_single::h7d254dd4570d65d7(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (arg4 & 0x10000)
    {
        int64_t rax_1;
        int64_t rdx;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        int64_t var_98 = rax_1;
        int64_t var_90_1 = rdx;
        int64_t var_68 = 1;
        int64_t var_60_1 = arg2;
        int64_t var_58_1 = arg3;
        char var_50_1 = 1;
        int64_t* var_88 = &var_98;
        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h39d7d38f25d43a0c;
        int64_t* var_78_1 = &var_68;
        int64_t (* var_70_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        void* const var_48 = &data_50dab8;
        int64_t var_40_1 = 3;
        int64_t var_28_1 = 0;
        int64_t** var_38_1 = &var_88;
        int64_t var_30_1 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&var_48);
    }
    
    int64_t result = std::fs::remove_dir::h0572df07be869037(arg2);
    
    if (result)
    {
        arg1[1] = arg2;
        arg1[2] = arg3;
    }
    
    *arg1 = result;
    return result;
}
