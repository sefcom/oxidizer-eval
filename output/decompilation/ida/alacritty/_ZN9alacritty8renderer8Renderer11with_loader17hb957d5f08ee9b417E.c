void __fastcall __noreturn alacritty::renderer::Renderer::with_loader(_DWORD *a1)
{
  _DWORD *v2; // rdi

  v2 = a1 + 2;
  if ( *a1 == 1 )
    alacritty::renderer::text::TextRenderer::with_loader(v2);
  alacritty::renderer::text::TextRenderer::with_loader(v2);
}