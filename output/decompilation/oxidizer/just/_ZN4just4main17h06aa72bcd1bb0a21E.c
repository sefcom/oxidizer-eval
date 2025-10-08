fn just::main() -> long long {
    let v0: std::env::ArgsOs;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u32;  // edx

    v0 = std::env::args_os();
    v2 = just::run::run(&v0);
    if (v2 & 1) {
        std::process::exit(v3); /* do not return */
    }
    return v2;
}
