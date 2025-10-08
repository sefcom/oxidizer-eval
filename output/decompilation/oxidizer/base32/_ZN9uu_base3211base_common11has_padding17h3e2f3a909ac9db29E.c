fn uu_base32::base_common::has_padding(a0: i64, a1: i64) -> void {
    let v0: void*;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: void*;  // [bp-0x30]
    let v3: struct16;  // [bp-0x28]
    let v5: u32;  // rdx
    let v6: u64;  // rax
    let v7: u64;  // rdx
    let v8: i64;  // rax
    let v9: u8;  // bpl
    let v10: u64;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read_to_end(a1) as u8 & 1) {
        v6 = uu_base32::base_common::has_padding::{{closure}}(v5);
    } else {
        v3 = struct16 {
            field_0: v1
            field_8: 0 + v1
        };
        v8 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v3);
        if !(std::io::impls::<impl std::io::Seek for alloc::boxed::Box<S>>::seek(*(a1 as &i64), *((a1 + 8) as &i64)) as u8 & 1) {
            return struct16 {
                field_0: 0
                field_8: v9
            };
        }
        v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    }
    return struct16 {
        field_0: v6
        field_8: v7
    };
}
