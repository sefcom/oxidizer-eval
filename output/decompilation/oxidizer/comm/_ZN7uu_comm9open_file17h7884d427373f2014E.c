fn uu_comm::open_file(a1: &std::path::Path, a2: i8) -> : struct44 {
    let a0: u64;  // rdi
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0], Other Possible Types: struct24
    let v1: Result<struct4, struct8>;  // [bp-0xd0]
    let v2: u32;  // [bp-0xcc]
    let v4: u32;  // rdx
    let v6: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v4, &g_4193e6) {
        return struct24 {
            field_0: 0
            field_8: std::io::stdio::stdin()
            padding_16: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    }
    v0 = std::fs::metadata(a1);
    if let Err(_) = v0 {
        return struct16 {
            field_0: v6
            padding_8: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    }
    if (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Is a directory");
        v6 = std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v0), &g_4e0de8);
    } else {
        v1 = std::fs::File::open(a1);
        if let Ok(_) = v1 {
            std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, v2);
        }
    }
    return struct16 {
        field_0: v6
        padding_8: <UNKNOWN>
        field_48: <UNKNOWN>
    };
}
