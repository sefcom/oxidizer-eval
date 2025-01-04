void __rustcall
uu_dd::parseargs::parse_bytes_no_x
          (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined auVar1 [16];
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined2 local_50;
  undefined local_4e;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  long lVar2;
  
  local_50 = 0x101;
  local_4e = 0;
  local_70[0] = 0;
  local_60 = 0;
  local_80 = param_2;
  local_78 = param_3;
  auVar4 = core::str::_<impl_str>::find(param_4,param_5);
  auVar5 = core::str::_<impl_str>::rfind(param_4,param_5,0x77);
  auVar6 = core::str::_<impl_str>::rfind(param_4,param_5,0x62);
  lVar2 = auVar6._0_8_;
  if (auVar4._0_8_ == 0) {
    if (auVar5._0_8_ == 0) {
      if (lVar2 == 0) {
        uucore::parser::parse_size::Parser::parse_u64(&local_a0,local_70,param_4,param_5);
        if (local_a0 < 2) {
                    /* try { // try from 001d4782 to 001d4795 has its CatchHandler @ 001d4819 */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_48,local_80,local_78);
          param_1[3] = local_38;
          *(undefined4 *)(param_1 + 1) = local_48;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
          *(undefined4 *)(param_1 + 2) = uStack_40;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
          *param_1 = 0xd;
          core::ptr::
          drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                    (&local_a0);
          return;
        }
        uVar3 = 0xffffffffffffffff;
        if ((int)local_a0 != 2) {
          uVar3 = local_98;
        }
        core::ptr::
        drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                  (&local_a0);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar3;
        auVar5 = auVar6 * ZEXT816(1);
      }
      else {
        parse_bytes_only(&local_a0,param_4,param_5,auVar6._8_8_);
        if (local_a0 != 0xe) {
          param_1[2] = local_90;
          param_1[3] = uStack_88;
          *param_1 = local_a0;
          param_1[1] = local_98;
          return;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_98;
        auVar5 = auVar4 * ZEXT816(0x200);
      }
      goto joined_r0x001d46eb;
    }
    if (lVar2 != 0) goto LAB_001d468c;
    parse_bytes_only(&local_a0,param_4,param_5,auVar5._8_8_);
    if (local_a0 != 0xe) goto LAB_001d4744;
    uVar3 = 2;
  }
  else {
    if (auVar5._0_8_ != 0 || lVar2 != 0) {
LAB_001d468c:
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,local_80,local_78);
      *param_1 = 7;
      return;
    }
    parse_bytes_only(&local_a0,param_4,param_5,auVar4._8_8_);
    if (local_a0 != 0xe) {
LAB_001d4744:
      param_1[2] = local_90;
      param_1[3] = uStack_88;
      *param_1 = local_a0;
      param_1[1] = local_98;
      return;
    }
    uVar3 = 1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_98;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  auVar5 = auVar5 * auVar1;
joined_r0x001d46eb:
  if (auVar5._8_8_ == 0) {
    param_1[1] = auVar5._0_8_;
    uVar3 = 0xe;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,local_80,local_78);
    uVar3 = 8;
  }
  *param_1 = uVar3;
  return;
}