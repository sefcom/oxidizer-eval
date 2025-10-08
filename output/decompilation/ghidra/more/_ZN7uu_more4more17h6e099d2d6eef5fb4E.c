undefined  [16]
_ZN7uu_more4more17h6e099d2d6eef5fb4E
          (int param_1,undefined8 param_2,char param_3,long param_4,undefined8 param_5,long param_6,
          undefined8 param_7,long param_8)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  ulong uVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  ulong local_158;
  byte local_140;
  byte bStack_13f;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  ulong local_138;
  ulong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined local_b8 [8];
  ulong local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* try { // try from 00171396 to 001713b2 has its CatchHandler @ 001719d0 */
  (*(code *)PTR__ZN9crossterm8terminal4size17h3c0ebe6c30d16b00E_0022d2f0)(&local_140);
  if (local_140 == 1) {
    auVar11 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
              )(local_138);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h9d765ec0b470dfeaE(param_1);
    return auVar11;
  }
  uVar1 = uStack_13c;
  if (*(char *)(param_8 + 0x20) != '\0') {
    uVar1 = *(undefined2 *)(param_8 + 0x22);
  }
  _ZN7uu_more5Pager3new17heff9eb46b434e09fE(&local_140,param_1,uVar1,param_6,param_7,param_8);
  auVar11._8_8_ = local_130;
  auVar11._0_8_ = local_138;
  if (CONCAT26(uStack_13a,CONCAT24(uStack_13c,CONCAT22(uStack_13e,CONCAT11(bStack_13f,local_140))))
      == 2) {
    return auVar11;
  }
  local_40 = local_c8;
  uStack_38 = uStack_c0;
  local_50 = local_d8;
  uStack_48 = uStack_d0;
  local_60 = local_e8;
  uStack_58 = uStack_e0;
  local_70 = local_f8;
  uStack_6c = uStack_f4;
  local_80 = local_108;
  uStack_7c = uStack_104;
  uStack_78 = uStack_100;
  uStack_74 = uStack_fc;
  local_90 = local_118;
  uStack_8c = uStack_114;
  uStack_88 = uStack_110;
  uStack_84 = uStack_10c;
  local_a0 = local_128;
  uStack_9c = uStack_124;
  uStack_98 = uStack_120;
  uStack_94 = uStack_11c;
  local_b0 = local_138;
  local_a8 = local_130;
  if ((local_140 & 1) == 0) {
    lVar7 = _ZN9crossterm7command18write_command_ansi17he3f0a408e6774d22E(param_2,4);
    if ((lVar7 != 0) ||
       (lVar7 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
                )(param_2), lVar7 != 0)) {
      auVar11 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                )(lVar7);
      uVar10 = auVar11._8_8_;
      lVar7 = auVar11._0_8_;
      goto LAB_001715e6;
    }
                    /* try { // try from 00171570 to 001715da has its CatchHandler @ 001719b0 */
    lVar7 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0022d218
            )(param_2,"\rPattern not found\n",0x13);
    if (lVar7 != 0) {
      auVar11 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                )(lVar7);
      uVar10 = auVar11._8_8_;
      lVar7 = auVar11._0_8_;
      goto LAB_001715e6;
    }
    local_60 = local_60 + -1;
  }
  if (param_3 != '\0') {
                    /* try { // try from 001714b9 to 00171536 has its CatchHandler @ 001719b0 */
    lVar7 = _ZN9crossterm7command18write_command_ansi17he3f0a408e6774d22E(param_2,4);
    if ((lVar7 != 0) ||
       (lVar7 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
                )(param_2), lVar7 != 0)) {
      auVar11 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                )(lVar7);
      uVar10 = auVar11._8_8_;
      lVar7 = auVar11._0_8_;
      goto LAB_001715e6;
    }
    if (param_4 == 0) {
      param_5 = 0;
    }
    lVar7 = 1;
    if (param_4 != 0) {
      lVar7 = param_4;
    }
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17ha5d636e049a4df3eE(&local_140,lVar7,param_5);
    uVar2 = local_138;
                    /* try { // try from 00171541 to 0017155a has its CatchHandler @ 0017198e */
    lVar7 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0022d218
            )(param_2,local_138,local_130);
    if (lVar7 != 0) {
      auVar11 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                )(lVar7);
      lVar7 = auVar11._0_8_;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h252ce3d2b34612c7E
                (CONCAT26(uStack_13a,
                          CONCAT24(uStack_13c,CONCAT22(uStack_13e,CONCAT11(bStack_13f,local_140)))),
                 uVar2);
      uVar10 = auVar11._8_8_;
      goto LAB_001715e6;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h252ce3d2b34612c7E
              (CONCAT26(uStack_13a,
                        CONCAT24(uStack_13c,CONCAT22(uStack_13e,CONCAT11(bStack_13f,local_140)))),
               uVar2);
    local_60 = local_60 + -3;
  }
  auVar11 = (*(code *)PTR__ZN7uu_more5Pager4draw17h5a1246f76957cacaE_0022d308)
                      (local_b8,param_2,0x110000);
  uVar10 = auVar11._8_8_;
  lVar7 = auVar11._0_8_;
  if (lVar7 == 0) {
    if (param_3 != '\0') {
      *(undefined8 *)(param_8 + 0x18) = 0;
      local_60 = local_60 + 3;
    }
                    /* try { // try from 00171621 to 0017162e has its CatchHandler @ 001719b0 */
    bVar5 = (*(code *)PTR__ZN7uu_more5Pager12should_close17h4a303d1ec4dab858E_0022d310)(local_b8);
    if ((param_6 == 0 & bVar5) == 0) {
      pcVar9 = (code *)PTR__ZN9crossterm5event4poll17h4df22f16cb5171ddE_0022d318;
      do {
        while( true ) {
          do {
                    /* try { // try from 00171677 to 0017169d has its CatchHandler @ 001719b2 */
            (*pcVar9)(&local_140,0,10000000);
            if (local_140 == 1) {
                    /* try { // try from 00171941 to 00171970 has its CatchHandler @ 001719b0 */
              auVar11 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                        )(local_138);
              uVar10 = auVar11._8_8_;
              lVar7 = auVar11._0_8_;
              goto LAB_001715e6;
            }
          } while ((bStack_13f & 1) == 0);
          (*(code *)PTR__ZN9crossterm5event4read17hf474a75175ea9df0E_0022d320)(&local_140);
          uVar4 = local_138;
          uVar2 = CONCAT26(uStack_13a,
                           CONCAT24(uStack_13c,CONCAT22(uStack_13e,CONCAT11(bStack_13f,local_140))))
          ;
          if (uVar2 == 0x8000000000000006) {
            auVar11 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                      )(local_138);
            uVar10 = auVar11._8_8_;
            lVar7 = auVar11._0_8_;
            goto LAB_001715e6;
          }
          if ((uVar2 ^ 0x8000000000000000) == 2) break;
          if ((uVar2 ^ 0x8000000000000000) == 5) {
            local_158 = 0x110000;
                    /* try { // try from 001716f2 to 00171702 has its CatchHandler @ 001719a0 */
            (*(code *)PTR__ZN7uu_more5Pager11page_resize17h297f71cdfbb5531cE_0022d328)
                      (local_b8,local_138 & 0xffffffff,local_138 >> 0x10,
                       *(undefined4 *)(param_8 + 0x20),*(undefined2 *)(param_8 + 0x22));
            goto LAB_00171703;
          }
LAB_0017165f:
          _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17ha48fc9fd5e8599d4E(uVar2);
          pcVar9 = (code *)PTR__ZN9crossterm5event4poll17h4df22f16cb5171ddE_0022d318;
        }
        iVar8 = (int)(local_138 >> 0x20);
        if ((char)(local_130 >> 0x10) == '\0') {
          if ((char)local_138 != '\x0f') goto LAB_00171829;
          if ((char)local_130 == '\x02') {
            if (iVar8 != 99) goto LAB_00171829;
          }
          else if (((local_130 & 0xff) != 0) || (iVar8 != 0x71)) goto LAB_00171829;
LAB_00171976:
          lVar7 = 0;
          uVar10 = param_2;
LAB_0017197e:
          _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17ha48fc9fd5e8599d4E
                    (uVar2,uVar4);
          break;
        }
        if (((uint)(local_130 >> 0x10) & 0xff) != 1) goto LAB_0017165f;
LAB_00171829:
        if ((char)local_130 == '\0') {
          switch((uint)local_138 & 0xff) {
          case 4:
          case 8:
                    /* try { // try from 00171863 to 00171936 has its CatchHandler @ 001719a0 */
            auVar11 = (*(code *)PTR__ZN7uu_more5Pager7page_up17h8ac51dfc33201f5eE_0022d330)
                                (local_b8);
            uVar10 = auVar11._8_8_;
            lVar7 = auVar11._0_8_;
            if (lVar7 == 0) {
              auVar11 = (*(code *)
                          PTR__ZN7uu_more23paging_add_back_message17hedfccf033ee11a1cE_0022d338)
                                  (param_8,param_2);
              uVar10 = auVar11._8_8_;
              lVar7 = auVar11._0_8_;
              local_158 = 0x110000;
              if (lVar7 == 0) break;
            }
            goto LAB_0017197e;
          case 5:
          case 9:
switchD_00171861_caseD_5:
            cVar6 = (*(code *)PTR__ZN7uu_more5Pager12should_close17h4a303d1ec4dab858E_0022d310)
                              (local_b8);
            if (cVar6 != '\0') goto LAB_00171976;
            local_158 = 0x110000;
            (*(code *)PTR__ZN7uu_more5Pager9page_down17h5965084d09aa1aceE_0022d348)(local_b8);
            break;
          default:
            goto switchD_00171861_caseD_6;
          case 0xf:
            if (local_138 >> 0x20 == 0x20) goto switchD_00171861_caseD_5;
            if (iVar8 == 0x6a) {
              cVar6 = (*(code *)PTR__ZN7uu_more5Pager12should_close17h4a303d1ec4dab858E_0022d310)
                                (local_b8);
              if (cVar6 != '\0') goto LAB_00171976;
              local_158 = 0x110000;
              (*(code *)PTR__ZN7uu_more5Pager9next_line17hfb1901652829b949E_0022d350)(local_b8);
            }
            else {
              if (iVar8 != 0x6b) goto switchD_00171861_caseD_6;
              local_158 = 0x110000;
              (*(code *)PTR__ZN7uu_more5Pager9prev_line17h81e664c16673410eE_0022d340)(local_b8);
            }
          }
        }
        else {
switchD_00171861_caseD_6:
          if ((char)local_138 != '\x0f') goto LAB_0017165f;
          local_158 = local_138 >> 0x20;
        }
LAB_00171703:
        _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17ha48fc9fd5e8599d4E(uVar2,uVar4);
        pcVar9 = (code *)PTR__ZN9crossterm5event4poll17h4df22f16cb5171ddE_0022d318;
        if (*(char *)(param_8 + 0x25) == '\0') {
          if ((*(char *)(param_8 + 0x24) != '\0') &&
             (((lVar7 = _ZN9crossterm7command18write_command_ansi17he3f0a408e6774d22E(param_2,0),
               lVar7 != 0 ||
               (lVar7 = _ZN9crossterm7command18write_command_ansi17hc824fe4d1649aa05E(param_2),
               lVar7 != 0)) ||
              (lVar7 = (*(code *)
                         PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
                       )(param_2), lVar7 != 0)))) {
            auVar11 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                      )(lVar7);
            uVar10 = auVar11._8_8_;
            lVar7 = auVar11._0_8_;
            break;
          }
        }
        else {
                    /* try { // try from 00171718 to 001717e5 has its CatchHandler @ 001719b2 */
          lVar7 = _ZN9crossterm7command18write_command_ansi17hc824fe4d1649aa05E(param_2);
          pcVar9 = (code *)PTR__ZN9crossterm5event4poll17h4df22f16cb5171ddE_0022d318;
          if (((lVar7 != 0) ||
              (lVar7 = _ZN9crossterm7command18write_command_ansi17he3f0a408e6774d22E(param_2,2),
              lVar7 != 0)) ||
             (lVar7 = (*(code *)
                        PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
                      )(param_2), lVar7 != 0)) {
            auVar11 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                      )(lVar7);
            uVar10 = auVar11._8_8_;
            lVar7 = auVar11._0_8_;
            break;
          }
        }
        auVar11 = (*(code *)PTR__ZN7uu_more5Pager4draw17h5a1246f76957cacaE_0022d308)
                            (local_b8,param_2,local_158);
        uVar10 = auVar11._8_8_;
        lVar7 = auVar11._0_8_;
      } while (lVar7 == 0);
    }
    else {
      lVar7 = 0;
      uVar10 = param_2;
    }
  }
LAB_001715e6:
  auVar3._8_8_ = uVar10;
  auVar3._0_8_ = lVar7;
  _ZN4core3ptr35drop_in_place_LT_uu_more__Pager_GT_17h156f155d4da5bce8E(local_b8);
  return auVar3;
}