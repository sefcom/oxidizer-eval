fn backdoorautomater::sanitizer::sanitize_service_exist(a0: i64) {
    let v0: u128;  // [bp-0x178]
    let v1: u64;  // [bp-0x168]
    let v2: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x160]
    let v3: alloc::borrow::Cow<str>;  // [bp-0x148], Other Possible Types: core::result::Result<std::process::Output, std::io::error::Error>
    let v4: struct56;  // [bp-0x110]
    let v5: u64;  // [bp-0xf0]
    let v6: &str;  // [bp-0xd8], Other Possible Types: struct149, struct24
    let v7: u64;  // [bp-0xc8]
    let v11: u32;  // rdx

    v6 = "systemctl status ";
    v7 = *((a0 + 8) as &i128);
    v2 = alloc::str::join_generic_copy(&v6 as u64, 2, 1, 0);
    v6 = std::process::Command::new("sh");
    v3 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v6, "-c"), &v2));
    v4 = core::result::Result<T,E>::expect(&v3, "src/sanitizer.rs");
    v3 = alloc::string::String::from_utf8_lossy(v5, *((&v4.field_32 as &char + 8) as &i64));
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v3), v11);
    v1 = v7;
    v0 = *(&v6.field_0 as &i128);
    if !v1 {
        panic!("Error ! The service already exist on your system !\n");
    }
    return;
}
