
  fn alacritty::ipc::handle_reply::h596fdf307eae2b15(arg1: i64, arg2: i64) -> *mut c_void

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let var_b0: i64 = 0;
    let mut var_40: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h69307ed281fbae67(&var_40, 
        arg1);
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = std::io::append_to_string::hea05006619fdc825(&var_c0, &var_40);
    let mut var_a8: *mut c_void = rax;
    let var_a0: i64 = rdx;
    let mut result: *mut c_void;
    
    if ((rdx == 0 | rax) & 1) == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf5feec1e9b53eb08(&var_a8);
        var_a8 = var_b8;
        let var_98_1: i64 = 0;
        let mut var_60: *mut *mut i64;
        serde_json::de::from_trait::h1645db86271d7214(&var_60, &var_a8);
        let rax_1: *mut *mut i64 = var_60;
        let var_58: i64;
        
        if -(rax_1) != -0x8000000000000000
        {
            let mut var_78: *mut *mut i64 = rax_1;
            let var_70_1: i64 = var_58;
            let var_50: i64;
            let var_68_1: i64 = var_50;
            
            if arg2 == -0x7fffffffffffffff
            {
                let mut var_48: *mut i64 = &var_78;
                var_60 = &var_48;
                let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                var_a8 = &data_c82f40;
                let var_a0_1: i64 = 2;
                let var_88_1: i64 = 0;
                let var_98_2: *mut *mut *mut i64 = &var_60;
                let var_90_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$$LT$toml..value..MapDeserializer$u20$as$u20$serde..de..MapAccess$GT$..next_value_seed$LT$core..marker..PhantomData$LT$u8$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h16862b29d1d1c4a4(&var_78);
            result = nullptr;
        }
        else
        {
            result = alacritty::ipc::handle_reply::_$u7b$$u7b$closure$u7d$$u7d$::h8161ad08719ba2d6(
                var_58);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf5feec1e9b53eb08(&var_a8);
        result = nullptr;
    }
    
    let var_38: i64;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..os..unix..net..stream..UnixStream$GT$$GT$::h913b7a3608e4ddc8(var_40, var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_c0);
    result
}
