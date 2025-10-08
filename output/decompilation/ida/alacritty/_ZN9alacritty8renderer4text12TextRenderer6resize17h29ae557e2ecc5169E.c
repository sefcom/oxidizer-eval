void __fastcall __noreturn alacritty::renderer::text::TextRenderer::resize(__int64 a1)
{
  <alacritty::renderer::text::glsl3::Glsl3Renderer as alacritty::renderer::text::TextRenderer>::program(a1);
  alacritty::gl::storage::UseProgram();
}