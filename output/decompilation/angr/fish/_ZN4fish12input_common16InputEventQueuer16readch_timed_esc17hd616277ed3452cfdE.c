long long fish::input_common::InputEventQueuer::readch_timed_esc(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return a0.readch_timed(a1, core::sync::atomic::atomic_load(&_ZN4fish12input_common17WAIT_ON_ESCAPE_MS17h97e7c7ecf4fdcf4eE, 0));
}
