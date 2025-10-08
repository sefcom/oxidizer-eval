
  int64_t alacritty::config::parse_config::hb79bebbd33e5efa7(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t result_1;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&result_1, arg2, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h86a2df8af84df241(arg4, &result_1);
    alacritty::config::deserialize_config::h5c79ebe9ac2f1598(&result_1, arg2, arg3, 0);
    int64_t result = result_1;
    int128_t var_a0;
    int128_t var_90;
    
    if (result != 7)
    {
        int128_t var_60;
        *(arg1 + 0x48) = var_60;
        int128_t var_70;
        *(arg1 + 0x38) = var_70;
        int128_t var_80;
        *(arg1 + 0x28) = var_80;
        *(arg1 + 0x18) = var_90;
        *(arg1 + 8) = var_a0;
        *arg1 = result;
    }
    else
    {
        int128_t var_e8 = var_a0;
        void var_50;
        alacritty::config::load_imports::h54203247dc29364f(&var_50, &var_e8, arg2, arg3, arg4, 
            arg5);
        var_a0 = var_90;
        result_1 = var_e8;
        result =
            alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&arg1[1], &var_50, &result_1);
        *arg1 = 7;
    }
    return result;
}
