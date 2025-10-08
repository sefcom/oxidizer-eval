
  char* just::signal_handler::SignalHandler::install::h1f89de96e5897972(char* arg1, char arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t* rax_1;
    char rdx;
    rax_1 = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
    rax_1[9] = arg2;
    just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::install_signal_handler::hba26c624466e5775(arg1);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_1, rdx & 1);
    return arg1;
}
