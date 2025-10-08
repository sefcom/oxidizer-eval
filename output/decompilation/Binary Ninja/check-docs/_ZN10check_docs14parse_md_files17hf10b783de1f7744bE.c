
  int128_t* check_docs::parse_md_files::hf10b783de1f7744b(int128_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t var_a8 = arg3;
    int64_t rcx;
    int64_t var_a0 = rcx;
    int64_t* var_98;
    regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
        "\((.*\.md)\) could not canonical…");
    void var_40;
    core::result::Result$LT$T$C$E$GT$::expect::h35d8f95db58b79ed(&var_40, &var_98);
    int64_t r12 = arg2[2];
    void var_78;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_78, 
        arg2[1], r12);
    void* var_90 = &var_40;
    int64_t var_88 = 0;
    int64_t var_80 = r12;
    int16_t var_48 = 0;
    var_98 = &var_a8;
    core::iter::traits::iterator::Iterator::collect::h49421b740ee691c8(arg1, &var_98);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5096ee0291be299b(&var_40);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfaeafffef128df0d(arg2);
    return arg1;
}
