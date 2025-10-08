double fish::proc::clock_ticks_to_seconds(long long a0)
{
    unsigned long long v1;  // rax

    v1 = sysconf(2);
    if (v1 <= 0)
        return 0;
    return (unsigned long long)(DivV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a0) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a0) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a0) - 0x45300000000000004330000000000000), v1));
}
