long long uu_dd::progress::ProgUpdate::print_io_lines(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    a0.write_io_lines(&v0).unwrap();
    return &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
}
