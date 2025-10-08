
  uint8_t alacritty::display::content::RenderableContent::renderable_cursor::hcb11f2b38d3f4bfc(int128_t* arg1, void* arg2, void* arg3)

{
    void* rdx = *(arg2 + 0xe8);
    uint64_t rax_2 = *(arg2 + 0xc0) >> 0xd & 8;
    char r12 = *(rdx + rax_2 + 0x200);
    uint32_t r14_2 = *(rdx + rax_2 + 0x203) << 0x10 | *(rdx + rax_2 + 0x201);
    int32_t rax_4 = core::option::Option$LT$T$GT$::map_or::hc905b7bfb43bc946(
        *(*(arg2 + 0x78) + 0x408), *(rdx + rax_2 + 0x204));
    char r15 = rax_4;
    uint32_t rbp_1 = rax_4 >> 8;
    uint32_t rax_5;
    
    if (r15 != 2 || r12 != 2)
    {
        uint32_t rax_6 = r12;
        uint32_t r12_3 = *(arg3 + 0x24) << 0x10 | *(arg3 + 0x22);
        uint32_t r13_3 = *(arg3 + 0x27) << 0x10 | *(arg3 + 0x25);
        int128_t zmm0 = vte::ansi::Rgb::contrast::h2e276bdc884afba0(r12_3, r13_3);
        rax_5 = r12_3;
        
        if (rax_6)
        {
            rax_5 = r13_3;
            
            if (rax_6 != 1)
                rax_5 = r14_2;
        }
        
        if (r15)
        {
            r12_3 = r13_3;
            
            if (r15 == 2)
                r12_3 = rbp_1;
        }
        
        rbp_1 = r12_3;
        
        if (!(1.5 <= zmm0))
        {
            rbp_1 = *(rdx + 0x272) << 0x10 | *(rdx + 0x270);
            rax_5 = *(rdx + 0x275) << 0x10 | *(rdx + 0x273);
        }
    }
    else
        rax_5 = r14_2;
    
    int32_t rcx_8 = 2 - 0;
    *(arg1 + 0x1a) = *(arg2 + 0x118);
    *(arg1 + 0x14) = rbp_1;
    *(arg1 + 0x16) = rbp_1 >> 0x10;
    *(arg1 + 0x17) = rax_5;
    uint8_t result = rax_5 >> 0x10;
    *(arg1 + 0x19) = result;
    arg1[1] = rcx_8;
    *arg1 = *(arg2 + 0x100);
    return result;
}
