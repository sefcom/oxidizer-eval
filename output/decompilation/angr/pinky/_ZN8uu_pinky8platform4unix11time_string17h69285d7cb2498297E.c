void uu_pinky::platform::unix::time_string(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x48]

    time::format_description::parse::parse(&v4, "[month repr:short] [day padding:space] [hour]:[minute]src/uu/pinky/src/platform/unix.rs\n", 54);
    v0.unwrap(&v4);
    v3.login_time(a1);
    v4.format(&v3, v1, v2);
    a0.unwrap(&v4);
    core::ptr::drop_in_place<alloc::vec::Vec<time::format_description::borrowed_format_item::BorrowedFormatItem>>(v0, v1);
    return;
}
