long long fish::kill::KillRing::yank_rotate(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a1.rotate_left();
    return a0.yank(a1);
}
