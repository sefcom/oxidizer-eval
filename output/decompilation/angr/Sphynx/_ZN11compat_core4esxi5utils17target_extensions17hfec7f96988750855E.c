long long compat_core::esxi::utils::target_extensions::hfec7f96988750855(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x30]
    unsigned long long v1;  // [sp-0x28]
    unsigned long long v2;  // [sp-0x20]
    unsigned long long v4[24];  // rax
    unsigned long long v5[24];  // rbx
    unsigned long long v6;  // rax

    v4 = __rust_alloc(192, 8);
    if (v4)
    {
        v5 = v4;
        v5[0] = "log";
        v5[1] = 3;
        v5[2] = "vmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog";
        v5[3] = 4;
        v5[4] = "vmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog";
        v5[5] = 4;
        v5[6] = "vswpvmsnvmsdvmxfisoziptxtvmxnvramlog";
        v5[7] = 4;
        v5[8] = "vmsnvmsdvmxfisoziptxtvmxnvramlog";
        v5[9] = 4;
        v5[10] = "vmsdvmxfisoziptxtvmxnvramlog";
        v5[11] = 4;
        v5[12] = "isoziptxtvmxnvramlog";
        v5[13] = 3;
        v5[14] = "ziptxtvmxnvramlog";
        v5[15] = 3;
        v5[16] = "txtvmxnvramlog";
        v5[17] = 3;
        v5[18] = "vmxnvramlog";
        v5[19] = 3;
        v5[20] = "nvramlog";
        v5[21] = 5;
        v5[22] = "vmxfisoziptxtvmxnvramlog";
        v5[23] = 4;
        a0->field_0 = 8;
        *((uint128_t *)&(&a0->field_0)[1]) = 0;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h2221993a5205d80e(a0, 0, 12);
        v6 = a0->field_8;
        v0 = v6 * 24 + a0->field_0;
        v1 = &a0->field_8;
        v2 = v6;
        _$LT$core..iter..adapters..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h61cbedc0e7d697e3(v5, v5 + 1, &v0);
        __rust_dealloc(v5);
        return a0;
    }
    alloc::alloc::handle_alloc_error::h32f10317ed76b9c7(); /* do not return */
}
