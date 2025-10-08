long long just::signal_handler::SignalHandler::install(unsigned long long a0, char a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    char v4;  // dl

    v0 = v2;
    v3 = just::signal_handler::SignalHandler::instance();
    v3->field_24 = a1;
    a0.install_signal_handler();
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v3, v4 & 1);
    return a0;
}
