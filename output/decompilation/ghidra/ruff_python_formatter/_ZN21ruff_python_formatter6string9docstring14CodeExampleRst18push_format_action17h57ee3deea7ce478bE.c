void _ZN21ruff_python_formatter6string9docstring14CodeExampleRst18push_format_action17h57ee3deea7ce478bE
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long local_58;
  long local_50;
  undefined local_48 [24];
  undefined local_30 [32];
  
  local_58 = *(long *)(param_1 + 8);
  local_50 = *(long *)(param_1 + 0x10) * 0x38 + local_58;
  auVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_9rposition17h68a1a993e732f9f5E
                     (&local_58);
  uVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h4c7096001882a936E(auVar2._0_8_,auVar2._8_8_);
                    /* try { // try from 00425905 to 00425914 has its CatchHandler @ 00425966 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_9split_off17h92211539bbd88443E(local_48,param_1,uVar1);
                    /* try { // try from 00425915 to 00425926 has its CatchHandler @ 0042594c */
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
            (param_2,param_1,&PTR_s_crates_ruff_python_formatter_src_0067f408);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hf19b7bd6dd2fcad4E
            (local_30,local_48);
  _ZN140__LT_alloc__collections__vec_deque__VecDeque_LT_T_C_A_GT__u20_as_u20_alloc__collections__vec_deque__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h88538b08b6ae9f24E
            (param_2,local_30);
  return;
}