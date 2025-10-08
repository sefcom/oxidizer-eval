long long uu_wc::Settings::number_enabled(struct_0 *a0)
{
    void* v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x7]
    int v5;  // xmm0

    v0 = 0;
    v1 = 5;
    v2 = a0->field_18;
    v5 = InterleaveLOV(0, *((int *)&(&a0->field_18)[1]));
    v3 = QNarrowBinV(((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1])) >> 64) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 32) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 48) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 16) CONCAT (unsigned short)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1])))) & 4294967295, ((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1])) >> 64) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 32) CONCAT (unsigned short)((unsigned long long)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 48) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1]))) >> 16) CONCAT (unsigned short)(InterleaveLOV(0, *((int *)&(&a0->field_18)[1])))) & 4294967295);
    return v0.fold();
}
