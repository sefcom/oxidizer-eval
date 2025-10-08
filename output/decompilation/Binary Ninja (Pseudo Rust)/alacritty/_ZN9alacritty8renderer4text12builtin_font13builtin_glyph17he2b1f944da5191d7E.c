
  fn alacritty::renderer::text::builtin_font::builtin_glyph::he2b1f944da5191d7(arg1: *mut i128, arg2: i32, arg3: *mut f64, arg4: i8, arg5: i8, arg6: i8, arg7: i8) -> i32

{
    let mut rax: i32;
    rax = arg2 - 0x2500 < 0xa0;
    let mut rdi: i32;
    rdi = arg2 - 0x1fb00 < 0x3c;
    rdi |= rax;
    let mut var_98: i128;
    let mut var_88: i128;
    let mut var_78: i128;
    let mut var_68: i128;
    
    if rdi != 1
    {
        let mut rax_4: i32 = arg2 & 0x1ffffc;
        
        if rax_4 != 0xe0b0
        {
            *arg1 = 2;
            return rax_4;
        }
        
        let mut var_50: i32;
        rax_4 = alacritty::renderer::text::builtin_font::powerline_drawing::h744b2bb1b0d13ad6(
            &var_50, arg2, arg3, arg4, arg5);
        
        if var_50 == 2
        {
            *arg1 = 2;
            return rax_4;
        }
        
        let var_20: i128;
        var_68 = var_20;
        let var_30: i128;
        var_78 = var_30;
        let var_40: i128;
        var_88 = var_40;
        var_98 = var_50;
    }
    else
    {
        alacritty::renderer::text::builtin_font::box_drawing::hc55c3d9cdc825cd9(&var_98, arg2, 
            arg3, arg4, arg5);
    }
    
    let var_60: i32;
    let var_60_1: i32 = var_60 - arg6;
    let rax_2: i32 = arg7;
    let var_64: i32;
    let var_64_1: i32 = var_64 - rax_2;
    let zmm0_1: i128 = var_98;
    arg1[2] = var_78;
    arg1[1] = var_88;
    *arg1 = zmm0_1;
    arg1[3] = var_68;
    rax_2
}
