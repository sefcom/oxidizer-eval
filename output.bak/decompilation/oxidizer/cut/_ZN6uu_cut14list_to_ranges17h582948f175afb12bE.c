fn uu_cut::list_to_ranges(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [bp-0x48]
    let v1: Option<struct24>;  // [sp-0x30], Other Possible Types: i200

    if !a3 {
        uucore::features::ranges::Range::from_list(a0, a1, a2);
    } else {
        v1 = uucore::features::ranges::Range::from_list(a1, a2);
        match v1 {
            Some(_) => {
                *((a0 + 24) as &i200) = v1;
                *((a0 + 8) as &i128) = *((&v1 as &char + 8) as &i128);
            },
            None => {
                v0 = struct24 {
                    field_0: *((&v1 as &char + 8) as &i128)
                    field_16: v1
                };
                uu_cut::list_to_ranges::{{closure}}(a0 + 8, &v0);
            },
        }
        return struct8 {
            field_0: v3
        };
    }
}
