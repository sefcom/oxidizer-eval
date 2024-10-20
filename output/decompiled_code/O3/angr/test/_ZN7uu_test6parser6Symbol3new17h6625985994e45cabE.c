long long uu_test::parser::Symbol::new::h6625985994e45cab(unsigned long long a0[5], unsigned long long a1[3])
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // r14
    unsigned long long v5;  // r15
    unsigned long long v6;  // r12
    char v7[3];  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rcx

    v4 = a1[0];
    if (v4 == 0x8000000000000000)
    {
        a0[0] = 6;
        return a0;
    }
    v5 = a1[1];
    v6 = a1[2];
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v5, v6);
    if (*((long long *)&v0))
    {
LABEL_4822a7:
        a0[1] = v4;
        a0[2] = v5;
        a0[3] = v6;
        a0[0] = 3;
        return a0;
    }
    v7 = *((long long *)&v1);
    v8 = *((long long *)&v2);
    if (v8 == 3)
    {
        if ((!(!(unsigned short)(v7[2] ^ 113)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 25901))) && (!(!(unsigned short)(v7[2] ^ 101)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 26413))) && (!(!(unsigned short)(v7[2] ^ 116)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 26413))) && (!(!(unsigned short)(v7[2] ^ 101)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 27693))) && (!(!(unsigned short)(v7[2] ^ 116)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 27693))) && (!(!(unsigned short)(v7[2] ^ 101)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 28205))))
        {
            if ((!(!(unsigned short)(v7[2] ^ 102)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 25901))) && (!(!(unsigned short)(v7[2] ^ 116)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 28205))) && (!(!(unsigned short)(v7[2] ^ 116)) || !(!(unsigned short)(*((short *)&v7[0]) ^ 28461))))
            {
                a0[1] = v4;
                a0[2] = v5;
                a0[3] = v6;
                a0[0] = 3;
                return a0;
            }
            a0[2] = v4;
            a0[3] = v5;
            a0[4] = v6;
            a0[1] = 2;
            a0[0] = 4;
            return a0;
        }
        a0[2] = v4;
        a0[3] = v5;
        a0[4] = v6;
        a0[1] = 1;
        a0[0] = 4;
        return a0;
    }
    if (v8 != 2)
    {
        if (v8 != 1)
        {
            a0[1] = v4;
            a0[2] = v5;
            a0[3] = v6;
            a0[0] = 3;
            return a0;
        }
        if (v7[0] == 40)
        {
            v9 = 0;
            goto LABEL_4825a5;
        }
        else
        {
            v9 = 1;
            if (v7[0] == 33)
            {
LABEL_4825a5:
                a0[0] = v9;
                if (v4)
                {
                    __rust_dealloc(v5);
                    return a0;
                }
                return a0;
            }
            else if (v7[0] != 61)
            {
                a0[1] = v4;
                a0[2] = v5;
                a0[3] = v6;
                a0[0] = 3;
                return a0;
            }
        }
    }
    else
    {
        if (!(*((short *)&v7[0]) != 24877) || !(*((short *)&v7[0]) != 28461))
        {
            a0[1] = v4;
            a0[2] = v5;
            a0[3] = v6;
            a0[0] = 2;
            return a0;
        }
        if (*((short *)&v7[0]) != 15677 && *((short *)&v7[0]) != 15649)
        {
            if (!(*((short *)&v7[0]) != 28205) || !(*((short *)&v7[0]) != 31277))
            {
                a0[2] = v4;
                a0[3] = v5;
                a0[4] = v6;
                a0[1] = 0;
                a0[0] = 5;
                return a0;
            }
            else if (...)
            {
                a0[2] = v4;
                a0[3] = v5;
                a0[4] = v6;
                a0[1] = 1;
                a0[0] = 5;
                return a0;
            }
            goto LABEL_4822a7;
        }
    }
    a0[2] = v4;
    a0[3] = v5;
    a0[4] = v6;
    a0[1] = 0;
    a0[0] = 4;
    return a0;
}
