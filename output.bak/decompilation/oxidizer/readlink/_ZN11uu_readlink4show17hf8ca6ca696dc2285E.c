fn uu_readlink::show(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: i8;  // [sp-0x69]
    let v1: i64;  // [sp-0x68], Other Possible Types: Result<struct16, struct10>
    let v2: i128;  // [sp-0x28]

    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a0, a1);
    if v1 {
        core::option::unwrap_failed("src/uu/readlink/src/readlink.rs"); /* do not return */
    }
    v2 = v1;
    print!("{:?}", &v2);
    if a2 == 11 {
        v1 = std::io::stdio::stdout();
        return <std::io::stdio::Stdout as std::io::Write>::flush(&v1);
    }
    v0 = a2;
    print!("{:?}", &v0);
}
