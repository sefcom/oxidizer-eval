long long fish::common::get_omitted_newline_str()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((long long *)core::sync::atomic::atomic_load(&_ZN4fish6common19OMITTED_NEWLINE_STR17h460952e2cf288db7E));
}
