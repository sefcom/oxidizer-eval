fn uu_od::inputdecoder::MemoryDecoder::read_uint(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x50]
    let v2: i64;  // rcx
    let v3: core::fmt::Arguments;  // ebx
    let v4: u64;  // rax
    let v5: core::fmt::Arguments;  // ebx
    let v6: struct24;  // rax
    let v7: core::fmt::Arguments;  // ebx
    let v8: core::option::Option<&str>;  // rax
    let v9: u64;  // rdx
    let v10: u32;  // eax
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: u64;  // rdx
    let v15: u64;  // rdx

    v0 = a2;
    match (a2) {
        1 => {
            v2 = *(a0 as &i64);
            return *((*((v2 + 8) as &i64) + a1) as &i8);
        }
        2 => {
            v7 = *((a0 + 24) as &i8);
            v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            if v7 && v7 == 1 {
                v10 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v8, v9) as i32;
            } else {
                v10 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v8, v11) as i32;
            }
            return v10;
        }
        4 => {
            v3 = *((a0 + 24) as &i8);
            v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            return <byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(v4, v15) as i32;
        }
        8 => {
            v5 = *((a0 + 24) as &i8);
            v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            if !(v5 && v5 == 1) {
                return <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(v6, v13);
            }
            return <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(v6, v12);
            return <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(v6, v13);
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
