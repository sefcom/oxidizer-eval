int fish::builtins::set::erase()
{
    char v4;  // [bp-0x171]
    unsigned int v6;  // [bp-0x168]
    char v8;  // [bp-0x164]
    void* v26;  // [bp-0x150]
    unsigned int *v30;  // [bp-0x148]
    unsigned int v37;  // [bp-0x13c]
    unsigned long v78;  // [bp-0x80]
    unsigned long long v80[2];  // [bp-0x70]
    void* v81;  // [bp-0x68]
    unsigned long long v89;  // [bp-0x30]
    unsigned long v90;  // [bp-0x28]
    unsigned long long v92;  // [bp-0x20]
    unsigned long long v93;  // [bp-0x18]
    unsigned long long v94;  // [bp-0x10]
    unsigned long long v96;  // [bp+0x8]
    unsigned long long v102;  // r15
    unsigned long long v103;  // r14
    unsigned long long v104;  // r13
    unsigned long v105;  // r12
    unsigned long long v106;  // rbx
    unsigned long long v107[2];  // r9
    unsigned long long v108[2];  // r13
    unsigned long v109;  // r8
    unsigned long v110;  // r14
    unsigned long long v111;  // rcx
    unsigned long long v112;  // r12
    struct_1 *v113;  // rdx
    unsigned int *v114;  // rsi
    void* v115;  // rdi
    unsigned long v116;  // rbx
    unsigned long long v117;  // rax
    unsigned long v118;  // rsi
    unsigned long long v120;  // rbp
    unsigned long long v298;  // rdx
    unsigned long long v299;  // rdx

    v94 = v102;
    v93 = v103;
    v92 = v104;
    v90 = v105;
    v89 = v106;
    v108 = v107;
    v110 = v109;
    v112 = v111;
    v102 = v113;
    v30 = v114;
    v26 = v115;
    v116 = (unsigned int)v113.scope();
    v6 = 0;
    v8 = 0;
    if (!((char)v6.next() & 1))
    {
LABEL_136bd1c:
        return;
    }
    v117 = v96;
    if (v117)
    {
        v118 = (v117) * 16;
        v80[0] = v118 + (char *)v107;
        v78 = v111 + 472;
        v4 = v113->field_11;
        v81 = v118 - v117 * 16;
        v120 = 0;
        v37 = v116;
    }
    else
    {
        if ((unsigned int)v116 == 0x100)
        {
            do
            {
                if ((unsigned int)v298 > 15)
                    goto LABEL_136be8a;
                if ((unsigned int)v298 > 8)
                    goto LABEL_136be7d;
            } while (((char)v6.next() & 1));
            goto LABEL_136bd1c;
        }
        while (true)
        {
            if ((unsigned int)v299 > 15)
            {
LABEL_136be8a:
                core::panicking::panic_const::panic_const_shl_overflow(&g_14ccc40); /* do not return */
            }
            if ((unsigned int)v299 > 8)
            {
LABEL_136be7d:
                core::option::unwrap_failed(&g_14ccc58); /* do not return */
            }
            if ((1 << ((char)v299 & 31) & (unsigned int)v116 & 32511))
            {
                goto LABEL_136bd1c;
            }
            else if (!((char)v6.next() & 1))
            {
                goto LABEL_136bd1c;
            }
        }
    }
}
