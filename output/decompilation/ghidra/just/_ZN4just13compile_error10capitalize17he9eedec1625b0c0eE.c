void _ZN4just13compile_error10capitalize17he9eedec1625b0c0eE
               (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong extraout_RDX;
  long local_60;
  long local_58;
  undefined local_50 [24];
  undefined local_38 [32];
  
  local_58 = param_3 + param_2;
  local_60 = param_2;
  bVar1 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_60);
  if ((bVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    (*(code *)PTR__ZN4core7unicode12unicode_data11conversions8to_upper17hd4e5a9ef8e8428c0E_00566a70)
              (local_50,extraout_RDX & 0xffffffff);
    _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(local_38,local_50);
    _ZN4core4iter6traits8iterator8Iterator7collect17h59af5a3110a87165E(local_50,local_38);
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
              (param_1,local_50,local_60,local_58 - local_60);
  }
  return;
}