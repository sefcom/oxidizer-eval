long long fish::signal::signal_check_cancel()
{
    return core::sync::atomic::atomic_load(&_ZN4fish6signal19CANCELLATION_SIGNAL17h32553cc68c890839E);
}
