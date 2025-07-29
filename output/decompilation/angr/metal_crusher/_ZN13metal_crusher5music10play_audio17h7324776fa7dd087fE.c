long long metal_crusher::music::play_audio()
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]

    v1 = 0x8000000000000000;
    v0 = 0;
    v2 = 0;
    v3.spawn_unchecked(&v0);
    v0.expect(&v3);
    return ::0x79b660::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v0);
}
