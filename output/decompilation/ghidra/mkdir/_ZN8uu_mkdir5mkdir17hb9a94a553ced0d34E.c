undefined  [16]
_ZN8uu_mkdir5mkdir17hb9a94a553ced0d34E(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h09085b3eedcee021E
              (&local_38,"cannot create directory \'\': No such file or directory",0x35);
    local_20 = 1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5788815961083ce5E(&local_38);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h3711df87dd7b9a12E_001ede60
    ;
    auVar2._0_8_ = uVar1;
  }
  else {
    (*(code *)PTR__ZN6uucore8features2fs26dir_strip_dot_for_creation17h60bc83913df5140fE_001f4a88)
              (&local_38,param_1,param_2);
                    /* try { // try from 001603ea to 001603f6 has its CatchHandler @ 00160449 */
    auVar2 = _ZN8uu_mkdir10create_dir17hfbbf39588947948cE(local_30,local_28,0,param_3);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h186e614367733317E(local_38,local_30);
  }
  return auVar2;
}