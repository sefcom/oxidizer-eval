undefined  [16]
_ZN9alacritty5event9Processor3run17had5b49b6a9979afdE(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined auVar3 [16];
  long local_928;
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 local_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  long local_8f0;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined local_8b8 [2208];
  
  (*(code *)PTR_memcpy_009de0b0)(local_8b8,param_2,0x8a0);
  _ZN5winit13platform_impl5linux18EventLoop_LT_T_GT_3run17h2ae877a8c6bee90aE
            (&local_928,local_8b8,param_1);
  lVar1 = *(long *)(param_1 + 0x370);
  ppuVar2 = *(undefined ***)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = 0;
  if (lVar1 == 0) {
    if (local_928 == -0x7ffffffffffffff6) {
      lVar1 = 0;
    }
    else {
      local_8f0 = local_928;
      local_8e8 = local_920;
      uStack_8e4 = uStack_91c;
      uStack_8e0 = uStack_918;
      uStack_8dc = uStack_914;
      local_8d8 = local_910;
      uStack_8d4 = uStack_90c;
      uStack_8d0 = uStack_908;
      uStack_8cc = uStack_904;
      local_8c8 = local_900;
      uStack_8c4 = uStack_8fc;
      uStack_8c0 = uStack_8f8;
      uStack_8bc = uStack_8f4;
                    /* try { // try from 00550a43 to 00550a4c has its CatchHandler @ 00550a6a */
      lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h89897c1e19fc2d41E(&local_8f0);
      ppuVar2 = &
                PTR__ZN4core3ptr49drop_in_place_LT_winit__error__EventLoopError_GT_17he4b43f37d079ca76E_009828e0
      ;
    }
  }
  else {
    _ZN4core3ptr85drop_in_place_LT_core__result__Result_LT_usize_C_winit__error__EventLoopError_GT__GT_17h46f3d5d91273f93aE
              (&local_928);
  }
  auVar3._8_8_ = ppuVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}