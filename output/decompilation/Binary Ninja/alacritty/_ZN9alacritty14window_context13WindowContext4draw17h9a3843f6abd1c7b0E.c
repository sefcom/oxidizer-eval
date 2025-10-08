
  void alacritty::window_context::WindowContext::draw::h9a3843f6abd1c7b0(int128_t* arg1, void* arg2)

{
    *(arg1 + 0x1581) = 0;
    
    if (*(arg1 + 0x1e3a))
        return;
    
    int64_t rax;
    int64_t var_28 = rax;
    *(arg1 + 0x1e38) = 0;
    alacritty::display::Display::process_renderer_update::h58ae5b395e4b889a(&arg1[0x117]);
    
    if (!alacritty::display::bell::VisualBell::completed::h1ddd2d81d136d29e(&arg1[0x171]))
    {
        if (!arg1[0x158])
            *(arg1 + 0x1e38) = 1;
        else if (!*(arg1 + 0x1581))
        {
            *(arg1 + 0x1581) = 1;
            winit::window::Window::request_redraw::h03824d2d23a334d5(&arg1[0x14b]);
        }
    }
    
    char* r12_1 = *(arg1 + 0x1e18) + 0x10;
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r12_1);
    /* tailcall */
    return alacritty::display::Display::draw::hb8d142242f69117d(&arg1[0x117], r12_1, arg2, 
        &arg1[0x1cd], arg1[0x1e2] + 0x10, arg1);
}
