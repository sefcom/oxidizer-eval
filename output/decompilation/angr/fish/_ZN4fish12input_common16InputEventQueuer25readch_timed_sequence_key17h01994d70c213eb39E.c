long long fish::input_common::InputEventQueuer::readch_timed_sequence_key(unsigned long a0, void* a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdi
    void* v5;  // rsi

    v0 = v2;
    v3 = core::sync::atomic::atomic_load(&_ZN4fish12input_common23WAIT_ON_SEQUENCE_KEY_MS17hdedced877705b55dE, 0);
    v4 = a0;
    v5 = a1;
    if (v3 == -1)
        return a0.readch(a1);
    return a0.readch_timed(a1, v3);
}
