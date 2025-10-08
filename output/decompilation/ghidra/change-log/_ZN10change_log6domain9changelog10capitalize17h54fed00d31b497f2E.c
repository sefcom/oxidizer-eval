undefined8 *
_ZN10change_log6domain9changelog10capitalize17h54fed00d31b497f2E
          (undefined8 *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  long local_60;
  long local_58;
  undefined local_50 [24];
  undefined local_38 [32];
  
  local_58 = param_3 + param_2;
  local_60 = param_2;
  auVar1 = _ZN4core3str11validations15next_code_point17h1501e091589260ceE(&local_60);
  if ((auVar1 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    (*(code *)PTR__ZN4core7unicode12unicode_data11conversions8to_upper17hd4e5a9ef8e8428c0E_007f7720)
              (local_50,auVar1._8_8_ & 0xffffffff);
    _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(local_38,local_50);
    _ZN4core4iter6traits8iterator8Iterator7collect17hf4b3160f6bdc6fc3E(local_50,local_38);
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
              (param_1,local_50,local_60,local_58 - local_60);
  }
  return param_1;
}