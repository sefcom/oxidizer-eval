void fish::signal::signal_clear_cancel()
{
    core::sync::atomic::atomic_store(&_ZN4fish6signal19CANCELLATION_SIGNAL17h32553cc68c890839E, 0);
    return;
}
