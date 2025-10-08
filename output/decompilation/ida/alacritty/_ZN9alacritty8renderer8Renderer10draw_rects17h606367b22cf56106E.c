__int64 __fastcall alacritty::renderer::Renderer::draw_rects(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( a4[2] )
    alacritty::gl::storage::Viewport();
  return core::ptr::drop_in_place<alloc::vec::Vec<alacritty::renderer::rects::RenderRect>>(*a4, a4[1]);
}