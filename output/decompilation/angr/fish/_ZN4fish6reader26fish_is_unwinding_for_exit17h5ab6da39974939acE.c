long long fish::reader::fish_is_unwinding_for_exit()
{
    unsigned int v1;  // ebx
    unsigned long long v2;  // rax

    v1 = 0;
    v2 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN4fish6reader10EXIT_STATE17hba3d57e2282796bcE, 0);
    if (!(char)v2)
        return fish::reader::reader_received_sighup();
    if ((unsigned int)v2 != 1)
        v1 = 1;
    return v1;
}
