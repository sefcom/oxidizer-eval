undefined8 *
_ZN11forc_crypto4keys6vanity10HexMatcher3new17hd4658ac7716e1740E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00786f90;
  (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00786f90)
            (&local_50);
                    /* try { // try from 004fb143 to 004fb150 has its CatchHandler @ 004fb1ae */
  (*(code *)puVar1)(&local_38,param_4,param_5);
  param_1[4] = uStack_30;
  param_1[5] = local_28;
  param_1[2] = local_40;
  param_1[3] = local_38;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return param_1;
}