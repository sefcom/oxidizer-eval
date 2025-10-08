ulong _ZN9alacritty7display7Display24update_highlighted_hints17h6a14f2ce82852321E
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                undefined4 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  undefined uVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  ulong uVar7;
  ulong uVar8;
  undefined7 uVar9;
  byte bVar10;
  bool bVar11;
  undefined auVar12 [12];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = *(uint *)(param_2 + 0x6dc);
  local_7c = param_6;
  local_40 = param_3;
  local_38 = param_4;
  if ((uVar3 & 0x10000) == 0) {
    local_48 = '\x02';
LAB_0054e379:
    uVar7 = CONCAT71((int7)((ulong)unaff_RBP >> 8),*(char *)(param_1 + 0x790) == '\x02');
LAB_0054e384:
    local_88 = CONCAT71(uStack_47,local_48);
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
                    /* try { // try from 0054e3b6 to 0054e454 has its CatchHandler @ 0054e742 */
    _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
              ((undefined4 *)(param_1 + 0x760));
    uVar8 = uVar7 ^ 1;
    *(ulong *)(param_1 + 0x790) = CONCAT71(uStack_47,local_48);
    *(undefined4 *)(param_1 + 0x780) = local_58;
    *(undefined4 *)(param_1 + 0x784) = uStack_54;
    *(undefined4 *)(param_1 + 0x788) = uStack_50;
    *(undefined4 *)(param_1 + 0x78c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x770) = local_68;
    *(undefined4 *)(param_1 + 0x774) = uStack_64;
    *(undefined4 *)(param_1 + 0x778) = uStack_60;
    *(undefined4 *)(param_1 + 0x77c) = uStack_5c;
    *(undefined4 *)(param_1 + 0x760) = local_78;
    *(undefined4 *)(param_1 + 0x764) = uStack_74;
    *(undefined4 *)(param_1 + 0x768) = uStack_70;
    *(undefined4 *)(param_1 + 0x76c) = uStack_6c;
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    if ((char)uVar7 != '\x01') goto LAB_0054e48a;
    cVar4 = *(char *)(param_1 + 0x414);
  }
  else {
    _ZN9alacritty7display4hint14highlighted_at17h6f7fb2c30c56b0f7E
              (&local_78,param_2,param_3,param_4,*(undefined8 *)(param_2 + 0x290),
               *(undefined4 *)(param_2 + 0x298),0x924);
    if (local_48 == '\x02') goto LAB_0054e379;
    puVar1 = (undefined4 *)(param_1 + 0x760);
    if (*(char *)(param_1 + 0x790) != '\x02') {
                    /* try { // try from 0054e5d5 to 0054e5e1 has its CatchHandler @ 0054e6ed */
      uVar6 = _ZN76__LT_alacritty__display__hint__HintMatch_u20_as_u20_core__cmp__PartialEq_GT_2eq17h348168a43a161cd5E
                        (&local_78,puVar1);
      uVar7 = (ulong)uVar6;
      goto LAB_0054e384;
    }
    local_88 = CONCAT71(uStack_47,local_48);
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
              (puVar1);
    *(ulong *)(param_1 + 0x790) = CONCAT71(uStack_47,local_48);
    *(undefined4 *)(param_1 + 0x780) = local_58;
    *(undefined4 *)(param_1 + 0x784) = uStack_54;
    *(undefined4 *)(param_1 + 0x788) = uStack_50;
    *(undefined4 *)(param_1 + 0x78c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x770) = local_68;
    *(undefined4 *)(param_1 + 0x774) = uStack_64;
    *(undefined4 *)(param_1 + 0x778) = uStack_60;
    *(undefined4 *)(param_1 + 0x77c) = uStack_5c;
    *puVar1 = local_78;
    *(undefined4 *)(param_1 + 0x764) = uStack_74;
    *(undefined4 *)(param_1 + 0x768) = uStack_70;
    *(undefined4 *)(param_1 + 0x76c) = uStack_6c;
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    uVar8 = CONCAT71((int7)((ulong)puVar1 >> 8),1);
LAB_0054e48a:
    *(undefined *)(param_1 + 0x48) = 1;
    cVar4 = *(char *)(param_1 + 0x414);
  }
  uVar9 = (undefined7)(uVar8 >> 8);
  if (((cVar4 != '\x01') || (*(char *)(param_5 + 0x3a) == '\0')) ||
     ((*(char *)(param_2 + 0x280) != '\x02' &&
      (cVar4 = (*(code *)
                 PTR__ZN18alacritty_terminal9selection9Selection8is_empty17h0b26168e8eea422cE_009de588
               )(param_2 + 600), cVar4 == '\0')))) {
    local_88 = *(undefined8 *)(param_1 + 0x758);
    local_b8 = *(undefined4 *)(param_1 + 0x728);
    uStack_b4 = *(undefined4 *)(param_1 + 0x72c);
    uStack_b0 = *(undefined4 *)(param_1 + 0x730);
    uStack_ac = *(undefined4 *)(param_1 + 0x734);
    local_a8 = *(undefined4 *)(param_1 + 0x738);
    uStack_a4 = *(undefined4 *)(param_1 + 0x73c);
    uStack_a0 = *(undefined4 *)(param_1 + 0x740);
    uStack_9c = *(undefined4 *)(param_1 + 0x744);
    local_98 = *(undefined4 *)(param_1 + 0x748);
    uStack_94 = *(undefined4 *)(param_1 + 0x74c);
    uStack_90 = *(undefined4 *)(param_1 + 0x750);
    uStack_8c = *(undefined4 *)(param_1 + 0x754);
    *(undefined *)(param_1 + 0x758) = 2;
    cVar4 = (char)local_88;
    _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
              (&local_b8);
    if (cVar4 != '\x02') {
      *(undefined *)(param_1 + 0x48) = 1;
      uVar8 = CONCAT71(uVar9,1);
    }
    goto LAB_0054e5c1;
  }
  auVar12 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                      (*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x28),
                       param_1 + 0x798,*(undefined8 *)(param_2 + 200));
  _ZN9alacritty7display4hint14highlighted_at17h6f7fb2c30c56b0f7E
            (&local_b8,param_2,local_40,local_38,auVar12._0_8_,auVar12._8_4_,local_7c);
  cVar4 = (char)local_88;
  if ((char)local_88 == '\x02') {
    if (*(char *)(param_1 + 0x758) != '\x02') {
      *(undefined8 *)(param_1 + 200) = 0;
      if ((uVar3 & 0x2048) == 0 || (uVar3 & 0x10000) != 0) {
        uVar5 = 8;
        if (*(char *)(param_1 + 0x415) != '\b') goto LAB_0054e645;
      }
      else if (*(char *)(param_1 + 0x415) != '\0') {
        uVar5 = 0;
LAB_0054e645:
        *(undefined *)(param_1 + 0x415) = uVar5;
        _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
                  (*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x348),uVar5);
      }
    }
  }
  else {
    uVar8 = CONCAT71(uVar9,*(int *)(param_1 + 0xd8) != auVar12._8_4_ & *(byte *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 1;
    *(undefined (*) [12])(param_1 + 0xd0) = auVar12;
    if (*(char *)(param_1 + 0x415) != '\x03') {
      *(undefined *)(param_1 + 0x415) = 3;
                    /* try { // try from 0054e632 to 0054e692 has its CatchHandler @ 0054e6fc */
      _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
                (*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x348),3);
    }
  }
  bVar11 = *(char *)(param_1 + 0x758) == '\x02';
  puVar2 = (undefined8 *)(param_1 + 0x728);
  if (bVar11 || cVar4 == '\x02') {
    bVar10 = bVar11 && cVar4 == '\x02';
  }
  else {
    bVar10 = _ZN76__LT_alacritty__display__hint__HintMatch_u20_as_u20_core__cmp__PartialEq_GT_2eq17h348168a43a161cd5E
                       (puVar2,&local_b8);
  }
                    /* try { // try from 0054e696 to 0054e69d has its CatchHandler @ 0054e711 */
  _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
            (puVar2);
  *(undefined8 *)(param_1 + 0x758) = local_88;
  *(ulong *)(param_1 + 0x748) = CONCAT44(uStack_94,local_98);
  *(ulong *)(param_1 + 0x750) = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)(param_1 + 0x738) = CONCAT44(uStack_a4,local_a8);
  *(ulong *)(param_1 + 0x740) = CONCAT44(uStack_9c,uStack_a0);
  *puVar2 = CONCAT44(uStack_b4,local_b8);
  *(ulong *)(param_1 + 0x730) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  uVar9 = (undefined7)(uVar8 >> 8);
  if (bVar10 == 0) {
    *(undefined *)(param_1 + 0x48) = 1;
    uVar8 = CONCAT71(uVar9,(byte)uVar8 | bVar10 ^ 1);
  }
  else {
    uVar8 = CONCAT71(uVar9,(byte)uVar8 | bVar10 ^ 1);
  }
LAB_0054e5c1:
  return uVar8 & 0xffffffff;
}