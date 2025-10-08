void _ZN11forc_crypto4keys6vanity19validate_hex_string17h622429bd06bdd4a3E
               (ulong *param_1,long param_2,long param_3)

{
  undefined uVar1;
  char cVar2;
  long local_28;
  long local_20;
  
  local_20 = param_2 + param_3;
  local_28 = param_2;
  uVar1 = _ZN4core4iter6traits8iterator8Iterator8try_fold17heb0827174d4858c0E(&local_28);
  cVar2 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h12e0c1168ef1dc6aE
                    (uVar1);
  if (cVar2 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (param_1 + 1,"Pattern must contain only hex characters (0-9, a-f)",0x33);
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (param_1 + 1,param_2,param_3);
  }
  *param_1 = (ulong)(cVar2 == '\0');
  return;
}