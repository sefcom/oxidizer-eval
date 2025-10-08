void _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_4next17hcbcc00427960fc28E
               (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = param_2[1];
  uVar4 = param_2[2];
  if (uVar4 < uVar1) {
    param_2[2] = uVar4 + 1;
    auVar5 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                       (*(undefined8 *)(*param_2 + 8 + uVar4 * 0x18),
                        *(undefined8 *)(*param_2 + 0x10 + uVar4 * 0x18));
    *(undefined (*) [16])(param_1 + 1) = auVar5;
    *param_1 = 0xd;
    return;
  }
  uVar4 = uVar4 - 1;
  if (uVar4 < uVar1) {
    uVar3 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                      (*(undefined8 *)(*param_2 + 8 + uVar4 * 0x18),
                       *(undefined8 *)(*param_2 + 0x10 + uVar4 * 0x18));
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha1ed10b7b3735d74E
              (&local_20,uVar3);
    *param_1 = 1;
    param_1[1] = local_20;
    param_1[2] = uStack_18;
    param_1[3] = local_10;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002518d0)
            (uVar4,uVar1,&DAT_00249920);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}