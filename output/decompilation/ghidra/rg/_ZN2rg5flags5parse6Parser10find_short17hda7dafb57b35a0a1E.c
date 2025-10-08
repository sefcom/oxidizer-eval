void _ZN2rg5flags5parse6Parser10find_short17hda7dafb57b35a0a1E
               (undefined8 *param_1,long param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined local_19;
  
  if (param_3 < 0x80) {
    local_19 = (undefined)param_3;
    auVar4 = _ZN2rg5flags5parse7FlagMap4find17hdf23bd2dbf42aadcE(param_2 + 0x18,&local_19,1);
    uVar3 = auVar4._8_8_;
    if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      if (*(ulong *)(param_2 + 0x10) <= uVar3) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00526688)
                  (uVar3,*(ulong *)(param_2 + 0x10),&PTR_s_crates_core_flags_parse_rs_004eb5e0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      param_1[1] = uVar3 * 0x28 + *(long *)(param_2 + 8);
      uVar2 = 0x8000000000000000;
      goto LAB_00355189;
    }
  }
  uVar2 = 0x8000000000000001;
  *(uint *)(param_1 + 1) = param_3;
LAB_00355189:
  *param_1 = uVar2;
  return;
}