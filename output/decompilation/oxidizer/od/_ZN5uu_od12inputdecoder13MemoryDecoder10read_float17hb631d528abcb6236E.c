fn uu_od::inputdecoder::MemoryDecoder::read_float(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v3: &u64;  // rcx
    let v4: u64;  // rax
    let v5: &u64;  // rcx
    let v7: &u64;  // rcx
    let v9: u32;  // rdx
    let v10: u32;  // eax
    let v11: u32;  // rdx

    v0 = a2;
    match (a2) {
        2 => {
            v3 = a0->field_0;
            v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 2, v3[1], v3[2], "src/uu/od/src/inputdecoder.rs");
            if !a0->field_18 || a0->field_18 != 1 {
                v10 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v4, v11) as i32;
            } else {
                v10 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v4, v9) as i32;
                break;
            }
            if !std_detect::detect::cache::test() as i8 {
                return half::binary16::arch::f16_to_f64_fallback(v10);
            }
            half::binary16::arch::x86::f16_to_f32_x86_f16c(v10); /* do not return */
        }
        4 => {
            v5 = a0->field_0;
            return uu_od::byteorder_io::ByteOrder::read_f32(*(&a0->field_18 as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 4, v5[1], v5[2], "src/uu/od/src/inputdecoder.rs"), a2);
        }
        8 => {
            v7 = a0->field_0;
            return uu_od::byteorder_io::ByteOrder::read_f64(*(&a0->field_18 as &i32), <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1, a1 + 8, v7[1], v7[2], "src/uu/od/src/inputdecoder.rs"), a2);
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
