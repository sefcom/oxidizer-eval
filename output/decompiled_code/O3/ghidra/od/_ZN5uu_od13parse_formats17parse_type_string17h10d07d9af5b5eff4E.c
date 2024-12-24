void __rustcall
uu_od::parse_formats::parse_type_string(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined extraout_DL;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  uleb128 *puVar4;
  undefined uVar5;
  ulong uVar6;
  undefined local_135;
  undefined4 local_134;
  undefined8 *local_130;
  long local_128;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined7 local_78;
  undefined uStack_71;
  undefined7 uStack_70;
  undefined4 *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  
  local_d8 = 0;
  uStack_d0 = 8;
  local_c8 = 0;
  local_a0 = param_2 + param_3;
  local_130 = param_1;
  local_128 = param_2;
  local_120 = param_3;
  local_a8 = param_2;
  iVar3 = core::str::validations::next_code_point(&local_a8);
  if ((iVar3 != 0) &&
     (puVar4 = (uleb128 *)(extraout_RDX & 0xffffffff), (int)extraout_RDX != 0x110000)) {
    do {
      local_134 = SUB84(puVar4,0);
      switch(local_134) {
      case 0x61:
        cVar1 = '\0';
        break;
      default:
        local_c0 = &local_134;
        local_b8 = local_128;
        local_b0 = local_120;
                    /* try { // try from 001cb017 to 001cb025 has its CatchHandler @ 001cb370 */
        parse_type_string::___closure__(&local_100,&local_c0);
        local_118 = (undefined4)CONCAT43(uStack_f4,local_f8._1_3_);
        uStack_114._3_1_ = (undefined)uStack_f0;
        uStack_114 = CONCAT13(uStack_114._3_1_,(int3)((uint)uStack_f4 >> 8));
        uStack_110 = (undefined4)(CONCAT44(uStack_ec,uStack_f0) >> 8);
        uStack_10c._0_3_ = (undefined3)((uint)uStack_ec >> 8);
        cVar1 = (char)local_f8;
        if (local_100 != -0x8000000000000000) {
          local_130[3] = CONCAT35((undefined3)uStack_10c,CONCAT41(uStack_110,uStack_114._3_1_));
          *(ulong *)((long)local_130 + 0x11) = CONCAT44(uStack_114,local_118);
          local_130[1] = local_100;
          *(char *)(local_130 + 2) = (char)local_f8;
          *local_130 = 1;
          goto LAB_001cb2ef;
        }
        goto LAB_001cb094;
      case 99:
        cVar1 = '\x01';
        break;
      case 100:
        cVar1 = '\x02';
        break;
      case 0x66:
        cVar1 = '\x06';
        break;
      case 0x6f:
        cVar1 = '\x03';
        break;
      case 0x75:
        cVar1 = '\x04';
        break;
      case 0x78:
        cVar1 = '\x05';
      }
      local_c0 = &local_134;
      local_b8 = local_128;
      local_b0 = local_120;
LAB_001cb094:
      uVar6 = 0x2010101010000 >> (cVar1 * '\b' & 0x3fU);
      iVar3 = core::str::validations::next_code_point(&local_a8);
      puVar4 = (uleb128 *)(ulong)extraout_EDX;
      if (iVar3 == 0) {
        puVar4 = &uleb128_00110000;
      }
      local_135 = 0;
      cVar2 = is_format_size_char(puVar4,uVar6 & 0xffffffff,&local_135);
      if (cVar2 == '\0') {
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = 1;
        uStack_10c = 0;
        local_108 = 0;
                    /* try { // try from 001cb110 to 001cb11c has its CatchHandler @ 001cb375 */
        while (cVar2 = is_format_size_decimal(puVar4,uVar6 & 0xff,&local_118), cVar2 != '\0') {
          iVar3 = core::str::validations::next_code_point(&local_a8);
          puVar4 = (uleb128 *)(ulong)extraout_EDX_00;
          if (iVar3 == 0) {
            puVar4 = &uleb128_00110000;
          }
        }
        uVar5 = local_135;
        if (local_108 != 0) {
                    /* try { // try from 001cb153 to 001cb190 has its CatchHandler @ 001cb36e */
          uVar6 = core::num::_<impl_core::str::traits::FromStr_for_u8>::from_str
                            (CONCAT44(uStack_10c,uStack_110));
          local_58 = local_128;
          local_50 = local_120;
          uVar5 = extraout_DL;
          local_60 = &local_118;
          if ((uVar6 & 1) != 0) {
            parse_type_string::___closure__(&local_100,&local_60);
            local_78 = CONCAT43(uStack_f4,local_f8._1_3_);
            uStack_71 = (undefined)uStack_f0;
            uStack_70 = (undefined7)(CONCAT44(uStack_ec,uStack_f0) >> 8);
            uVar5 = (char)local_f8;
            if (local_100 != -0x8000000000000000) {
              local_130[3] = CONCAT71(uStack_70,uStack_71);
              *(ulong *)((long)local_130 + 0x11) = CONCAT17(uStack_71,local_78);
              local_130[1] = local_100;
              *(char *)(local_130 + 2) = (char)local_f8;
              *local_130 = 1;
                    /* try { // try from 001cb336 to 001cb33f has its CatchHandler @ 001cb369 */
              core::ptr::drop_in_place<alloc::string::String>(&local_118);
              goto LAB_001cb2ef;
            }
          }
        }
                    /* try { // try from 001cb1ce to 001cb25b has its CatchHandler @ 001cb370 */
        local_135 = uVar5;
        core::ptr::drop_in_place<alloc::string::String>(&local_118);
LAB_001cb1d6:
        if ((int)puVar4 == 0x7a) {
          iVar3 = core::str::validations::next_code_point(&local_a8);
          puVar4 = (uleb128 *)(ulong)extraout_EDX_01;
          if (iVar3 == 0) {
            puVar4 = &uleb128_00110000;
          }
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        iVar3 = core::str::validations::next_code_point(&local_a8);
        if (iVar3 != 0) {
          puVar4 = (uleb128 *)(extraout_RDX_00 & 0xffffffff);
          goto LAB_001cb1d6;
        }
        uVar5 = 0;
        puVar4 = &uleb128_00110000;
      }
      od_format_type(&local_100,cVar1,local_135);
      if (local_100 == 3) {
        local_40 = local_128;
        local_38 = local_120;
        local_48 = &local_135;
                    /* try { // try from 001cb2af to 001cb2c0 has its CatchHandler @ 001cb369 */
        parse_type_string::___closure__(&local_118,&local_48);
        local_98 = local_118;
        uStack_94 = uStack_114;
        uStack_90 = uStack_110;
        uStack_8c = uStack_10c;
        local_88 = local_108;
        local_130[3] = local_108;
        *(undefined4 *)(local_130 + 1) = local_118;
        *(undefined4 *)((long)local_130 + 0xc) = uStack_114;
        *(undefined4 *)(local_130 + 2) = uStack_110;
        *(undefined4 *)((long)local_130 + 0x14) = uStack_10c;
        *local_130 = 1;
LAB_001cb2ef:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>
                  (&local_d8);
        return;
      }
      local_98 = local_f8;
      uStack_94 = uStack_f4;
      uStack_90 = uStack_f0;
      uStack_8c = uStack_ec;
      local_88 = local_e8;
      local_e0 = uVar5;
      ::alloc::vec::Vec<T,A>::push(&local_d8,&local_100);
    } while ((int)puVar4 != 0x110000);
  }
  local_130[3] = local_c8;
  local_130[1] = local_d8;
  local_130[2] = uStack_d0;
  *local_130 = 0;
  return;
}