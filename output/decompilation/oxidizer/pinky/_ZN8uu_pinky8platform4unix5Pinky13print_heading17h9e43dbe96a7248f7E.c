fn uu_pinky::platform::unix::Pinky::print_heading(a0: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x60]

    print!("{}", "Login");
    if *((a0 + 26) as &i8) {
        print!(" {}", "Name");
    }
    print!(" {}", " TTY");
    if *((a0 + 24) as &i8) {
        print!(" {}", "Idle");
    }
    print!(" {}", "When");
    if *((a0 + 29) as &i8) {
        print!(" Where");
    }
    v0 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v0);
}
