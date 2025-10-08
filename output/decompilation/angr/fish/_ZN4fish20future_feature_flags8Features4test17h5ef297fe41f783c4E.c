char fish::future_feature_flags::Features::test(char a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(&(&_ZN4fish20future_feature_flags8FEATURES17hafcf865b0d05b1c5E)[a0], 4);
}
