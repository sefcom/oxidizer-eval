
  fn alacritty::config::normalize_import::h3c4d0292275a0832(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> u64

{
    let mut var_98: i128;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h1a305b48c3568182(&var_98, arg4);
    let var_90: *mut i8;
    let mut r12: *mut i8 = var_90;
    let mut result: u64;
    let mut result_2: u64 = result;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = std::path::Path::strip_prefix::h78cfa837a83b0b87(r12, result_2);
    let mut var_48: i128;
    home::home_dir::hfa89a945395e3159(&var_48);
    let mut var_78: i64 = rax;
    let var_70: i64 = rdx_1;
    let mut var_68: i128 = var_48;
    
    if rax == 0 || -(var_68) == -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$$RF$std..path..Path$C$std..path..StripPrefixError$GT$$C$core..option..Option$LT$std..path..PathBuf$GT$$RP$$GT$::hf8c010cbfe0ec3b8(&var_78);
    }
    else
    {
        let result_1: u64;
        std::path::Path::join::h8a1b8cf00bdd3485(&var_48, *var_68[8], result_1, rax);
        core::mem::drop::ha42964a555fb617b(&var_98);
        result = result_1;
        var_98 = var_48;
        core::mem::drop::ha42964a555fb617b(&var_68);
        r12 = var_90;
        result_2 = result;
    }
    
    if std::path::Path::is_absolute::hf2dacc49683e82ac(r12, result_2) == 0
    {
        let mut rax_6: *mut i8;
        let mut rdx_3: u64;
        rax_6 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
        
        if rax_6 != 0
        {
            std::path::Path::join::h815c8a3958ff5f69(&var_78, rax_6, rdx_3, &var_98);
            result = var_68;
            var_98 = var_78;
        }
    }
    
    arg1[1] = result;
    *arg1 = var_98;
    result
}
