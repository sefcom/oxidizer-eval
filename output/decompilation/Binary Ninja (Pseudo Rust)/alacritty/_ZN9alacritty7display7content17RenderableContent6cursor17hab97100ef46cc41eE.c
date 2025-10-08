
  fn alacritty::display::content::RenderableContent::cursor::hab97100ef46cc41e(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let zmm0: i128 = *arg2.byte_offset(0xc8);
    arg1[1] = *arg2.byte_offset(0xd8);
    *arg1 = zmm0;
    /* tailcall */
    core::ptr::drop_in_place$LT$alacritty..display..content..RenderableContent$GT$::h3ed0299185b41f6a(arg2)
}
