long _ZN7uu_join5State7combine17h04498694d71d4131E
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined local_40 [16];
  
  local_40 = (*(code *)PTR__ZN7uu_join5State15get_current_key17hb0aa7b8c555c38dcE_00204f58)();
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar8 = 0;
  }
  else {
    local_b0 = *(long *)(param_1 + 8);
    lVar12 = *(long *)(param_1 + 0x10) * 0x30 + local_b0;
    lVar2 = *(long *)(param_3 + 8);
    lVar9 = *(long *)(param_3 + 0x10) * 0x30 + lVar2;
    uVar1 = *(undefined *)(param_4 + 0x148);
    if (*(long *)(param_4 + 0x140) == 0) {
      auVar7 = local_40;
      if (local_40._0_8_ == 0) {
        auVar7 = *(undefined (*) [16])(param_4 + 0x120);
      }
      local_98 = auVar7._8_8_;
      local_a8 = auVar7._0_8_;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_4 + 0x108);
      uVar5 = *(undefined8 *)(param_4 + 0x110);
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      lVar11 = lVar2;
      lVar10 = local_b0 + 0x30;
      do {
        while (lVar11 == lVar9) {
          bVar13 = lVar10 == lVar12;
          lVar11 = lVar2;
          local_b0 = lVar10;
          lVar10 = lVar10 + 0x30;
          if (bVar13) {
            return 0;
          }
        }
        lVar8 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                          (param_2,local_a8,local_98);
        if (lVar8 != 0) {
          return lVar8;
        }
        lVar8 = _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h4210fd7bff018645E
                          (uVar4,uVar5,param_2,local_b0,uVar3);
        if (lVar8 != 0) {
          return lVar8;
        }
        lVar8 = _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h4210fd7bff018645E
                          (uVar4,uVar5,param_2,lVar11,uVar6);
        if (lVar8 != 0) {
          return lVar8;
        }
        local_68 = (undefined8 *)CONCAT71(local_68._1_7_,uVar1);
        lVar8 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                          (param_2,&local_68,1);
        lVar11 = lVar11 + 0x30;
      } while (lVar8 == 0);
    }
    else {
      local_48 = lVar2;
      lVar11 = local_b0 + 0x30;
      do {
        while (lVar10 = local_48 + 0x30, local_48 == lVar9) {
          bVar13 = lVar11 == lVar12;
          local_48 = lVar2;
          local_b0 = lVar11;
          lVar11 = lVar11 + 0x30;
          if (bVar13) {
            return 0;
          }
        }
        local_68 = (undefined8 *)local_40;
        local_58 = local_b0;
        local_60 = param_1;
        local_50 = param_3;
        lVar8 = _ZN7uu_join15Repr_LT_Sep_GT_12print_format17heaf7e2b100816df7E
                          (param_4,param_2,&local_68);
        if (lVar8 != 0) {
          return lVar8;
        }
        local_68 = (undefined8 *)CONCAT71(local_68._1_7_,uVar1);
        lVar8 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                          (param_2,&local_68,1);
        local_48 = lVar10;
      } while (lVar8 == 0);
    }
  }
  return lVar8;
}