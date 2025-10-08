void _ZN9uu_csplit10split_name9SplitName3get17hecaf47b623a4fc62E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h071fea547baf72c1E
            (&local_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 002215bd to 002215e7 has its CatchHandler @ 00221637 */
  uVar1 = _ZN6uucore8features6format19Format_LT_F_C_T_GT_3fmt17h95af2ae3f28a52fdE
                    (param_2 + 0x18,&local_50,param_3);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hea7664b4dd43a581E(uVar1);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00371338)
            (&local_38,local_48,local_40);
                    /* try { // try from 002215f2 to 002215fc has its CatchHandler @ 00221625 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h071fea547baf72c1E
            (param_1,local_30,local_28);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h1bdf49e9c9d1531dE
            (local_38,local_30);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hae916db8ab8e17f0E
            (local_50,local_48);
  return;
}