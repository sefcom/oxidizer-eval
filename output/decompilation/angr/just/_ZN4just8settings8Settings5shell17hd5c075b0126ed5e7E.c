long long just::settings::Settings::shell(unsigned long long a0[2], unsigned long long a1[20], unsigned long long a2[30])
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // r15
    unsigned long long v3;  // r14

    if (!((char)(((0 ^ a2[24]) & (0 ^ -(a2[24]))) >> 63)))
    {
        v2 = a2[25];
        v3 = a2[26];
        v1 = (a2[27] == 0x8000000000000000 ? a0 + 1.to_vec(&g_830e20, 1) : a0 + 1.collect(a2[28], a2[28] + a2[29] * 24));
    }
    else if (a2[27] != 0x8000000000000000)
    {
        v1 = a0 + 1.collect(a2[28], a2[28] + a2[29] * 24);
        goto LABEL_68a046;
    }
    else if (a1[15] == 0x8000000000000000)
    {
        v1 = a0 + 1.to_vec(&g_830e20, 1);
LABEL_68a046:
        v3 = 2;
        v2 = "shmodimport?unexport src/justfile.rs := \"\"\n";
    }
    else
    {
        v2 = a1[19];
        v3 = a1[1];
        v1 = a0 + 1.collect(a1[16], a1[17] * 48 + a1[16]);
    }
    a0[0] = v2;
    a0[1] = v3;
    return v1;
}
