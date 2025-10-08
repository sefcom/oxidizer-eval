fn fd::error::print_error(a0: u64) -> int {
    let v0: struct24;  // [bp-0x20]

    v0 = core::ops::function::FnMut::call_mut(a0);
    eprintln!("[fd error]: {}", &v0);
    return;
}
