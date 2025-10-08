long long fd::hyperlink::host()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((long long *)(std::sync::once_lock::OnceLock<T>::get_or_try_init() + 8));
}
