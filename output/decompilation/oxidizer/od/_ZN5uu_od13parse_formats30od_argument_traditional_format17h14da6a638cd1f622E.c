fn uu_od::parse_formats::od_argument_traditional_format(a0: i64, a1: u32) -> Option<struct32> {
    match (a1) {
        66 | 111 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE.field_0
                field_16: g_541ae0.field_0
            });
        }
        68 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32U17h66dd6ebd2b5b827bE.field_0
                field_16: g_541c00.field_0
            });
        }
        70 | 101 => {
            return Some(struct32 {
                field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F6417h1192afa7d58a8f0bE.field_0
                field_16: g_542028.field_0
            });
        }
        72 | 88 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX3217h92607dc086bd3a3cE.field_0
                field_16: g_541b80.field_0
            });
        }
        73 | 76 | 108 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC64S17h280693cf35e81ac1E.field_0
                field_16: g_541ca0.field_0
            });
        }
        79 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT3217h9bef40526ea9d661E.field_0
                field_16: g_541b00.field_0
            });
        }
        97 => {
            return Some(struct32 {
                field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_A17h977264a75b7e76caE.field_0
                field_16: g_542068.field_0
            });
        }
        98 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int16FORMAT_ITEM_OCT817h748c95f91b186723E.field_0
                field_16: g_541ac0.field_0
            });
        }
        99 => {
            return Some(struct32 {
                field_0: _ZN5uu_od8prn_char13FORMAT_ITEM_C17h57e7d318a2a74d25E.field_0
                field_16: g_542088.field_0
            });
        }
        100 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16U17he4343001f7f4b894E.field_0
                field_16: g_541be0.field_0
            });
        }
        102 => {
            return Some(struct32 {
                field_0: _ZN5uu_od9prn_float15FORMAT_ITEM_F3217hc4bad83f49247534E.field_0
                field_16: g_542008.field_0
            });
        }
        104 | 120 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_HEX1617h332dd71c6e61e864E.field_0
                field_16: g_541b60.field_0
            });
        }
        105 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC32S17h4b58f3efff8e46b5E.field_0
                field_16: g_541c80.field_0
            });
        }
        115 => {
            return Some(struct32 {
                field_0: _ZN5uu_od7prn_int18FORMAT_ITEM_DEC16S17h82d4416181fcc583E.field_0
                field_16: g_541c60.field_0
            });
        }
        _ => {
            return struct8 {
                field_0: 3
            };
        }
    }
}
