long long uu_sort::check::check::h83a6fcfa8b1f49d2(unsigned long long a0, unsigned long long a1, struct_2 *a2, unsigned long a3)
{
    void* v0;  // [sp-0x270], Other Possible Types: struct_0 *
    struct_0 *v1;  // [sp-0x260], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x258]
    int v3;  // [bp-0x248], Other Possible Types: char
    unsigned long v4;  // [sp-0x238], Other Possible Types: unsigned long long
    int v5;  // [bp-0x228], Other Possible Types: struct_0 *
    unsigned long long v6;  // [sp-0x218]
    unsigned long long v7;  // [sp-0x208]
    unsigned long long v8;  // [sp-0x200]
    int v9;  // [sp-0x1f8]
    unsigned long v10;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x1e0]
    unsigned long long v12;  // [sp-0x1d8]
    unsigned long long v13[3];  // [bp-0x1d0], Other Possible Types: unsigned long, char
    char v14;  // [sp-0x1cf]
    unsigned long v15;  // [sp-0x1c8], Other Possible Types: unsigned long long
    int v16;  // [sp-0x1c0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v17;  // [sp-0x1b8], Other Possible Types: unsigned long
    char v18;  // [bp-0x1b0], Other Possible Types: unsigned long long
    int v19;  // [sp-0x1a8]
    unsigned long long v20;  // [sp-0x198]
    unsigned long long v21;  // [sp-0x110]
    unsigned long long v22;  // [sp-0x108]
    unsigned long long v23;  // [sp-0x100]
    unsigned long long v24;  // [sp-0xf8]
    unsigned long long v25;  // [sp-0xf0]
    unsigned long long v26;  // [sp-0xe8]
    unsigned long long v27;  // [sp-0xe0]
    unsigned long long v28;  // [sp-0xd8]
    void* v29;  // [bp-0xd0], Other Possible Types: unsigned long long [2], char, unsigned long
    unsigned long long v30;  // [sp-0xc8]
    unsigned long long v31;  // [sp-0xc0]
    char v33;  // r15b
    void* v34;  // r14
    unsigned long long v35;  // rcx
    unsigned long long v36[2];  // rdx
    unsigned long long v37;  // rax
    unsigned int v38;  // r13d
    void* v39;  // r12
    unsigned long long v41;  // 4096
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    struct_0 *v45;  // rax
    struct_0 *v46;  // rcx
    struct_0 *v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v49[2];  // rbx
    unsigned long long v50;  // rax
    unsigned long long v52;  // rsi
    char v53;  // al
    char v54;  // al
    unsigned long long v55;  // rsi

    v33 = -(a2->field_84);
    uu_sort::open::h4d8040bc6cf739e4(v13, a0, a1);
    v34 = v15;
    if (v13[0])
        return v34;
    v7 = v34;
    v8 = v16;
    std::sync::mpmc::sync_channel::he1fc3899bb692fad(v13, 2, v8, v35);
    *((int128_t *)&v9) = *((int128_t *)&v13[0]);
    v23 = v16;
    v24 = v17;
    std::sync::mpmc::sync_channel::hea3f01e536bee9f9(v13, 2, v36, v35);
    v25 = v16;
    v26 = v17;
    v2 = v16;
    v27 = v2;
    v12 = v17;
    v28 = v12;
    ::0x543af0::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h62b65dc7b074b444(&v29, a2);
    v21 = v7;
    v22 = v8;
    v13 = v23;
    v15 = v24;
    v16 = v25;
    v17 = v26;
    memcpy(&v18, &v29, 160);
    v31 = 0x8000000000000000;
    v29 = 0;
    std::thread::Builder::spawn_unchecked::h9cc69100f4948520(&v3, &v29, v13);
    ::0x541810::core::result::Result$LT$T$C$E$GT$::expect::h3933e51fa8b24ee0(&v29, &v3);
    ::0x540930::core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h31cb18cb2258bc4e(&v29);
    v37 = a2->field_68;
    if (v37 >= 0x19000)
        v37 = 0x19000;
    v38 = 0;
    do
    {
        v38 = ::0x540300::_$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(v38);
        uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(v13, v37);
        std::sync::mpmc::Sender$LT$T$GT$::send::ha0cd2f7c4f3735e4(&v29, &v9, v13, v35);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hc83c3e83e7125999(&v29);
    } while (v38 < 2);
    v0 = 0;
    v10 = v2;
    v11 = v12;
    v39 = 0;
    v2 = &g_600160;
    while (true)
    {
        v45 = _$LT$std..sync..mpsc..IntoIter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4ef5550a6c274c8d(&v10, v43, v44);
        if (!v45)
        {
            core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h24c900474d2a0c16(&v10, v52, v36);
            ::0x5410a0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::h37925fa868567a4a(&v0);
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h0894878a5756f3e0(&v9, v52, v36);
            return 0;
        }
        v1 = v45;
        v39 += 1;
        v46 = v0;
        v0 = 0;
        if (v46)
        {
            v5 = v46;
            v48 = v46->field_28;
            if (!v48)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            if (!v45->field_28)
            {
                v2 = &g_600178;
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            }
            v49 = v45->field_20;
            if ((char)uu_sort::compare_by::h8ab51c03c247817d((struct struct_1 *)&(&v46->field_20[v48].field_0)[v48 + 3], v49, a2, v46 + 1, v45 + 1) <= v33)
            {
                uu_sort::chunks::Chunk::recycle::h0e011c1b3d3a5463(v13, v5);
                std::sync::mpmc::Sender$LT$T$GT$::send::ha0cd2f7c4f3735e4(&v29, &v9, v13, v35);
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hc83c3e83e7125999(&v29);
                v47 = v1;
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(v13, v41, a1);
                v4 = v16;
                *((int128_t *)&v3) = *((int128_t *)&v13);
                ::0x541930::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&v29, v49[0], v49[1]);
                v20 = v31;
                *((int128_t *)&v19) = *((int128_t *)&v29);
                v54 = a2->field_86;
                v18 = v4;
                v16 = v3;
                v15 = v39;
                v14 = v54;
                v13 = 0;
                v34 = ::0x541b40::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(v13);
                ::0x540c50::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::hbf4b30d52dff9bf7(&v5);
                break;
            }
        }
        v29[0] = v47->field_20;
        v30 = (char *)v29 + 24 * v47->field_28;
        v31 = 0;
        v50 = _$LT$itertools..tuple_impl..TupleWindows$LT$I$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6b07921bcd03fcb3(&v29);
        if (!v50)
        {
            ::0x5410a0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::h37925fa868567a4a(&v0);
            v0 = v1;
        }
        else
        {
            v39 += 1;
            if ((char)uu_sort::compare_by::h8ab51c03c247817d(v50, v36, a2, v1 + 1, v1 + 1) <= v33)
                continue;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(v13, a0, a1);
            v6 = v16;
            *((int128_t *)&v5) = *((int128_t *)&v13);
            ::0x541930::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&v3, v36[0], v36[1]);
            v20 = v4;
            v19 = v3;
            v53 = a2->field_86;
            v18 = v6;
            *((int128_t *)&v16) = (int128_t)v5;
            v15 = v39;
            v14 = v53;
            v13 = 0;
            v34 = ::0x541b40::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(v13);
            break;
        }
    }
    ::0x540c50::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::hbf4b30d52dff9bf7(&v1);
    core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h24c900474d2a0c16(&v10, v55, v36);
    ::0x5410a0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::h37925fa868567a4a(&v0);
    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h0894878a5756f3e0(&v9, v55, v36);
    return v34;
}
