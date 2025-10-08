fn bat::printer::InteractivePrinter::print_header_multiline_component(a0: u64, a1: i64, a2: u64, a3: u64, a4: i128) -> int {
    let v0: u8;  // [bp-0x178]
    let v1: u64;  // [bp-0x170]
    let v2: void*;  // [bp-0x168], Other Possible Types: core::result::Result<usize, core::num::error::ParseIntError>
    let v3: struct24;  // [bp-0x148], Other Possible Types: u128
    let v4: struct16;  // [bp-0x140]
    let v5: void*;  // [bp-0x138], Other Possible Types: u64
    let v6: u128;  // [bp-0x128]
    let v7: u64;  // [bp-0x120]
    let v8: u64;  // [bp-0x118]
    let v9: struct24;  // [bp-0x110], Other Possible Types: struct88
    let v10: struct80;  // [bp-0x110]
    let v11: struct24;  // [bp-0x110]
    let v12: void*;  // [bp-0x100]
    let v13: void*;  // [bp-0xf0]
    let v14: void*;  // [bp-0xe0]
    let v15: core::fmt::rt::Argument;  // [bp-0xd8]
    let v16: struct24;  // [bp-0xd0]
    let v17: struct24;  // [bp-0xc8]
    let v18: Option<struct80>;  // [bp-0xc4]
    let v19: struct9;  // [bp-0xc0]
    let v20: struct24;  // [bp-0xb8]
    let v21: struct40;  // [bp-0xa8]
    let v22: void*;  // [bp-0x98]
    let v23: core::fmt::Arguments;  // [bp-0x88]
    let v24: core::fmt::rt::Argument;  // [bp-0x80]
    let v25: void*;  // [bp-0x78]
    let v26: u8;  // [bp-0x70]
    let v27: u32;  // [bp-0x6c]
    let v28: u8;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v30: core::option::Option<&str>;  // [bp-0x58]
    let v31: struct32;  // [bp-0x50]
    let v32: u32;  // [bp-0x48]
    let v33: void*;  // [bp-0x40]
    let v35: core::fmt::rt::Argument;  // rax
    let v36: struct24;  // r13
    let v37: void*;  // rdx
    let v38: u256;  // ymm0
    let v39: struct24;  // r14
    let v40: struct24;  // ymm0
    let v41: struct32;  // xmm0
    let v42: iNone;  // xmm1
    let v43: alloc::vec::Vec<u8, alloc::alloc::Global>;  // xmm2

    v35 = bat::printer::InteractivePrinter::get_header_component_indent_length(*((a1 + 0x200) as &i64), *((a1 + 528) as &i64));
    v36 = *((*((a1 + 0x200) as &i64) + 0x100) as &i64) - v35;
    if <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a3, a3 + a4) <= v36 {
        bat::printer::InteractivePrinter::print_header_component_with_indent(a0, a1, a2, a3, a4);
        return;
    }
    v29 = a3;
    v30 = a4;
    v9 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = a4;
    v16 = 0;
    v17 = 2;
    v18 = 268566529;
    v19 = 16;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = a4;
    v24 = a4;
    v25 = 0;
    v26 = 2;
    v27 = 268566529;
    v28 = 16;
    core::iter::traits::iterator::Iterator::collect(&v0, &v9);
    v37 = v2;
    if v37 > v36 {
        do {
            vvar_336{stack -80} = struct32 OrderedDict([(0, 𝜙@64b [((8649218, None), vvar_257{stack -80}), ((8649051, None), None)]), (8, 𝜙@64b [((8649218, None), vvar_258{stack -72}), ((8649051, None), None)]), (16, 𝜙@64b [((8649218, None), vvar_259{stack -64}), ((8649051, None), None)])])
            core::slice::<impl [T]>::split_at_unchecked(&v31, v1, v37, v36);
            v39 = v31.field_24;
            v3 = alloc::str::join_generic_copy(v31.field_0, v32, 1, 0);
            v8 = v5;
            v40 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3.field_0;
            v6 = v3.field_0;
            v10 = bat::printer::InteractivePrinter::print_header_component_with_indent(a1, a2, v7, v5);
            if &v10 != "\r" {
                v41 = v10.field_0;
                v42 = v10.field_16;
                v43 = v10.field_32;
                return struct80 {
                    field_0: v41
                    field_16: v42
                    field_32: v43
                    field_48: v10.field_48
                    field_64: v10.field_64
                };
            }
            v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33, v39);
            v2 = v12;
            v38 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11.field_0;
            v0 = v11.field_0;
        } while (v37 > v36);
    }
    v9 = alloc::str::join_generic_copy(v1, v37, 1, 0);
    v5 = v12;
    v3 = v9.field_0;
    bat::printer::InteractivePrinter::print_header_component_with_indent(a0, a1, a2, v4, v12);
    return;
}
