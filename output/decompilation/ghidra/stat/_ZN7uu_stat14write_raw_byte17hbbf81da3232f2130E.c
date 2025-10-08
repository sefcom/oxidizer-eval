void _ZN7uu_stat14write_raw_byte17hbbf81da3232f2130E(undefined param_1)

{
  undefined8 uVar1;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00222078)();
  local_11 = param_1;
  uVar1 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_002222b0
          )(&local_10,&local_11,1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h004b259d24da9c80E(uVar1);
  return;
}