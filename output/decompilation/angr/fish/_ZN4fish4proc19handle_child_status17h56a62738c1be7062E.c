long long fish::proc::handle_child_status(void* a0, unsigned int a1[44], unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0xb4]
    unsigned int v1;  // [bp-0xb0]
    unsigned int v2;  // [bp-0xac]
    int v3;  // [bp-0xa8], Other Possible Types: void*
    uint128_t v4;  // [bp-0x98]
    uint128_t v5;  // [bp-0x88]
    uint128_t v6;  // [bp-0x78]
    uint128_t v7;  // [bp-0x68]
    uint128_t v8;  // [bp-0x58]
    uint128_t v9;  // [bp-0x48]
    uint128_t v10;  // [bp-0x38]
    int v11;  // [bp-0x28]
    unsigned int v12;  // [bp-0x20]
    void* v13;  // [bp-0x18]
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long v18;  // rax
    unsigned long long v19;  // rax

    v1 = a2;
    v2 = a3;
    a1[42] = a2;
    a1[43] = a3;
    if (((char)a2 & 1))
    {
        v15 = 216;
        if ((char)a3 != 127 && (unsigned int)a3 != 65535)
            goto LABEL_13f3801;
    }
    else
    {
LABEL_13f3801:
        v15 = 215;
    }
    (char *)a1 + v15.store(1);
    v16 = v1.signal_exited();
    if (!(char)v16)
        return v16;
    v0 = v1.signal_code();
    v17 = v0.slice_contains(&g_54aae0, 2);
    if (!(char)v17)
    {
        return v17;
    }
    else if (fish::proc::is_interactive_session())
    {
        v18 = a0.group();
        v0.new();
        return v18.cancel_with_signal(v0);
    }
    else
    {
        v19 = fish::event::is_signal_observed(v0);
        if (!(char)v19)
        {
            *((uint128_t *)&v11) = 0;
            v10 = 0;
            v9 = 0;
            v8 = 0;
            v7 = 0;
            v6 = 0;
            v5 = 0;
            v4 = 0;
            *((uint128_t *)&v3) = 0;
            v13 = 0;
            sigemptyset(&(char)v3);
            v12 = 0;
            v3 = 0;
            sigaction(v0, &v3, NULL);
            return kill(getpid(), v0);
        }
        return v19;
    }
}
