
  fn alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(arg1: *mut i16, arg2: *mut i16, arg3: *mut i32, arg4: i32, arg5: i32) -> i64

{
    let mut rcx_2: u32;
    
    if arg4 == 0
    {
        rcx_2 = arg1[1] << 0x10 | *arg1;
    }
    else if arg4 != 1
    {
        rcx_2 = arg4 >> 8;
    }
    else
    {
        rcx_2 = arg2[1] << 0x10 | *arg2;
    }
    
    let rax_2: u32 = *arg1;
    let rdx: u32 = arg1[1];
    *arg1 = rcx_2;
    arg1[1] = rcx_2 >> 0x10;
    let rdi: u32 = arg5;
    let mut rax_3: u32;
    
    if rdi == 0
    {
        rax_3 = rax_2 | rdx << 0x10;
    }
    else if rdi != 2
    {
        rax_3 = arg2[1] << 0x10 | *arg2;
    }
    else
    {
        rax_3 = arg5 >> 8;
    }
    
    *arg2 = rax_3;
    arg2[1] = rax_3 >> 0x10;
    let result: i8 = _$LT$alacritty..display..color..CellRgb$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8c6466bddcfe3538(rdi);
    
    if result == 0
    {
        *arg3 = 0x3f800000;
    }
    
    result
}
