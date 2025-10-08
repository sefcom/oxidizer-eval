void _ZN9alacritty7display7Display24validate_hint_highlights17hf25de0d633e6798eE
               (long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char local_c8 [8];
  long local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  byte local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined local_50;
  long local_48;
  long local_40;
  undefined local_38;
  
  local_60 = param_1 + 0x728;
  local_58 = param_1 + 0x7c0;
  local_48 = param_1 + 0x760;
  local_40 = param_1 + 0x7c8;
  lVar3 = *(long *)(param_1 + 0x798);
  local_70 = 0;
  local_68 = 2;
  local_50 = 1;
  local_38 = 0;
  _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h3691be2fc57bbae7E
            (&local_98,&local_70);
  if (local_88 != 2) {
    local_78 = param_1 + 0x18;
    local_80 = lVar3 + -1;
    do {
      bVar7 = local_88;
      lVar6 = local_98;
      if (*(char *)(local_98 + 0x30) != '\x02') {
        uVar4 = *(undefined8 *)(local_98 + 0x10);
        iVar1 = *(int *)(local_98 + 0x18);
        uVar5 = *(undefined8 *)(local_98 + 0x20);
        iVar2 = *(int *)(local_98 + 0x28);
        lVar11 = *local_90;
        *local_90 = lVar11 + 1;
        if (lVar11 != 0) {
          uVar9 = iVar1 + param_2;
          if (-1 < (int)uVar9) {
            local_a8 = (ulong)uVar9;
            local_a0 = uVar4;
          }
          local_b0 = (ulong)(-1 < (int)uVar9);
          _ZN4core6option15Option_LT_T_GT_6filter17h004bc68bf47f05d7E(local_c8,&local_b0,lVar3);
          lVar11 = 0;
          lVar13 = 0;
          if (local_c8[0] != '\0') {
            lVar11 = local_c0;
            lVar13 = local_b8;
          }
          uVar9 = iVar2 + param_2;
          if (-1 < (int)uVar9) {
            local_a8 = (ulong)uVar9;
            local_a0 = uVar5;
          }
          local_b0 = (ulong)(-1 < (int)uVar9);
          _ZN4core6option15Option_LT_T_GT_6filter17h004bc68bf47f05d7E(local_c8,&local_b0,lVar3);
          lVar10 = local_c0;
          lVar12 = local_b8;
          if (local_c8[0] == '\0') {
            lVar10 = local_80;
            lVar12 = *(long *)(param_1 + 0x7a0) + -1;
          }
          cVar8 = _ZN9alacritty7display6damage11FrameDamage10intersects17h58f384c2d23e8aa8E
                            (local_78,lVar11,lVar13,lVar10,lVar12);
          if (cVar8 != '\0') {
            if (((bVar7 & 1) != 0) && (*(char *)(param_1 + 0x415) != '\0')) {
              *(undefined *)(param_1 + 0x415) = 0;
              _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
                        (*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x348),0);
            }
            *(undefined *)(param_1 + 0x48) = 1;
                    /* try { // try from 0054f90d to 0054f914 has its CatchHandler @ 0054f920 */
            _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
                      (lVar6);
            *(undefined *)(lVar6 + 0x30) = 2;
          }
        }
      }
      _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h3691be2fc57bbae7E
                (&local_98,&local_70);
    } while (local_88 != 2);
  }
  return;
}