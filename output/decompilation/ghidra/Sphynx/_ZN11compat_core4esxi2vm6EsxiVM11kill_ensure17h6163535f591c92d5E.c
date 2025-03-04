void _ZN11compat_core4esxi2vm6EsxiVM11kill_ensure17h6163535f591c92d5E(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int local_bc;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  undefined **local_98;
  long *plStack_90;
  long local_88;
  long local_80;
  long ***local_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long **local_50;
  code *local_48;
  int *local_40;
  undefined *local_38;
  
  local_bc = 1;
  local_68 = param_2 + 1;
  local_b0 = param_1;
  local_a8 = param_2;
  do {
    lVar2 = *param_2;
    _ZN11compat_core4esxi2vm6EsxiVM11get_running17ha53766a000af63c7E(&local_98);
    lVar4 = local_80;
    local_b8 = plStack_90;
    if (local_98 == (undefined **)0x1) {
      *local_b0 = (long)plStack_90;
      local_b0[1] = local_88;
      return;
    }
    lVar7 = local_80 * 0x20;
    local_60 = local_80;
    local_a0 = local_88;
    if (local_80 == 0) goto LAB_0014d679;
    lVar5 = 0;
    lVar9 = lVar7;
    plVar8 = plStack_90;
    while( true ) {
      plVar6 = plVar8 + 4;
      if (plVar8[1] == 0) {
        if (local_b8 + lVar4 * 4 != plVar6) {
          plVar8 = local_b8 + local_60 * 4;
          do {
            plVar1 = plVar6 + 4;
            if (plVar6[2] != 0) {
              (*(code *)PTR___rust_dealloc_004f3b10)(plVar6[1],plVar6[2],1);
            }
            plVar6 = plVar1;
          } while (plVar8 != plVar1);
        }
        goto LAB_0014d679;
      }
      lVar3 = *plVar8;
      if (plVar8[2] != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(plVar8[1],plVar8[2],1);
      }
      lVar10 = local_a0;
      plVar8 = local_b8;
      if (lVar3 == lVar2) break;
      lVar5 = lVar5 + 0x20;
      lVar9 = lVar9 + -0x20;
      plVar8 = plVar6;
      if (lVar9 == 0) goto LAB_0014d679;
    }
    if (lVar9 != 0x20) {
      do {
        lVar2 = *(long *)((long)plVar8 + lVar5 + 0x30);
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_004f3b10)
                    (*(undefined8 *)((long)plVar8 + lVar5 + 0x28),lVar2,1);
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar7 + -0x20 != lVar5);
    }
    if ((lVar10 != 0) && (lVar10 = lVar10 << 5, lVar10 != 0)) {
      (*(code *)PTR___rust_dealloc_004f3b10)(plVar8,lVar10,8);
    }
    param_2 = local_a8;
    if (2 < *(ulong *)PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE_004f39a0) {
      local_58 = local_68;
      local_50 = &local_58;
      local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5171b5b8900b63c9E;
      local_40 = &local_bc;
      local_38 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h78ed4d95ee7e652fE_004f4bf0
      ;
      local_98 = &PTR_DAT_004e63c0;
      plStack_90 = (long *)0x2;
      local_88 = 0;
      local_78 = &local_50;
      local_70 = 2;
      (*(code *)PTR__ZN3log17__private_api_log17hc54142160760cc34E_004f43d0)
                (&local_98,3,&PTR_DAT_004e63e0,0);
    }
    _ZN11compat_core4esxi2vm6EsxiVM4kill17h010dbcd712e5afe5E(&local_98,param_2);
    if ((char)local_98 != '\x03') goto LAB_0014d6bc;
    if (1 < local_bc) {
      (*(code *)PTR__ZN3std6thread5sleep17h5db7732762ff70faE_004f4898)(1,0);
    }
    local_bc = local_bc + 1;
  } while (local_bc < 10);
LAB_0014d69e:
  _ZN11compat_core4esxi2vm6EsxiVM4kill17h010dbcd712e5afe5E(&local_98,param_2);
  if ((char)local_98 == '\x03') {
    *(undefined *)local_b0 = 3;
  }
  else {
LAB_0014d6bc:
    *local_b0 = (long)local_98;
    local_b0[1] = (long)plStack_90;
  }
  return;
LAB_0014d679:
  param_2 = local_a8;
  if ((local_a0 != 0) && (local_a0 << 5 != 0)) {
    (*(code *)PTR___rust_dealloc_004f3b10)(local_b8,local_a0 << 5,8);
  }
  goto LAB_0014d69e;
}