long long bat::input::InputKind::description(unsigned long long a0[10], unsigned long long a1[3])
{
    char v0;  // [bp-0x30]
    unsigned long v2;  // rcx
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v2 = a1[0] + 9223372036854775809;
    if (a1[0] >= 9223372036854775810)
        v2 = 0;
    if (v2)
    {
        if (v2 == 1)
        {
            v3 = "STDINIO circle detected. The input from stdin is also an output. Aborting to avoid infinite loop.' is a directory.IO circle detected. The input from '' is also an output. Aborting to avoid infinite loop.";
            v4 = 5;
        }
        else
        {
            v3 = "READERSTDINIO circle detected. The input from stdin is also an output. Aborting to avoid infinite loop.' is a directory.IO circle detected. The input from '' is also an output. Aborting to avoid infinite loop.";
            v4 = 6;
        }
        v5 = a0.to_vec(v3, v4);
    }
    else
    {
        v0.from_utf8_lossy(a1[1], a1[2]);
        v5 = a0.from(&v0);
    }
    a0[3] = 0x8000000000000000;
    a0[6] = 0x8000000000000000;
    a0[9] = 0x8000000000000000;
    return v5;
}
