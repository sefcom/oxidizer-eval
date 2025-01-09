long long uu_wc::Settings::number_enabled::he133dd856851d2dc(struct_0 *a0)
{
    void* v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    char v2;  // [sp-0x8]
    unsigned int v3;  // [sp-0x7]
    int v5;  // xmm0
    int v6;  // ymm0

    v2 = a0->field_18;
    v5 = *((int *)&(&a0->field_18)[1]);
    v3 = (unsigned int)(v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(InterleaveLOV(0, v5)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(InterleaveLOV(0, v5) >> 64) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 32) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 48) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(0, v5)) >> 16) CONCAT (unsigned short)(InterleaveLOV(0, v5))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | QNarrowBinV((unsigned long long)(InterleaveLOV(0, v5) >> 64) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 32) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 48) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(0, v5)) >> 16) CONCAT (unsigned short)(InterleaveLOV(0, v5)), (unsigned long long)(InterleaveLOV(0, v5) >> 64) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 32) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, v5)) >> 48) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(0, v5)) >> 16) CONCAT (unsigned short)(InterleaveLOV(0, v5))));
    v0 = 0;
    v1 = 5;
    return _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hadc7269f3b59da04(&v0);
}
