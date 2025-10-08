
  int64_t bat::assets::asset_from_contents::h0a09a21f8edcf7ff(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char const* const var_178 = "lazy-loaded themetheme [bat warn…";
    int64_t var_170 = 0x11;
    void var_150;
    flate2::zlib::read::ZlibDecoder$LT$R$GT$::new::hf93ee7f8713fc540(&var_150, arg2, arg3);
    int64_t var_168 = 0;
    int64_t var_160 = 1;
    int64_t var_158 = 0;
    int64_t var_108;
    bincode::internal::deserialize_from_custom_seed::h9db39926b029fecd(&var_108, &var_168);
    
    if (!(0 + -(var_108)))
        return memcpy(arg1, &var_108, 0xf8);
    
    uint64_t var_100;
    int64_t result =
        bat::assets::asset_from_contents::_$u7b$$u7b$closure$u7d$$u7d$::h17980ab64d747f46(&arg1[1], 
        &var_178, var_100);
    *arg1 = -0x8000000000000000;
    return result;
}
