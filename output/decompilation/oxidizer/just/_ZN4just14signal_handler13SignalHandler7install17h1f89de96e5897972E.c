fn just::signal_handler::SignalHandler::install(a0: u64, a1: u8) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax

    v0 = v2;
    *((just::signal_handler::SignalHandler::instance() + 36) as &u8) = a1;
    just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::install_signal_handler(a0);
    return a0;
}
