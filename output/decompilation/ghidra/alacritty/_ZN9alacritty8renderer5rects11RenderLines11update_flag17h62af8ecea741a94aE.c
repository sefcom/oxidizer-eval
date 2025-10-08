void _ZN9alacritty8renderer5rects11RenderLines11update_flag17h62af8ecea741a94aE
               (undefined8 param_1,long *param_2,ushort param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  ushort local_92;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68;
  char cStack_67;
  char cStack_66;
  undefined5 uStack_65;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((param_3 & ~*(ushort *)(param_2 + 4)) == 0) {
    pcVar1 = (char *)((long)param_2 + 0x2a);
    pcVar10 = (char *)((long)param_2 + 0x29);
    bVar12 = (param_3 & 0x200) != 0;
    if (bVar12) {
      pcVar10 = (char *)((long)param_2 + 0x23);
      pcVar1 = (char *)((long)param_2 + 0x24);
    }
    plVar9 = param_2 + 5;
    if (bVar12) {
      plVar9 = (long *)((long)param_2 + 0x22);
    }
    cVar2 = *(char *)plVar9;
    cVar3 = *pcVar10;
    cVar4 = *pcVar1;
    lVar8 = *param_2;
    lVar5 = param_2[1];
    lVar11 = lVar5 + (ulong)((*(ushort *)(param_2 + 4) >> 5 & 1) != 0);
    local_92 = param_3;
    local_90 = param_1;
    lVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h63a5f0020c355a4dE
                      (param_1,&local_92);
    if (((((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x18) * 0x28 + *(long *)(lVar7 + 0x10), lVar7 == 0x28)) ||
        ((cVar2 != *(char *)(lVar7 + -8) || (cVar3 != *(char *)(lVar7 + -7))))) ||
       ((cVar4 != *(char *)(lVar7 + -6) ||
        ((lVar5 != *(long *)(lVar7 + -0x10) + 1 || (lVar8 != *(long *)(lVar7 + -0x18))))))) {
      local_88 = lVar8;
      uStack_80 = lVar5;
      local_78 = lVar8;
      uStack_70 = lVar11;
      local_68 = cVar2;
      cStack_67 = cVar3;
      cStack_66 = cVar4;
      lVar8 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h63a5f0020c355a4dE
                        (local_90,&local_92);
      if (lVar8 == 0) {
        local_58 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x28,0);
        if (local_58 == (undefined4 *)0x0) {
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(8,0x28);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(ulong *)(local_58 + 8) =
             CONCAT53(uStack_65,CONCAT12(cStack_66,CONCAT11(cStack_67,local_68)));
        local_58[4] = (undefined4)local_78;
        local_58[5] = local_78._4_4_;
        local_58[6] = (undefined4)uStack_70;
        local_58[7] = uStack_70._4_4_;
        *local_58 = (undefined4)local_88;
        local_58[1] = local_88._4_4_;
        local_58[2] = (undefined4)uStack_80;
        local_58[3] = uStack_80._4_4_;
        local_60 = 1;
        local_50 = 1;
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h05a4b789ce394c61E
                  (&local_48,local_90,local_92,&local_60);
        _ZN4core3ptr110drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alacritty__renderer__rects__RenderLine_GT__GT__GT_17h4e7e786c116508c1E
                  (local_48,local_40);
      }
      else {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heb08c3e06618e7bcE(lVar8 + 8,&local_88);
      }
    }
    else {
      *(long *)(lVar7 + -0x10) = lVar11;
    }
  }
  return;
}