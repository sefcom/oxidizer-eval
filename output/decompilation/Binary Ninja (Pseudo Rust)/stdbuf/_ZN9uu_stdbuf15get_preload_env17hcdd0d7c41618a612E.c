
  fn uu_stdbuf::get_preload_env::hcdd0d7c41618a612(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut var_78: i64;
    std::path::Path::join::hb4d8c8bc03e2bc06(&var_78, *arg2, arg2[1]);
    let var_70: *mut c_void;
    let var_68: *mut c_void;
    let mut var_40: i128;
    std::path::Path::with_extension::h2eecadfad52b8ff1(&var_40, var_70, var_68);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb266f29cb85e941f(var_78, var_70);
    std::fs::File::create::hcd4eb751c6dbc5c0(&var_78, &var_40);
    
    if var_78 != 1
    {
        let mut fd: i32 = *var_78[4];
        
        if std::io::Write::write_all::h6140e7df6d61f873(&fd) == 0
        {
            let mut var_28: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1f3fa2d8817656ee(&var_28, &data_41b78f[0xd], 0xa);
            let zmm0_1: i128 = var_28;
            var_78 = zmm0_1;
            let zmm1_1: i128 = var_40;
            arg1[4] = *zmm1_1[8];
            let var_30: i64;
            arg1[5] = var_30;
            let var_18: i64;
            arg1[2] = var_18;
            arg1[3] = zmm1_1;
            *arg1 = zmm0_1;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h10eab31abeb771e6(fd);
        }
        else
        {
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_8a9300;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h10eab31abeb771e6(fd);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb266f29cb85e941f(var_40, 
                *var_40[8]);
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_8a9300;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb266f29cb85e941f(var_40, *var_40[8]);
    }
    
    arg1
}
