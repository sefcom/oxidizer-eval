fn uu_chcon::root_dev_ino_warn(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x70], Other Possible Types: u64
    let v1: void*;  // [bp-0x68], Other Possible Types: u64
    let v2: u64;  // [bp-0x60]
    let v3: u8;  // [bp-0x58]
    let v5: u64;  // rdx
    let v6: u64;  // rdx

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "/") {
        v0 = uucore::util_name();
        v1 = v6;
        eprint!("{}: warning: ", &v0);
        v0 = 1;
        v1 = a0;
        v2 = a1;
        v3 = 1;
        return eprintln!("It is dangerous to operate recursively on {} (same as '/'). Use --{} to override this failsafe.", &v0, "no-preserve-root");
    }
    v0 = uucore::util_name();
    v1 = v5;
    eprint!("{}: warning: ", &v0);
    return eprintln!("It is dangerous to operate recursively on '/'. Use --{} to override this failsafe.", "no-preserve-root");
}
