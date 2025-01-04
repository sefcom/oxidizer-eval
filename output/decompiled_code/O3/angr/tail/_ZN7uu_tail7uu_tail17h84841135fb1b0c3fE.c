long long uu_tail::uu_tail::h84841135fb1b0c3f(char a0[77], unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x19a]
    char v1;  // [sp-0x199]
    int v2;  // [sp-0x198]
    unsigned long long v3;  // [sp-0x188]
    char v4;  // [bp-0x178]
    char v5;  // [bp-0x170]
    char v6;  // [bp-0x168]
    unsigned long long v7;  // [sp-0x160]
    unsigned long long v8;  // [sp-0x158]
    char v9;  // [bp-0x150]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xb0]
    unsigned long long v13;  // rdx
    unsigned long long v14[6];  // rbp
    unsigned long long v15;  // r8
    unsigned long long v16;  // r9
    int v17;  // ymm0
    int v18;  // xmm0
    unsigned long long v19;  // r8
    unsigned long long v20;  // r9
    unsigned long long v21[6];  // rax
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    char v24;  // bpl
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rsi

    v0 = a0[74];
    v1 = 1;
    uu_tail::follow::watch::Observer::from::h487da06aa235f7f0(&v9, a0, a2);
    v14 = uu_tail::follow::watch::Observer::start::h087097f796044307(&v9, a0, v13);
    if (v14)
    {
        ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v9, v22, v23);
        return v21;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4778a48a6f997702(&v4, &a0[24]);
    v7 = *((long long *)&v5);
    v8 = *((long long *)&v6) * 48 + v7;
    v14 = ::0x4ffe90::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&v7);
    if (v14)
    {
        do
        {
            if (v14[3] != 0x8000000000000000)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v10, "/dev/stdin: \ncannot open '' for reading: error reading '': : cannot follow end of this type of filesrc/uu/tail/src/tail.rs", 10);
                v3 = *((long long *)&v11);
                v18 = *((int128_t *)&v10);
                v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
                v2 = v18;
                if ((char)::0x4ff9d0::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(v14[4], v14[5], (long long)(&v2)[8], *((long long *)&v11), v19, v20))
                {
                    ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v2);
                }
                else
                {
                    ::0x4ff370::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v2);
                    v21 = uu_tail::tail_file::he6a88cf1ecd2d2b4(a0, &v0, v14, v14[4], v14[5], &v9, 0);
                }
            }
            v21 = uu_tail::tail_stdin::h2faea1a609e9111a(a0, &v0, v14, &v9, v15, v16);
            if (v21)
            {
                ::0x4ff630::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v4);
                ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v9, v22, v23);
                return v21;
            }
            v14 = ::0x4ffe90::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&v7);
        } while (v14);
    }
    ::0x4ff630::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v4);
    if (a0[76] == 2 || (char)uu_tail::args::Settings::has_only_stdin::h95a526b27c276cb7(a0))
    {
        v24 = 0;
    }
    else
    {
        memcpy(&v10, &v9, 144);
        v21 = uu_tail::follow::watch::follow::hde16143c14d7b9fc(&v10, a0, v13, v25, v19, v20);
        if (v21)
            return v21;
        v24 = v14 | -0x100 | 1;
    }
    uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    if (v24)
        return 0;
    ::0x4ff4c0::core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&v9, v26, v13);
}
