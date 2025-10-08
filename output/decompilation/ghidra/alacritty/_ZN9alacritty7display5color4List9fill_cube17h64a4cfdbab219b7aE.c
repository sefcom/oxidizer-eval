void _ZN9alacritty7display5color4List9fill_cube17h64a4cfdbab219b7aE
               (long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined2 *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_68 = 0x10;
  local_50 = param_2 + param_3 * 4;
  local_40 = param_1 + 0x11;
  lVar4 = 0x10;
  local_38 = 0;
  local_48 = param_2;
  do {
    cVar8 = (char)local_38;
    local_38 = CONCAT71((int7)((ulong)local_38 >> 8),cVar8 + '\x01');
    cVar3 = cVar8 * '(' + '7';
    if (cVar8 == '\0') {
      cVar3 = '\0';
    }
    puVar6 = (undefined *)(lVar4 * 3 + local_40);
    cVar8 = '7';
    lVar7 = 0;
    do {
      uVar5 = lVar4 + lVar7;
      cVar9 = cVar8;
      if ((char)lVar7 == '\0') {
        cVar9 = '\0';
      }
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 != (undefined2 *)0x0) {
        if (uVar5 < 0x10d) {
          puVar6[-0xf] = *(undefined *)(puVar2 + 1);
          *(undefined2 *)(puVar6 + -0x11) = *puVar2;
          goto LAB_00545561;
        }
LAB_005457cd:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar5,0x10d,&PTR_DAT_00982010);
LAB_005457e2:
        lVar4 = 0x10d;
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (0x10d,0x10d,&PTR_DAT_00982028);
LAB_005457fc:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (lVar4 + lVar7,0x10d,&PTR_DAT_00982028);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0x10c < uVar5) goto LAB_005457fc;
      puVar6[-0x11] = cVar3;
      puVar6[-0x10] = cVar9;
      puVar6[-0xf] = 0;
LAB_00545561:
      local_68 = lVar4 + lVar7 + 1;
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 == (undefined2 *)0x0) {
        if (uVar5 < 0x10c) {
          puVar6[-0xe] = cVar3;
          puVar6[-0xd] = cVar9;
          puVar6[-0xc] = 0x5f;
          goto LAB_005455e1;
        }
        goto LAB_005457e2;
      }
      if (0x10b < uVar5) {
LAB_005457c8:
        uVar5 = 0x10d;
        goto LAB_005457cd;
      }
      puVar6[-0xc] = *(undefined *)(puVar2 + 1);
      *(undefined2 *)(puVar6 + -0xe) = *puVar2;
LAB_005455e1:
      local_68 = lVar4 + lVar7 + 2;
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 == (undefined2 *)0x0) {
        if (0x10a < uVar5) goto LAB_005457e2;
        puVar6[-0xb] = cVar3;
        puVar6[-10] = cVar9;
        puVar6[-9] = 0x87;
      }
      else {
        if (0x10a < uVar5) goto LAB_005457c8;
        puVar6[-9] = *(undefined *)(puVar2 + 1);
        *(undefined2 *)(puVar6 + -0xb) = *puVar2;
      }
      local_68 = lVar4 + lVar7 + 3;
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 == (undefined2 *)0x0) {
        if (0x109 < uVar5) goto LAB_005457e2;
        puVar6[-8] = cVar3;
        puVar6[-7] = cVar9;
        puVar6[-6] = 0xaf;
      }
      else {
        if (0x109 < uVar5) goto LAB_005457c8;
        puVar6[-6] = *(undefined *)(puVar2 + 1);
        *(undefined2 *)(puVar6 + -8) = *puVar2;
      }
      local_68 = lVar4 + lVar7 + 4;
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 == (undefined2 *)0x0) {
        if (0x108 < uVar5) goto LAB_005457e2;
        puVar6[-5] = cVar3;
        puVar6[-4] = cVar9;
        puVar6[-3] = 0xd7;
      }
      else {
        if (0x108 < uVar5) goto LAB_005457c8;
        puVar6[-3] = *(undefined *)(puVar2 + 1);
        *(undefined2 *)(puVar6 + -5) = *puVar2;
      }
      local_68 = lVar4 + lVar7 + 5;
      local_60 = local_48;
      local_58 = local_50;
      puVar2 = (undefined2 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8c35254da18dacbeE
                         (&local_60,&local_68);
      if (puVar2 == (undefined2 *)0x0) {
        if (0x107 < uVar5) goto LAB_005457e2;
        puVar6[-2] = cVar3;
        puVar6[-1] = cVar9;
        *puVar6 = 0xff;
      }
      else {
        if (0x107 < uVar5) goto LAB_005457c8;
        *puVar6 = *(undefined *)(puVar2 + 1);
        *(undefined2 *)(puVar6 + -2) = *puVar2;
      }
      local_68 = lVar4 + lVar7 + 6;
      lVar7 = lVar7 + 6;
      cVar8 = cVar8 + '(';
      puVar6 = puVar6 + 0x12;
    } while ((char)lVar7 != '$');
    lVar4 = lVar4 + lVar7;
    if ((char)local_38 == '\x06') {
      return;
    }
  } while( true );
}