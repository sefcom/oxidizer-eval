long long fish::fork_exec::postfork::get_interpreter(char *a0, char *a1, unsigned int a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v2;  // r14
    unsigned int v3;  // eax
    unsigned int v4;  // ebp
    char *v5;  // r15
    unsigned long long v6;  // r15

    v2 = 0;
    v3 = open(a0, 0, a2);
    if (v3 >= 0)
    {
        v4 = v3;
        v5 = 0;
        do
        {
            v0 = 0;
            if (read(v4, &v0, 1) <= 0 || v0 == 10)
            {
                v2 = v5 + 1;
                goto LABEL_13b295f;
            }
            *((char *)(a1 + v5)) = v0;
            v5 += 1;
        } while (v5 != 127);
        v2 = 128;
        v5 = 127;
LABEL_13b295f:
        *((char *)(a1 + v5)) = 0;
        close(v4);
    }
    v6 = 3;
    if (!(char)core::slice::<impl [T]>::starts_with(a1, 128, "#! /", 4))
    {
        v6 = 2;
        if (!(char)core::slice::<impl [T]>::starts_with(a1, 128, "#!/#!src/fork_exec/spawn.rssrc/fs.rs", 3) && !(char)core::slice::<impl [T]>::starts_with(a1, 128, "#!src/fork_exec/spawn.rssrc/fs.rs", 2))
            return 0;
    }
    v0.from_bytes_with_nul(v6.index(v2.max(v6), a1, 128, &g_14d8c58), a2);
    return v0.unwrap(&g_14d8c70);
}
