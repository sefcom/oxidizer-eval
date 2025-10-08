void _ZN2rg5flags5parse6Parser9find_long17h9dc8bf2eec00e1d3E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN2rg5flags5parse7FlagMap4find17hdf23bd2dbf42aadcE(param_2 + 0x18,param_3,param_4);
  uVar2 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (param_1,param_3,param_4);
    return;
  }
  if (uVar2 < *(ulong *)(param_2 + 0x10)) {
    param_1[1] = uVar2 * 0x28 + *(long *)(param_2 + 8);
    *param_1 = 0x8000000000000000;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00526688)
            (uVar2,*(ulong *)(param_2 + 0x10),&PTR_s_crates_core_flags_parse_rs_004eb5f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}