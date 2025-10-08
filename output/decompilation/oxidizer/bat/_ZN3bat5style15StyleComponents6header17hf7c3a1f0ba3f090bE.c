fn bat::style::StyleComponents::header(a0: i64) -> u8 {
    if !bat::style::StyleComponents::header_filename(a0) {
        return bat::style::StyleComponents::header_filesize(a0);
    }
    return 1;
}
