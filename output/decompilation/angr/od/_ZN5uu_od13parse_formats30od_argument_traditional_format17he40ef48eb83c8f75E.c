double uu_od::parse_formats::od_argument_traditional_format(long long a0, long long a1)
{
    unsigned long v1;  // xmm0lq

    switch (a1)
    {
    case 66: case 111:
        *((uint128_t *)&a0[16]) = g_503b88;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E;
    case 68:
        *((uint128_t *)&a0[16]) = g_503ca8;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17h251bc30c385722e3E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17h251bc30c385722e3E;
    case 70: case 101:
        *((uint128_t *)&a0[16]) = g_5038c8;
        *((uint128_t *)a0) = _ZN5uu_od9prn_float15FORMAT_ITEM_F6417h4e1465f7b339c48cE;
        return (unsigned long long)_ZN5uu_od9prn_float15FORMAT_ITEM_F6417h4e1465f7b339c48cE;
    case 72: case 88:
        *((uint128_t *)&a0[16]) = g_503c28;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217hebeb94f8b43a7b87E;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217hebeb94f8b43a7b87E;
    case 73: case 76: case 108:
        *((uint128_t *)&a0[16]) = g_503d48;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17h9e672e2970b254d0E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17h9e672e2970b254d0E;
    case 79:
        *((uint128_t *)&a0[16]) = g_503ba8;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217hd4b8fb69527230c4E;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217hd4b8fb69527230c4E;
    case 97:
        *((uint128_t *)&a0[16]) = g_5027d8;
        *((uint128_t *)a0) = _ZN5uu_od8prn_char13FORMAT_ITEM_A17h29fa15115d588c40E;
        return (unsigned long long)_ZN5uu_od8prn_char13FORMAT_ITEM_A17h29fa15115d588c40E;
    case 98:
        *((uint128_t *)&a0[16]) = g_503b68;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int16FORMAT_ITEM_OCT817hef2644addd76c9d6E;
        return (unsigned long long)_ZN5uu_od7prn_int16FORMAT_ITEM_OCT817hef2644addd76c9d6E;
    case 99:
        *((uint128_t *)&a0[16]) = g_5027f8;
        *((uint128_t *)a0) = _ZN5uu_od8prn_char13FORMAT_ITEM_C17h76f27ef44ba1df33E;
        return (unsigned long long)_ZN5uu_od8prn_char13FORMAT_ITEM_C17h76f27ef44ba1df33E;
    case 100:
        *((uint128_t *)&a0[16]) = g_503c88;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17h6e396b4e07fb8bfeE;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17h6e396b4e07fb8bfeE;
    case 102:
        *((uint128_t *)&a0[16]) = g_5038a8;
        *((uint128_t *)a0) = _ZN5uu_od9prn_float15FORMAT_ITEM_F3217h2b02f4fac18bca9fE;
        return (unsigned long long)_ZN5uu_od9prn_float15FORMAT_ITEM_F3217h2b02f4fac18bca9fE;
    case 104: case 120:
        *((uint128_t *)&a0[16]) = g_503c08;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617ha7e4a2841f632ddbE;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617ha7e4a2841f632ddbE;
    case 105:
        *((uint128_t *)&a0[16]) = g_503d28;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17haa02e5dadb165856E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17haa02e5dadb165856E;
    case 115:
        *((uint128_t *)&a0[16]) = g_503d08;
        *((uint128_t *)a0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17h46c3b88def1c89e5E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17h46c3b88def1c89e5E;
    default:
        *((unsigned long long *)a0) = 3;
        return v1;
    }
}
