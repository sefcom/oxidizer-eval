undefined8
_ZN20fuel_core_e2e_client12test_context11TestContext10new_client17h463e8bf17e8bef5bE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
                    /* try { // try from 009c579a to 009c57a7 has its CatchHandler @ 009c57ec */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_012b6120
  )(&local_98,param_3);
  uStack_b0 = local_90;
  uStack_ac = uStack_8c;
  local_a8 = uStack_88;
  uStack_a4 = uStack_84;
  local_b8 = local_98;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0da9354201f0f2ecE(param_2);
  _ZN16fuel_core_client6client10FuelClient3new17h58397bca8214b4d2E(&local_98,&local_b8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h75702a0f00628920E(param_1,&local_98);
  return param_1;
}