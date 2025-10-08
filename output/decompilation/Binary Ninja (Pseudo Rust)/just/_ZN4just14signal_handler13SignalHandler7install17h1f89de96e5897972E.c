
  fn just::signal_handler::SignalHandler::install::h1f89de96e5897972(arg1: *mut i8, arg2: i8) -> *mut i8

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rax_1: *mut i32;
    let mut rdx: i8;
    rax_1 = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
    rax_1[9] = arg2;
    just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::install_signal_handler::hba26c624466e5775(arg1);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_1, rdx & 1);
    arg1
}
