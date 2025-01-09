fn uu_tail::chunks::BytesChunk::fill(a0: &struct24, a1: &struct8, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u32;  // rdx

    v0 = v2;
    if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, a1, 0x2000) {
        *(&a0[1] as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        a0[2] = v4;
        *(a0) = 1;
    }
    a1->field_2000 = v3;
    if !v3 {
        return struct16 {
            field_0: 0
        };
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: v3
    };
}
