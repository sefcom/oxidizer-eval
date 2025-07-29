double uu_od::parse_formats::od_argument_traditional_format(long long a0, long long a1)
{
    unsigned long v1;  // xmm0lq

    switch (a1)
    {
    case 66: case 111:
        a0->field_10 = g_595aa8;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h684cc6182f9bc233E;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h684cc6182f9bc233E;
    case 68:
        a0->field_10 = g_595bc8;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17ha83e3c2713fb73f4E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17ha83e3c2713fb73f4E;
    case 70: case 101:
        a0->field_10 = g_595f58;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od9prn_float15FORMAT_ITEM_F6417h93cbc898acb6ea25E;
        return (unsigned long long)_ZN5uu_od9prn_float15FORMAT_ITEM_F6417h93cbc898acb6ea25E;
    case 72: case 88:
        a0->field_10 = g_595b48;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217h074f21066ca980c2E;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217h074f21066ca980c2E;
    case 73: case 76: case 108:
        a0->field_10 = g_595c68;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17hdb650782dd3b4af7E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17hdb650782dd3b4af7E;
    case 79:
        a0->field_10 = g_595ac8;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217h2886f113c984a5baE;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217h2886f113c984a5baE;
    case 97:
        a0->field_10 = g_5967c0;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od8prn_char13FORMAT_ITEM_A17h05d58b2f86b3106eE;
        return (unsigned long long)_ZN5uu_od8prn_char13FORMAT_ITEM_A17h05d58b2f86b3106eE;
    case 98:
        a0->field_10 = g_595a88;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int16FORMAT_ITEM_OCT817h7294ab820238ba4dE;
        return (unsigned long long)_ZN5uu_od7prn_int16FORMAT_ITEM_OCT817h7294ab820238ba4dE;
    case 99:
        a0->field_10 = g_5967e0;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od8prn_char13FORMAT_ITEM_C17h23bab002cd1a8fbfE;
        return (unsigned long long)_ZN5uu_od8prn_char13FORMAT_ITEM_C17h23bab002cd1a8fbfE;
    case 100:
        a0->field_10 = g_595ba8;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17hc32d518321880cefE;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17hc32d518321880cefE;
    case 102:
        a0->field_10 = g_595f38;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od9prn_float15FORMAT_ITEM_F3217he34e15b72d36b8a1E;
        return (unsigned long long)_ZN5uu_od9prn_float15FORMAT_ITEM_F3217he34e15b72d36b8a1E;
    case 104: case 120:
        a0->field_10 = g_595b28;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617h3338b8e142ed187aE;
        return (unsigned long long)_ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617h3338b8e142ed187aE;
    case 105:
        a0->field_10 = g_595c48;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17h1f0298b17f8f968eE;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17h1f0298b17f8f968eE;
    case 115:
        a0->field_10 = g_595c28;
        *((uint128_t *)&a0->field_0) = _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17hd4e347b83f445fc9E;
        return (unsigned long long)_ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17hd4e347b83f445fc9E;
    default:
        *((unsigned long long *)&a0->field_0) = 3;
        return v1;
    }
}
