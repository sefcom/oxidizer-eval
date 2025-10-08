
  fn alacritty::display::window::Window::get_platform_window::h039c940afcd4b52c(arg1: *mut i128, arg2: *mut c_void, arg3: i8, arg4: *mut c_void, arg5: i8) -> i64

{
    let var_8e0: *mut c_void = arg4;
    let var_8d8: i8 = arg5;
    let mut var_928: *const i8 = &data_5021aa;
    let var_920: i64 = 0xe1c;
    let var_918: i64 = 0;
    let mut var_8b0: i128;
    png::decoder::read_decoder::ReadDecoder$LT$R$GT$::new::h0581ea6d3ad0c615(&var_8b0, &var_928);
    let var_670: i64 = 0x4000000;
    let mut var_578: ();
    memcpy(&var_578, &var_8b0, 0x298);
    let var_2e0: i32 = 0x11;
    png::decoder::Decoder$LT$R$GT$::read_info::h94af7fd70d2461d5(&var_8b0, &var_578);
    core::result::Result$LT$T$C$E$GT$::expect::h577d742adaea89de(&var_578, &var_8b0);
    let mut var_940: i128;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h07b084566afb7c30(
        &var_940, png::decoder::Reader$LT$R$GT$::output_buffer_size::h2f15e68fce2e0225(&var_578));
    let mut var_938: *mut i8;
    let var_930: i64;
    png::decoder::Reader$LT$R$GT$::next_frame::h72de32dd90e166b3(&var_8b0, &var_578, var_938, 
        var_930);
    core::ptr::drop_in_place$LT$core..result..Result$LT$png..decoder..OutputInfo$C$png..decoder..stream..DecodingError$GT$$GT$::h5894716279453eb1(&var_8b0);
    let mut var_918_1: i64 = var_930;
    var_928 = var_940;
    let var_508: i64;
    
    if 0 + -(var_508)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_368: i32;
    let var_364: i32;
    winit::icon::Icon::from_rgba::h66c7c29f717b366d(&var_8b0, &var_928, var_368, var_364);
    let mut var_8d0: ();
    core::result::Result$LT$T$C$E$GT$::expect::hd556e1259faf7983(&var_8d0, &var_8b0);
    core::ptr::drop_in_place$LT$png..decoder..Reader$LT$std..io..cursor..Cursor$LT$$RF$$u5b$u8$u5d$$GT$$GT$$GT$::hcd5d61d046cde1e1(&var_578);
    _$LT$winit..window..WindowAttributes$u20$as$u20$core..default..Default$GT$::default::h5e7776c25a6677a7(&var_8b0);
    _$LT$winit..window..WindowAttributes$u20$as$u20$winit..platform..x11..WindowAttributesExtX11$GT$::with_name::h36284b0f54cd2711(&var_578, &var_8b0, arg2.byte_offset(0x18), arg2.byte_offset(0x30));
    let var_36f: bool = arg3 != 3;
    let mut var_240: ();
    memcpy(&var_240, &var_578, 0x210);
    winit::window::WindowAttributes::with_window_icon::h1c2db395a7e09dbd(&var_8b0, &var_240, 
        &var_8d0);
    let mut var_868: ();
    let rsi_11: *mut c_void = &var_868;
    let mut var_908: i128;
    let mut var_8f8: i128;
    let mut rbx_1: i32;
    let mut rbp_1: i32;
    let var_8a0: i128;
    let var_890: i128;
    let var_880: i128;
    
    if arg5 != 2
    {
        var_940 = arg4;
        var_938 = arg5;
        var_928 = var_8b0;
        var_918_1 = var_8a0;
        var_908 = var_890;
        var_8f8 = var_880;
        memcpy(&var_578, rsi_11, 0x1c8);
        rbx_1 = *arg4.byte_offset(8);
        core::ptr::drop_in_place$LT$glutin..platform..x11..X11VisualInfo$GT$::h4bceaf83843a47fc();
        rbp_1 = 1;
    }
    else
    {
        var_8f8 = var_880;
        var_908 = var_890;
        var_918_1 = var_8a0;
        var_928 = var_8b0;
        let var_870: i32;
        rbp_1 = var_870;
        let var_86c: i32;
        rbx_1 = var_86c;
        memcpy(&var_578, rsi_11, 0x1c8);
    }
    let zmm0_2: i128 = var_928;
    arg1[3] = var_8f8;
    arg1[2] = var_908;
    arg1[1] = var_918_1;
    *arg1 = zmm0_2;
    arg1[4] = rbp_1;
    *arg1.byte_offset(0x44) = rbx_1;
    memcpy(arg1.byte_offset(0x48), &var_578, 0x1c8)
}
