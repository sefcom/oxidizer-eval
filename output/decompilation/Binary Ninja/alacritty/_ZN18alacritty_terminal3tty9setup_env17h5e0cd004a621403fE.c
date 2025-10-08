
  int64_t alacritty_terminal::tty::setup_env::h5e0cd004a621403f()

{
    char const* const rdx;
    
    if (!alacritty_terminal::tty::terminfo_exists::hb036c6d2702b0611())
        rdx = "xterm-256colorCOLORTERMtruecolor…";
    else
        rdx = "alacrittyxterm-256colorCOLORTERM…";
    
    std::env::set_var::he01157999e9e4f1e("TERM => M", 4, rdx);
    /* tailcall */
    return std::env::set_var::he01157999e9e4f1e("COLORTERMtruecolor/etc/terminfo/…", 9, 
        "truecolor/etc/terminfo/lib/termi…");
}
