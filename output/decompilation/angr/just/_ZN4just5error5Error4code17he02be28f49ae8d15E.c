long long just::error::Error::code(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    char v3;  // al
    unsigned long v4;  // rdi
    char v5;  // cl
    unsigned long long v6;  // rax
    unsigned long long v8;  // cc_ndep

    switch (a0->field_0)
    {
    case 3:
        v4 = &a0->padding_8[72];
        v5 = a0->field_58 - 2;
        if (v5 < 5)
        {
            v6 = v5;
            break;
        }
        else
        {
            v6 = 5;
            break;
        }
        if (!(char)v6)
            return 1;
        v2 = v6 & 4294967295;
        if ((unsigned int)v2 == 1)
        {
            v0 = v2;
            *((int *)v4).code();
            return 1;
        }
        else if ((unsigned int)v2 == 3)
        {
            return _ccall(1, 7, (unsigned long long)(unsigned int)*((int *)v4), 4294967168, v8) & 1;
        }
        else
        {
            return 0;
        }
    case 9:
        return 1;
    case 30:
        v4 = &a0->field_4;
        v0 = 0;
        *((int *)v4).code();
        return 1;
    case 44:
        return _ccall(1, 7, (unsigned long long)a0->field_4, 4294967168, v8) & 1;
    case 6: case 20:
        v3 = !((char)a0->field_4 & 127);
    case 4: case 5: case 7: case 8: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43:
        return v3;
    default:
        return 0;
    }
}
