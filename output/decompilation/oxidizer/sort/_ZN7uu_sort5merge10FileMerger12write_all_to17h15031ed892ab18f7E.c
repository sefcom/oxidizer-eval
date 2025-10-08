fn uu_sort::merge::FileMerger::write_all_to(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x68], Other Possible Types: struct9
    let v3: Result<struct16, struct9>;  // [bp-0x48], Other Possible Types: struct24
    let v4: u448;  // [bp-0x40]

    loop {
        uu_sort::merge::FileMerger::write_next(&v0, a0, a1, a2);
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        if v3 as i64 {
            return v3 as i64;
        } else if !v4 as i8 {
            v0 = struct24 {
                field_0: *((a0 + 48) as &i128)
                field_16: *((a0 + 64) as &i64)
            };
            v3 = std::thread::JoinInner<T>::join(&v0);
            return core::result::Result<T,E>::unwrap(&v3);
        }
    }
}
