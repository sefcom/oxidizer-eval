fn uu_od::parse_inputs::parse_inputs(a0: u64, a1: u64) -> void {
    let v0: Result<struct24, struct24>;  // [bp-0x70], Other Possible Types: struct16
    let v1: void*;  // [bp-0x68], Other Possible Types: struct_0 *
    let v2: u32;  // [bp-0x60]
    let v3: struct24;  // [sp-0x58], Other Possible Types: u192
    let v4: u32;  // [bp-0x58]
    let v5: u64;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v8: u64;  // r15
    let v9: u64;  // r12
    let v10: u64;  // r15
    let v12: u64;  // rdx
    let v14: &mut [u8];  // rax:rdx

    v0 = <clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::inputs(a1);
    if <clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::opts_present(a1, "traditional", 1) {
        uu_od::parse_inputs::parse_inputs_traditional(a0, v1, v2);
    }
    v8 = v2;
    v9 = v8 - 1;
    if v9 < 2 {
        v10 = v8;
        if !<clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::opts_present(a1, "address-radix", 6) {
            uu_od::parse_inputs::parse_offset_operand(&v0 as u8, *((v1 + v9 * 16) as &i64), *((v1 + v9 * 16 + 8) as &i64));
            v10 = v8;
            if !v6 {
                if v8 == 1 {
                    v4 = 0;
                    v14 = core::char::methods::encode_utf8_raw(43, &v4, v12);
                    v10 = v8;
                    if core::slice::<impl [T]>::starts_with(*(v1 as &i64), *((v1 + 8) as &i64), v14.data_ptr, 1) {
                        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
                        return struct40 {
                            field_0: v3 as i128
                            field_16: v5
                            field_24: *((&v0 as &char + 56) as &i64)
                            field_32: 0
                        };
                    }
                } else {
                    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v1 as &i64), *((v1 + 8) as &i64));
                    return struct40 {
                        field_0: v3 as i128
                        field_16: v5
                        field_24: *((&v0 as &char + 56) as &i64)
                        field_32: 0
                    };
                }
            }
        }
    } else {
        v10 = v8;
        if !v10 {
            v0 = alloc::vec::Vec<T,A>::push();
            v10 = v2;
        }
    }
    core::iter::traits::iterator::Iterator::collect(&v4, v1, v10 * 16 + v1);
    return struct40 {
        field_0: *((&v0 as &char + 24) as &i128)
        field_16: v5
        padding_24: <UNKNOWN>
        field_32: 2
    };
}
