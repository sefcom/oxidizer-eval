fn bat::input::new_stdin_input(a1: i64, a2: i64) -> : struct160 {
    let a0: u64;  // rdi
    let v0: struct136;  // [bp-0xc0]

    v0 = bat::input::Input::stdin();
    bat::input::named(a0, &v0, a1, a2);
    return;
}
