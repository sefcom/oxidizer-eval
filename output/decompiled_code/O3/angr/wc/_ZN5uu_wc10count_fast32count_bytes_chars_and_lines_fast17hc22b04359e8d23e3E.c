long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::hc22b04359e8d23e3(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4038], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2030]
    void* v4;  // [sp-0x1030]
    unsigned long v6;  // rax
    void* v7;  // r13
    unsigned long long v8;  // rdx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v7 = 0;
    while (true)
    {
        if (!_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(a1, &v1, 0x4000))
        {
            if (!v8)
            {
                a0->field_0 = v7;
                a0->field_8 = 0;
                a0->field_10 = v0;
                *((int128_t *)&(&a0->field_10)[1]) = 0;
                *((long long *)((char *)&a0->field_18 + 8)) = 0;
                return a0;
            }
            if (v8 >= 16385)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v7 += v8;
            v0 += bytecount::count::haa5dea3f1ae6a63e(&v1, v8, 10);
        }
        else if ((char)_ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE.llvm.4946481185994499599(v8) == 35)
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8a390ff74bc7419eE.llvm.4946481185994499599(v8);
        }
        else
        {
            a0->field_0 = v7;
            a0->field_8 = 0;
            a0->field_10 = v0;
            *((int128_t *)&(&a0->field_10)[1]) = 0;
            *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
            return a0;
        }
    }
}
