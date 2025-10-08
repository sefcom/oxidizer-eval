__int64 __fastcall alacritty::renderer::Renderer::was_context_reset(char a1)
{
  if ( (a1 & 1) != 0 )
    alacritty::gl::storage::GetGraphicsResetStatus();
  return 0LL;
}