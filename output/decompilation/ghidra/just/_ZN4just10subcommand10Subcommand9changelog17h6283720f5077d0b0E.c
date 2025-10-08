void _ZN4just10subcommand10Subcommand9changelog17h6283720f5077d0b0E(void)

{
  undefined auStack_48 [8];
  long local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00566a38)();
  local_30 = &PTR_DAT_00531130;
  local_28 = 1;
  local_18 = 0;
  uStack_10 = 0;
  local_20 = auStack_48;
  local_40 = (*(code *)
               PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_00566cf0
             )(&local_38,&local_30);
  if (local_40 != 0) {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17ha63f2216ca348766E
              (&local_40);
  }
  return;
}