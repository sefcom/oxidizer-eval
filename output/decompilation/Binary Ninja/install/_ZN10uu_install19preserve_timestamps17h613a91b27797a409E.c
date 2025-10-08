
  uint64_t uu_install::preserve_timestamps::h613a91b27797a409(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_c0;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_c0, arg1);
    int64_t* var_100;
    
    if (var_c0 == 2)
    {
        int64_t var_b8;
        int64_t var_f8_1 = var_b8;
        var_100 = 0xa;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_100);
    }
    
    int64_t rax_2 = filetime::set_file_times::hd6d08f3ef3dbf6c2(arg3);
    int64_t var_118 = rax_2;
    
    if (!rax_2)
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_118);
    else
    {
        int64_t var_120 = rax_2;
        int64_t* rax_3;
        int64_t rdx_2;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_100 = rax_3;
        int64_t var_f8_2 = rdx_2;
        int64_t* var_110 = &var_100;
        int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
        var_c0 = &data_502188;
        int64_t var_b8_1 = 2;
        int64_t var_a0_1 = 0;
        int64_t** var_b0_1 = &var_110;
        int64_t var_a8_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        var_100 = &var_120;
        int64_t (* var_f8_3)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_c0 = &data_502510;
        int64_t var_b8_2 = 2;
        int64_t var_a0_2 = 0;
        int64_t** var_b0_2 = &var_100;
        int64_t var_a8_2 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc7e2d86a53eff0ef(&var_120);
    }
    
    return 0;
}
