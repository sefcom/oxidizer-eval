
  int64_t alacritty::event::EventProxy::send_event::h4f35442ca72f14a2(int32_t* arg1, int64_t arg2)

{
    *(arg1 + 0x20);
    void var_d8;
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_d8, arg2);
    void var_198;
    winit::event_loop::EventLoopProxy$LT$T$GT$::send_event::ha003452b73db1a9a(&var_198, arg1);
    return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$winit..event_loop..EventLoopClosed$LT$alacritty..event..Event$GT$$GT$$GT$::ha34e38cbba7ecdb0(&var_198);
}
