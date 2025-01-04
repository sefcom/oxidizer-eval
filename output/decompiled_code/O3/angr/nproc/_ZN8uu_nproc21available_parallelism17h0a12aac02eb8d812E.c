long long uu_nproc::available_parallelism::h0a12aac02eb8d812(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx

    v1 = std::thread::available_parallelism::he1b307f401d49c64();
    if (!v1)
        v3 = v2;
    else
        v3 = 1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h5f94e414ce99af65(v1, v2);
    return v3;
}
