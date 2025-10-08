long long fish::kill::KillRing::yank(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3[3];  // rax

    v3 = a1.get();
    if (!v3)
    {
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        *((unsigned long long *)a0) = 0;
        return 0;
    }
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, v3[1], v3[2]);
    *((int128_t *)&a0[8]) = *((int128_t *)&v1);
    *((void* *)a0) = v0;
    return v0;
}
