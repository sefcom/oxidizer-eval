fn bat::theme::color_scheme_impl(a0: i8) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    if !a0 {
        v3 = <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::should_detect();
        if v3 {
            return <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::detect();
        }
    } else if a0 != 1 {
        v3 = bat::theme::color_scheme_from_system() as u64;
    } else {
        return <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::detect();
    }
    return v3 & -0x100 | 2;
}
