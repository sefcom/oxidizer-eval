
  fn alacritty::renderer::Renderer::draw_string::he0cf7f189aeb0195(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i32, arg5: i32, arg6: *mut i128, arg7: *mut c_void, arg8: i64) -> i64

{
    let mut var_90: i64 = arg2;
    let mut var_88: i64 = arg3;
    let mut var_98: i16 = arg4;
    let var_96: u8 = arg4 >> 0x10;
    let mut var_94: i16 = arg5;
    let var_92: u8 = arg5 >> 0x10;
    let mut var_99: i8 = 0;
    let mut var_58: ();
    core::iter::traits::iterator::Iterator::enumerate::hef2cc85779210b7b(&var_58, arg6);
    let mut var_80: *mut i8 = &var_99;
    let var_78: *mut i64 = &var_90;
    let var_70: *mut i64 = &var_88;
    let var_68: *mut i16 = &var_98;
    let var_60: *mut i16 = &var_94;
    alacritty::renderer::Renderer::draw_cells::hf2a27e7b194b280c(arg1, arg7, arg8, &var_80)
}
