void _ZN7uu_stat9print_str17h6ec1c07eb7d5dc3aE
               (long param_1,ulong param_2,undefined param_3,undefined8 param_4,long param_5,
               ulong param_6)

{
  code *pcVar1;
  long lVar2;
  ulong extraout_RDX;
  ulong uVar3;
  
  uVar3 = param_2;
  lVar2 = param_1;
  if ((param_6 < param_2 && param_5 == 2) &&
     (lVar2 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (param_6,param_1,param_2), uVar3 = extraout_RDX, lVar2 == 0)) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
              (param_1,param_2,0,param_6,&PTR_s_src_uu_stat_src_stat_rs_00219bb0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E(lVar2,uVar3,param_3,param_4,1);
  return;
}