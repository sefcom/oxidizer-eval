fn fd::cli::ensure_current_directory_exists() -> u64 {
    let v0: struct40;  // [bp-0x30]

    if !fd::filesystem::is_existing_directory("./") {
        v0 = struct40 {
            field_0: "Could not retrieve current directory (has it been deleted?)."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
