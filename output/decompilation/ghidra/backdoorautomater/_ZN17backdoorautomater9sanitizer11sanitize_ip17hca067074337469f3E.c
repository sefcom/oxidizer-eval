void _ZN17backdoorautomater9sanitizer11sanitize_ip17hca067074337469f3E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0015cd22 to 0015cd2f has its CatchHandler @ 0015cd47 */
  uVar1 = (*(code *)
            PTR__ZN4core3net6parser85__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_core__net__ip_addr__Ipv4Addr_GT_8from_str17h8ed009dc83fa8eecE_00368a28
          )(param_2[1],param_2[2]);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9adbf5d20ccffacfE(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}