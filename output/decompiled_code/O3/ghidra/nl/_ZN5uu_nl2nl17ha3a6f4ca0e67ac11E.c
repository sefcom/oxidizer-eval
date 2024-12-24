undefined  [16] __rustcall uu_nl::nl(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  long local_158;
  undefined8 local_150;
  undefined8 *local_148;
  long local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110 [7];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = local_110;
  local_110[0] = param_1;
  _<std::io::Lines<B>as_core::iter::traits::iterator::Iterator>::next(&local_78,puVar3);
  if (CONCAT44(uStack_74,local_78) == -0x7fffffffffffffff) {
    local_150 = 0;
    local_148 = puVar3;
  }
  else {
    local_a0 = param_3 + 0x10;
    local_88 = *(undefined8 *)(param_3 + 0x38);
    local_90 = *(undefined8 *)(param_3 + 0x40);
    local_a8 = param_3 + 0x20;
    local_98 = *(undefined8 *)(param_3 + 0x60);
    local_d8 = *(undefined8 *)(param_3 + 0x70);
    local_b8 = *(long *)(param_3 + 0x78);
    local_b0 = local_b8 + 1;
    local_c0 = param_3 + 0x81;
    local_c8 = param_3 + 0x48;
    local_d0 = *(undefined8 *)(param_3 + 0x68);
    lVar2 = *(long *)(param_2 + 0x10);
    local_80 = -0x8000000000000000;
    local_38 = local_68;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_158,&local_48);
    if (local_158 != local_80) {
      local_128 = local_158;
      local_120 = local_150;
      local_118 = local_148;
      lVar2 = lVar2 + 1;
      if (local_148 != (undefined8 *)0x0) {
        lVar2 = 0;
      }
      *(long *)(param_2 + 0x10) = lVar2;
                    /* try { // try from 00259a89 to 00259b97 has its CatchHandler @ 00259d98 */
      bVar1 = (*(code *)PTR_parse_00418300)(local_150,local_148,local_88,local_90);
                    /* WARNING: Could not recover jumptable at 0x00259ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (*(code *)(&DAT_00161a50 + *(int *)(&DAT_00161a50 + (ulong)bVar1 * 4)))();
      return auVar4;
    }
  }
  auVar4._8_8_ = local_148;
  auVar4._0_8_ = local_150;
  return auVar4;
}