
  int128_t* uu_wc::files0_iter_file::h4e3b8ab8e030dfca(int64_t* arg1, int64_t arg2, size_t arg3)

{
    int32_t var_68;
    std::fs::File::open::h104bd9348fd76b4f(&var_68, arg2);
    
    if (!var_68)
    {
        int128_t var_38;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_38, arg2, arg3);
        int64_t var_28;
        int64_t var_48_1 = var_28;
        int128_t var_58 = var_38;
        int32_t var_64;
        return uu_wc::files0_iter::h0e34cd9488cdd310(arg1, var_64, &var_58);
    }
    
    int128_t* result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h3635bd652e6372fa();
    *arg1 = -0x7fffffffffffffff;
    arg1[1] = result;
    arg1[2] = &data_531158;
    return result;
}
