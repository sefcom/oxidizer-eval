fn fd::main() -> void {
    let v0: u64;  // [bp-0x60]
    let v1: struct9;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x8]
    let v5: u64;  // rbx

    v3 = v5;
    v1 = fd::run();
    if v1.field_0 as i8 != 1 {
        _Unwind_Resume(fd::exit_codes::ExitCode::exit(*((&v1.field_0 as &char + 1) as &i8)) as u64);
        core::panicking::panic_in_cleanup(); /* do not return */
    }
    v0 = v2;
    eprintln!("[fd error]: {}", &v0);
    fd::exit_codes::ExitCode::exit(4);
    [D] Unsupported jumpkind Ijk_NoDecode at address 6267400()
}
