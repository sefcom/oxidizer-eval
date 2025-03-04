long long uu_tail::uu_tail::h84841135fb1b0c3f(char a0[77])
{
    void* v0;  // [sp-0x1a8]
    char v1;  // [sp-0x19a]
    char v2;  // [sp-0x199]
    int v3;  // [sp-0x198]
    unsigned long long v4;  // [sp-0x188]
    char v5;  // [bp-0x178]
    char v6;  // [bp-0x170]
    char v7;  // [bp-0x168]
    unsigned long long v8;  // [sp-0x160]
    unsigned long long v9;  // [sp-0x158]
    char v10;  // [bp-0x150]
    char v11;  // [bp-0xc0]
    char v12;  // [bp-0xb0]
    unsigned long long v14[6];  // rbp
    unsigned long long v15[6];  // rax
    int v16;  // ymm0
    int v17;  // xmm0
    unsigned long long v18[6];  // rax
    char v19;  // bpl
    unsigned long long v20[6];  // rax

    v1 = a0[74];
    v2 = 1;
    uu_tail::follow::watch::Observer::from::h487da06aa235f7f0(&v10, a0);
    v14 = uu_tail::follow::watch::Observer::start::h087097f796044307(&v10, a0);
    if (v14)
    {
        ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v10);
        return v14;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4778a48a6f997702(&v5, &a0[24]);
    v8 = *((long long *)&v6);
    v9 = *((long long *)&v7) * 48 + v8;
    v15 = ::0x4ffe90::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&v8);
    if (v15)
    {
        v14 = v15;
        do
        {
            if (v14[3] != 0x8000000000000000)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v11, "/dev/stdin: \ncannot open '' for reading: error reading '': : cannot follow end of this type of filesrc/uu/tail/src/tail.rs", 10);
                v4 = *((long long *)&v12);
                v17 = *((int128_t *)&v11);
                v16 = v16 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17;
                v3 = v17;
                if ((char)::0x4ff9d0::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(v14[4], v14[5], (long long)(&v3)[8], *((long long *)&v12)))
                {
                    ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v3);
                }
                else
                {
                    ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v3);
                    v0 = 0;
                    v18 = uu_tail::tail_file::he6a88cf1ecd2d2b4(a0, &v1, v14, v14[4], v14[5], &v10);
                }
            }
            v18 = uu_tail::tail_stdin::h2faea1a609e9111a(a0, &v1, v14, &v10);
            if (v18)
            {
                ::0x4ff630::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v5);
                ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v10);
                return v14;
            }
            v14 = ::0x4ffe90::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&v8);
        } while (v14);
    }
    ::0x4ff630::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v5);
    if (a0[76] == 2 || (char)uu_tail::args::Settings::has_only_stdin::h95a526b27c276cb7(a0))
    {
        v19 = 0;
    }
    else
    {
        memcpy(&v11, &v10, 144);
        v20 = uu_tail::follow::watch::follow::hde16143c14d7b9fc(&v11, a0);
        if (v20)
        {
            v14 = v20;
            return v14;
        }
        v19 = v14 & 0xffffffffffffff00 | 1;
    }
    uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    if (v19)
        return 0;
    ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v10);
}
