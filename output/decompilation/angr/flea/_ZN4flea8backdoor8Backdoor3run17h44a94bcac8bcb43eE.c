long long flea::backdoor::Backdoor::run(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a3;
    ::0x681040::core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v0);
    return v0;
}
