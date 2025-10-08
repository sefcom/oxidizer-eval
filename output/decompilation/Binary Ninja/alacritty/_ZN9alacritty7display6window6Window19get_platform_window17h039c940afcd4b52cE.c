
  int64_t alacritty::display::window::Window::get_platform_window::h039c940afcd4b52c(int128_t* arg1, void* arg2, char arg3, void* arg4, char arg5)

{
    void* var_8e0 = arg4;
    char var_8d8 = arg5;
    char const* const var_928 = &data_5021aa;
    int64_t var_920 = 0xe1c;
    int64_t var_918 = 0;
    int128_t var_8b0;
    png::decoder::read_decoder::ReadDecoder$LT$R$GT$::new::h0581ea6d3ad0c615(&var_8b0, &var_928);
    int64_t var_670 = 0x4000000;
    void var_578;
    memcpy(&var_578, &var_8b0, 0x298);
    int32_t var_2e0 = 0x11;
    png::decoder::Decoder$LT$R$GT$::read_info::h94af7fd70d2461d5(&var_8b0, &var_578);
    core::result::Result$LT$T$C$E$GT$::expect::h577d742adaea89de(&var_578, &var_8b0);
    int128_t var_940;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h07b084566afb7c30(
        &var_940, png::decoder::Reader$LT$R$GT$::output_buffer_size::h2f15e68fce2e0225(&var_578));
    char* var_938;
    int64_t var_930;
    png::decoder::Reader$LT$R$GT$::next_frame::h72de32dd90e166b3(&var_8b0, &var_578, var_938, 
        var_930);
    core::ptr::drop_in_place$LT$core..result..Result$LT$png..decoder..OutputInfo$C$png..decoder..stream..DecodingError$GT$$GT$::h5894716279453eb1(&var_8b0);
    int64_t var_918_1 = var_930;
    var_928 = var_940;
    int64_t var_508;
    
    if (0 + -(var_508))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t var_368;
    int32_t var_364;
    winit::icon::Icon::from_rgba::h66c7c29f717b366d(&var_8b0, &var_928, var_368, var_364);
    void var_8d0;
    core::result::Result$LT$T$C$E$GT$::expect::hd556e1259faf7983(&var_8d0, &var_8b0);
    core::ptr::drop_in_place$LT$png..decoder..Reader$LT$std..io..cursor..Cursor$LT$$RF$$u5b$u8$u5d$$GT$$GT$$GT$::hcd5d61d046cde1e1(&var_578);
    _$LT$winit..window..WindowAttributes$u20$as$u20$core..default..Default$GT$::default::h5e7776c25a6677a7(&var_8b0);
    _$LT$winit..window..WindowAttributes$u20$as$u20$winit..platform..x11..WindowAttributesExtX11$GT$::with_name::h36284b0f54cd2711(&var_578, &var_8b0, arg2 + 0x18, arg2 + 0x30);
    bool var_36f = arg3 != 3;
    void var_240;
    memcpy(&var_240, &var_578, 0x210);
    winit::window::WindowAttributes::with_window_icon::h1c2db395a7e09dbd(&var_8b0, &var_240, 
        &var_8d0);
    void var_868;
    void* rsi_11 = &var_868;
    int128_t var_908;
    int128_t var_8f8;
    int32_t rbx_1;
    int32_t rbp_1;
    int128_t var_8a0;
    int128_t var_890;
    int128_t var_880;
    
    if (arg5 != 2)
    {
        var_940 = arg4;
        var_938 = arg5;
        var_928 = var_8b0;
        var_918_1 = var_8a0;
        var_908 = var_890;
        var_8f8 = var_880;
        memcpy(&var_578, rsi_11, 0x1c8);
        rbx_1 = *(arg4 + 8);
        core::ptr::drop_in_place$LT$glutin..platform..x11..X11VisualInfo$GT$::h4bceaf83843a47fc();
        rbp_1 = 1;
    }
    else
    {
        var_8f8 = var_880;
        var_908 = var_890;
        var_918_1 = var_8a0;
        var_928 = var_8b0;
        int32_t var_870;
        rbp_1 = var_870;
        int32_t var_86c;
        rbx_1 = var_86c;
        memcpy(&var_578, rsi_11, 0x1c8);
    }
    int128_t zmm0_2 = var_928;
    arg1[3] = var_8f8;
    arg1[2] = var_908;
    arg1[1] = var_918_1;
    *arg1 = zmm0_2;
    arg1[4] = rbp_1;
    *(arg1 + 0x44) = rbx_1;
    return memcpy(arg1 + 0x48, &var_578, 0x1c8);
}
