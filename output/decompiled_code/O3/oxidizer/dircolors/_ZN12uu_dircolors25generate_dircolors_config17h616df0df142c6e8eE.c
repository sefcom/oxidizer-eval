fn uu_dircolors::generate_dircolors_config(a0: u64) -> int {
    let v0: struct16;  // [sp-0x100], Other Possible Types: i64
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [sp-0xd8]
    let v6: i64;  // [bp-0xd0], Other Possible Types: Argument
    let v7: Argument;  // [bp-0xc8]
    let v8: i64;  // [sp-0xc0]
    let v9: i64;  // [sp-0xb8]
    let v10: Arguments;  // [bp-0xb0]
    let v11: i64;  // [sp-0xa0]
    let v12: String;  // [sp-0x78], Other Possible Types: i192
    let v13: String;  // [sp-0x60], Other Possible Types: i192
    let v14: i192;  // [sp-0x48], Other Possible Types: String
    let v16: i64;  // r13
    let v17: i64;  // r14
    let v18: i64;  // r13
    let v19: i64;  // r13
    let v20: i64;  // r12
    let v21: i64;  // rbx
    let v23: i64;  // r15
    let v24: i64;  // r14
    let v25: i64;  // r13
    let v26: i64;  // r15
    let v28: i64;  // r13
    let v29: i64;  // r12
    let v30: i64;  // rbx
    let v32: i64;  // r14
    let v33: i64;  // r15
    let v35: i64;  // rax
    let v36: i64;  // r14
    let v37: i64;  // rax
    let v38: i64;  // rdx
    let v39: i64;  // rdx
    let v41: i64;  // r13
    let v42: i64;  // r12
    let v43: i64;  // rbx
    let v45: i64;  // r15
    let v46: i64;  // r14
    let v48: i64;  // rcx
    let v49: i64;  // r15
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i128;  // xmm0
    let v54: i256;  // ymm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 484);
    v16 = v1;
    v17 = v2;
    memcpy(v17 + v16, &g_422af1, 484);
    v2 = v17 + 484;
    if v0 - v2 <= 12 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 13);
        v18 = v1;
    }
    v19 = v18;
    *((v19 + v2 + 5) as &i64) = 732467297369867604;
    *((v19 + v2) as &i64) = 5928237196997578563;
    v2 += 13;
    v20 = 0;
    v2 = v2;
    do {
        v2 = v2;
        v4 = "Eterm" + v20;
        v6 = Argument {
            value: &v4
            formatter: <&T as core::fmt::Display>::fmt
        };
        v10 = Arguments {
            pieces: ["TERM ", "\n"]
            args: [&v6]
            fmt: None
        };
        v12 = alloc::fmt::format::format_inner(&v10);
        v21 = v12;
        v23 = *((&v12 as &char + 16) as &i64);
        if v0 - v2 < v23 {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, v23);
            v24 = v2;
            v25 = v1;
        }
        v19 = v25;
        memcpy(v24 + v19, *((&v12 as &char + 8) as &i64), v23);
        v2 = v23 + v2;
        v2 = v2;
        v20 += 16;
    } while (v20 != 400);
    if v0 - v2 <= 621 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 622);
        v26 = v2;
    }
    v3 = v1;
    memcpy(v3 + v26, &g_422cd5, 622);
    v2 = v26 + 622;
    v28 = "RESET";
    v2 = v2;
    do {
        v29 = 864;
        v2 = v2;
        v5 = v28;
        v4 = v28 + 32;
        v6 = Argument {
            value: &v5
            formatter: <&T as core::fmt::Display>::fmt
        };
        v7 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v4
        };
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = Arguments {
            pieces: [&g_4f3248, " ", "\n"]
            args: [&v6, &v7]
            fmt: None
        };
        v13 = alloc::fmt::format::format_inner(&v10);
        v30 = v13;
        v32 = *((&v13 as &char + 16) as &i64);
        if v0 - v2 >= v32 {
            v3 = v3;
        } else {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, v32);
            v33 = v2;
            v3 = v1;
        }
        v3 = v3;
        memcpy(v33 + v3, *((&v13 as &char + 8) as &i64), v32);
        v2 = v32 + v2;
        v2 = v2;
        v28 += 48;
    } while (v29 != 48);
    v35 = v0;
    if v35 - v2 <= 70 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 71);
        v36 = v2;
        v37 = v0;
    }
    v38 = v1;
    *((v38 + v36 + 48) as &i128) = 143724813878190444940758977351516252276;
    *((v38 + v36 + 32) as &i128) = 42740115358382802882316379831868534311;
    *((v38 + v36 + 16) as &i128) = 43061896418077592046142604138092197989;
    *((v38 + v36) as &i128) = 43061916698630313972054502022086139939;
    *((v38 + v36 + 63) as &i64) = 753064449097296236;
    v2 = v36 + 71;
    if v37 - v2 <= 72 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 73);
        v39 = v1;
    }
    *((v39 + v2 + 57) as &i128) = 13533223449263106983984766617569489519;
    *((v39 + v2 + 48) as &i128) = 154737878075251727880012765624024703076;
    *((v39 + v2 + 32) as &i128) = 146719384886143221572448267347730263913;
    *((v39 + v2 + 16) as &i128) = 153434429920801432569169911680661987374;
    v3 = v39;
    *((v3 + v2) as &i128) = 158756674982352720057324505576387125283;
    v2 += 73;
    v41 = ".tar";
    v2 = v2;
    do {
        v42 = 4160;
        v2 = v2;
        v5 = v41;
        v4 = v41 + 16;
        v6 = &v5;
        v7 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v4
        };
        v8 = &v4;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = Arguments {
            pieces: [&g_4f3248, " ", "\n"]
            args: [&v6, &v7]
            fmt: None
        };
        v11 = &v6;
        v14 = alloc::fmt::format::format_inner(&v10);
        v43 = v14;
        v45 = *((&v14 as &char + 16) as &i64);
        if v0 - v2 >= v45 {
            v3 = v3;
        } else {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, v45);
            v46 = v2;
            v3 = v1;
        }
        v3 = v3;
        memcpy(v46 + v3, *((&v14 as &char + 8) as &i64), v45);
        v2 = v45 + v2;
        v2 = v2;
        v41 += 32;
    } while (v42 != 32);
    v48 = v0;
    if v48 - v2 <= 69 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 70);
        v49 = v2;
        v50 = v0;
    }
    v51 = v1;
    *((v51 + v49 + 48) as &i128) = 134866972500935773791479269858077861235;
    *((v51 + v49 + 32) as &i128) = 155687885304075128883011812623851353198;
    *((v51 + v49 + 16) as &i128) = 134419749337454829139059318783130673229;
    *((v51 + v49) as &i128) = 109356670431343633986143725357341286435;
    *((v51 + v49 + 62) as &i64) = 749115317081498998;
    v2 = v49 + 70;
    if v50 - v2 <= 57 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, 58);
        v52 = v1;
    }
    *((v52 + v2 + 42) as &i128) = 61743659055296450415544208459865353582;
    *((v52 + v2 + 32) as &i128) = 43139841401675537766168122084316114537;
    *((v52 + v2 + 16) as &i128) = 138756109429045016979802790814463303779;
    *((v52 + v2) as &i128) = 140100691364977120764219418636890349603;
    v2 += 58;
    *((a0 + 16) as &i64) = v2;
    v53 = v0;
    *(a0 as &i128) = v53;
    return Conv(256->64, ((((((((((((((((((((((((((((((((((((vvar_307{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x6c20646c756f7720756f792074616874<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20277261742e2720726f20277a672e27<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20656b696c20736e6f69736e65747865<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20656c696620796e61207473694c2023<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xa2e676e697274732074696e6920726f<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x74696e6920726f6c6f63206568742064<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x6e61202c65636170732061202c6e6f69<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x736e657478652065687420747550202e<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x776f6c656220726f6c6f63206f742023<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x65766f202f20646461206f7420646573<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x75206562206e6163202c73656972746e<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x65204d524554524f4c4f4320726f204d<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x52455420746e65757165736275532023<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x2e73656c62616972617620746e656d6e<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20746e656d6e6f7269766e6520676e69<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x686374616d2065736f6874206f742063<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x69666963657073206769666e6f632023<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_439{reg 224})));
}
