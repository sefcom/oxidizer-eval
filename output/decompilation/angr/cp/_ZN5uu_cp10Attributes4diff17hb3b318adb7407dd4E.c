long long uu_cp::Attributes::diff(struct_1 *a0, struct_0 *a1, char a2[11])
{
    unsigned long v1;  // rax
    unsigned long v2;  // rcx
    int v3;  // xmm0

    v1 = a2[8];
    v2 = a2[10];
    a0->field_0 = ...;
    v3 = CmpGTV(0, ShlNV(((unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 96) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)))) >> 64 CONCAT (unsigned short)(((unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 96) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)))) >> 48) CONCAT (unsigned short)(((unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 96) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)))) >> 32) CONCAT (unsigned short)(((unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 96) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)))) >> 32) CONCAT (unsigned short)((unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 96) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)) >> 64) CONCAT (unsigned int)(InterleaveLOV(InterleaveLOV(v2, v1), InterleaveLOV(v2, v1)))), 7) & 170808403787765189503184116671632670848);
    a0->field_8 = (unsigned int)v3 & 0x1000100 | (unsigned int)~(v3) & a1->field_8;
    return v1;
}
