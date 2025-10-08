fn uu_readlink::show(a0: u64, a1: u64, a2: u8) -> long long {
    let v0: u8;  // [bp-0x69]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x68], Other Possible Types: std::io::stdio::Stdout
    let v2: u128;  // [bp-0x28]

    v1 = core::str::converts::from_utf8(a0, a1);
    core::option::unwrap(v1);
    v2 = *((&v1 as &char + 8) as &i128);
    print!("{}", &v2);
    if a2 != 11 {
        v0 = a2;
        print!("{}", &v0);
    }
    v1 = std::io::stdio::stdout();
    return <std::io::stdio::Stdout as std::io::Write>::flush(&v1);
}
