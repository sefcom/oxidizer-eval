fn uu_join::State::new(a1: i8, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i8) -> Result<struct77, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct16, struct12>;  // [bp-0x70]
    let v1: u64;  // [bp-0x68]
    let v2: Result<struct4, struct8>;  // [bp-0x60], Other Possible Types: struct44
    let v3: u32;  // edx
    let v4: core::result::Result<(), std::io::error::Error>;  // rax
    let v5: u64;  // rcx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "-") {
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(a4), v3 & 1);
    } else {
        v2 = std::fs::File::open(a2, a3);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a2, a3);
        match v0 {
            Ok(_) => {
                return Err(struct16 {
                    field_0: v0 as i64
                    field_8: v1
                });
            },
            Err(_) => {
                v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v4 = alloc::boxed::Box<T>::new(&v2) as u64;
            },
        }
    }
    return struct96 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: a2
        field_32: a3
        field_40: v4
        field_48: v5
        field_56: a6
        field_64: a5
        field_72: 1
        field_80: 0
        field_88: a1
        field_89: a7
        field_90: 0
    };
}
