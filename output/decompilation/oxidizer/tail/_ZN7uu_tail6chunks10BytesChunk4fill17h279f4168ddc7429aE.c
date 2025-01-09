fn uu_tail::chunks::BytesChunk::fill(a0: &struct24, a1: &struct8, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u32;  // rdx
    let v5: u64;  // rdx

    v0 = v2;
    v3 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a2, a3, a1);
    if v3 {
        v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return struct24 {
            field_0: 1
            field_8: v3
            field_16: v4
        };
    }
    a1->field_2000 = v5;
    if !v5 {
        return struct16 {
            field_0: 0
        };
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: v5
    };
}
