fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: i64, a1: u32, a2: u32, a3: u64) -> long long {
    let v0: u64;  // [bp-0x50]
    let v2: u64;  // rbx
    let v3: u32;  // eax
    let v4: u32;  // edx
    let v5: u32;  // eax
    let v6: u32;  // edx
    let v8: u64;  // rdi

    v2 = a1;
    v0 = a3;
    match (a3) {
        2 => {
            v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2, a2 + 2, *((a0 + 8) as &i64), *((a0 + 16) as &i64), "src/uu/od/src/inputdecoder.rs");
            if v2 && v2 == 1 {
                v5 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v3, v4) as u32;
            } else {
                v5 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v3, v6);
            }
            v8 = v5;
            if !std_detect::detect::cache::test() {
                return half::binary16::arch::f16_to_f64_fallback(v5);
            }
            half::binary16::arch::x86::f16_to_f32_x86_f16c(v5); /* do not return */
        }
        4 => {
            return uu_od::byteorder_io::ByteOrder::read_f32(v2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2, a2 + 4, *((a0 + 8) as &i64), *((a0 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), a2);
        }
        8 => {
            return uu_od::byteorder_io::ByteOrder::read_f64(v2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2, a2 + 8, *((a0 + 8) as &i64), *((a0 + 16) as &i64), "src/uu/od/src/inputdecoder.rs"), a2);
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
