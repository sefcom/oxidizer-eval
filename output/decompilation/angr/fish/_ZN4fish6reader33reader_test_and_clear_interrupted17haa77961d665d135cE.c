long long fish::reader::reader_test_and_clear_interrupted()
{
    unsigned long long v1;  // rax

    v1 = core::sync::atomic::atomic_load(&_ZN4fish6reader11INTERRUPTED17hc35fd21f5b04b69bE);
    if (!(unsigned int)v1)
        return v1;
    core::sync::atomic::atomic_store(&_ZN4fish6reader11INTERRUPTED17hc35fd21f5b04b69bE, 0);
    return v1 & 4294967295;
}
