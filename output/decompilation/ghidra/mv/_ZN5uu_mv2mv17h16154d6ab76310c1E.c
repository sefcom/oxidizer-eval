undefined  [16] _ZN5uu_mv2mv17h16154d6ab76310c1E(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined auVar1 [16];
  undefined auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  _ZN5uu_mv11parse_paths17h7d4cc822362d53dcE
            (auStack_58,param_1,param_2,*(undefined *)(param_3 + 0x32));
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h19a54565959f0f6fE
            (&local_40,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 0018bdd2 to 0018bde2 has its CatchHandler @ 0018be24 */
  auVar1._0_8_ = _ZN5uu_mv19move_files_into_dir17h52a820120b69cecfE
                           (local_50,local_48,local_38,local_30,param_3);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(local_40,local_38);
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17ha14a05455c2f8b3bE
            (auStack_58);
  auVar1._8_8_ = &
                 PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hc3655abd5fe82822E_002416f0
  ;
  return auVar1;
}