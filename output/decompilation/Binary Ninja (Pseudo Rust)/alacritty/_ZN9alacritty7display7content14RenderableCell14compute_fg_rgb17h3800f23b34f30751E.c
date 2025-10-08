
  fn alacritty::display::content::RenderableCell::compute_fg_rgb::h3800f23b34f30751(arg1: *mut c_void, arg2: i32, arg3: i32) -> u64

{
    let r8_1: u32 = arg2 >> 0x10;
    let mut rdx_4: u64;
    
    if arg2 == 0
    {
        let rdx_2: *mut c_void = *arg1.byte_offset(0xe8);
        let rax_3: i8 = *rdx_2.byte_offset(0x290);
        let rcx_1: i32 = arg3 & 0x82;
        let mut rax_4: i16;
        
        if rcx_1 > 0x7f
        {
            if rcx_1 != 0x80 && r8_1 == 0x100 && *rdx_2.byte_offset(0x268) == 0
            {
                /* tailcall */
                return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                    *arg1.byte_offset(0x78), *arg1.byte_offset(0xf0), 0x10c);
            }
            
            if rcx_1 == 0x80 || rax_3 == 0
            {
                rax_4 = vte::ansi::NamedColor::to_dim::h924e9e6b4977e3c9(r8_1);
                /* tailcall */
                return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                    *arg1.byte_offset(0x78), *arg1.byte_offset(0xf0), rax_4);
            }
        }
        else if rcx_1 != 0 && rax_3 != 0
        {
            rax_4 = vte::ansi::NamedColor::to_bright::hb283aa39f1be6f52(r8_1);
            /* tailcall */
            return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                *arg1.byte_offset(0x78), *arg1.byte_offset(0xf0), rax_4);
        }
        rdx_4 = r8_1;
    }
    else
    {
        let rdx_1: u32 = arg2 >> 8;
        
        if arg2 == 1
        {
            if arg3 < 0
            {
                /* tailcall */
                return _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(r8_1 << 8 | rdx_1);
            }
            
            return rdx_1 | r8_1 << 8;
        }
        
        let mut rcx_2: i16 = arg3 & 0x82;
        
        if *(*arg1.byte_offset(0xe8)).byte_offset(0x290) != 0
        {
            let mut rax_5: *mut c_void;
            rax_5 = rcx_2 == 2;
            rcx_2 = rdx_1 < 8;
            
            if (rax_5 & rcx_2) == 0
            {
                rdx_4 = rdx_1;
            }
            else
            {
                rdx_4 = (rdx_1 & 7) | 8;
            }
        }
        else if rcx_2 != 0x80
        {
            rdx_4 = rdx_1;
        }
        else if (arg2 & 0xf800) == 0x800
        {
            rdx_4 = (rdx_1 & 0xf) - 8;
        }
        else if rdx_1 >= 8
        {
            rdx_4 = rdx_1;
        }
        else
        {
            rdx_4 = (rdx_1 & 7) + 0x103;
        }
    }
    
    /* tailcall */
    alacritty::display::content::RenderableContent::color::h883a873f7862c055(
        *arg1.byte_offset(0x78), *arg1.byte_offset(0xf0), rdx_4)
}
