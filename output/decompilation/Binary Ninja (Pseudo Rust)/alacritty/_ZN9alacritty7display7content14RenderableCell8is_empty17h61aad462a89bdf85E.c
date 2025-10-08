
  fn alacritty::display::content::RenderableCell::is_empty::h61aad462a89bdf85(arg1: *mut c_void) -> u32

{
    let zmm0: f32 = *arg1.byte_offset(0x18);
    let mut result: u32 = 0;
    zmm0 - 0f;
    
    if !(zmm0 != 0f) && !FCMP_UO(zmm0, 0f) && *arg1.byte_offset(0x1c) == 0x20
        && *arg1.byte_offset(0x10) == 0
    {
        result = (*arg1.byte_offset(0x20) & 0x7a08) == 0;
    }
    
    result
}
