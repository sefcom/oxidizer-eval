fn bat::printer::Colors::colored(a0: i64, a1: u8, a2: u32, a3: u8) -> long long {
    let v1: u64;  // rax

    v1 = 60946;
    if (a1 & 1) {
        v1 = bat::terminal::to_ansi_color(a2, a3);
    }
    return struct160 {
        field_0: 0
        field_8: 0
        field_9: <UNKNOWN>
        field_13: <UNKNOWN>
        field_17: <UNKNOWN>
        field_25: <UNKNOWN>
        field_26: <UNKNOWN>
        field_30: <UNKNOWN>
        field_34: <UNKNOWN>
        field_35: <UNKNOWN>
        field_43: <UNKNOWN>
        field_51: <UNKNOWN>
        field_59: <UNKNOWN>
        field_60: <UNKNOWN>
        field_68: <UNKNOWN>
        field_76: <UNKNOWN>
        field_77: <UNKNOWN>
        field_85: <UNKNOWN>
        field_93: <UNKNOWN>
        field_94: <UNKNOWN>
        field_102: <UNKNOWN>
        field_110: <UNKNOWN>
        field_111: <UNKNOWN>
        field_115: <UNKNOWN>
    };
}
