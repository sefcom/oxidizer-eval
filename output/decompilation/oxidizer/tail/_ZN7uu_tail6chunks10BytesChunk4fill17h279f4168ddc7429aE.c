fn uu_tail::chunks::BytesChunk::fill(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct56;  // [bp-0x18]
    let v2: struct56;  // rax
    let v4: u64;  // rdx
    let v6: u64;  // rdx

    v0 = v2;
    if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a2, a3, a1) as u64 {
        return struct24 {
            field_0: 1
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4)
            field_16: v4
        };
    }
    *((a1 + 0x2000) as &u64) = v6;
    if !v6 {
        return struct16 {
            field_0: 0
        };
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: v6
    };
}
