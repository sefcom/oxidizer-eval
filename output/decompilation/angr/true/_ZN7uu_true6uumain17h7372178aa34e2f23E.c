long long uu_true::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    uu_true::uumain::uumain(a0, a1);
    return uucore::mods::error::get_exit_code();
}
