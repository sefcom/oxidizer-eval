long long uu_tail::follow::files::FileHandling::update_metadata::h4f38d741e1b0b8f1(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[2], unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    char v2;  // [bp-0x168]
    char v3;  // [bp-0xc8]
    unsigned long long v5;  // r13
    unsigned long long v6;  // r12
    void* v7;  // rcx
    unsigned long v8;  // rcx
    unsigned long long v9;  // r12
    unsigned int v10;  // r8
    unsigned int v11;  // r9
    unsigned long long v12[2];  // rax

    v5 = a3[0];
    if (v5 != 2)
    {
        v6 = a3[1];
        v7 = a3 + 1;
        goto LABEL_4ae9a6;
    }
    else
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v0, a1, a2);
        v5 = *((long long *)&v0);
        v6 = *((long long *)&v1);
        if (v5 == 2)
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(v6);
        }
        else
        {
            v7 = &v2;
LABEL_4ae9a6:
            memcpy(&v3, v7, 160);
        }
    }
    v12 = _ZN7uu_tail6follow5files12FileHandling7get_mut17hb7abf8e512a39fb9E.llvm.893476530518564186(a0, a1, a2, v8, v10, v11);
    v12[0] = v5;
    v12[1] = v9;
    return memcpy(v12 + 1, &v3, 160);
}
