long long fish::common::get_ellipsis_str()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((long long *)core::sync::atomic::atomic_load(&_ZN4fish6common15ELLIPSIS_STRING17h51285a71cda3f8b9E));
}
