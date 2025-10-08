fn just::compiler::Compiler::find_module_file(a0: i64, a1: i64, a2: i64, a3: &struct72, a4: i64, a5: i64) {
    let v1: struct24;  // [bp-0x288]
    let v2: void*;  // [bp-0x288], Other Possible Types: struct24, struct56
    let v3: struct25;  // [bp-0x288]
    let v4: struct25;  // [bp-0x288]
    let v5: struct25;  // [bp-0x288]
    let v6: struct24;  // [bp-0x288]
    let v7: struct25;  // [bp-0x288]
    let v8: Result<struct16, struct64>;  // [bp-0x288]
    let v10: u64;  // [bp-0x280]
    let v11: u128;  // [bp-0x278]
    let v13: u128;  // [bp-0x268]
    let v18: void*;  // [bp-0x230]
    let v19: void*;  // [bp-0x228], Other Possible Types: struct24
    let v20: struct25;  // [bp-0x228]
    let v21: Option<struct32>;  // [bp-0x228]
    let v24: u64;  // [bp-0x220]
    let v25: u128;  // [bp-0x218]
    let v27: u128;  // [bp-0x208]
    let v29: u64;  // [bp-0x1f8]
    let v30: struct24;  // [bp-0x1f8]
    let v32: u64;  // [bp-0x1f0]
    let v33: u64;  // [bp-0x1e8]
    let v35: struct24;  // [bp-0x1c8]
    let v38: void*;  // [bp-0x1c0]
    let v39: u64;  // [bp-0x1b8]
    let v41: void*;  // [bp-0x1a0]
    let v43: u64;  // [sp-0x198]
    let v44: struct16;  // [bp-0x190]
    let v45: void*;  // [sp-0x190], Other Possible Types: struct16
    let v46: u64;  // [bp-0x188]
    let v47: void*;  // [bp-0x180]
    let v48: struct32;  // [bp-0x178]
    let v49: struct24;  // [bp-0x178]
    let v51: u64;  // [bp-0x168]
    let v59: void*;  // [bp-0x130]
    let v60: u64;  // [bp-0x128]
    let v61: void*;  // [bp-0x120]
    let v73: void*;  // [bp-0xb8]
    let v74: void*;  // [bp-0xa8]
    let v75: void*;  // [bp-0xa0]
    let v76: u64;  // [bp-0x98]
    let v77: alloc::string::String;  // [bp-0x90]
    let v78: u64;  // [bp-0x80]
    let v79: alloc::string::String;  // [bp-0x78]
    let v80: u64;  // [bp-0x68]
    let v81: u64;  // [bp-0x50]
    let v84: u64;  // rax
    let v85: u64;  // rdx
    let v86: u64;  // r8
    let v87: core::option::Option<u32>;  // rax
    let v88: std::env::ArgsOs;  // rdx
    let v89: u64;  // rax
    let v90: struct112;  // rax
    let v91: i64;  // r14
    let v117: u8;  // [bp-0x210]
    let v118: alloc::string::String;  // [bp-0x60]

    v75 = a1;
    v76 = a2;
    v45 = 0;
    v46 = 8;
    v47 = 0;
    v43 = a2;
    v41 = a1;
    if a4 {
        v30 = std::path::Path::join(a1, a2, a4, a5);
        if std::path::Path::is_file(v32, v33) {
            *(&v18[24] as &u64) = v33;
            *(&v18[8] as &u128) = v30.field_0;
            *(v18 as &i8) = 56;
            return;
        }
        v19 = std::path::Path::join(a4, a5, "mod.just");
        v2 as u256 = struct25 {
            field_0: v19.field_0
            field_16: v19.field_16
            field_24: 1
        };
        v44 = alloc::vec::Vec<T,A>::push(&v2 as u256, "src/compiler.rs");
        v2 = 0;
        v10 = 2;
        v11 = g_82e5b0.field_0;
        v13 = g_82e5c0.field_0;
        v84 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2 as u256);
        if v84 {
            v86 = v85;
            do {
                v49 = std::path::Path::join(a4, a5, v84, v85);
                v20 = struct25 {
                    field_0: v49.field_0
                    field_16: v51
                    field_24: 0
                };
                v44 = alloc::vec::Vec<T,A>::push(&v20, "src/compiler.rs");
                v84 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2 as u256);
            } while (v84);
        }
    } else {
        v77 = format!("{}.just", a3);
        v3 = struct25 {
            field_0: *(&v77.vec.buf.inner.cap as &i128)
            field_16: v78
            field_24: 1
        };
        v45 = alloc::vec::Vec<T,A>::push(&v3, "src/compiler.rs");
        v79 = format!("{}/mod.just", a3);
        v4 = struct25 {
            field_0: *(&v79.vec.buf.inner.cap as &i128)
            field_16: v80
            field_24: 1
        };
        v44 = alloc::vec::Vec<T,A>::push(&v4, "src/compiler.rs");
        v19 = 0;
        v24 = 2;
        v25 = g_82e5b0.field_0;
        v27 = g_82e5c0.field_0;
        v87 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v19 as u128);
        if let Some(_) = v87 {
            do {
                v29 = v87;
                v32 = v88;
                v118 = format!("{}/{}", a3, &v29);
                v5 = struct25 {
                    field_0: *(&v118.vec.buf.inner.cap as &i128)
                    field_16: v81
                    field_24: 0
                };
                v44 = alloc::vec::Vec<T,A>::push(&v5, "src/compiler.rs");
                v87 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v19 as u128);
            } while (v87);
        }
    }
    vvar_1214{stack -376} = struct32 OrderedDict([(0, 𝜙@64b [((6666698, None), None), ((6666938, None), vvar_1068{stack -376}), ((6667203, None), vvar_947{stack -376})]), (16, 𝜙@64b [((6666698, None), None), ((6666938, None), vvar_1070{stack -360}), ((6667203, None), vvar_948{stack -360})]), (24, 𝜙@64b [((6666698, None), None), ((6666938, None), vvar_1071{stack -352}), ((6667203, None), None)])])
    v73 = 0;
    v74 = 0;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v48, &v44);
    v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v48);
    if !((((0 ^ v21 as i64) & (0 ^ -(v21 as i64))) >> 63) as char) {
        do {
            v6 = std::path::Path::join(v41, v43, &v21);
            v35 = <&std::path::Path as lexiclean::Lexiclean>::lexiclean(0x2, v6.field_16);
            v89 = std::path::Path::parent(v38, v39);
            core::option::unwrap(v89);
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v89, a2);
            v30 = v1;
            v2 = alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v73, &v30);
            v90 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v2);
            v7 = struct25 {
                field_0: v35.field_0
                field_16: v39
                field_24: v117
            };
            alloc::vec::Vec<T,A>::push(v90, &v7, "src/compiler.rs");
            v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v48);
        } while (v21 as i64 != 0x8000000000000000);
    }
    v59 = 0;
    v60 = 8;
    v61 = 0;
    v91 = &v7;
    v8 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v73);
}
