long long fish::reader::reader_run_count()
{
    return core::sync::atomic::atomic_load(&_ZN4fish6reader9RUN_COUNT17hd43ff14a0ccba10fE);
}
