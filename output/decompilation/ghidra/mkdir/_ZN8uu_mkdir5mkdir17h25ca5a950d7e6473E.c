undefined  [16]
_ZN8uu_mkdir5mkdir17h25ca5a950d7e6473E
          (undefined8 param_1,long param_2,undefined param_3,undefined4 param_4,undefined param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha4208e868ecb88ccE
              (auStack_38,"cannot create directory \'\': No such file or directory: File exists",
               0x35);
    local_20 = 1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h121d1d0fd1fc2533E(auStack_38);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17haa818b4079118720E_00220578
    ;
    auVar2._0_8_ = uVar1;
  }
  else {
    _ZN6uucore8features2fs26dir_strip_dot_for_creation17h0aaf496517cc5178E
              (auStack_38,param_1,param_2);
                    /* try { // try from 001b2dae to 001b2dc0 has its CatchHandler @ 001b2e0e */
    auVar2 = _ZN8uu_mkdir10create_dir17ha7ee258293152955E
                       (local_30,local_28,param_3,param_5,0,param_4);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb7551ff5f0211b82E(auStack_38);
  }
  return auVar2;
}