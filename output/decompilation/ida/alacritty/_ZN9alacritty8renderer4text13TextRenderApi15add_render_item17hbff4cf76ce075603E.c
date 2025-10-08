__int64 __fastcall alacritty::renderer::text::TextRenderApi::add_render_item(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        float a4,
        float a5)
{
  __int64 v6; // r14
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 8);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clipboard_mut(v6);
  if ( !(unsigned __int8)<alacritty::renderer::text::gles2::Batch as alacritty::renderer::text::TextRenderBatch>::is_empty(*(_QWORD *)(v6 + 16)) )
  {
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clipboard_mut(v6);
    if ( *(_DWORD *)(v6 + 24) != *a3 )
      <alacritty::renderer::text::gles2::RenderApi as alacritty::renderer::text::TextRenderApi<alacritty::renderer::text::gles2::Batch>>::render_batch(a1);
  }
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clipboard_mut(v6);
  <alacritty::renderer::text::gles2::Batch as alacritty::renderer::text::TextRenderBatch>::add_item(v6, a2, a3, a4, a5);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clipboard_mut(v6);
  result = <alacritty::renderer::text::gles2::Batch as alacritty::renderer::text::TextRenderBatch>::full(*(_QWORD *)(v6 + 16));
  if ( (_BYTE)result )
    <alacritty::renderer::text::gles2::RenderApi as alacritty::renderer::text::TextRenderApi<alacritty::renderer::text::gles2::Batch>>::render_batch(a1);
  return result;
}