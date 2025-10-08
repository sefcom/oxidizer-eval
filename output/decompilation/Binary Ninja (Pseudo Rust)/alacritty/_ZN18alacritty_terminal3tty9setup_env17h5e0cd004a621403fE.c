
  fn alacritty_terminal::tty::setup_env::h5e0cd004a621403f() -> i64

{
    let mut rdx: *const i8;
    
    if alacritty_terminal::tty::terminfo_exists::hb036c6d2702b0611() == 0
    {
        rdx = "xterm-256colorCOLORTERMtruecolor…";
    }
    else
    {
        rdx = "alacrittyxterm-256colorCOLORTERM…";
    }
    
    std::env::set_var::he01157999e9e4f1e("TERM => M", 4, rdx);
    /* tailcall */
    std::env::set_var::he01157999e9e4f1e("COLORTERMtruecolor/etc/terminfo/…", 9, 
        "truecolor/etc/terminfo/lib/termi…")
}
