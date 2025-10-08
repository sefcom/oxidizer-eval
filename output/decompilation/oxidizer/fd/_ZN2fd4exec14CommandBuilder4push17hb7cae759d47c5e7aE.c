fn fd::exec::CommandBuilder::push(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x70]
    let v1: struct24;  // [bp-0x70]
    let v2: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x58], Other Possible Types: struct24
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rdx

    if *((a0 + 320) as &i64) - 1 < *((a0 + 312) as &i64) {
        v4 = fd::exec::CommandBuilder::finish(a0);
        if v4 {
            return v4;
        }
    }
    v0 = fd::fmt::FormatTemplate::generate(a0, a1, a2, a3, a4);
    v2 = core::iter::traits::iterator::Iterator::chain(&v0, *((a0 + 64) as &i64));
    if !argmax::Command::args_would_fit(*((a0 + 304) as &i64), &v2) {
        v5 = fd::exec::CommandBuilder::finish(a0);
        if v5 {
            return v5;
        }
    }
    v2 = v1;
    if (argmax::Command::try_arg(a0 + 80, &v2) & 1) {
        return v6;
    }
    *((a0 + 312) as &i64) = *((a0 + 312) as &i64) + 1;
    return 0;
}
