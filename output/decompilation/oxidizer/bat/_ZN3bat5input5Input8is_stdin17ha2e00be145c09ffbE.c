fn bat::input::Input::is_stdin(a0: u64) -> char {
    return ((0 ^ a0) & (0 ^ -(a0))) >> 63;
}
