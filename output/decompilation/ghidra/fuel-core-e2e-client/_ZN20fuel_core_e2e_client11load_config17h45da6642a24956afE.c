undefined8 _ZN20fuel_core_e2e_client11load_config17h45da6642a24956afE(undefined8 param_1)

{
  undefined auStack_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_d0 [192];
  
  _ZN3std2fs4read17h632d7436db32b879E(local_d0);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf5f73790e2b3fa50E(auStack_e8,local_d0);
                    /* try { // try from 009cb42f to 009cb445 has its CatchHandler @ 009cb45c */
  _ZN4toml2de10from_slice17hdc6d3dce770ad96dE(local_d0,local_e0,local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hcf9cd502b013b1aaE(param_1,local_d0);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h9e2c609e18ea0645E(auStack_e8);
  return param_1;
}