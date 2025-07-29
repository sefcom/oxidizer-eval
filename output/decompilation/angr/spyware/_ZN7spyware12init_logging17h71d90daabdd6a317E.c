void spyware::init_logging()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned short v2;  // [bp-0x8]

    v2 = 257;
    v1 = 0x4000;
    v0 = 4;
    spyware::logging::core::setup_logging(&v0).unwrap();
    return;
}
