long long fish_printf::printf_impl::ConversionSpec::from_char(unsigned int a0)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax

    v2 = v1 & 0xffffffffffffff00 | 17;
    switch (a0)
    {
    case 65:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 7;
    case 67: case 99:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 15;
    case 69:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 9;
    case 70:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 11;
    case 71:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 13;
    case 83: case 115:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 16;
    case 88:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 4;
    case 97:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 6;
    case 100: case 105:
        v2 = 0;
        goto LABEL_12729bf;
    case 101:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 8;
    case 102:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 10;
    case 103:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 12;
    case 110:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 5;
    case 111:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 1;
    case 112:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 14;
    case 117:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 2;
    case 120:
        return (v1 & 0xffffffffffffff00 | 17) & 0xffffffffffffff00 | 3;
    default:
LABEL_12729bf:
        return v2;
    }
}
