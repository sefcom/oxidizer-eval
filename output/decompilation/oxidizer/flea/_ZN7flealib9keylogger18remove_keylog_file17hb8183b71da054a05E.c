fn flealib::keylogger::remove_keylog_file(a1: &struct24) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x10]
    let v2: core::result::Result<(), std::io::error::Error>;  // rax

    v2 = std::fs::remove_file(a1, a1);
    match v2 {
        Ok(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Ok");
            return;
        },
        Err(_) => {
            v0 = v2;
            <T as alloc::string::SpecToString>::spec_to_string(a0, &v0);
            return;
        },
    }
}
