void _ZN16fuel_core_keygen17wait_for_keypress17h49d514a8c45c8f8fE(void)

{
  undefined8 uVar1;
  undefined local_9;
  undefined8 local_8;
  
  local_9 = 0;
  uVar1 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17h121939737b051832E_0024c840)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h03e0c3841ca5c0acE
            (uVar1,&DAT_0011c326,0x16,&PTR_DAT_00244328);
  local_8 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0024c848)();
  uVar1 = (*(code *)
            PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_10read_exact17h74d935bcef497a0bE_0024c850
          )(&local_8,&local_9,1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfd58372bc1a5d77bE(uVar1);
  uVar1 = (*(code *)PTR__ZN9crossterm8terminal16disable_raw_mode17h60eba17260289f88E_0024c858)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h03e0c3841ca5c0acE
            (uVar1,&DAT_0011c352,0x17,&PTR_DAT_00244358);
  return;
}