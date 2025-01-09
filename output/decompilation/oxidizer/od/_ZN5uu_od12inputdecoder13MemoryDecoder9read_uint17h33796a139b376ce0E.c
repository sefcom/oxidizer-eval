fn uu_od::inputdecoder::MemoryDecoder::read_uint(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v4: &u64;  // rcx
    let v5: u64;  // rax
    let v7: &u64;  // rcx
    let v8: u64;  // rax
    let v10: &u64;  // rcx
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u32;  // rdx
    let v14: u32;  // eax
    let v15: u32;  // rdx
    let v16: u64;  // rdx
    let v17: u64;  // rdx
    let v18: u32;  // rdx
    let v19: u32;  // rdx

    v0 = a2;
    match (a2) {
        1 => {
            v12 = a1[a0->field_0->field_8];
            return v12;
        }
        2 => {
            v10 = a0->field_0;
            v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, v10[1], v10[2], "src/uu/od/src/inputdecoder.rs");
            match (a0->field_18) {
                1 => {
                    v14 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v11, v13) as i32;
                    break;
                }
                _ => {
                    v14 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v11, v15) as i32;
                }
            }
            v12 = v14;
            return v12;
        }
        4 => {
            v4 = a0->field_0;
            v5 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, v4[1], v4[2], "src/uu/od/src/inputdecoder.rs");
            match (a0->field_18) {
                1 => {
                    v12 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u32(v5, v16) as i32;
                    return v12;
                }
                _ => {
                    v12 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(v5, v17) as i32;
                    return v12;
                }
            }
        }
        8 => {
            v7 = a0->field_0;
            v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, v7[1], v7[2], "src/uu/od/src/inputdecoder.rs");
            match (a0->field_18) {
                1 => {
                    return <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(v8, v18);
                }
                _ => {
                    return <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(v8, v19);
                }
            }
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
