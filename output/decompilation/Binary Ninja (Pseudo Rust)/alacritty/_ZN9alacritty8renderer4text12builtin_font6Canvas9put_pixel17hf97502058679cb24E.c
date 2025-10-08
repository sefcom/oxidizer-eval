
  fn alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1: *mut c_void, arg2: i32, arg3: f32, arg4: f32)

{
    if !(0f > arg3) && !(0f > arg4)
    {
        let mut rax: i64 = *arg1.byte_offset(0x18);
        
        if rax < 0
        {
            let mut zmm2: i32 = (rax & 1) | rax >> 1;
            
            if !(arg3 > zmm2 + zmm2 + -1f)
            {
                'label_8673a3:
                let rcx_3: i64 = *arg1.byte_offset(0x20);
                
                if rcx_3 < 0
                {
                    zmm2 = (rcx_3 & 1) | rcx_3 >> 1;
                    
                    if !(arg4 > zmm2 + zmm2 + -1f)
                    {
                        'label_8673fc:
                        let r8_1: i64 = arg3;
                        let mut rcx_9: i64 = (r8_1 >> 0x3f & (arg3 - 9.22337204e+18f)) | r8_1;
                        let zmm3: f32 = {0};
                        
                        if arg3 < zmm3
                        {
                            rcx_9 = 0;
                        }
                        
                        if arg3 > 1.8446743e+19f
                        {
                            rcx_9 = -1;
                        }
                        
                        let r10_1: i64 = arg4;
                        let mut r11_4: i64 = (r10_1 >> 0x3f & (arg4 - 9.22337204e+18f)) | r10_1;
                        
                        if arg4 < zmm3
                        {
                            r11_4 = 0;
                        }
                        
                        if arg4 > 1.8446743e+19f
                        {
                            r11_4 = -1;
                        }
                        
                        let rax_2: i64 = rax * r11_4 + rcx_9;
                        let rcx_10: i64 = *arg1.byte_offset(0x10);
                        
                        if rax_2 >= rcx_10
                        {
                            let var_8: i64 = rax_2;
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_2, rcx_10);
                            /* no return */
                        }
                        
                        let rcx_11: *mut i8 = *arg1.byte_offset(8);
                        rax = rax_2 * 3;
                        
                        if rcx_11[rax] < arg2
                        {
                            let rcx_12: *mut c_void = &rcx_11[rax];
                            *rcx_12 = arg2;
                            *rcx_12.byte_offset(1) = arg2 >> 8;
                        }
                    }
                }
                else if !(arg4 > rcx_3 + -1f)
                {
                    goto 'label_8673fc;
                }
            }
        }
        else if arg3 <= rax + -1f
        {
            goto 'label_8673a3;
        }
    }
}
