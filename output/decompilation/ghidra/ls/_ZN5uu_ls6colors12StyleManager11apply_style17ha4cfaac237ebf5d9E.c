void _ZN5uu_ls6colors12StyleManager11apply_style17ha4cfaac237ebf5d9E
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,byte param_5
               )

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char local_45;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_88 = 0;
  uStack_80 = 1;
  local_78 = 0;
  local_70 = param_1;
  if (*(char *)(param_2 + 1) == '\x02') {
                    /* try { // try from 00290403 to 0029044a has its CatchHandler @ 00290610 */
    pcVar2 = (char *)_ZN5uu_ls6colors12StyleManager16get_normal_style17h68940fba9ff7dfe3E(*param_2);
    if (pcVar2 != (char *)0x0) {
      local_58 = *(undefined4 *)(pcVar2 + 0x11);
      local_68 = *(undefined4 *)(pcVar2 + 1);
      uStack_64 = *(undefined4 *)(pcVar2 + 5);
      uStack_60 = *(undefined4 *)(pcVar2 + 9);
      uStack_5c = *(undefined4 *)(pcVar2 + 0xd);
      if (*pcVar2 != '\x02') {
        local_45 = *pcVar2;
        local_44 = local_68;
        uStack_40 = uStack_64;
        uStack_3c = uStack_60;
        uStack_38 = uStack_5c;
        local_34 = local_58;
        _ZN5uu_ls6colors12StyleManager14get_style_code17hd26268f81da97aceE
                  (&local_a8,param_2,&local_45);
                    /* try { // try from 00290458 to 00290461 has its CatchHandler @ 00290601 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                  (&local_88,CONCAT44(uStack_9c,uStack_a0),
                   CONCAT35(uStack_93,uStack_98) + CONCAT44(uStack_9c,uStack_a0));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_a8);
      }
    }
  }
  if (param_3 == 0) {
                    /* try { // try from 0029049c to 00290516 has its CatchHandler @ 00290610 */
    puVar3 = (undefined4 *)
             _ZN5uu_ls6colors12StyleManager16get_normal_style17h68940fba9ff7dfe3E(*param_2);
    if (puVar3 != (undefined4 *)0x0) {
      local_a8 = *puVar3;
      uStack_a4 = puVar3[1];
      uStack_a0 = puVar3[2];
      uStack_9c._0_1_ = (undefined)puVar3[3];
      uStack_9c._1_3_ = (undefined3)*(undefined8 *)((long)puVar3 + 0xd);
      uStack_98 = (undefined5)((ulong)*(undefined8 *)((long)puVar3 + 0xd) >> 0x18);
      if ((char)local_a8 != '\x02') {
        cVar1 = _ZN5uu_ls6colors12StyleManager16is_current_style17haceb8fa00830989fE
                          (param_2,&local_a8);
        if (cVar1 != '\0') {
          if (*(char *)(param_2 + 1) == '\x02') {
            puVar7 = (undefined *)0x1;
            lVar4 = 0;
          }
          else {
            *(undefined *)((long)param_2 + 0x1d) = 1;
            *(undefined *)(param_2 + 1) = 2;
            puVar7 = &DAT_001cfea8;
            lVar4 = 4;
          }
          bVar6 = 1;
                    /* try { // try from 002905f2 to 002905fb has its CatchHandler @ 00290610 */
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                    (&local_88,puVar7,puVar7 + lVar4);
          goto LAB_00290538;
        }
      }
    }
  }
  else {
    cVar1 = _ZN5uu_ls6colors12StyleManager16is_current_style17haceb8fa00830989fE(param_2,param_3);
    if (cVar1 == '\0') {
      if ((*(char *)(param_2 + 1) == '\x02') && (*(char *)((long)param_2 + 0x1d) != '\0')) {
        lVar4 = 0;
        puVar7 = (undefined *)0x1;
      }
      else {
        *(undefined *)((long)param_2 + 0x1d) = 1;
        *(undefined *)(param_2 + 1) = 2;
        puVar7 = &DAT_001cfea8;
        lVar4 = 4;
      }
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (&local_88,puVar7,puVar7 + lVar4);
      _ZN5uu_ls6colors12StyleManager14get_style_code17hd26268f81da97aceE(&local_a8,param_2,param_3);
                    /* try { // try from 00290524 to 0029052d has its CatchHandler @ 00290603 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (&local_88,CONCAT44(uStack_9c,uStack_a0),
                 CONCAT35(uStack_93,uStack_98) + CONCAT44(uStack_9c,uStack_a0));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_a8);
    }
  }
  bVar6 = 0;
LAB_00290538:
  puVar7 = &DAT_001d2861;
  puVar8 = (undefined *)0x1;
  if (param_5 == 0) {
    puVar7 = (undefined *)0x1;
  }
  uStack_98 = (undefined5)local_78;
  uStack_93 = (undefined3)((ulong)local_78 >> 0x28);
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
                    /* try { // try from 00290562 to 002905b2 has its CatchHandler @ 00290622 */
  _ZN3std3ffi6os_str8OsString4push17h7ae4c515aa982082E(&local_a8,param_4);
  if ((bool)(~bVar6 & *(char *)(param_2 + 1) == '\x02')) {
    uVar5 = 0;
  }
  else {
    *(undefined *)((long)param_2 + 0x1d) = 1;
    *(undefined *)(param_2 + 1) = 2;
    puVar8 = &DAT_001cfea8;
    uVar5 = 4;
  }
  _ZN3std3ffi6os_str8OsString4push17h8d27602952d812afE(&local_a8,puVar8,uVar5);
  _ZN3std3ffi6os_str8OsString4push17h8d27602952d812afE(&local_a8,puVar7,(ulong)param_5 * 3);
  local_70[2] = CONCAT35(uStack_93,uStack_98);
  *local_70 = CONCAT44(uStack_a4,local_a8);
  local_70[1] = CONCAT44(uStack_9c,uStack_a0);
  return;
}