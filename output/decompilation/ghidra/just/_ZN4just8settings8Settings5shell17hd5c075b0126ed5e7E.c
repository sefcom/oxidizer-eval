void _ZN4just8settings8Settings5shell17hd5c075b0126ed5e7E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 200);
  uVar2 = *(undefined8 *)(param_3 + 0xd0);
  if (*(long *)(param_3 + 0xd8) == -0x8000000000000000) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hb39d7af186885eb1E
              (param_1 + 2,&PTR_DAT_00530e20,1);
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h3abe9a22b7d90a72E
              (param_1 + 2,*(long *)(param_3 + 0xe0),
               *(long *)(param_3 + 0xe0) + *(long *)(param_3 + 0xe8) * 0x18);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}