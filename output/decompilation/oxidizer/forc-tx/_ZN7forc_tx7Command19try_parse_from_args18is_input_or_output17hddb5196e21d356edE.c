fn forc_tx::Command::try_parse_from_args::is_input_or_output(a0: void*, a1: u32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "input");
    if !v3 {
        return <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "output");
    }
    return v3 & -0x100 | 1;
}
