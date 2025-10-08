void fish::terminal::Term::new(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x158]
    unsigned long long v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x128]
    unsigned long long v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0xf8]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x48]
    unsigned long long v22;  // [bp-0x38]
    unsigned long long v24;  // rax
    char v25;  // al
    char v26;  // al
    unsigned long v27;  // rdx

    v21 = fish::terminal::get_str_cap(a1, "mdZHZRmhusuemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v20 = fish::terminal::get_str_cap(a1, "ZHZRmhusuemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v19 = fish::terminal::get_str_cap(a1, "ZRmhusuemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v18 = fish::terminal::get_str_cap(a1, "mhusuemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v17 = fish::terminal::get_str_cap(a1, "usuemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v16 = fish::terminal::get_str_cap(a1, "uemrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v15 = fish::terminal::get_str_cap(a1, "mrsoAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v14 = fish::terminal::get_str_cap(a1, "soAFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v13 = fish::terminal::get_str_cap(a1, "AFSfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v12 = fish::terminal::get_str_cap(a1, "SfABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v11 = fish::terminal::get_str_cap(a1, "ABSbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v10 = fish::terminal::get_str_cap(a1, "SbmeclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v9 = fish::terminal::get_str_cap(a1, "meclupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v8 = fish::terminal::get_str_cap(a1, "clupdolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v7 = fish::terminal::get_str_cap(a1, "updolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v6 = fish::terminal::get_str_cap(a1, "dolendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v5 = fish::terminal::get_str_cap(a1, "lendLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v4 = fish::terminal::get_str_cap(a1, "ndLERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v3 = fish::terminal::get_str_cap(a1, "LERIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v2 = fish::terminal::get_str_cap(a1, "RIceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v1 = fish::terminal::get_str_cap(a1, "ceCoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v0 = fish::terminal::get_str_cap(a1, "cdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP");
    v22 = fish::terminal::get_num_cap(a1, "CoitxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v24 = fish::terminal::get_num_cap(a1, "itxnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v25 = fish::terminal::get_flag_cap(a1, "xnamTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    v26 = fish::terminal::get_flag_cap(a1, "amTrying path '%ls'/run/current-system/sw/share/terminfo/usr/pkg/share/terminfoassertion failed: !cap.to_bytes().is_empty()src/termsize.rs");
    a0->field_20 = v21;
    a0->field_28 = v27;
    a0->field_30 = v20;
    a0->field_38 = v27;
    a0->field_40 = v19;
    a0->field_48 = v27;
    a0->field_50 = v18;
    a0->field_58 = v27;
    a0->field_60 = v17;
    a0->field_68 = v27;
    a0->field_70 = v16;
    a0->field_78 = v27;
    a0->field_80 = v15;
    a0->field_88 = v27;
    a0->field_90 = v14;
    a0->field_98 = v27;
    a0->field_a0 = v13;
    a0->field_a8 = v27;
    a0->field_b0 = v12;
    a0->field_b8 = v27;
    a0->field_c0 = v11;
    a0->field_c8 = v27;
    a0->field_d0 = v10;
    a0->field_d8 = v27;
    a0->field_e0 = v9;
    a0->field_e8 = v27;
    a0->field_f0 = v8;
    a0->field_f8 = v27;
    a0->field_100 = v7;
    a0->field_108 = v27;
    a0->field_110 = v6;
    a0->field_118 = v27;
    a0->field_120 = v5;
    a0->field_128 = v27;
    a0->field_130 = v4;
    a0->field_138 = v27;
    a0->field_140 = v3;
    a0->field_148 = v27;
    a0->field_150 = v2;
    a0->field_158 = v27;
    a0->field_160 = v1;
    a0->field_168 = v27;
    a0->field_170 = v0;
    a0->field_178 = v27;
    a0->field_0 = v22;
    a0->field_8 = v27;
    a0->field_10 = v24;
    a0->field_18 = v27;
    a0->field_180 = v25;
    a0->field_181 = v26;
    core::ptr::drop_in_place<terminfo::database::Database>(a1);
    return;
}
