long _ZN7uu_join5State7combine17hef9cb824dfbe07faE
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined local_40 [16];
  
  auVar9 = (*(code *)PTR__ZN7uu_join5State15get_current_key17h6b22667ac5a703a7E_00239388)();
  local_78 = *(long *)(param_1 + 8);
  local_70 = *(long *)(param_1 + 0x10) * 0x30 + local_78;
  local_40 = auVar9;
  lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbc4165e2b45ae32bE
                    (&local_78);
  if (lVar5 != 0) {
    lVar2 = *(long *)(param_3 + 8);
    lVar6 = *(long *)(param_3 + 0x10) * 0x30 + lVar2;
    uVar1 = *(undefined *)(param_4 + 0x28);
    local_88 = lVar2;
    local_80 = lVar6;
    if (*(long *)(param_4 + 0x10) == 0) {
      if (auVar9._0_8_ == 0) {
        auVar9 = *(undefined (*) [16])(param_4 + 0x18);
      }
      local_90 = auVar9._8_8_;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_3 + 0x40);
      do {
        while( true ) {
          lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbc4165e2b45ae32bE
                            (&local_88);
          if (lVar7 == 0) break;
          lVar8 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                            (param_2,auVar9._0_8_,local_90);
          if (lVar8 != 0) {
            return lVar8;
          }
          lVar8 = _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h97f24fe6eba7f34cE
                            (param_2,lVar5,uVar3);
          if (lVar8 != 0) {
            return lVar8;
          }
          lVar7 = _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h97f24fe6eba7f34cE
                            (param_2,lVar7,uVar4);
          if (lVar7 != 0) {
            return lVar7;
          }
          local_68 = (undefined8 *)CONCAT71(local_68._1_7_,uVar1);
          lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                            (param_2,&local_68,1);
          if (lVar7 != 0) {
            return lVar7;
          }
        }
        lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbc4165e2b45ae32bE
                          (&local_78);
        local_88 = lVar2;
        local_80 = lVar6;
      } while (lVar5 != 0);
    }
    else {
      do {
        while( true ) {
          lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbc4165e2b45ae32bE
                            (&local_88);
          if (lVar7 == 0) break;
          local_68 = (undefined8 *)local_40;
          local_60 = param_1;
          local_58 = lVar5;
          local_50 = param_3;
          local_48 = lVar7;
          lVar7 = _ZN7uu_join15Repr_LT_Sep_GT_12print_format17hea27b3577be33d0eE
                            (param_4,param_2,&local_68);
          if (lVar7 != 0) {
            return lVar7;
          }
          local_68 = (undefined8 *)CONCAT71(local_68._1_7_,uVar1);
          lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                            (param_2,&local_68,1);
          if (lVar7 != 0) {
            return lVar7;
          }
        }
        lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbc4165e2b45ae32bE
                          (&local_78);
        local_88 = lVar2;
        local_80 = lVar6;
      } while (lVar5 != 0);
    }
  }
  return 0;
}