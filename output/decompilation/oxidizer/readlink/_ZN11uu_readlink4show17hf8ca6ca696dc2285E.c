fn uu_readlink::show(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: u8;  // [bp-0x69]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x68], Other Possible Types: std::io::stdio::Stdout
    let v2: &str;  // [bp-0x28]

    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a0, a1);
    match v1 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(v2) => {
            print!("{}", &v2);
            if a2 != 11 {
                v0 = a2;
                print!("{}", &v0);
            }
            v1 = std::io::stdio::stdout();
            return <std::io::stdio::Stdout as std::io::Write>::flush(&v1);
        },
    }
}
