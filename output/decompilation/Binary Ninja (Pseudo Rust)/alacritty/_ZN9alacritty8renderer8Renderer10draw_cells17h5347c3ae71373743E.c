
  fn alacritty::renderer::Renderer::draw_cells::h5347c3ae71373743(arg1: *mut i32, arg2: *mut c_void, arg3: i64, arg4: *mut i128) -> i64

{
    let mut var_58: i128;
    
    if *arg1 == 1
    {
        let var_28: i128 = arg4[3];
        let var_38: i128 = arg4[2];
        let var_48: i128 = arg4[1];
        var_58 = *arg4;
        let var_18: i64 = arg3;
        let var_10: *mut c_void = arg2;
        return _$LT$alacritty..renderer..text..glsl3..Glsl3Renderer$u20$as$u20$alacritty..renderer..text..TextRenderer$GT$::with_api::h0914d331dc3203ca(&arg1[2], &var_58, *arg2.byte_offset(0x18), *arg2.byte_offset(0x1c));
    }
    
    let var_28_1: i128 = arg4[3];
    let var_38_1: i128 = arg4[2];
    let var_48_1: i128 = arg4[1];
    var_58 = *arg4;
    let var_18_1: i64 = arg3;
    let var_10_1: *mut c_void = arg2;
    _$LT$alacritty..renderer..text..gles2..Gles2Renderer$u20$as$u20$alacritty..renderer..text..TextRenderer$GT$::with_api::ha40c94eaaab45314(&arg1[2], &var_58)
}
