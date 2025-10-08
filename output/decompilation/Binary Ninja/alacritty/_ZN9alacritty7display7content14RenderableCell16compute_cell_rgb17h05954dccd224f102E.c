
  int64_t alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(int16_t* arg1, int16_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)

{
    uint32_t rcx_2;
    
    if (!arg4)
        rcx_2 = arg1[1] << 0x10 | *arg1;
    else if (arg4 != 1)
        rcx_2 = arg4 >> 8;
    else
        rcx_2 = arg2[1] << 0x10 | *arg2;
    
    uint32_t rax_2 = *arg1;
    uint32_t rdx = arg1[1];
    *arg1 = rcx_2;
    arg1[1] = rcx_2 >> 0x10;
    uint32_t rdi = arg5;
    uint32_t rax_3;
    
    if (!rdi)
        rax_3 = rax_2 | rdx << 0x10;
    else if (rdi != 2)
        rax_3 = arg2[1] << 0x10 | *arg2;
    else
        rax_3 = arg5 >> 8;
    
    *arg2 = rax_3;
    arg2[1] = rax_3 >> 0x10;
    char result = _$LT$alacritty..display..color..CellRgb$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8c6466bddcfe3538(rdi);
    
    if (!result)
        *arg3 = 0x3f800000;
    
    return result;
}
