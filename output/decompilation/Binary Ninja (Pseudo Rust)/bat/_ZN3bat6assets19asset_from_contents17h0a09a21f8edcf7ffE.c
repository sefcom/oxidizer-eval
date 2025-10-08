
  fn bat::assets::asset_from_contents::h0a09a21f8edcf7ff(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_178: *const i8 = "lazy-loaded themetheme [bat warn…";
    let var_170: i64 = 0x11;
    let mut var_150: ();
    flate2::zlib::read::ZlibDecoder$LT$R$GT$::new::hf93ee7f8713fc540(&var_150, arg2, arg3);
    let mut var_168: i64 = 0;
    let var_160: i64 = 1;
    let var_158: i64 = 0;
    let mut var_108: i64;
    bincode::internal::deserialize_from_custom_seed::h9db39926b029fecd(&var_108, &var_168);
    
    if !(0 + -(var_108))
    {
        return memcpy(arg1, &var_108, 0xf8);
    }
    
    let var_100: u64;
    let result: i64 =
        bat::assets::asset_from_contents::_$u7b$$u7b$closure$u7d$$u7d$::h17980ab64d747f46(&arg1[1], 
        &var_178, var_100);
    *arg1 = -0x8000000000000000;
    result
}
