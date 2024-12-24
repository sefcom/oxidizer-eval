long long uu_nproc::available_parallelism::h4619c9691f49919a(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx

    v1 = std::thread::available_parallelism::he1b307f401d49c64();
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::hec09fde049574f26(v1, v2);
    return v3;
}
