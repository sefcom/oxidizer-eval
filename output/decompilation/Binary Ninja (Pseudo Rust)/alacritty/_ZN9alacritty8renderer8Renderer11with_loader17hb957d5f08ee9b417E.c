
  fn alacritty::renderer::Renderer::with_loader::hb957d5f08ee9b417(arg1: *mut i32) -> i64

{
    let rsi: *mut i64;
    
    if *arg1 != 1
    {
        /* tailcall */
        return alacritty::renderer::text::TextRenderer::with_loader::h1889119908b8fdbb(&arg1[2], 
            rsi);
    }
    
    /* tailcall */
    alacritty::renderer::text::TextRenderer::with_loader::h8a8fe1f0eb664307(&arg1[2], rsi)
}
