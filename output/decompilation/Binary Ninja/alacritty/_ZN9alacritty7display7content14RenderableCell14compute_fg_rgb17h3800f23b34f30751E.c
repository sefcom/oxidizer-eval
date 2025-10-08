
  uint64_t alacritty::display::content::RenderableCell::compute_fg_rgb::h3800f23b34f30751(void* arg1, int32_t arg2, int32_t arg3)

{
    uint32_t r8_1 = arg2 >> 0x10;
    uint64_t rdx_4;
    
    if (!arg2)
    {
        void* rdx_2 = *(arg1 + 0xe8);
        char rax_3 = *(rdx_2 + 0x290);
        int32_t rcx_1 = arg3 & 0x82;
        int16_t rax_4;
        
        if (rcx_1 > 0x7f)
        {
            if (rcx_1 != 0x80 && r8_1 == 0x100 && !*(rdx_2 + 0x268))
                /* tailcall */
                return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                    *(arg1 + 0x78), *(arg1 + 0xf0), 0x10c);
            
            if (rcx_1 == 0x80 || !rax_3)
            {
                rax_4 = vte::ansi::NamedColor::to_dim::h924e9e6b4977e3c9(r8_1);
                /* tailcall */
                return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                    *(arg1 + 0x78), *(arg1 + 0xf0), rax_4);
            }
        }
        else if (rcx_1 && rax_3)
        {
            rax_4 = vte::ansi::NamedColor::to_bright::hb283aa39f1be6f52(r8_1);
            /* tailcall */
            return alacritty::display::content::RenderableContent::color::h883a873f7862c055(
                *(arg1 + 0x78), *(arg1 + 0xf0), rax_4);
        }
        rdx_4 = r8_1;
    }
    else
    {
        uint32_t rdx_1 = arg2 >> 8;
        
        if (arg2 == 1)
        {
            if (arg3 < 0)
                /* tailcall */
                return _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(r8_1 << 8 | rdx_1);
            
            return rdx_1 | r8_1 << 8;
        }
        
        int16_t rcx_2 = arg3 & 0x82;
        
        if (*(*(arg1 + 0xe8) + 0x290))
        {
            void* rax_5;
            rax_5 = rcx_2 == 2;
            rcx_2 = rdx_1 < 8;
            
            if (!(rax_5 & rcx_2))
                rdx_4 = rdx_1;
            else
                rdx_4 = (rdx_1 & 7) | 8;
        }
        else if (rcx_2 != 0x80)
            rdx_4 = rdx_1;
        else if ((arg2 & 0xf800) == 0x800)
            rdx_4 = (rdx_1 & 0xf) - 8;
        else if (rdx_1 >= 8)
            rdx_4 = rdx_1;
        else
            rdx_4 = (rdx_1 & 7) + 0x103;
    }
    
    /* tailcall */
    return alacritty::display::content::RenderableContent::color::h883a873f7862c055(*(arg1 + 0x78), 
        *(arg1 + 0xf0), rdx_4);
}
