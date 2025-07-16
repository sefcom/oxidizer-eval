fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: &mut [u8];  // [bp-0x50]
    let v2: u32;  // ebx
    let v3: u32;  // eax
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: u32;  // eax
    let v7: u64;  // rdx
    let v9: u64;  // rdi

    v0 = a2;
    match (a2) {
        2 => {
            v2 = *((a0 + 24) as &i8);
            v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs") as i32;
            if v2 && v2 == 1 {
                v6 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v3, v5) as i32;
            } else {
                v6 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v3, v7) as i32;
            }
            v9 = v6;
            if !std_detect::detect::cache::test() as i8 {
                return half::binary16::arch::f16_to_f64_fallback(v6);
            }
            half::binary16::arch::x86::f16_to_f32_x86_f16c(v6); /* do not return */
        }
        4 => {
            return uu_od::byteorder_io::ByteOrder::read_f32(*((a0 + 24) as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), a2);
        }
        8 => {
            v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, *((*(a0 as &i64) + 8) as &i64), *((*(a0 as &i64) + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            return uu_od::byteorder_io::ByteOrder::read_f64(*((a0 + 24) as &i32), v4, a2);
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
