void _ZN15linera_exporter6common14CanonicalBlock3new17hec7ccea7e6036242E
               (undefined (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_30 [24];
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h683b726c538407e9E
            (local_30,param_3,param_4);
  auVar4 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17h19daaefdc4154e9cE
                     (local_30,&PTR_s_linera_service_src_exporter_comm_014f1348);
  *param_1 = auVar4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)param_1[1] = *param_2;
  *(undefined8 *)(param_1[1] + 8) = uVar1;
  *(undefined8 *)param_1[2] = uVar2;
  *(undefined8 *)(param_1[2] + 8) = uVar3;
  return;
}