long long fish::reader::read_generation_count()
{
    return core::sync::atomic::atomic_load(&_ZN4fish6reader10GENERATION17h4cfc4679e3b2943bE, 0);
}
