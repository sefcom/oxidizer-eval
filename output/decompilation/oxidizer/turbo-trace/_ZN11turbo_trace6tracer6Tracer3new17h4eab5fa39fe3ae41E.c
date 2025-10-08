fn turbo_trace::tracer::Tracer::new(a0: i64, a1: i64, a2: &u64, a3: i64) -> long long {
    let v1: iNone;  // [bp-0x218]
    let v2: u64;  // [bp-0x208]
    let v3: void*;  // [bp-0x200]
    let v4: u64;  // [bp-0x1f8]
    let v5: void*;  // [bp-0x1f0]
    let v6: u128;  // [bp-0x1e8]
    let v7: u64;  // [bp-0x1d8]
    let v8: struct16;  // [bp-0x1d0], Other Possible Types: struct24
    let v9: struct32;  // [bp-0x1d0]
    let v10: struct120;  // [bp-0xf0]
    let v12: u64;  // rax

    if !((((0 ^ *(a3 as &i64)) & (0 ^ -(*(a3 as &i64)))) >> 63) as char) {
        v8 = turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf::from_unknown(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a3);
    }
    vvar_119{stack -464} = struct32 OrderedDict([(0, 𝜙@64b [((7764286, None), None), ((7764320, None), None)]), (16, 𝜙@1664b [((7764286, None), None), ((7764320, None), None)])])
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9, a2);
    core::iter::traits::iterator::Iterator::collect(&v6, &v9);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v10 = <swc_common::source_map::SourceMap as core::default::Default>::default();
    v8 = struct16 {
        field_0: 1
        field_8: 1
    };
    memcpy(&v9 as u1664, &v10, 208);
    v12 = alloc::boxed::Box<T>::new(&v8);
    return struct112 {
        field_0: v6
        field_16: v7
        field_24: *(a1 as &i128)
        field_40: *((a1 + 16) as &i64)
        field_48: *(&v3 as &i128)
        field_64: 0
        field_72: v1
        field_88: v2
        field_96: v12
        field_104: 0
    };
}
