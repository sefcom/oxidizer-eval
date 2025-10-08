fn ruff_python_formatter::string::normalize::QuoteMetadata::from_str(a0: i64, a1: i64, a2: i64, a3: i8, a4: i8) -> long long {
    let v0: struct9;  // [bp-0x1c]
    let v1: struct2;  // [bp-0x1c], Other Possible Types: u64

    if a3 > 63 {
        v1 = ruff_python_formatter::string::normalize::QuoteMetadataKind::raw(a1, a2, a4, !(a3 & 2));
    } else if !(a3 & 2) {
        v0 = ruff_python_formatter::string::normalize::QuoteMetadataKind::regular(a1, a2);
    } else {
        v1 = ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted(a1, a2, a4);
    }
    return struct16 {
        field_0: v1
        field_8: v0.field_8
        field_12: a3 & 1
    };
}
