
  void* alacritty::ipc::handle_reply::h596fdf307eae2b15(int64_t arg1, int64_t arg2)

{
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    int64_t var_40;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h69307ed281fbae67(&var_40, 
        arg1);
    void* rax;
    int64_t rdx;
    rax = std::io::append_to_string::hea05006619fdc825(&var_c0, &var_40);
    void* const var_a8 = rax;
    int64_t var_a0 = rdx;
    void* result;
    
    if (!((!rdx | rax) & 1))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf5feec1e9b53eb08(&var_a8);
        var_a8 = var_b8;
        int64_t var_98_1 = 0;
        int64_t** var_60;
        serde_json::de::from_trait::h1645db86271d7214(&var_60, &var_a8);
        int64_t** rax_1 = var_60;
        int64_t var_58;
        
        if (-(rax_1) != -0x8000000000000000)
        {
            int64_t** var_78 = rax_1;
            int64_t var_70_1 = var_58;
            int64_t var_50;
            int64_t var_68_1 = var_50;
            
            if (arg2 == -0x7fffffffffffffff)
            {
                int64_t* var_48 = &var_78;
                var_60 = &var_48;
                int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                var_a8 = &data_c82f40;
                int64_t var_a0_1 = 2;
                int64_t var_88_1 = 0;
                int64_t*** var_98_2 = &var_60;
                int64_t var_90_1 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$$LT$toml..value..MapDeserializer$u20$as$u20$serde..de..MapAccess$GT$..next_value_seed$LT$core..marker..PhantomData$LT$u8$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h16862b29d1d1c4a4(&var_78);
            result = nullptr;
        }
        else
            result = alacritty::ipc::handle_reply::_$u7b$$u7b$closure$u7d$$u7d$::h8161ad08719ba2d6(
                var_58);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hf5feec1e9b53eb08(&var_a8);
        result = nullptr;
    }
    
    int64_t var_38;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..os..unix..net..stream..UnixStream$GT$$GT$::h913b7a3608e4ddc8(var_40, var_38);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_c0);
    return result;
}
