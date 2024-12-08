fn uu_od::parse_formats::od_argument_traditional_format(a0: u64, a1: u64) -> int {
    switch (a1) {
    case 66: case 111:
        return struct32 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h8807753078f1410eE
            field_16: g_541808
        };
    case 68:
        return struct32 {
            field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17h579b88a66c4f9503E
            field_16: g_541928
        };
    case 70: case 101:
        return struct32 {
            field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F6417h46b8a4d465fe4c6eE
            field_16: g_542e80
        };
    case 72: case 88:
        return struct32 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217hbae17b47a2373ff6E
            field_16: g_5418a8
        };
    case 73: case 76: case 108:
        return struct32 {
            field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17h4290d36e8c01f11fE
            field_16: g_5419c8
        };
    case 79:
        return struct32 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217hb8da7fb426bf24daE
            field_16: g_541828
        };
    case 97:
        return struct32 {
            field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_A17ha9475514eef2c685E
            field_16: g_541b00
        };
    case 98:
        return struct32 {
            field_0: _ZN5uu_od7prn_int16FORMAT_ITEM_OCT817h1e23f1f3853ab3e3E
            field_16: g_5417e8
        };
    case 99:
        return struct32 {
            field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_C17h7854305fab7645dbE
            field_16: g_541b20
        };
    case 100:
        return struct32 {
            field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17h6f1be9654da3d2f4E
            field_16: g_541908
        };
    case 102:
        return struct32 {
            field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F3217h5b3699c8c15d2904E
            field_16: g_542e60
        };
    case 104: case 120:
        return struct32 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617h6f50ad0839abb66fE
            field_16: g_541888
        };
    case 105:
        return struct32 {
            field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17h524ff4b1c7de2e19E
            field_16: g_5419a8
        };
    case 115:
        return struct32 {
            field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17hc06325e43c067781E
            field_16: g_541988
        };
    default:
        return struct8 {
            field_0: 3
        };
    }
}
