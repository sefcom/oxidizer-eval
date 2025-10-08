
  fn alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i16, arg5: i64, arg6: i64, arg7: i64, arg8: i32) -> i64

{
    let mut r8: i64 = arg7;
    let rax: u32 = arg4;
    let mut rbp: i64;
    let mut zmm1: [u32; 0x4];
    let mut zmm2: [u32; 0x4];
    let mut var_98: *mut *mut [i8; 0xce];
    
    if rax > 0xfff
    {
        if rax == 0x1000
        {
            zmm1 = *arg2.byte_offset(0x10);
            zmm2 = _mm_and_ps(data_4e90d0, zmm1);
            rbp = 1;
        }
        else if rax == 0x2000
        {
            zmm1 = *arg2.byte_offset(0x10);
            zmm2 = _mm_and_ps(data_4e90d0, zmm1);
            rbp = 2;
        }
        else
        {
            if rax != 0x4000
            {
                'label_8622fa:
                var_98 = &data_c83950;
                let var_90: i64 = 1;
                let mut var_a0: ();
                let var_88: *mut c_void = &var_a0;
                let var_80: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_98);
                /* no return */
            }
            
            zmm1 = *arg2.byte_offset(0x14);
            zmm2 = *arg2.byte_offset(0x18);
            rbp = 3;
        }
    }
    else if rax == 8
    {
        zmm1 = *arg2.byte_offset(0x14);
        zmm2 = *arg2.byte_offset(0x18);
        rbp = 0;
    }
    else if rax == 0x200
    {
        zmm1 = *arg2.byte_offset(0x1c);
        zmm2 = *arg2.byte_offset(0x20);
        rbp = 0;
    }
    else
    {
        if rax != 0x800
        {
            goto 'label_8622fa;
        }
        
        let zmm0: [u32; 0x4] = *arg2.byte_offset(0x10);
        zmm1 = 0x3e800000;
        zmm1[0] = 0.25f * zmm0[0];
        zmm2 = 0x3f400000;
        zmm2[0] = 0.75f * zmm0[0];
        let var_58_1: [u32; 0x4] = zmm2;
        zmm2 = *arg2.byte_offset(0x18);
        alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(&var_98, arg3, arg5, 
            arg6, r8, arg8, zmm0, zmm1, zmm2[0]);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg1, &var_98);
        zmm1 = var_58_1;
        r8 = arg7;
        rbp = 0;
    }
    let mut var_48: ();
    alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(&var_48, arg3, arg5, 
        arg6, r8, arg8, *arg2.byte_offset(0x10), zmm1, zmm2[0]);
    let var_31: i8 = rbp;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg1, &var_48)
}
