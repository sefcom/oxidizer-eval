long long fish::common::should_suppress_stderr_for_tests()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3[2];  // rax

    v0 = v2;
    v3 = _ZN4fish6common12PROGRAM_NAME17h6212e6221159d343E.get();
    if (!v3)
        return 0;
    return v3[0].equal(v3[1], "(", 8);
}
