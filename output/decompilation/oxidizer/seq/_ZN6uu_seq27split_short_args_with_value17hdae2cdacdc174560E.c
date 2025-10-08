fn uu_seq::split_short_args_with_value(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v1: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u64;  // [bp-0xc0]
    let v5: struct24;  // [bp-0xb8]
    let v6: void*;  // [bp-0x90], Other Possible Types: struct16
    let v7: struct16;  // [bp-0x90]
    let v9: u64;  // [bp-0x88]
    let v10: void*;  // [bp-0x80]
    let v11: u64;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: struct96;  // [bp-0x68]
    let v14: u64;  // [bp-0x68]
    let v16: u64;  // [bp-0x58]
    let v18: struct32;  // [bp-0x50]
    let v19: u32;  // [bp-0x48]
    let v20: void*;  // [bp-0x40]
    let v23: u64;  // rcx

    v6 = 0;
    v9 = 8;
    v10 = 0;
    v11 = a1;
    v12 = a2;
    loop {
        vvar_200{stack -104} = struct96 OrderedDict([(0, 𝜙@64b [((4632420, None), vvar_152{stack -104}), ((4632096, None), vvar_152{stack -104}), ((4632016, None), None)]), (8, 𝜙@64b [((4632420, None), vvar_154{stack -96}), ((4632096, None), vvar_154{stack -96}), ((4632016, None), None)]), (16, 𝜙@64b [((4632420, None), vvar_155{stack -88}), ((4632096, None), vvar_155{stack -88}), ((4632016, None), None)]), (24, 𝜙@64b [((4632420, None), vvar_159{stack -80}), ((4632096, None), vvar_159{stack -80}), ((4632016, None), None)]), (32, 𝜙@64b [((4632420, None), vvar_160{stack -72}), ((4632096, None), vvar_160{stack -72}), ((4632016, None), None)]), (40, 𝜙@64b [((4632420, None), vvar_161{stack -64}), ((4632096, None), vvar_161{stack -64}), ((4632016, None), None)]), (48, 𝜙@384b [((4632420, None), vvar_162{stack -56}), ((4632096, None), vvar_162{stack -56}), ((4632016, None), None)])])
        <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v13, &v11);
        if (((0 ^ v13.field_0) & (0 ^ -(v14))) >> 63) as char {
            break;
        }
        if v16 <= 2 || !core::slice::<impl [T]>::starts_with(v2, &g_41adfa, a2, v23) && !core::slice::<impl [T]>::starts_with(v2, &g_41adfc, a2, v23) && !core::slice::<impl [T]>::starts_with(v2, &g_41adfe, a2, v23) {
            v0 = struct24 {
                field_0: v13.field_0
                field_16: v16
            };
            v7 = alloc::vec::Vec<T,A>::push(&v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs");
            v0 = v1;
            v4 = v3;
        } else {
            v18 = core::slice::<impl [T]>::split_at_unchecked(v2, v3);
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v18.field_0, v19);
            v5 = v1;
            v6 = alloc::vec::Vec<T,A>::push(&v5, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs");
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v18.field_24);
            v5 = v1;
            v7 = alloc::vec::Vec<T,A>::push(&v5, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs");
        }
    }
    return <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0, &v7);
}
