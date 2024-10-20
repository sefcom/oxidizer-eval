long long uu_split::filenames::Suffix::from::h5079bfef6bcc752e(struct_3 *a0, struct_1 *a1, struct struct_0 **a2)
{
    struct struct_0 **v22;  // [sp-0x68]
    unsigned long long v30;  // rax
    struct struct_0 **v31;  // rcx
    unsigned long long v32;  // rax
    struct struct_0 **v33;  // rdx
    char v34;  // r12b
    int v35;  // ymm0
    int v36;  // ymm1
    int v37;  // xmm0
    unsigned long v39;  // r12
    unsigned long long *v41;  // rsi
    void* v44;  // r15
    unsigned long v45;  // r15

    v30 = a1->field_10;
    v22 = a2;
    if (!v30)
        v34 = 0;
    v31 = a1->field_8;
    v32 = v30 * 16;
    v33 = 0;
    do
    {
        if (*((long long *)(v31 + v33 + 8)) == 16 && (v37 = *((int128_t *)*((long long *)(v31 + v33))), v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37, v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 153388083737778181249528240159046071662 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(char)(CmpEQV(153388083737778181249528240159046071662, v37)), UnaryOp GetMSBs == 65535))
        {
            v34 = v39 | -0x100 | 1;
            goto LABEL_4ac549;
        }
    } while ((v33 += 16, v32 != v33));
    v34 = 0;
LABEL_4ac549:
    do
    {
        if (v31[1] == 12 && !((int)v41[1] ^ 1936029801) && !(*(v41) ^ 7378714177037690216))
            v44 = v45 | -0x100 | 1;
    } while ((v33 += 16, v32 != v33));
}
