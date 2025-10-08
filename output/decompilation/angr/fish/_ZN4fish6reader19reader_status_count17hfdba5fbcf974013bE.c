long long fish::reader::reader_status_count()
{
    return core::sync::atomic::atomic_load(&_ZN4fish6reader12STATUS_COUNT17h87afe7336ab6e9e9E);
}
