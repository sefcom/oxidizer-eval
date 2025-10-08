
  fn uu_install::preserve_timestamps::h613a91b27797a409(arg1: i64, arg2: i64, arg3: i64) -> u64

{
    let mut var_c0: i32;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_c0, arg1);
    let mut var_100: *mut i64;
    
    if var_c0 == 2
    {
        let var_b8: i64;
        let var_f8_1: i64 = var_b8;
        var_100 = 0xa;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_100);
    }
    
    let rax_2: i64 = filetime::set_file_times::hd6d08f3ef3dbf6c2(arg3);
    let mut var_118: i64 = rax_2;
    
    if rax_2 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_118);
    }
    else
    {
        let mut var_120: i64 = rax_2;
        let mut rax_3: *mut i64;
        let mut rdx_2: i64;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_100 = rax_3;
        let var_f8_2: i64 = rdx_2;
        let mut var_110: *mut i64 = &var_100;
        let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
        var_c0 = &data_502188;
        let var_b8_1: i64 = 2;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut i64 = &var_110;
        let var_a8_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        var_100 = &var_120;
        let var_f8_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_c0 = &data_502510;
        let var_b8_2: i64 = 2;
        let var_a0_2: i64 = 0;
        let var_b0_2: *mut *mut i64 = &var_100;
        let var_a8_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc7e2d86a53eff0ef(&var_120);
    }
    
    0
}
