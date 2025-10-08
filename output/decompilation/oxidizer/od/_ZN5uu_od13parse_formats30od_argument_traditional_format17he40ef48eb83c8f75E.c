fn uu_od::parse_formats::od_argument_traditional_format(a0: i64, a1: i64) -> double {
    match (a1) {
        66 | 111 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E.field_0
                field_16: g_503b88.field_0
            };
        }
        68 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17h251bc30c385722e3E.field_0
                field_16: g_503ca8.field_0
            };
        }
        70 | 101 => {
            return struct32 {
                field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F6417h4e1465f7b339c48cE.field_0
                field_16: g_5038c8.field_0
            };
        }
        72 | 88 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217hebeb94f8b43a7b87E.field_0
                field_16: g_503c28.field_0
            };
        }
        73 | 76 | 108 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17h9e672e2970b254d0E.field_0
                field_16: g_503d48.field_0
            };
        }
        79 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217hd4b8fb69527230c4E.field_0
                field_16: g_503ba8.field_0
            };
        }
        97 => {
            return struct32 {
                field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_A17h29fa15115d588c40E.field_0
                field_16: g_5027d8.field_0
            };
        }
        98 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int16FORMAT_ITEM_OCT817hef2644addd76c9d6E.field_0
                field_16: g_503b68.field_0
            };
        }
        99 => {
            return struct32 {
                field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_C17h76f27ef44ba1df33E.field_0
                field_16: g_5027f8.field_0
            };
        }
        100 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17h6e396b4e07fb8bfeE.field_0
                field_16: g_503c88.field_0
            };
        }
        102 => {
            return struct32 {
                field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F3217h2b02f4fac18bca9fE.field_0
                field_16: g_5038a8.field_0
            };
        }
        104 | 120 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617ha7e4a2841f632ddbE.field_0
                field_16: g_503c08.field_0
            };
        }
        105 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17haa02e5dadb165856E.field_0
                field_16: g_503d28.field_0
            };
        }
        115 => {
            return struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17h46c3b88def1c89e5E.field_0
                field_16: g_503d08.field_0
            };
        }
        _ => {
            return struct8 {
                field_0: 3
            };
        }
    }
}
