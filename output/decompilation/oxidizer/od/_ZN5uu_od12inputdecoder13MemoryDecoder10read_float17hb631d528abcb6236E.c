fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: &mut [u8];  // [bp-0x50]
    let v2: u32;  // ebx
    let v3: u32;  // eax
    let v4: struct56;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: u32;  // eax
    let v8: u64;  // rdx
    let v10: u64;  // rdi

    v0 = a2;
    match (a2) {
        2 => {
            v2 = *((a0 + 24) as &i8);
            v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs") as i32;
            if v2 && v2 == 1 {
                v7 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v3, v6) as i32;
            } else {
                v7 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v3, v8) as i32;
            }
            v10 = v7;
            if !std_detect::detect::cache::test() as i8 {
                return half::binary16::arch::f16_to_f64_fallback(v7);
            }
            half::binary16::arch::x86::f16_to_f32_x86_f16c(v7); /* do not return */
        }
        4 => {
            v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            return uu_od::byteorder_io::ByteOrder::read_f32(*((a0 + 24) as &i32), v4, a2);
        }
        8 => {
            v5 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            return uu_od::byteorder_io::ByteOrder::read_f64(*((a0 + 24) as &i32), v5, a2);
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
