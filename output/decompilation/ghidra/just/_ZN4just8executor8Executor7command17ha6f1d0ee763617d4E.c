void _ZN4just8executor8Executor7command17ha6f1d0ee763617d4E
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
               undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  
  if (*param_2 == 0) {
    lVar1 = param_2[1];
    _ZN3std7process7Command3new17h121b24b9008368b8E(&local_110,lVar1 + 0x18);
    if (param_8 != 0) {
                    /* try { // try from 00367907 to 00367916 has its CatchHandler @ 003679da */
      _ZN3std7process7Command11current_dir17h92a579a9f249f22bE(&local_110,param_8,param_9);
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      lVar2 = *(long *)(lVar1 + 8);
      lVar1 = *(long *)(lVar1 + 0x10) * 0x30;
      do {
                    /* try { // try from 00367940 to 0036794a has its CatchHandler @ 003679dc */
        _ZN3std7process7Command3arg17hbc8267a490af6d59E(&local_110,lVar2);
        lVar2 = lVar2 + 0x30;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
    }
                    /* try { // try from 00367955 to 00367964 has its CatchHandler @ 003679da */
    _ZN3std7process7Command3arg17h20b967969329bd8eE(&local_110,param_4,param_5);
LAB_003679b5:
    (*(code *)PTR_memcpy_00565e28)(param_1,&local_110,0xe0);
  }
  else {
    lVar1 = (*(code *)
              PTR__ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_22set_execute_permission17h806fa988509c0503E_00566b18
            )(param_4,param_5);
    if (lVar1 == 0) {
      (*(code *)
        PTR__ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_20make_shebang_command17hee0ff321f7029a87E_00566b20
      )(&local_110);
      if (local_110 != -0x8000000000000000) goto LAB_003679b5;
      param_1[4] = local_108;
      param_1[5] = uStack_100;
      *(undefined *)(param_1 + 1) = 0xe;
      param_1[2] = param_6;
      param_1[3] = param_7;
    }
    else {
      *(undefined *)(param_1 + 1) = 0x31;
      param_1[2] = param_6;
      param_1[3] = param_7;
      param_1[4] = lVar1;
    }
    *param_1 = 0x8000000000000000;
  }
  return;
}