
  int64_t alacritty::display::Display::draw_search::h54da426c82502e2d(void* arg1, void* arg2, uint64_t arg3)

{
    uint64_t var_48 = arg3;
    int64_t rcx;
    int64_t var_40 = rcx;
    int64_t rax = *(arg1 + 0x7a0);
    int128_t* const var_90;
    
    if (rax > 0xffff)
    {
        var_90 = &data_c827a0;
        int64_t var_88_1 = 1;
        int64_t var_80_1 = 8;
        int128_t var_78_1 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_90);
        /* no return */
    }
    
    int64_t* var_38 = &var_48;
    int64_t (* var_30)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    int64_t var_28 = 0;
    int16_t var_20 = rax;
    var_90 = &data_4e8b60;
    int64_t var_88 = 1;
    int128_t var_78;
    *var_78[8] = &data_5031d8;
    int64_t var_68 = 1;
    int64_t** var_80 = &var_38;
    var_78 = 2;
    void var_60;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_60, 0, arg3, &var_90);
    int16_t* rcx_2 = arg2 + 0x1f9;
    
    if (!(*(arg2 + 0x1f8) & 1))
        rcx_2 = arg2 + 0x273;
    
    void* rax_3 = arg2 + 0x270;
    
    if (*(arg2 + 0x1fc) & 1)
        rax_3 = arg2 + 0x1fd;
    
    int64_t var_58;
    int64_t var_50;
    alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1 + 0xe0, *(arg1 + 0x798), 0, 
        rcx_2[1] << 0x10 | *rcx_2, *(rax_3 + 2) << 0x10 | *rax_3, var_58, var_50 + var_58, 
        arg1 + 0x798, arg1 + 0x5f8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_60);
}
