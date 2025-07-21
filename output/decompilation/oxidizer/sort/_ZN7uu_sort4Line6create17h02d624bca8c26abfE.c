fn uu_sort::Line::create(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> long long {
    let v0: u64;  // [bp-0xb0]
    let v1: i64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: u64;  // [bp-0x68]
    let v9: i64;  // [bp-0x60]
    let v10: i64;  // [bp-0x58]
    let v11: struct96;  // [bp-0x58]
    let v12: i64;  // [bp-0x58]
    let v13: i64;  // [bp-0x58]
    let v14: u32;  // [bp-0x50]
    let v15: u32;  // [bp-0x48]
    let v16: u64;  // [bp-0x40]
    let v17: u32;  // [bp-0x40]
    let v19: struct8;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rcx

    *((a5 + 16) as &i64) = 0;
    if *((a6 + 96) as &i8) {
        uu_sort::tokenize(a1, a2, *((a6 + 120) as &i32), a5);
    }
    v5 = *((a6 + 8) as &i64);
    v6 = *((a6 + 16) as &i64) * 56 + *((a6 + 8) as &i64);
    v0 = a1;
    v7 = a1;
    v2 = a2;
    v8 = a2;
    v9 = a5;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v19 {
        v4 = a4 + 24;
        v3 = a4 + 48;
        do {
            vvar_248{stack -88} = struct96 OrderedDict({0: 𝜙@64b [((5368842, None), vvar_218{stack -88}), ((5368771, None), None)], 8: 𝜙@64b [((5368842, None), vvar_213{stack -80}), ((5368771, None), None)], 16: 𝜙@64b [((5368842, None), vvar_214{stack -72}), ((5368771, None), None)], 24: 𝜙@64b [((5368842, None), vvar_219{stack -64}), ((5368771, None), None)], 32: 𝜙@512b [((5368842, None), vvar_215{stack -56}), ((5368771, None), None)]})
            core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v11, &v7, v19);
            v20 = v11.field_32;
            v21 = (3 <= (v20 - 2 & 4294967295 & 255) ? 1 : v20 - 2 & 4294967295);
            if v21 == 2 {
                v13 = v12;
                v16 = v17;
                if !*((v13 + 55) as &i8) {
                    continue;
                }
            } else if v21 != 1 {
                alloc::vec::Vec<T,A>::push(v3, v14);
                v13 = v12;
                v16 = v17;
            } else {
                alloc::vec::Vec<T,A>::push(v4, v17, v20 & 1);
                v13 = v12;
                v16 = v17;
            }
            alloc::vec::Vec<T,A>::push(a4, v14, v15);
        } while ((v16 = v16, v10 = v13, v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v19));
    }
    *(v1 as &u64) = v0;
    *((v1 + 8) as &u64) = v2;
    *((v1 + 16) as &u64) = a3;
    return v1;
}
