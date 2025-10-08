undefined8
_ZN6zoxide3cmd6remove71__LT_impl_u20_zoxide__cmd__Run_u20_for_u20_zoxide__cmd__cmd__Remove_GT_3run17hfefcd25e63b4371bE
          (long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long *local_80;
  code *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4open17ha2e4ec58863e42c6E
            (&local_d0);
  uVar5 = local_c8;
  if ((int)local_d0 != 1) {
    local_38 = local_90;
    local_48 = local_a0;
    uStack_40 = uStack_98;
    local_58 = local_b0;
    uStack_50 = uStack_a8;
    local_68 = (undefined4)local_c0;
    uStack_64 = local_c0._4_4_;
    uStack_60 = (undefined4)uStack_b8;
    uStack_5c = uStack_b8._4_4_;
    local_70 = local_c8;
    if (param_2 != 0) {
      param_2 = param_2 * 0x18;
      do {
                    /* try { // try from 0019081e to 0019083b has its CatchHandler @ 0019095a */
        local_88 = param_1;
        cVar4 = _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_6remove17he03cc2ff8669cddeE
                          (&local_70,param_1);
        if (cVar4 == '\0') {
          _ZN6zoxide4util12resolve_path17h8aa7abc34508b0d7E(&local_d0,param_1);
          uVar3 = local_c8;
          ppuVar1 = local_d0;
                    /* try { // try from 00190857 to 0019089d has its CatchHandler @ 0019093a */
          _ZN6zoxide4util11path_to_str17h52f975d9744c5a30E(&local_d0,local_c8,local_c0);
          uVar5 = local_c8;
          ppuVar2 = local_d0;
          if (local_d0 != (undefined **)0x0) {
            cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h070d08ab5346a901E
                              (local_d0,local_c8,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x10));
            if ((cVar4 == '\0') &&
               (cVar4 = _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_6remove17he8cbb156e9e90a2bE
                                  (&local_70,ppuVar2,uVar5), cVar4 != '\0')) {
              _ZN4core3mem4drop17h8efcdb4578edbe7fE(ppuVar1,uVar3);
              goto LAB_0019080b;
            }
            local_80 = &local_88;
            local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff193ca47b9cf8cbE;
            local_d0 = &PTR_s_path_not_found_in_database__00234970;
            local_c8 = 1;
            local_b0 = 0;
            local_c0 = &local_80;
            uStack_b8 = 1;
                    /* try { // try from 001908ed to 001908f6 has its CatchHandler @ 00190936 */
            uVar5 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_d0);
          }
          _ZN4core3mem4drop17h8efcdb4578edbe7fE(ppuVar1,uVar3);
          goto LAB_00190917;
        }
LAB_0019080b:
        param_1 = param_1 + 0x18;
        param_2 = param_2 + -0x18;
      } while (param_2 != 0);
    }
                    /* try { // try from 0019090a to 00190913 has its CatchHandler @ 00190938 */
    uVar5 = _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4save17h965acf6a20fff002E
                      (&local_70);
LAB_00190917:
    _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
              (&local_70);
  }
  return uVar5;
}