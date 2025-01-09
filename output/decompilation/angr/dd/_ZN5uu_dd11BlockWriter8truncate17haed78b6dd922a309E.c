long long uu_dd::BlockWriter::truncate::haed78b6dd922a309(unsigned long long *a0)
{
    unsigned long v0;  // [sp-0x8], Other Possible Types: unsigned long long
    unsigned long v2;  // rax

    v0 = v2;
    *((int *)&v0) = (*(a0) == 0x8000000000000000 ? uu_dd::Output::truncate::h03e8e893bfb9669a(a0 + 1) : uu_dd::bufferedoutput::BufferedOutput::truncate::h2d9d362dd2e62035(a0));
    if (v0)
        ::0x4d5c90::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&v0);
    return v0;
}
