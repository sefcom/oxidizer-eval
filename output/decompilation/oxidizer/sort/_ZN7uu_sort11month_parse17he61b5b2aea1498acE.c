fn uu_sort::month_parse(a0: u64, a1: u64) -> long long {
    let v0: i64;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u32;  // rdx
    let v4: core::option::Option<&str>;  // rax
    let v5: struct32;  // rax
    let v6: core::option::Option<&str>;  // rax
    let v7: core::option::Option<&str>;  // rax
    let v8: core::option::Option<&str>;  // rax
    let v9: core::option::Option<&str>;  // rax
    let v10: core::option::Option<&str>;  // rax
    let v11: core::option::Option<&str>;  // rax
    let v12: core::option::Option<&str>;  // rax
    let v13: core::option::Option<&str>;  // rax
    let v14: core::option::Option<&str>;  // rax
    let v15: core::option::Option<&str>;  // rax
    let v16: core::option::Option<&str>;  // rax
    let v17: &str;  // rax:rdx

    v0 = v2;
    v17 = core::str::<impl str>::trim_matches(a0, a1, v3);
    if v17.length > 3 {
        if v17.data_ptr[3] <= 191 {
            goto LABEL_4d666c;
        }
    } else {
        if v17.length != 3 {
            return 0;
        }
    }
    v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v4, v3, "JAN") {
        return *((v5 + 16) as &i8);
    }
    if v17.length < 4 {
        goto LABEL_4d6672;
    }
LABEL_4d666c:
    if v17.data_ptr[3] < 192 {
        goto LABEL_4d66bb;
    }
LABEL_4d6672:
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v6, v3, "FEB") {
        return *((v5 + 16) as &i8);
    }
    if v17.length < 4 {
        goto LABEL_4d66c1;
    }
LABEL_4d66bb:
    if v17.data_ptr[3] < 192 {
        goto LABEL_4d670a;
    }
LABEL_4d66c1:
    v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v7, v3, "MAR") {
        return *((v5 + 16) as &i8);
    }
    if v17.length < 4 {
        goto LABEL_4d6710;
    }
LABEL_4d670a:
    if v17.data_ptr[3] < 192 {
        goto LABEL_4d6759;
    }
LABEL_4d6710:
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v3, "APR") {
        return *((v5 + 16) as &i8);
    }
    if v17.length < 4 {
        goto LABEL_4d675f;
    }
LABEL_4d6759:
    if v17.data_ptr[3] < 192 {
        goto LABEL_4d67a8;
    }
LABEL_4d675f:
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v9, v3, "MAY") {
        goto LABEL_4d69bf;
    }
    if v17.length < 4 {
        goto LABEL_4d67ae;
    }
LABEL_4d67a8:
    if v17.data_ptr[3] < 192 {
        goto LABEL_4d67f7;
    }
LABEL_4d67ae:
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
    if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v3, "JUN") {
        if v17.length < 4 {
            goto LABEL_4d67fd;
        }
LABEL_4d67f7:
        if v17.data_ptr[3] < 192 {
            goto LABEL_4d6846;
        }
LABEL_4d67fd:
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
        if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v11, v3, "JUL") {
            if v17.length < 4 {
                goto LABEL_4d684c;
            }
LABEL_4d6846:
            if v17.data_ptr[3] < 192 {
                goto LABEL_4d6895;
            }
LABEL_4d684c:
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
            if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v12, v3, "AUG") {
                if v17.length < 4 {
                    goto LABEL_4d689b;
                }
LABEL_4d6895:
                if v17.data_ptr[3] < 192 {
                    goto LABEL_4d68e4;
                }
LABEL_4d689b:
                v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
                if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v13, v3, "SEP") {
                    if v17.length < 4 {
                        goto LABEL_4d68ea;
                    }
LABEL_4d68e4:
                    if v17.data_ptr[3] < 192 {
                        goto LABEL_4d6933;
                    }
LABEL_4d68ea:
                    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
                    if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v14, v3, "OCT") {
                        if v17.length < 4 {
                            goto LABEL_4d6939;
                        }
LABEL_4d6933:
                        if v17.data_ptr[3] < 192 {
                            goto LABEL_4d697f;
                        }
LABEL_4d6939:
                        v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
                        if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v15, v3, "NOV") {
                            if v17.length < 4 {
                                goto LABEL_4d6985;
                            }
LABEL_4d697f:
                            if v17.data_ptr[3] < 192 {
                                return 0;
                            }
LABEL_4d6985:
                            v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(3, v17.data_ptr, v17.length) as u64;
                            if !core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v16, v3, "DEC") {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
LABEL_4d69bf:
    return *((v5 + 16) as &i8);
}
