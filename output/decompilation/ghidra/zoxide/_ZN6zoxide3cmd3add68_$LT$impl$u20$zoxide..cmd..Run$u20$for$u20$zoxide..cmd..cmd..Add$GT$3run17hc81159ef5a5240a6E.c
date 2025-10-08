undefined **
_ZN6zoxide3cmd3add68__LT_impl_u20_zoxide__cmd__Run_u20_for_u20_zoxide__cmd__cmd__Add_GT_3run17hc81159ef5a5240a6E
          (byte *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ****ppppuVar4;
  char cVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined auVar13 [16];
  undefined **local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  ulong **local_98;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  undefined **local_48;
  undefined ***local_40;
  code *local_38;
  
  _ZN6zoxide6config12exclude_dirs17h9f1bdfa8604aa8e4E(&local_110);
  ppppuVar4 = local_100;
  ppuVar3 = local_108;
  local_a8 = local_110;
  local_a0 = local_108;
  local_98 = (ulong **)local_100;
                    /* try { // try from 0018e81b to 0018e852 has its CatchHandler @ 0018eb1c */
  _ZN6zoxide6config6maxage17h1da6279f48bc86a1E(&local_110);
  ppuVar1 = local_108;
  ppuVar7 = local_108;
  if (((ulong)local_110 & 1) == 0) {
    auVar13 = _ZN6zoxide4util12current_time17hc177626caa3eacceE();
    ppuVar8 = auVar13._8_8_;
    ppuVar7 = ppuVar8;
    if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4open17ha2e4ec58863e42c6E
                (&local_110);
      ppuVar7 = local_108;
      if ((int)local_110 != 1) {
        local_b8 = ppuVar1;
        local_58 = local_d0;
        local_68 = local_e0;
        uStack_60 = uStack_d8;
        local_78 = local_f0;
        uStack_70 = uStack_e8;
        local_88 = (undefined4)local_100;
        uStack_84 = local_100._4_4_;
        uStack_80 = (undefined4)uStack_f8;
        uStack_7c = uStack_f8._4_4_;
        local_90 = local_108;
        local_b0 = ppuVar8;
        if (*(long *)(param_1 + 0x20) != 0) {
          if ((*param_1 & 1) == 0) {
            uVar11 = (undefined4)_s__00118f38;
            uVar12 = (undefined4)((ulong)_s__00118f38 >> 0x20);
          }
          else {
            uVar11 = (undefined4)*(undefined8 *)(param_1 + 8);
            uVar12 = (undefined4)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
          }
          local_c8 = CONCAT44(uVar12,uVar11);
          lVar9 = *(long *)(param_1 + 0x18);
          local_c0 = ppuVar3 + (long)ppppuVar4 * 7;
          lVar10 = *(long *)(param_1 + 0x20) * 0x18;
          do {
                    /* try { // try from 0018e91a to 0018e93c has its CatchHandler @ 0018eafa */
            cVar5 = _ZN6zoxide6config16resolve_symlinks17h2e8c21983af893b2E();
            pcVar6 = _ZN6zoxide4util12resolve_path17h9fc2bd2a876b461aE;
            if (cVar5 != '\0') {
              pcVar6 = _ZN6zoxide4util12canonicalize17hbd4c56297afb77b5E;
            }
            (*pcVar6)(&local_110,lVar9);
            ppuVar8 = local_108;
            ppuVar1 = local_110;
            ppuVar7 = local_108;
            if (local_110 == (undefined **)0x8000000000000000) {
LAB_0018eab0:
              _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
                        (&local_90);
              goto LAB_0018eac3;
            }
                    /* try { // try from 0018e95f to 0018e9f7 has its CatchHandler @ 0018eae9 */
            _ZN6zoxide4util11path_to_str17h52f975d9744c5a30E(&local_110,local_108,local_100);
            ppuVar7 = local_108;
            ppuVar2 = local_110;
            if (local_110 == (undefined **)0x0) {
LAB_0018eaa4:
              _ZN4core3mem4drop17h8efcdb4578edbe7fE(ppuVar1,ppuVar8);
              goto LAB_0018eab0;
            }
            local_50 = local_110;
            local_48 = local_108;
            cVar5 = _ZN4core3str7pattern7Pattern15is_contained_in17h862045890a65aac6E
                              (local_110,local_108);
            if (cVar5 == '\0') {
              local_110 = ppuVar3;
              local_108 = local_c0;
              cVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h0c787573afdf4961E
                                (&local_110,ppuVar2,ppuVar7);
              if (cVar5 == '\0') {
                cVar5 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0023b8f8)
                                  (ppuVar2,ppuVar7);
                if (cVar5 == '\0') {
                  local_40 = &local_50;
                  local_38 = 
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3f43078e28aa9000E;
                  local_110 = &PTR_DAT_002348d0;
                  local_108 = (undefined **)0x1;
                  local_f0 = 0;
                  local_100 = &local_40;
                  uStack_f8 = 1;
                    /* try { // try from 0018ea97 to 0018eaa0 has its CatchHandler @ 0018eae5 */
                  ppuVar7 = (undefined **)
                            _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_110);
                  goto LAB_0018eaa4;
                }
                _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_10add_update17h93186d8728d9a211E
                          ((int)local_c8,&local_90,ppuVar2,ppuVar7,local_b0);
              }
            }
            _ZN4core3mem4drop17h8efcdb4578edbe7fE(ppuVar1,ppuVar8);
            lVar9 = lVar9 + 0x18;
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != 0);
        }
        if ((char)local_58 == '\x01') {
                    /* try { // try from 0018ea07 to 0018ea26 has its CatchHandler @ 0018eae7 */
          _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_3age17h2b65e1eeb6c66eecE
                    ((int)local_b8,&local_90);
        }
        ppuVar7 = (undefined **)
                  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4save17h965acf6a20fff002E
                            (&local_90);
        _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
                  (&local_90);
      }
    }
  }
LAB_0018eac3:
  _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_glob__Pattern_GT__GT_17haacfece5fe5473bbE
            (&local_a8);
  return ppuVar7;
}